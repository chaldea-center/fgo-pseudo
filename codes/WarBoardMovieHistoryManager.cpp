void __fastcall WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
  struct WarBoardMovieHistoryManager_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E75C0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6708/*"Fgo_20220601"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15613/*"WarBoardStartMovie"*/, v17, v18, v19);
    byte_42E75C0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_6708/*"Fgo_20220601"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6708/*"Fgo_20220601"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_15613/*"WarBoardStartMovie"*/;
  v22->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15613/*"WarBoardStartMovie"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->SAVE_KEY_START_MOVIE, v23, v24, v25, v26, v27, v28, v29);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v31 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v31->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v30;
  sub_B5D560((BattleServantConfConponent_o *)&v31->infoList, (System_Int32_array **)v30, v32, v33, v34, v35, v36, v37);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WarBoardMovieHistoryManager_c *v22; // x0

  if ( (byte_42E75BD & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, phase, (_DWORD)saveKey, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v10, v11, v12);
    byte_42E75BD = 1;
  }
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v13 = sub_B5D694(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v13, 0LL);
    if ( !v13 )
      goto LABEL_14;
    *(_QWORD *)(v13 + 24) = saveKey;
    *(_DWORD *)(v13 + 16) = questId;
    *(_DWORD *)(v13 + 20) = phase;
    sub_B5D560((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)saveKey, v16, v17, v18, v19, v20, v21);
    v22 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v22 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_B5D69C(infoList, v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      infoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void __fastcall WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
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
  WarBoardMovieHistoryManager_c *v10; // x0
  __int64 v11; // x1
  WarBoardMovieHistoryManager_c *v12; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMovieHistoryManager_c *v14; // x0

  if ( (byte_42E75BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__, v4, v5, v6);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v7, v8, v9);
    byte_42E75BB = 1;
  }
  v10 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v10 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->infoList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v12 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v12 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12->static_fields->infoList;
    if ( !infoList )
      sub_B5D69C(0LL, v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
  }
  v14 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v14 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v14->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WarBoardMovieHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42E75B9 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v1, v2, v3);
    byte_42E75B9 = 1;
  }
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


bool __fastcall WarBoardMovieHistoryManager__ExistsHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
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
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarBoardMovieHistoryManager_c *v31; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x20

  if ( (byte_42E75BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__,
      phase,
      (_DWORD)saveKey,
      method);
    sub_B5D5C4(&Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__, v13, v14, v15);
    sub_B5D5C4(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v19, v20, v21);
    byte_42E75BC = 1;
  }
  v22 = sub_B5D694(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor(
    (WarBoardMovieHistoryManager___c__DisplayClass9_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_9;
  *(_QWORD *)(v22 + 24) = saveKey;
  *(_DWORD *)(v22 + 16) = questId;
  *(_DWORD *)(v22 + 20) = phase;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)saveKey, v25, v26, v27, v28, v29, v30);
  v31 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v31 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v31->static_fields->infoList;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)v22,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B5D69C(v23, v24);
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v33,
           (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
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

  if ( (byte_42E75B8 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E75B8 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WarBoardMovieHistoryManager_c *v4; // x0

  if ( (byte_42E75BA & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v1, v2, v3);
    byte_42E75BA = 1;
  }
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
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
  WarBoardMovieHistoryManager_c *v22; // x0
  System_String_o *FilePath; // x19
  WarBoardMovieHistoryManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  WarBoardMovieHistoryManager_c *v30; // x0
  __int64 v31; // x3
  int v32; // w20
  int i; // w26
  int v34; // w22
  int v35; // w23
  System_Int32_array **v36; // x24
  __int64 v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  WarBoardMovieHistoryManager_c *v47; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 v52; // x0
  int v53; // [xsp+8h] [xbp-68h]

  if ( (byte_42E75BE & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v10, v11, v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v16, v17, v18);
    byte_42E75BE = 1;
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
  v22 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v24 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v24);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  v30 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v30 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
  {
    v53 = 189;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
            v26,
            v26->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v32 >= 1 )
    {
      for ( i = 0; i < v32; ++i )
      {
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v36 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                                       v26,
                                       v26->klass->vtable._23_ReadChars.methodPtr);
        v37 = sub_B5D694(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v37, 0LL);
        if ( !v37 )
          sub_B5D69C(v38, v39);
        *(_QWORD *)(v37 + 24) = v36;
        *(_DWORD *)(v37 + 16) = v34;
        *(_DWORD *)(v37 + 20) = v35;
        sub_B5D560((BattleServantConfConponent_o *)(v37 + 24), v36, v40, v41, v42, v43, v44, v45);
        v47 = WarBoardMovieHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v47 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47->static_fields->infoList;
        if ( !infoList )
          sub_B5D69C(0LL, v46);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
      }
    }
    v53 = 178;
  }
  klass = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      p_offset += 4;
      if ( v50 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v52 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v52 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v52)(v26, *(_QWORD *)(v52 + 8));
  return v53 == 178;
}


bool __fastcall WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
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
  WarBoardMovieHistoryManager_c *v19; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v21; // x0
  const MethodInfo *v22; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v24; // x20
  System_IO_BinaryWriter_o *v25; // x19
  __int64 v26; // x1
  WarBoardMovieHistoryManager_c *v27; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x22
  WarBoardMovieHistoryManager_c *v34; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *v35; // x23
  WarBoardMovieHistoryManager_HistoryInfo_o *v36; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0

  if ( (byte_42E75BF & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v16, v17, v18);
    byte_42E75BF = 1;
  }
  v19 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v19 = WarBoardMovieHistoryManager_TypeInfo;
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
      v22 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v22 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
      }
      LOBYTE(v22[2].klass->_1.name) = 0;
      FilePath = WarBoardMovieHistoryManager__GetFilePath(v22);
      v24 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v25 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40360312(v25, v24, 0LL);
      v27 = WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v27 = WarBoardMovieHistoryManager_TypeInfo;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
        v25,
        (unsigned int)size,
        v25->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v33 = 0LL;
        do
        {
          v34 = WarBoardMovieHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
            v34 = WarBoardMovieHistoryManager_TypeInfo;
          }
          v35 = v34->static_fields->infoList;
          if ( !v35 )
            sub_B5D69C(v34, v31);
          if ( v35->fields._size <= (unsigned int)v33 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v36 = v35->fields._items->m_Items[v33];
          if ( !v36 )
            sub_B5D69C(v34, v31);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            (unsigned int)v36->fields.questId,
            v25->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            (unsigned int)v36->fields.phase,
            v25->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v25->klass->vtable._22_Write.method)(
            v25,
            v36->fields.saveKey,
            v25->klass[1]._1.image);
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
    sub_B5D69C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}