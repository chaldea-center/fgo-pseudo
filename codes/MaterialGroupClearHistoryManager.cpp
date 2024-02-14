void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
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
  MaterialGroupClearHistoryManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4214DFC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1);
    sub_B0D8A4(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v8);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6644/*"Fgo_20220404"*/, v10);
    byte_4214DFC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6644/*"Fgo_20220404"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6644/*"Fgo_20220404"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  v17 = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v17->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&v17->infoList, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
}


void __fastcall MaterialGroupClearHistoryManager___ctor(
        MaterialGroupClearHistoryManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialGroupClearHistoryManager_c *v4; // x0
  MaterialGroupClearHistoryManager_c *v5; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialGroupClearHistoryManager_c *v7; // x0

  if ( (byte_4214DF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v2);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v3);
    byte_4214DF6 = 1;
  }
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v5 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v5 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5->static_fields->infoList;
    if ( !infoList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
  }
  v7 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v7 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  v7->static_fields->isContinueDevice = 0;
  v7->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4214DF4 & 1) == 0 )
  {
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_4214DF4 = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214DF3 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4214DF3 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  MaterialGroupClearHistoryManager_c *v18; // x0
  UserQuestEntity_o *result; // x0
  UserQuestEntity_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x21

  if ( (byte_4214DF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v4);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Predicate_UserQuestEntity___ctor__, v6);
    sub_B0D8A4(&System_Predicate_UserQuestEntity__TypeInfo, v7);
    sub_B0D8A4(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v8);
    sub_B0D8A4(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v9);
    byte_4214DF8 = 1;
  }
  v10 = sub_B0D974(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, method, v2);
  MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
    (MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *)v10,
    0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = groupEntities;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)groupEntities,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  result = (UserQuestEntity_o *)MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v18);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    {
      v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_UserQuestEntity__TypeInfo,
                                                                       v21,
                                                                       v22);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v23,
        (Il2CppObject *)v10,
        Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserQuestEntity___ctor__);
      return (UserQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v20,
                                    (System_Predicate_T__o *)v23,
                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  MaterialGroupClearHistoryManager_c *v15; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *infoList; // x0
  _BOOL8 v17; // x0
  UserQuestEntity_o *QuestClearDummyData; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214DF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v1);
    sub_B0D8A4(&DataManager_TypeInfo, v2);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v9);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v10);
    byte_4214DF7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v15 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v15 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15->static_fields->infoList;
  if ( !infoList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    infoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields.current )
      sub_B0D97C(v17);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(v17);
    QuestClearDummyData = UserQuestMaster__CreateQuestClearDummyData(
                            Master_WarQuestSelectionMaster,
                            (int32_t)v20.fields.current[1].klass,
                            HIDWORD(v20.fields.current[1].klass),
                            (int64_t)v20.fields.current[1].monitor,
                            0LL);
    if ( !v14 )
      sub_B0D97C(QuestClearDummyData);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)QuestClearDummyData,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v14;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0

  if ( (byte_4214DF5 & 1) == 0 )
  {
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_4214DF5 = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  MaterialGroupClearHistoryManager_c *v10; // x0
  System_String_o *FilePath; // x19
  MaterialGroupClearHistoryManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  System_String_o *v18; // x20
  MaterialGroupClearHistoryManager_c *v19; // x0
  char v20; // w20
  MaterialGroupClearHistoryManager_c *v21; // x0
  int v22; // w20
  int i; // w26
  int32_t v24; // w22
  int32_t v25; // w23
  __int64 v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v29; // x21
  __int64 v30; // x0
  MaterialGroupClearHistoryManager_c *v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  int v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4214DFA & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v3);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v6);
    byte_4214DFA = 1;
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
  v10 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v12 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v12);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v16 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v14, v15);
  System_IO_BinaryReader___ctor(v16, v13, 0LL);
  if ( !v16 )
    sub_B0D97C(v17);
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                             v16,
                             v16->klass->vtable._23_ReadChars.methodPtr);
  v19 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v19 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
  {
    v37 = 200;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
            v16,
            v16->klass->vtable._10_ReadByte.methodPtr);
    v21 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v21 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
            v16,
            v16->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v22 >= 1 )
    {
      for ( i = 0; i < v22; ++i )
      {
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._17_ReadInt64.method)(
                v16,
                v16->klass->vtable._18_ReadUInt64.methodPtr);
        v29 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B0D974(
                                                                          MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo,
                                                                          v27,
                                                                          v28);
        MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v29, 0LL);
        if ( !v29 )
          sub_B0D97C(v30);
        v29->fields.questId = v24;
        v29->fields.phase = v25;
        v29->fields.updatedAt = v26;
        v31 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v31 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->static_fields->infoList;
        if ( !infoList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
      }
    }
    v37 = 189;
  }
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v36 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v16, *(_QWORD *)(v36 + 8));
  return v37 == 189;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  __int64 v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **current; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  MaterialGroupClearHistoryManager_c *v40; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x23
  __int64 v43; // x0
  peRenderTexture_ChangeLayerObject_o *v44; // x21
  MaterialGroupClearHistoryManager_c *v45; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v46; // x0
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v47; // x21
  MaterialGroupClearHistoryManager_c *v48; // x0
  int32_t v49; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4214DF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&phase);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v14);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v15);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v16);
    sub_B0D8A4(&NetworkManager_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__, v18);
    sub_B0D8A4(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v19);
    sub_B0D8A4(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__, v20);
    sub_B0D8A4(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v21);
    byte_4214DF9 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_WarQuestSelectionMaster, questId, 0LL);
  if ( IncludedGroups )
  {
    v26 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v49 = questId;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v50,
        v26,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v51 = v50;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v51,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v29 = sub_B0D974(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v27, v28);
        MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
          (MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *)v29,
          0LL);
        if ( !v29 )
          sub_B0D97C(v30);
        current = (System_Int32_array **)v51.fields.current;
        *(_QWORD *)(v29 + 16) = v51.fields.current;
        sub_B0D840((BattleServantConfConponent_o *)(v29 + 16), current, v31, v32, v33, v34, v35, v36);
        v40 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v40 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v40->static_fields->infoList;
        v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                                                         v38,
                                                                         v39);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v42,
          (Il2CppObject *)v29,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
        if ( !infoList )
          sub_B0D97C(v43);
        v44 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                infoList,
                (System_Predicate_T__o *)v42,
                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v44 )
        {
          v45 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v45 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v46 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v45->static_fields->infoList;
          if ( !v46 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            v46,
            (WarBoardManager_TaskList_o *)v44,
            (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v51,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      questId = v49;
    }
  }
  v47 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B0D974(
                                                                    MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo,
                                                                    v24,
                                                                    v25);
  MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v47, 0LL);
  if ( !v47 )
    goto LABEL_35;
  v47->fields.questId = questId;
  v47->fields.phase = phase;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v47->fields.updatedAt = NetworkManager__getTime(0LL);
  v48 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v48 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)v48->static_fields->infoList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_35:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MaterialGroupClearHistoryManager_c *v8; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v10; // x0
  MyRoomStateMaterial_c *v11; // x0
  System_String_o *String; // x0
  const MethodInfo *v13; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryWriter_o *v18; // x19
  MaterialGroupClearHistoryManager_c *v19; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v23; // x22
  MaterialGroupClearHistoryManager_c *v24; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *v25; // x23
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_4214DFB & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v6);
    sub_B0D8A4(&MyRoomStateMaterial_TypeInfo, v7);
    byte_4214DFB = 1;
  }
  v8 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v8 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  isModfiy = v8->static_fields->isModfiy;
  if ( isModfiy )
  {
    v10 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v10 = ManagerConfig_TypeInfo;
    }
    if ( v10->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v11 = MyRoomStateMaterial_TypeInfo;
      if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
        v11 = MyRoomStateMaterial_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v11->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0LL, 0LL);
      if ( !System_String__IsNullOrEmpty(String, 0LL) )
      {
        if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
        }
        MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
      }
      v13 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v13 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
      }
      LOBYTE(v13[2].klass->_1.gc_desc) = 0;
      FilePath = MaterialGroupClearHistoryManager__GetFilePath(v13);
      v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v18 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v16, v17);
      System_IO_BinaryWriter___ctor_39036700(v18, v15, 0LL);
      v19 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v19 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      static_fields = v19->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B0D97C(v19);
      if ( !v18 )
        sub_B0D97C(v19);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
        v18,
        static_fields->SAVE_DATA_VERSION,
        v18->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
        v18,
        MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v18->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)size,
        v18->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v23 = 0LL;
        do
        {
          v24 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v24 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v25 = v24->static_fields->infoList;
          if ( !v25 )
            sub_B0D97C(v24);
          if ( v25->fields._size <= (unsigned int)v23 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v26 = v25->fields._items->m_Items[v23];
          if ( !v26 )
            sub_B0D97C(v24);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
            v18,
            (unsigned int)v26->fields.questId,
            v18->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
            v18,
            (unsigned int)v26->fields.phase,
            v18->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v18->klass->vtable._19_Write.method)(
            v18,
            v26->fields.updatedAt,
            v18->klass->vtable._20_Write.methodPtr);
          ++v23;
        }
        while ( (int)v23 < size );
      }
      klass = v18->klass;
      if ( *(_WORD *)&v18->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v28;
          p_offset += 4;
          if ( v28 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
            goto LABEL_42;
        }
        v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v30 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v18, *(_QWORD *)(v30 + 8));
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  struct System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212720 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, x);
    sub_B0D8A4(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__, v5);
    sub_B0D8A4(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v6);
    sub_B0D8A4(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v7);
    sub_B0D8A4(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v8);
    byte_4212720 = 1;
  }
  v9 = (Il2CppObject *)sub_B0D974(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, x, method);
  System_Object___ctor(v9, 0LL);
  if ( !v9
    || (v9[1].klass = (Il2CppClass *)x,
        sub_B0D840(&v9[1], x),
        groupEntities = this->fields.groupEntities,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_QuestScriptMaterialNextEntity__TypeInfo,
                                                                         v12,
                                                                         v13),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          v9,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__),
        !groupEntities) )
  {
    sub_B0D97C(v10);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)groupEntities,
           (System_Predicate_T__o *)v14,
           (const MethodInfo_2FC5F74 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.questId == groupEntity->fields.questId;
}