void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  MaterialGroupClearHistoryManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B37C6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B52984(&StringLiteral_6670/*"Fgo_20220404"*/);
    byte_42B37C6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6670/*"Fgo_20220404"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6670/*"Fgo_20220404"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MaterialGroupClearHistoryManager_TypeInfo;
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  v11 = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  v11->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v10;
  sub_B52920((BattleServantConfConponent_o *)&v11->infoList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall MaterialGroupClearHistoryManager___ctor(
        MaterialGroupClearHistoryManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  __int64 v2; // x1
  MaterialGroupClearHistoryManager_c *v3; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialGroupClearHistoryManager_c *v5; // x0

  if ( (byte_42B37C0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_42B37C0 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v1 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v3 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v3 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v3->static_fields->infoList;
    if ( !infoList )
      sub_B52A5C(0LL, v2);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
  }
  v5 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v5 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  v5->static_fields->isContinueDevice = 0;
  v5->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42B37BE & 1) == 0 )
  {
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_42B37BE = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42B37BD & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42B37BD = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  MaterialGroupClearHistoryManager_c *v12; // x0
  UserQuestEntity_o *result; // x0
  UserQuestEntity_o *v14; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x21

  if ( (byte_42B37C2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_UserQuestEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_UserQuestEntity__Find__);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_UserQuestEntity___ctor__);
    sub_B52984(&System_Predicate_UserQuestEntity__TypeInfo);
    sub_B52984(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__);
    sub_B52984(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
    byte_42B37C2 = 1;
  }
  v3 = sub_B52A54(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
    (MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *)v3,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 16) = groupEntities;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)groupEntities, v6, v7, v8, v9, v10, v11);
  v12 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  result = (UserQuestEntity_o *)MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v12);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result,
           (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    {
      v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_UserQuestEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v15,
        (Il2CppObject *)v3,
        Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_UserQuestEntity___ctor__);
      return (UserQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v14,
                                    (System_Predicate_T__o *)v15,
                                    (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
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
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v2; // x19
  __int64 v3; // x1
  MaterialGroupClearHistoryManager_c *v4; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *infoList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UserQuestEntity_o *QuestClearDummyData; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B37C1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_42B37C1 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v2 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v2,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->static_fields->infoList;
  if ( !infoList )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    infoList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v10.fields.current )
      sub_B52A5C(v6, v7);
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(v6, v7);
    QuestClearDummyData = UserQuestMaster__CreateQuestClearDummyData(
                            Master_WarQuestSelectionMaster,
                            (int32_t)v10.fields.current[1].klass,
                            HIDWORD(v10.fields.current[1].klass),
                            (int64_t)v10.fields.current[1].monitor,
                            0LL);
    if ( !v2 )
      sub_B52A5C(QuestClearDummyData, QuestClearDummyData);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v2,
      (EventMissionProgressRequest_Argument_ProgressData_o *)QuestClearDummyData,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v2;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0

  if ( (byte_42B37BF & 1) == 0 )
  {
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_42B37BF = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  MaterialGroupClearHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19
  MaterialGroupClearHistoryManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  MaterialGroupClearHistoryManager_c *v12; // x0
  __int64 v13; // x3
  char v14; // w20
  MaterialGroupClearHistoryManager_c *v15; // x0
  int v16; // w20
  int i; // w26
  int32_t v18; // w22
  int32_t v19; // w23
  __int64 v20; // x24
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  MaterialGroupClearHistoryManager_c *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  int v30; // [xsp+8h] [xbp-68h]

  if ( (byte_42B37C4 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B52984(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    byte_42B37C4 = 1;
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
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v6 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v6);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v12 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v30 = 200;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v15 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v15 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v16 >= 1 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._17_ReadInt64.method)(
                v8,
                v8->klass->vtable._18_ReadUInt64.methodPtr);
        v21 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B52A54(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v21, 0LL);
        if ( !v21 )
          sub_B52A5C(v22, v23);
        v21->fields.questId = v18;
        v21->fields.phase = v19;
        v21->fields.updatedAt = v20;
        v24 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v24 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->static_fields->infoList;
        if ( !infoList )
          sub_B52A5C(0LL, v23);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
      }
    }
    v30 = 189;
  }
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v29 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v8, *(_QWORD *)(v29 + 8));
  return v30 == 189;
}


void __fastcall MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v9; // x21
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **current; // x1
  MaterialGroupClearHistoryManager_c *v20; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  peRenderTexture_ChangeLayerObject_o *v26; // x21
  MaterialGroupClearHistoryManager_c *v27; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v28; // x0
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v29; // x21
  MaterialGroupClearHistoryManager_c *v30; // x0
  int32_t v31; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B37C3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B52984(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
    sub_B52984(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_B52984(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__);
    sub_B52984(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
    byte_42B37C3 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_WarQuestSelectionMaster, questId, 0LL);
  if ( IncludedGroups )
  {
    v9 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v31 = questId;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v32,
        v9,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v33 = v32;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v33,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v10 = sub_B52A54(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
          (MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *)v10,
          0LL);
        if ( !v10 )
          sub_B52A5C(v11, v12);
        current = (System_Int32_array **)v33.fields.current;
        *(_QWORD *)(v10 + 16) = v33.fields.current;
        sub_B52920((BattleServantConfConponent_o *)(v10 + 16), current, v13, v14, v15, v16, v17, v18);
        v20 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v20 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v20->static_fields->infoList;
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v10,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
        if ( !infoList )
          sub_B52A5C(v23, v24);
        v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                infoList,
                (System_Predicate_T__o *)v22,
                (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v26 )
        {
          v27 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v27 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v28 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v27->static_fields->infoList;
          if ( !v28 )
            sub_B52A5C(0LL, v25);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            v28,
            (WarBoardManager_TaskList_o *)v26,
            (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v33,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      questId = v31;
    }
  }
  v29 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_B52A54(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_35;
  v29->fields.questId = questId;
  v29->fields.phase = phase;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v29->fields.updatedAt = NetworkManager__getTime(0LL);
  v30 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v30 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)v30->static_fields->infoList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_35:
    sub_B52A5C(Master_WarQuestSelectionMaster, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v3; // x0
  MyRoomStateMaterial_c *v4; // x0
  System_String_o *String; // x0
  const MethodInfo *v6; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  MaterialGroupClearHistoryManager_c *v11; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x22
  MaterialGroupClearHistoryManager_c *v18; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *v19; // x23
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_42B37C5 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B52984(&MyRoomStateMaterial_TypeInfo);
    byte_42B37C5 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v1 = MaterialGroupClearHistoryManager_TypeInfo;
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
      v4 = MyRoomStateMaterial_TypeInfo;
      if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
        v4 = MyRoomStateMaterial_TypeInfo;
      }
      String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0LL, 0LL);
      if ( !System_String__IsNullOrEmpty(String, 0LL) )
      {
        if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
        }
        MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
      }
      v6 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v6 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
      }
      LOBYTE(v6[2].klass->_1.gc_desc) = 0;
      FilePath = MaterialGroupClearHistoryManager__GetFilePath(v6);
      v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v9 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40252128(v9, v8, 0LL);
      v11 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v11 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      static_fields = v11->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B52A5C(v11, v10);
      if ( !v9 )
        sub_B52A5C(v11, v10);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v9->klass->vtable._22_Write.method)(
        v9,
        static_fields->SAVE_DATA_VERSION,
        v9->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v9->klass->vtable._8_Write.method)(
        v9,
        MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v9->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)size,
        v9->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v17 = 0LL;
        do
        {
          v18 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v18 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v19 = v18->static_fields->infoList;
          if ( !v19 )
            sub_B52A5C(v18, v15);
          if ( v19->fields._size <= (unsigned int)v17 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v20 = v19->fields._items->m_Items[v17];
          if ( !v20 )
            sub_B52A5C(v18, v15);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
            v9,
            (unsigned int)v20->fields.questId,
            v9->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
            v9,
            (unsigned int)v20->fields.phase,
            v9->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v9->klass->vtable._19_Write.method)(
            v9,
            v20->fields.updatedAt,
            v9->klass->vtable._20_Write.methodPtr);
          ++v17;
        }
        while ( (int)v17 < size );
      }
      klass = v9->klass;
      if ( *(_WORD *)&v9->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v22;
          p_offset += 4;
          if ( v22 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
            goto LABEL_42;
        }
        v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_42:
        v24 = sub_AEB880(v9, System_IDisposable_TypeInfo, 0LL, v16);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v9, *(_QWORD *)(v24 + 8));
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
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42ADCC2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_B52984(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    sub_B52984(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B52984(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__);
    sub_B52984(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
    byte_42ADCC2 = 1;
  }
  v5 = (Il2CppObject *)sub_B52A54(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5
    || (v5[1].klass = (Il2CppClass *)x,
        sub_B52920(&v5[1]),
        groupEntities = this->fields.groupEntities,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          v5,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__),
        !groupEntities) )
  {
    sub_B52A5C(v6, v7);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)groupEntities,
           (System_Predicate_T__o *)v9,
           (const MethodInfo_2FF1E90 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_B52A5C(this, y);
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
    sub_B52A5C(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}