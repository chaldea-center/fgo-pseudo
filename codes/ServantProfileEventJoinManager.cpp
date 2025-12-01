void ServantProfileEventJoinManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC8844 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6672/*"Fgo_20191115"*/);
    byte_4CC8844 = 1;
  }
  ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6672/*"Fgo_20191115"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantProfileEventJoinManager_TypeInfo->static_fields,
    StringLiteral_6672/*"Fgo_20191115"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->infoList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CC883D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    byte_4CC883D = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = v2->static_fields->infoList;
  if ( !infoList )
    goto LABEL_14;
  if ( infoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileEventJoinManager_TypeInfo;
    infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_1C71608(v2, v1);
  }
  size = infoList->fields._size;
  v5 = infoList->fields._version + 1;
  infoList->fields._size = 0;
  infoList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModified = 1;
}


void ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4CC883C & 1) == 0 )
  {
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    byte_4CC883C = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


bool ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x19
  ServantProfileEntity_array *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ServantProfileEntity_array **v12; // x20
  int max_length; // w8
  ServantProfileEntity_array *v14; // x21
  unsigned int v15; // w24
  ServantProfileEntity_o *v16; // x8
  ServantProfileEntity_array *v17; // x9
  int32_t svtId; // w26
  il2cpp_array_size_t v19; // x22
  Il2CppArrayBounds *bounds; // x23
  ServantProfileEventJoinManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4CC8840 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__);
    sub_1C713B0(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
    byte_4CC8840 = 1;
  }
  v3 = sub_1C715FC(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_27;
  *(_QWORD *)(v3 + 16) = servantEntity;
  v12 = (ServantProfileEntity_array **)(v3 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)servantEntity, v6, v7, v8, v9, v10, v11);
  Instance = (ServantProfileEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (ServantProfileEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, 0);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v14 = Instance;
  if ( max_length < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
      sub_1C71610(Instance);
    v16 = v14->m_Items[v15];
    if ( !v16 )
      goto LABEL_27;
    v17 = *v12;
    if ( !*v12 )
      goto LABEL_27;
    svtId = v16->fields.svtId;
    bounds = v17->bounds;
    v19 = v17->max_length;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = bounds;
    *(_QWORD *)&v26.fields.fakeValue = v19;
    Instance = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v26, 0);
    if ( svtId == (_DWORD)Instance )
      break;
    max_length = v14->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  Instance = *v12;
  if ( !*v12 )
    goto LABEL_27;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0) )
  {
    Instance = *v12;
    if ( *v12 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0);
LABEL_27:
    sub_1C71608(Instance, v5);
  }
  v22 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v22 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
  v24 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    0);
  if ( !infoList )
    goto LABEL_27;
  v25 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v25 || BYTE4(v25[1].klass) != 0;
}


System_String_o *ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CC883B & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&DatFileName_TypeInfo);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC883B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0);
  return System_String__Concat_64069988(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


void ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0

  if ( (byte_4CC883E & 1) == 0 )
  {
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    byte_4CC883E = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v1);
}


bool ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  ServantProfileEventJoinManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x1
  ServantProfileEventJoinManager_c *v9; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v11; // x1
  int v12; // w21
  char v13; // w20
  ServantProfileEventJoinManager_c *v14; // x0
  int v15; // w20
  ServantProfileEventJoinManager_c *v16; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0

  if ( (byte_4CC8842 & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryReader_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    byte_4CC8842 = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
  v1->static_fields->isModified = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v4);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C715FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  v9 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v9 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v7 )
    sub_1C71608(v9, v8);
  SAVE_DATA_VERSION = v9->static_fields->SAVE_DATA_VERSION;
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v11, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v14 = ServantProfileEventJoinManager_TypeInfo;
    if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v14 = ServantProfileEventJoinManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ServantProfileEventJoinManager_TypeInfo;
        if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v16 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v16->static_fields->infoList;
        v18 = sub_1C715FC(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        if ( !v18 )
          sub_1C71608(v19, v20);
        *(_DWORD *)(v18 + 16) = v19;
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
                v7,
                v7->klass->vtable._9_ReadBoolean.method);
        *(_BYTE *)(v18 + 20) = v21 & 1;
        if ( !infoList )
          sub_1C71608(v21, v22);
        items = infoList->fields._items;
        v30 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C71608(v21, v22);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v18,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v18;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), v18, v23, v24, v25, v26, v27, v28);
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v34 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_34;
    }
    v36 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v36 = sub_1C47738(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v7, *(_QWORD *)(v36 + 8));
  return (v12 | 8) == 8;
}


void ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  ServantProfileEventJoinManager_c *v8; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v11; // x22
  bool v12; // w24
  Il2CppObject *v13; // x0
  ServantProfileEventJoinManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4CC8841 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_1C713B0(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C713B0(&Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__);
    sub_1C713B0(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
    byte_4CC8841 = 1;
  }
  v5 = sub_1C715FC(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_DWORD *)(v5 + 16) = servantId;
  v8 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v8 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_object__o *)static_fields->infoList;
  v11 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    0);
  if ( !infoList )
    goto LABEL_17;
  v12 = isNeedToChecEventJoinNameExist;
  v13 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v13 )
  {
    BYTE4(v13[1].klass) = v12;
    return;
  }
  v14 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v14 = ServantProfileEventJoinManager_TypeInfo;
  }
  v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
  v16 = sub_1C715FC(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  if ( !v16
    || (v23 = *(_DWORD *)(v5 + 16), *(_BYTE *)(v16 + 20) = v12, *(_DWORD *)(v16 + 16) = v23, !v15)
    || (items = v15->fields._items,
        v25 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
        ++v15->fields._version,
        !items) )
  {
LABEL_17:
    sub_1C71608(v6, v7);
  }
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v16,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v27 + 4), v16, v17, v18, v19, v20, v21, v22);
  }
}


void ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v4; // x19
  UserServantCollectionMaster_o *v5; // x20
  DataManager_o *v6; // x19
  UserServantCollectionEntity_array *List; // x20
  EventServantMaster_o *v8; // x26
  const MethodInfo *v9; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v11; // x27
  int v12; // w8
  __int64 v13; // x21
  bool v14; // w22
  int v15; // w29
  __int64 v16; // x23
  __int64 v17; // x24
  __int64 v18; // x25
  int v19; // w8
  DataManager_o *v20; // x24
  bool v21; // w29
  int v22; // w26
  EventServantEntity_o *v23; // x25
  int32_t v24; // w24
  const MethodInfo *v25; // x2
  bool IsEventJoin; // w23
  int max_length; // w8
  int v28; // w22
  char v29; // w25
  UserServantCollectionEntity_o *v30; // x8
  __int64 v31; // x23
  __int64 v32; // x24
  int32_t v33; // w23
  int32_t v34; // w23
  ServantProfileEventJoinManager_c *v35; // x0
  EventServantMaster_o *v36; // [xsp+0h] [xbp-70h]
  DataManager_o *v37; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4CC883F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&EventServantEntity_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC883F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v4 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v4 )
    goto LABEL_60;
  v5 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)v4, 0);
  if ( !v5
    || (v6 = Instance,
        List = UserServantCollectionMaster__getList(v5, 2, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_object)
    || (v8 = (EventServantMaster_o *)Instance,
        (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                       (ServantProfileMaster_o *)MasterData_object,
                                       21,
                                       0)) == 0) )
  {
LABEL_60:
    sub_1C71608(Instance, v2);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    v36 = v8;
    v37 = Instance;
    do
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_61;
      if ( !v6 )
        goto LABEL_60;
      v12 = (int)v6->fields.m_CancellationTokenSource;
      v13 = *((_QWORD *)&Instance->fields._DispLog + v11);
      v14 = v12 > 0;
      if ( v12 < 1 )
        goto LABEL_38;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v12 )
          goto LABEL_61;
        v16 = *((_QWORD *)&v6->fields._DispLog + v15);
        if ( !v16 )
          goto LABEL_60;
        v18 = *(_QWORD *)(v16 + 80);
        v17 = *(_QWORD *)(v16 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v18;
        *(_QWORD *)&v38.fields.fakeValue = v17;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v38, 0);
        if ( !v13 )
          goto LABEL_60;
        v2 = (unsigned int)Instance;
        if ( (_DWORD)Instance == *(_DWORD *)(v13 + 16) )
          break;
        v12 = (int)v6->fields.m_CancellationTokenSource;
        v14 = ++v15 < v12;
        if ( v15 >= v12 )
          goto LABEL_38;
      }
      if ( !v8 )
        goto LABEL_60;
      Instance = (DataManager_o *)EventServantMaster__GetEntities(v8, (int32_t)Instance, 0);
      if ( !Instance )
        goto LABEL_60;
      v19 = (int)Instance->fields.m_CancellationTokenSource;
      v20 = Instance;
      v21 = v19 > 0;
      if ( v19 >= 1 )
      {
        v22 = 0;
        while ( v22 < (unsigned int)v19 )
        {
          Instance = (DataManager_o *)EventServantEntity_TypeInfo;
          v23 = (EventServantEntity_o *)*((_QWORD *)&v20->fields._DispLog + v22);
          if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
          if ( !v23 )
            goto LABEL_60;
          Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                        v23,
                                        EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                        0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v19 = (int)v20->fields.m_CancellationTokenSource;
            v21 = ++v22 < v19;
            if ( v22 < v19 )
              continue;
          }
          goto LABEL_35;
        }
LABEL_61:
        sub_1C71610(Instance);
      }
LABEL_35:
      v24 = *(_DWORD *)(v13 + 16);
      IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v16, 0);
      if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v24, IsEventJoin && !v21, v25);
      v8 = v36;
      if ( !v14 )
      {
LABEL_38:
        if ( !List )
          goto LABEL_60;
        max_length = List->max_length;
        if ( max_length < 1 )
          goto LABEL_52;
        v28 = 0;
        v29 = 0;
        do
        {
          if ( v28 >= (unsigned int)max_length )
            goto LABEL_61;
          v30 = List->m_Items[v28];
          if ( !v30 )
            goto LABEL_60;
          v32 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
          v31 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v39.fields.currentCryptoKey = v32;
          *(_QWORD *)&v39.fields.fakeValue = v31;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v39, 0);
          if ( !v13 )
            goto LABEL_60;
          v33 = *(_DWORD *)(v13 + 16);
          if ( (_DWORD)Instance != v33 )
          {
            if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
            ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v33, 0, v9);
            v29 = 1;
          }
          max_length = List->max_length;
          ++v28;
        }
        while ( v28 < max_length );
        if ( (v29 & 1) == 0 )
        {
LABEL_52:
          if ( !v13 )
            goto LABEL_60;
          v34 = *(_DWORD *)(v13 + 16);
          if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v34, 1, v9);
        }
      }
      Instance = v37;
      ++v11;
      LODWORD(m_CancellationTokenSource) = v37->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v11 < (int)m_CancellationTokenSource );
  }
  v35 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v35);
}


bool ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  ServantProfileEventJoinManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  long double inited; // q0
  ServantProfileEventJoinManager_c *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CC8843 & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&ServantProfileEventJoinManager_TypeInfo);
    byte_4CC8843 = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  memset(&v25, 0, sizeof(v25));
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModified )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  }
  static_fields->isModified = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C715FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64941052(v8, v7, 0);
  v11 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  if ( !v8 )
    sub_1C71608(v11, v9);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method,
    inited);
  v12 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
          v8,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v8->klass->vtable._8_Write.method);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_1C71608(v12, v13);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)infoList->fields._size,
    v8->klass->vtable._17_Write.method);
  v16 = (System_Collections_Generic_List_object__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v16 )
    sub_1C71608(0, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v16,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v17 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C71608(v17, v18);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
      v8,
      LODWORD(v25.fields._current[1].klass),
      v8->klass->vtable._17_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
      v8,
      BYTE4(current[1].klass),
      v8->klass->vtable._8_Write.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  klass = v8->klass;
  v21 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v23 = sub_1C47738(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v8, *(_QWORD *)(v23 + 8));
  return 1;
}


void ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileEventJoinManager___c__DisplayClass10_0___GetIsNeedToCheckEventJoinName_b__0(
        ServantProfileEventJoinManager___c__DisplayClass10_0_o *this,
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *i,
        const MethodInfo *method)
{
  ServantProfileEventJoinManager___c__DisplayClass10_0_o *v4; // x20
  struct ServantEntity_o *servantEntity; // x8
  int32_t servantId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4CC8845 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8845 = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0 )
    sub_1C71608(this, i);
  servantId = i->fields.servantId;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v10, 0);
}


void ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileEventJoinManager___c__DisplayClass11_0___SetIsNeedToCheckEventJoinNameExist_b__0(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *i,
        const MethodInfo *method)
{
  if ( !i )
    sub_1C71608(this, 0);
  return i->fields.servantId == this->fields.servantId;
}