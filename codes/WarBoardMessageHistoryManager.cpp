void __fastcall WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
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
  WarBoardMessageHistoryManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct WarBoardMessageHistoryManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E75AE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6707/*"Fgo_20220427"*/, v14, v15, v16);
    byte_42E75AE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6707/*"Fgo_20220427"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6707/*"Fgo_20220427"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = WarBoardMessageHistoryManager_TypeInfo;
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  v21 = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v21->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v21->infoList, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
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
  WarBoardMessageHistoryManager_c *v10; // x0
  __int64 v11; // x1
  WarBoardMessageHistoryManager_c *v12; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMessageHistoryManager_c *v14; // x0

  if ( (byte_42E75A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__, v4, v5, v6);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v7, v8, v9);
    byte_42E75A9 = 1;
  }
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->infoList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v12 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v12 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12->static_fields->infoList;
    if ( !infoList )
      sub_B5D69C(0LL, v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
  }
  v14 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v14 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v14->static_fields->isContinueDevice = 0;
  v14->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WarBoardMessageHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42E75A7 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v1, v2, v3);
    byte_42E75A7 = 1;
  }
  v4 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall WarBoardMessageHistoryManager__GetFilePath(const MethodInfo *method)
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

  if ( (byte_42E75A6 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E75A6 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WarBoardMessageHistoryManager_c *v4; // x0

  if ( (byte_42E75A8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v1, v2, v3);
    byte_42E75A8 = 1;
  }
  v4 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall WarBoardMessageHistoryManager__IsHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  WarBoardMessageHistoryManager___c__DisplayClass9_0_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  WarBoardMessageHistoryManager_c *v25; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x20

  if ( (byte_42E75AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__,
      sceneType,
      idx,
      method);
    sub_B5D5C4(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__, v13, v14, v15);
    sub_B5D5C4(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v19, v20, v21);
    byte_42E75AA = 1;
  }
  v22 = (WarBoardMessageHistoryManager___c__DisplayClass9_0_o *)sub_B5D694(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_9;
  v22->fields.stageId = stageId;
  v22->fields.sceneType = sceneType;
  v22->fields.idx = idx;
  v25 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v25 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v25->static_fields->infoList;
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v22,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B5D69C(v23, v24);
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v27,
           (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
}


bool __fastcall WarBoardMessageHistoryManager__ReadData(const MethodInfo *method)
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
  ManagerConfig_c *v19; // x0
  WarBoardMessageHistoryManager_c *v22; // x0
  System_String_o *FilePath; // x19
  WarBoardMessageHistoryManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  WarBoardMessageHistoryManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w20
  WarBoardMessageHistoryManager_c *v33; // x0
  int v34; // w20
  int i; // w26
  int32_t v36; // w22
  int32_t v37; // w23
  int32_t v38; // w24
  WarBoardMessageHistoryManager_HistoryInfo_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  WarBoardMessageHistoryManager_c *v42; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  int v48; // [xsp+8h] [xbp-68h]

  if ( (byte_42E75AC & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v10, v11, v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v16, v17, v18);
    byte_42E75AC = 1;
  }
  v19 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( v19->static_fields->UseMock )
    return 1;
  v22 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v24 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__ClearSaveData((const MethodInfo *)v24);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  v30 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v30 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
  {
    v48 = 200;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
            v26,
            v26->klass->vtable._10_ReadByte.methodPtr);
    v33 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v33 = WarBoardMessageHistoryManager_TypeInfo;
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
        v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v39 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B5D694(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMessageHistoryManager_HistoryInfo___ctor(v39, 0LL);
        if ( !v39 )
          sub_B5D69C(v40, v41);
        v39->fields.stageId = v36;
        v39->fields.sceneType = v37;
        v39->fields.idx = v38;
        v42 = WarBoardMessageHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v42 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42->static_fields->infoList;
        if ( !infoList )
          sub_B5D69C(0LL, v41);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
      }
    }
    v48 = 189;
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
        goto LABEL_38;
    }
    v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v47 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v47)(v26, *(_QWORD *)(v47 + 8));
  return v48 == 189;
}


void __fastcall WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  WarBoardMessageHistoryManager___c__DisplayClass10_0_o *v28; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x0
  __int64 v30; // x1
  WarBoardMessageHistoryManager_c *v31; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x21
  WarBoardMessageHistoryManager_HistoryInfo_o *v34; // x20
  WarBoardMessageHistoryManager_c *v35; // x0

  if ( (byte_42E75AB & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, sceneType, idx, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__, v19, v20, v21);
    sub_B5D5C4(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v25, v26, v27);
    byte_42E75AB = 1;
  }
  v28 = (WarBoardMessageHistoryManager___c__DisplayClass10_0_o *)sub_B5D694(WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
  WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_16;
  v28->fields.stageId = stageId;
  v28->fields.sceneType = sceneType;
  v28->fields.idx = idx;
  v31 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v31 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v31->static_fields->infoList;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)v28,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         infoList,
         (System_Predicate_T__o *)v33,
         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v34 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B5D694(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
  WarBoardMessageHistoryManager_HistoryInfo___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_16;
  v34->fields.stageId = v28->fields.stageId;
  v34->fields.sceneType = v28->fields.sceneType;
  v34->fields.idx = v28->fields.idx;
  v35 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v35 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35->static_fields->infoList;
  if ( !v29 )
LABEL_16:
    sub_B5D69C(v29, v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall WarBoardMessageHistoryManager__WriteData(const MethodInfo *method)
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
  WarBoardMessageHistoryManager_c *v19; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v21; // x0
  const MethodInfo *v22; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v24; // x20
  System_IO_BinaryWriter_o *v25; // x19
  __int64 v26; // x1
  WarBoardMessageHistoryManager_c *v27; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x22
  WarBoardMessageHistoryManager_c *v34; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *v35; // x23
  unsigned int *v36; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0

  if ( (byte_42E75AD & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v16, v17, v18);
    byte_42E75AD = 1;
  }
  v19 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v19 = WarBoardMessageHistoryManager_TypeInfo;
  }
  isModfiy = v19->static_fields->isModfiy;
  if ( isModfiy )
  {
    v21 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v21 = ManagerConfig_TypeInfo;
    }
    if ( v21->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v22 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v22 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
      }
      LOBYTE(v22[2].klass->_1.gc_desc) = 0;
      FilePath = WarBoardMessageHistoryManager__GetFilePath(v22);
      v24 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v25 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40360312(v25, v24, 0LL);
      v27 = WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v27 = WarBoardMessageHistoryManager_TypeInfo;
      }
      static_fields = v27->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B5D69C(v27, v26);
      if ( !v25 )
        sub_B5D69C(v27, v26);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v25->klass->vtable._22_Write.method)(
        v25,
        static_fields->SAVE_DATA_VERSION,
        v25->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v25->klass->vtable._8_Write.method)(
        v25,
        WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v25->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
        v25,
        (unsigned int)size,
        v25->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v33 = 0LL;
        do
        {
          v34 = WarBoardMessageHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
            v34 = WarBoardMessageHistoryManager_TypeInfo;
          }
          v35 = v34->static_fields->infoList;
          if ( !v35 )
            sub_B5D69C(v34, v31);
          if ( v35->fields._size <= (unsigned int)v33 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v36 = (unsigned int *)v35->fields._items->m_Items[v33];
          if ( !v36 )
            sub_B5D69C(v34, v31);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            v36[4],
            v25->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            v36[5],
            v25->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            v36[6],
            v25->klass->vtable._18_Write.methodPtr);
          ++v33;
        }
        while ( (int)v33 < size );
      }
      klass = v25->klass;
      if ( *(_WORD *)&v25->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v38;
          p_offset += 4;
          if ( v38 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v40 = sub_AF54C0(v25, System_IDisposable_TypeInfo, 0LL, v32);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v40)(v25, *(_QWORD *)(v40 + 8));
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}