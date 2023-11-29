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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F7B72 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1);
    sub_B16FFC(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v8);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6603, v10);
    byte_40F7B72 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6603;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6603;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  v19 = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v19->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v19->infoList, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_40F7B6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v2);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v3);
    byte_40F7B6C = 1;
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
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
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
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
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

  if ( (byte_40F7B6A & 1) == 0 )
  {
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_40F7B6A = 1;
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

  if ( (byte_40F7B69 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F7B69 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  MaterialGroupClearHistoryManager_c *v19; // x0
  UserQuestEntity_o *result; // x0
  UserQuestEntity_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x21

  if ( (byte_40F7B6E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v6);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Predicate_UserQuestEntity___ctor__, v8);
    sub_B16FFC(&System_Predicate_UserQuestEntity__TypeInfo, v9);
    sub_B16FFC(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v10);
    sub_B16FFC(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v11);
    byte_40F7B6E = 1;
  }
  v12 = sub_B170CC(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, method, v2, v3, v4);
  MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
    (MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = groupEntities;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)groupEntities,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  result = (UserQuestEntity_o *)MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v19);
  if ( result )
  {
    v21 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    {
      v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_UserQuestEntity__TypeInfo,
                                                                       v22,
                                                                       v23,
                                                                       v24,
                                                                       v25);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v26,
        (Il2CppObject *)v12,
        Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_UserQuestEntity___ctor__);
      return (UserQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v21,
                                    (System_Predicate_T__o *)v26,
                                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  MaterialGroupClearHistoryManager_c *v17; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *infoList; // x0
  UserQuestEntity_o *QuestClearDummyData; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7B6D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v1);
    sub_B16FFC(&DataManager_TypeInfo, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v9);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v10);
    byte_40F7B6D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v17 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v17 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17->static_fields->infoList;
  if ( !infoList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    infoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B170D4();
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    QuestClearDummyData = UserQuestMaster__CreateQuestClearDummyData(
                            Master_WarQuestSelectionMaster,
                            (int32_t)v21.fields.current[1].klass,
                            HIDWORD(v21.fields.current[1].klass),
                            (int64_t)v21.fields.current[1].monitor,
                            0LL);
    if ( !v16 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      (EventMissionProgressRequest_Argument_ProgressData_o *)QuestClearDummyData,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v16;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0

  if ( (byte_40F7B6B & 1) == 0 )
  {
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_40F7B6B = 1;
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  MaterialGroupClearHistoryManager_c *v20; // x0
  char v21; // w20
  MaterialGroupClearHistoryManager_c *v22; // x0
  int v23; // w20
  int i; // w26
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v32; // x21
  MaterialGroupClearHistoryManager_c *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  int v39; // [xsp+8h] [xbp-68h]

  if ( (byte_40F7B70 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_B16FFC(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v6);
    byte_40F7B70 = 1;
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
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  if ( !v18 )
    sub_B170D4();
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v20 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v20 = MaterialGroupClearHistoryManager_TypeInfo;
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
    v22 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v22 = MaterialGroupClearHistoryManager_TypeInfo;
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
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._17_ReadInt64.method)(
                v18,
                v18->klass->vtable._18_ReadUInt64.methodPtr);
        v32 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B170CC(
                                                                          MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo,
                                                                          v28,
                                                                          v29,
                                                                          v30,
                                                                          v31);
        MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v32, 0LL);
        if ( !v32 )
          sub_B170D4();
        v32->fields.questId = v25;
        v32->fields.phase = v26;
        v32->fields.updatedAt = v27;
        v33 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v33 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33->static_fields->infoList;
        if ( !infoList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
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
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **current; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  MaterialGroupClearHistoryManager_c *v45; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x23
  peRenderTexture_ChangeLayerObject_o *v48; // x21
  MaterialGroupClearHistoryManager_c *v49; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v50; // x0
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v51; // x21
  MaterialGroupClearHistoryManager_c *v52; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x0
  int32_t v54; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F7B6F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&phase);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v14);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v15);
    sub_B16FFC(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__, v18);
    sub_B16FFC(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v19);
    sub_B16FFC(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__, v20);
    sub_B16FFC(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v21);
    byte_40F7B6F = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_WarQuestSelectionMaster, questId, 0LL);
  if ( IncludedGroups )
  {
    v28 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v54 = questId;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v55,
        v28,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v56 = v55;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v56,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v33 = sub_B170CC(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v29, v30, v31, v32);
        MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
          (MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *)v33,
          0LL);
        if ( !v33 )
          sub_B170D4();
        current = (System_Int32_array **)v56.fields.current;
        *(_QWORD *)(v33 + 16) = v56.fields.current;
        sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), current, v34, v35, v36, v37, v38, v39);
        v45 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v45 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v45->static_fields->infoList;
        v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                                                         v41,
                                                                         v42,
                                                                         v43,
                                                                         v44);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v47,
          (Il2CppObject *)v33,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
        if ( !infoList )
          sub_B170D4();
        v48 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                infoList,
                (System_Predicate_T__o *)v47,
                (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v48 )
        {
          v49 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v49 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v50 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v49->static_fields->infoList;
          if ( !v50 )
            sub_B170D4();
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            v50,
            (WarBoardManager_TaskList_o *)v48,
            (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v56,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      questId = v54;
    }
  }
  v51 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B170CC(
                                                                    MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo,
                                                                    v24,
                                                                    v25,
                                                                    v26,
                                                                    v27);
  MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_35;
  v51->fields.questId = questId;
  v51->fields.phase = phase;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v51->fields.updatedAt = NetworkManager__getTime(0LL);
  v52 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v52 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52->static_fields->infoList;
  if ( !v53 )
LABEL_35:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v53,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  MaterialGroupClearHistoryManager_c *v21; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v25; // x22
  MaterialGroupClearHistoryManager_c *v26; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *v27; // x23
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v28; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0

  if ( (byte_40F7B71 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v6);
    sub_B16FFC(&MyRoomStateMaterial_TypeInfo, v7);
    byte_40F7B71 = 1;
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
      v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
      System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
      v21 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v21 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      static_fields = v21->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B170D4();
      if ( !v20 )
        sub_B170D4();
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
        v20,
        static_fields->SAVE_DATA_VERSION,
        v20->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
        v20,
        MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v20->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)size,
        v20->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v25 = 0LL;
        do
        {
          v26 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v26 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v27 = v26->static_fields->infoList;
          if ( !v27 )
            sub_B170D4();
          if ( v27->fields._size <= (unsigned int)v25 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v28 = v27->fields._items->m_Items[v25];
          if ( !v28 )
            sub_B170D4();
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
            v20,
            (unsigned int)v28->fields.questId,
            v20->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
            v20,
            (unsigned int)v28->fields.phase,
            v20->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v20->klass->vtable._19_Write.method)(
            v20,
            v28->fields.updatedAt,
            v20->klass->vtable._20_Write.methodPtr);
          ++v25;
        }
        while ( (int)v25 < size );
      }
      klass = v20->klass;
      if ( *(_WORD *)&v20->klass->_2.bitflags1 )
      {
        v30 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v30;
          p_offset += 4;
          if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_42;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v32 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x20

  if ( (byte_40F8615 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, x);
    sub_B16FFC(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__, v7);
    sub_B16FFC(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v8);
    sub_B16FFC(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v9);
    sub_B16FFC(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v10);
    byte_40F8615 = 1;
  }
  v11 = sub_B170CC(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, x, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = x,
        sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)x, v12, v13, v14, v15, v16, v17),
        groupEntities = this->fields.groupEntities,
        v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_QuestScriptMaterialNextEntity__TypeInfo,
                                                                         v19,
                                                                         v20,
                                                                         v21,
                                                                         v22),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v23,
          (Il2CppObject *)v11,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__),
        !groupEntities) )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)groupEntities,
           (System_Predicate_T__o *)v23,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.questId == groupEntity->fields.questId;
}