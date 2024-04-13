void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
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
  MaterialGroupClearHistoryManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EC37D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
      v8,
      v9,
      v10);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6706/*"Fgo_20220404"*/, v14, v15, v16);
    byte_42EC37D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6706/*"Fgo_20220404"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6706/*"Fgo_20220404"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = MaterialGroupClearHistoryManager_TypeInfo;
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  v21 = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v21->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v21->infoList, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall MaterialGroupClearHistoryManager___ctor(
        MaterialGroupClearHistoryManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
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
  MaterialGroupClearHistoryManager_c *v10; // x0
  __int64 v11; // x1
  MaterialGroupClearHistoryManager_c *v12; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialGroupClearHistoryManager_c *v14; // x0

  if ( (byte_42EC377 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v7, v8, v9);
    byte_42EC377 = 1;
  }
  v10 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v10 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->infoList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v12 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v12 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12->static_fields->infoList;
    if ( !infoList )
      sub_B5D69C(0LL, v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
  }
  v14 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v14 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  v14->static_fields->isContinueDevice = 0;
  v14->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MaterialGroupClearHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42EC375 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v1, v2, v3);
    byte_42EC375 = 1;
  }
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
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

  if ( (byte_42EC374 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EC374 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
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
  __int64 v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MaterialGroupClearHistoryManager_c *v32; // x0
  UserQuestEntity_o *result; // x0
  UserQuestEntity_o *v34; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x21

  if ( (byte_42EC379 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v5, v6, v7);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Predicate_UserQuestEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Predicate_UserQuestEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v20, v21, v22);
    byte_42EC379 = 1;
  }
  v23 = sub_B5D694(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
    (MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *)v23,
    0LL);
  if ( !v23 )
    sub_B5D69C(v24, v25);
  *(_QWORD *)(v23 + 16) = groupEntities;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)groupEntities,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  result = (UserQuestEntity_o *)MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v32);
  if ( result )
  {
    v34 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    {
      v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserQuestEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v35,
        (Il2CppObject *)v23,
        Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_UserQuestEntity___ctor__);
      return (UserQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v34,
                                    (System_Predicate_T__o *)v35,
                                    (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
        const MethodInfo *method)
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  __int64 v33; // x1
  MaterialGroupClearHistoryManager_c *v34; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *infoList; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UserQuestEntity_o *QuestClearDummyData; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC378 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v1, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v28, v29, v30);
    byte_42EC378 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v34 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v34 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34->static_fields->infoList;
  if ( !infoList )
    sub_B5D69C(0LL, v33);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    infoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v36 )
      break;
    if ( !v40.fields.current )
      sub_B5D69C(v36, v37);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(v36, v37);
    QuestClearDummyData = UserQuestMaster__CreateQuestClearDummyData(
                            Master_WarQuestSelectionMaster,
                            (int32_t)v40.fields.current[1].klass,
                            HIDWORD(v40.fields.current[1].klass),
                            (int64_t)v40.fields.current[1].monitor,
                            0LL);
    if ( !v32 )
      sub_B5D69C(QuestClearDummyData, QuestClearDummyData);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)QuestClearDummyData,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v32;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MaterialGroupClearHistoryManager_c *v4; // x0

  if ( (byte_42EC376 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v1, v2, v3);
    byte_42EC376 = 1;
  }
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
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
  MaterialGroupClearHistoryManager_c *v22; // x0
  System_String_o *FilePath; // x19
  MaterialGroupClearHistoryManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  MaterialGroupClearHistoryManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w20
  MaterialGroupClearHistoryManager_c *v33; // x0
  int v34; // w20
  int i; // w26
  int32_t v36; // w22
  int32_t v37; // w23
  __int64 v38; // x24
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  MaterialGroupClearHistoryManager_c *v42; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  int v48; // [xsp+8h] [xbp-68h]

  if ( (byte_42EC37B & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v16, v17, v18);
    byte_42EC37B = 1;
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
  v22 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v24 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v24);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  v30 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v30 = MaterialGroupClearHistoryManager_TypeInfo;
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
    v33 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v33 = MaterialGroupClearHistoryManager_TypeInfo;
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
        v39 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B5D694(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v39, 0LL);
        if ( !v39 )
          sub_B5D69C(v40, v41);
        v39->fields.questId = v36;
        v39->fields.phase = v37;
        v39->fields.updatedAt = v38;
        v42 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v42 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42->static_fields->infoList;
        if ( !infoList )
          sub_B5D69C(0LL, v41);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
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


void __fastcall MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
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
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v57; // x21
  __int64 v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **current; // x1
  MaterialGroupClearHistoryManager_c *v68; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v70; // x23
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x1
  peRenderTexture_ChangeLayerObject_o *v74; // x21
  MaterialGroupClearHistoryManager_c *v75; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v76; // x0
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v77; // x21
  MaterialGroupClearHistoryManager_c *v78; // x0
  int32_t v79; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC37A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, phase, updatedAt, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__, v42, v43, v44);
    sub_B5D5C4(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v45, v46, v47);
    sub_B5D5C4(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v51, v52, v53);
    byte_42EC37A = 1;
  }
  memset(&v81, 0, sizeof(v81));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_WarQuestSelectionMaster, questId, 0LL);
  if ( IncludedGroups )
  {
    v57 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v79 = questId;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v80,
        v57,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v81 = v80;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v81,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v58 = sub_B5D694(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
          (MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *)v58,
          0LL);
        if ( !v58 )
          sub_B5D69C(v59, v60);
        current = (System_Int32_array **)v81.fields.current;
        *(_QWORD *)(v58 + 16) = v81.fields.current;
        sub_B5D560((BattleServantConfConponent_o *)(v58 + 16), current, v61, v62, v63, v64, v65, v66);
        v68 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v68 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v68->static_fields->infoList;
        v70 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v70,
          (Il2CppObject *)v58,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
        if ( !infoList )
          sub_B5D69C(v71, v72);
        v74 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                infoList,
                (System_Predicate_T__o *)v70,
                (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v74 )
        {
          v75 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v75 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v76 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v75->static_fields->infoList;
          if ( !v76 )
            sub_B5D69C(0LL, v73);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            v76,
            (WarBoardManager_TaskList_o *)v74,
            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v81,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      questId = v79;
    }
  }
  v77 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B5D694(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v77, 0LL);
  if ( !v77 )
    goto LABEL_35;
  v77->fields.questId = questId;
  v77->fields.phase = phase;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v77->fields.updatedAt = NetworkManager__getTime(0LL);
  v78 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v78 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)v78->static_fields->infoList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_35:
    sub_B5D69C(Master_WarQuestSelectionMaster, v55);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  MaterialGroupClearHistoryManager_c *v22; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v24; // x0
  MyRoomStateMaterial_c *v25; // x0
  System_String_o *String; // x0
  const MethodInfo *v27; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v29; // x20
  System_IO_BinaryWriter_o *v30; // x19
  __int64 v31; // x1
  MaterialGroupClearHistoryManager_c *v32; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v36; // x1
  __int64 v37; // x3
  __int64 v38; // x22
  MaterialGroupClearHistoryManager_c *v39; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *v40; // x23
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v41; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 v45; // x0

  if ( (byte_42EC37C & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&MyRoomStateMaterial_TypeInfo, v19, v20, v21);
    byte_42EC37C = 1;
  }
  v22 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v22 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  isModfiy = v22->static_fields->isModfiy;
  if ( isModfiy )
  {
    v24 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    if ( v24->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v25 = MyRoomStateMaterial_TypeInfo;
      if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
        v25 = MyRoomStateMaterial_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v25->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0LL, 0LL);
      if ( !System_String__IsNullOrEmpty(String, 0LL) )
      {
        if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
        }
        MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
      }
      v27 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v27 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
      }
      LOBYTE(v27[2].klass->_1.gc_desc) = 0;
      FilePath = MaterialGroupClearHistoryManager__GetFilePath(v27);
      v29 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v30 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40360312(v30, v29, 0LL);
      v32 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v32 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      static_fields = v32->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B5D69C(v32, v31);
      if ( !v30 )
        sub_B5D69C(v32, v31);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v30->klass->vtable._22_Write.method)(
        v30,
        static_fields->SAVE_DATA_VERSION,
        v30->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v30->klass->vtable._8_Write.method)(
        v30,
        MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v30->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._17_Write.method)(
        v30,
        (unsigned int)size,
        v30->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v38 = 0LL;
        do
        {
          v39 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v39 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v40 = v39->static_fields->infoList;
          if ( !v40 )
            sub_B5D69C(v39, v36);
          if ( v40->fields._size <= (unsigned int)v38 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v41 = v40->fields._items->m_Items[v38];
          if ( !v41 )
            sub_B5D69C(v39, v36);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._17_Write.method)(
            v30,
            (unsigned int)v41->fields.questId,
            v30->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._17_Write.method)(
            v30,
            (unsigned int)v41->fields.phase,
            v30->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v30->klass->vtable._19_Write.method)(
            v30,
            v41->fields.updatedAt,
            v30->klass->vtable._20_Write.methodPtr);
          ++v38;
        }
        while ( (int)v38 < size );
      }
      klass = v30->klass;
      if ( *(_WORD *)&v30->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v43;
          p_offset += 4;
          if ( v43 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
            goto LABEL_42;
        }
        v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v45 = sub_AF54C0(v30, System_IDisposable_TypeInfo, 0LL, v37);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v45)(v30, *(_QWORD *)(v45 + 8));
      return 1;
    }
  }
  return isModfiy;
}


void __fastcall MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(
        MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_0___GetMaterialFinishReadIncludedGroupQuest_b__0(
        MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
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
  Il2CppObject *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E5F49 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__,
      (_DWORD)x,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v15, v16, v17);
    byte_42E5F49 = 1;
  }
  v18 = (Il2CppObject *)sub_B5D694(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor(v18, 0LL);
  if ( !v18
    || (v18[1].klass = (Il2CppClass *)x,
        sub_B5D560(&v18[1]),
        groupEntities = this->fields.groupEntities,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          v18,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__),
        !groupEntities) )
  {
    sub_B5D69C(v19, v20);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)groupEntities,
           (System_Predicate_T__o *)v22,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
}


void __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_1___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_1___GetMaterialFinishReadIncludedGroupQuest_b__1(
        MaterialGroupClearHistoryManager___c__DisplayClass10_1_o *this,
        QuestScriptMaterialNextEntity_o *y,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *x; // x8

  x = this->fields.x;
  if ( !x || !y )
    sub_B5D69C(this, y);
  return x->fields.questId == y->fields.questId;
}


void __fastcall MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialGroupClearHistoryManager___c__DisplayClass11_0___SetMaterialFinishReadQuest_b__0(
        MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *this,
        MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *x,
        const MethodInfo *method)
{
  struct QuestScriptMaterialNextEntity_o *groupEntity; // x8

  if ( !x || (groupEntity = this->fields.groupEntity) == 0LL )
    sub_B5D69C(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}