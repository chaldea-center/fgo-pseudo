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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418653A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6629/*"Fgo_20220601"*/, v10);
    sub_B2C35C(&StringLiteral_15423/*"WarBoardStartMovie"*/, v11);
    byte_418653A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_6629/*"Fgo_20220601"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6629/*"Fgo_20220601"*/;
  sub_B2C2F8(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_15423/*"WarBoardStartMovie"*/;
  v14->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15423/*"WarBoardStartMovie"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->SAVE_KEY_START_MOVIE, v15, v16, v17, v18, v19, v20, v21);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v23 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v23->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->infoList, (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
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
  __int64 v9; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WarBoardMovieHistoryManager_c *v18; // x0

  if ( (byte_4186537 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&phase);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v8);
    byte_4186537 = 1;
  }
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v9 = sub_B2C42C(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v9, 0LL);
    if ( !v9 )
      goto LABEL_14;
    *(_QWORD *)(v9 + 24) = saveKey;
    *(_DWORD *)(v9 + 16) = questId;
    *(_DWORD *)(v9 + 20) = phase;
    sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)saveKey, v12, v13, v14, v15, v16, v17);
    v18 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v18 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_B2C434(infoList, v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      infoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void __fastcall WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WarBoardMovieHistoryManager_c *v4; // x0
  __int64 v5; // x1
  WarBoardMovieHistoryManager_c *v6; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMovieHistoryManager_c *v8; // x0

  if ( (byte_4186535 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__, v2);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_4186535 = 1;
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
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v6 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v6 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6->static_fields->infoList;
    if ( !infoList )
      sub_B2C434(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
  }
  v8 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v8 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v8->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4186533 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_4186533 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WarBoardMovieHistoryManager_c *v21; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x20

  if ( (byte_4186536 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&phase);
    sub_B2C35C(&Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v7);
    sub_B2C35C(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__, v9);
    sub_B2C35C(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, v10);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v11);
    byte_4186536 = 1;
  }
  v12 = sub_B2C42C(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor(
    (WarBoardMovieHistoryManager___c__DisplayClass9_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 24) = saveKey;
  *(_DWORD *)(v12 + 16) = questId;
  *(_DWORD *)(v12 + 20) = phase;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)saveKey, v15, v16, v17, v18, v19, v20);
  v21 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v21 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v21->static_fields->infoList;
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B2C434(v13, v14);
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v23,
           (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4186532 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4186532 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0

  if ( (byte_4186534 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_4186534 = 1;
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
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  WarBoardMovieHistoryManager_c *v18; // x0
  __int64 v19; // x3
  int v20; // w20
  int i; // w26
  int v22; // w22
  int v23; // w23
  System_Int32_array **v24; // x24
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  WarBoardMovieHistoryManager_c *v35; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0
  int v41; // [xsp+8h] [xbp-68h]

  if ( (byte_4186538 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_4186538 = 1;
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
  v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v18 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v41 = 189;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v20 >= 1 )
    {
      for ( i = 0; i < v20; ++i )
      {
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                                       v14,
                                       v14->klass->vtable._23_ReadChars.methodPtr);
        v25 = sub_B2C42C(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v25, 0LL);
        if ( !v25 )
          sub_B2C434(v26, v27);
        *(_QWORD *)(v25 + 24) = v24;
        *(_DWORD *)(v25 + 16) = v22;
        *(_DWORD *)(v25 + 20) = v23;
        sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 24), v24, v28, v29, v30, v31, v32, v33);
        v35 = WarBoardMovieHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v35 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35->static_fields->infoList;
        if ( !infoList )
          sub_B2C434(0LL, v34);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
      }
    }
    v41 = 178;
  }
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v40 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v14, *(_QWORD *)(v40 + 8));
  return v41 == 178;
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
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  WarBoardMovieHistoryManager_c *v15; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x22
  WarBoardMovieHistoryManager_c *v22; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *v23; // x23
  WarBoardMovieHistoryManager_HistoryInfo_o *v24; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0

  if ( (byte_4186539 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_4186539 = 1;
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
      v13 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39287252(v13, v12, 0LL);
      v15 = WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v15 = WarBoardMovieHistoryManager_TypeInfo;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        (unsigned int)size,
        v13->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v21 = 0LL;
        do
        {
          v22 = WarBoardMovieHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
            v22 = WarBoardMovieHistoryManager_TypeInfo;
          }
          v23 = v22->static_fields->infoList;
          if ( !v23 )
            sub_B2C434(v22, v19);
          if ( v23->fields._size <= (unsigned int)v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = v23->fields._items->m_Items[v21];
          if ( !v24 )
            sub_B2C434(v22, v19);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            (unsigned int)v24->fields.questId,
            v13->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            (unsigned int)v24->fields.phase,
            v13->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
            v13,
            v24->fields.saveKey,
            v13->klass[1]._1.image);
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
    sub_B2C434(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}