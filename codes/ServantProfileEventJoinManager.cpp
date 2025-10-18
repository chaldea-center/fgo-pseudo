void ServantProfileEventJoinManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C443DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C37058(&StringLiteral_6678/*"Fgo_20191115"*/);
    byte_4C443DA = 1;
  }
  ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6678/*"Fgo_20191115"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ServantProfileEventJoinManager_TypeInfo->static_fields,
    StringLiteral_6678/*"Fgo_20191115"*/,
    v1,
    v2);
  *(_WORD *)&ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C443D3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    byte_4C443D3 = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = v1->static_fields->infoList;
  if ( !infoList )
    goto LABEL_14;
  if ( infoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantProfileEventJoinManager_TypeInfo;
    infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_1C372B4(v1);
  }
  size = infoList->fields._size;
  v4 = infoList->fields._version + 1;
  infoList->fields._size = 0;
  infoList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModified = 1;
}


void ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C443D2 & 1) == 0 )
  {
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    byte_4C443D2 = 1;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  ServantProfileEntity_array **v7; // x20
  int max_length; // w8
  ServantProfileEntity_array *v9; // x21
  unsigned int v10; // w24
  ServantProfileEntity_o *v11; // x8
  ServantProfileEntity_array *v12; // x9
  int32_t svtId; // w26
  il2cpp_array_size_t v14; // x22
  Il2CppArrayBounds *bounds; // x23
  ServantProfileEventJoinManager_c *v17; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v19; // x21
  Il2CppObject *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C443D6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__);
    sub_1C37058(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
    byte_4C443D6 = 1;
  }
  v3 = sub_1C372A4(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_27;
  *(_QWORD *)(v3 + 16) = servantEntity;
  v7 = (ServantProfileEntity_array **)(v3 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)servantEntity, v5, v6);
  Instance = (ServantProfileEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (ServantProfileEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, 0);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v9 = Instance;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
      sub_1C372BC(Instance);
    v11 = v9->m_Items[v10];
    if ( !v11 )
      goto LABEL_27;
    v12 = *v7;
    if ( !*v7 )
      goto LABEL_27;
    svtId = v11->fields.svtId;
    bounds = v12->bounds;
    v14 = v12->max_length;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = bounds;
    *(_QWORD *)&v21.fields.fakeValue = v14;
    Instance = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v21, 0);
    if ( svtId == (_DWORD)Instance )
      break;
    max_length = v9->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
  Instance = *v7;
  if ( !*v7 )
    goto LABEL_27;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0) )
  {
    Instance = *v7;
    if ( *v7 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0);
LABEL_27:
    sub_1C372B4(Instance);
  }
  v17 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v17 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
  v19 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v3,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    0);
  if ( !infoList )
    goto LABEL_27;
  v20 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v20 || BYTE4(v20[1].klass) != 0;
}


System_String_o *ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C443D1 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C443D1 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0

  if ( (byte_4C443D4 & 1) == 0 )
  {
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    byte_4C443D4 = 1;
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
  ServantProfileEventJoinManager_c *v8; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v10; // x1
  int v11; // w21
  char v12; // w20
  ServantProfileEventJoinManager_c *v13; // x0
  int v14; // w20
  ServantProfileEventJoinManager_c *v15; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_4C443D8 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    byte_4C443D8 = 1;
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
  v7 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  v8 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v8 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v7 )
    sub_1C372B4(v8);
  SAVE_DATA_VERSION = v8->static_fields->SAVE_DATA_VERSION;
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v10, 0) )
  {
    v11 = 5;
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v13 = ServantProfileEventJoinManager_TypeInfo;
    if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v13 = ServantProfileEventJoinManager_TypeInfo;
    }
    v13->static_fields->isContinueDevice = v12 & 1;
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v14 >= 1 )
    {
      do
      {
        v15 = ServantProfileEventJoinManager_TypeInfo;
        if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v15 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
        v17 = sub_1C372A4(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v17, 0);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        if ( !v17 )
          sub_1C372B4(v18);
        *(_DWORD *)(v17 + 16) = v18;
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
                v7,
                v7->klass->vtable._9_ReadBoolean.method);
        *(_BYTE *)(v17 + 20) = v19 & 1;
        if ( !infoList )
          sub_1C372B4(v19);
        items = infoList->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C372B4(v19);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v17,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v17;
          sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), v17, v20, v21);
        }
        --v14;
      }
      while ( v14 );
    }
    v11 = 8;
  }
  klass = v7->klass;
  v27 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_34;
    }
    v29 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v29 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v7, *(_QWORD *)(v29 + 8));
  return (v11 | 8) == 8;
}


void ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  ServantProfileEventJoinManager_c *v7; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v10; // x22
  bool v11; // w24
  Il2CppObject *v12; // x0
  ServantProfileEventJoinManager_c *v13; // x0
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C443D7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_1C37058(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C37058(&Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__);
    sub_1C37058(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
    byte_4C443D7 = 1;
  }
  v5 = sub_1C372A4(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_DWORD *)(v5 + 16) = servantId;
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_object__o *)static_fields->infoList;
  v10 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    0);
  if ( !infoList )
    goto LABEL_17;
  v11 = isNeedToChecEventJoinNameExist;
  v12 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v10,
          (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v12 )
  {
    BYTE4(v12[1].klass) = v11;
    return;
  }
  v13 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v13 = ServantProfileEventJoinManager_TypeInfo;
  }
  v14 = (System_Collections_Generic_List_object__o *)v13->static_fields->infoList;
  v15 = sub_1C372A4(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15
    || (v18 = *(_DWORD *)(v5 + 16), *(_BYTE *)(v15 + 20) = v11, *(_DWORD *)(v15 + 16) = v18, !v14)
    || (items = v14->fields._items,
        v20 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_17:
    sub_1C372B4(v6);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v15,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), v15, v16, v17);
  }
}


void ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v3; // x19
  UserServantCollectionMaster_o *v4; // x20
  DataManager_o *v5; // x19
  UserServantCollectionEntity_array *List; // x20
  EventServantMaster_o *v7; // x26
  const MethodInfo *v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v10; // x27
  int v11; // w8
  __int64 v12; // x21
  bool v13; // w22
  int v14; // w29
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  int v18; // w8
  DataManager_o *v19; // x24
  bool v20; // w29
  int v21; // w26
  EventServantEntity_o *v22; // x25
  int32_t v23; // w24
  const MethodInfo *v24; // x2
  bool IsEventJoin; // w23
  int max_length; // w8
  int v27; // w22
  char v28; // w25
  UserServantCollectionEntity_o *v29; // x8
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w23
  int32_t v33; // w23
  ServantProfileEventJoinManager_c *v34; // x0
  EventServantMaster_o *v35; // [xsp+0h] [xbp-70h]
  DataManager_o *v36; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C443D5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&EventServantEntity_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C443D5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v3 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v3 )
    goto LABEL_60;
  v4 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)v3, 0);
  if ( !v4
    || (v5 = Instance,
        List = UserServantCollectionMaster__getList(v4, 2, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_object)
    || (v7 = (EventServantMaster_o *)Instance,
        (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                       (ServantProfileMaster_o *)MasterData_object,
                                       21,
                                       0)) == 0) )
  {
LABEL_60:
    sub_1C372B4(Instance);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0;
    v35 = v7;
    v36 = Instance;
    do
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_61;
      if ( !v5 )
        goto LABEL_60;
      v11 = (int)v5->fields.m_CancellationTokenSource;
      v12 = *((_QWORD *)&Instance->fields._DispLog + v10);
      v13 = v11 > 0;
      if ( v11 < 1 )
        goto LABEL_38;
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v11 )
          goto LABEL_61;
        v15 = *((_QWORD *)&v5->fields._DispLog + v14);
        if ( !v15 )
          goto LABEL_60;
        v17 = *(_QWORD *)(v15 + 80);
        v16 = *(_QWORD *)(v15 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v37.fields.currentCryptoKey = v17;
        *(_QWORD *)&v37.fields.fakeValue = v16;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v37, 0);
        if ( !v12 )
          goto LABEL_60;
        if ( (_DWORD)Instance == *(_DWORD *)(v12 + 16) )
          break;
        v11 = (int)v5->fields.m_CancellationTokenSource;
        v13 = ++v14 < v11;
        if ( v14 >= v11 )
          goto LABEL_38;
      }
      if ( !v7 )
        goto LABEL_60;
      Instance = (DataManager_o *)EventServantMaster__GetEntities(v7, (int32_t)Instance, 0);
      if ( !Instance )
        goto LABEL_60;
      v18 = (int)Instance->fields.m_CancellationTokenSource;
      v19 = Instance;
      v20 = v18 > 0;
      if ( v18 >= 1 )
      {
        v21 = 0;
        while ( v21 < (unsigned int)v18 )
        {
          Instance = (DataManager_o *)EventServantEntity_TypeInfo;
          v22 = (EventServantEntity_o *)*((_QWORD *)&v19->fields._DispLog + v21);
          if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
          if ( !v22 )
            goto LABEL_60;
          Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                        v22,
                                        EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                        0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v18 = (int)v19->fields.m_CancellationTokenSource;
            v20 = ++v21 < v18;
            if ( v21 < v18 )
              continue;
          }
          goto LABEL_35;
        }
LABEL_61:
        sub_1C372BC(Instance);
      }
LABEL_35:
      v23 = *(_DWORD *)(v12 + 16);
      IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v15, 0);
      if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v23, IsEventJoin && !v20, v24);
      v7 = v35;
      if ( !v13 )
      {
LABEL_38:
        if ( !List )
          goto LABEL_60;
        max_length = List->max_length;
        if ( max_length < 1 )
          goto LABEL_52;
        v27 = 0;
        v28 = 0;
        do
        {
          if ( v27 >= (unsigned int)max_length )
            goto LABEL_61;
          v29 = List->m_Items[v27];
          if ( !v29 )
            goto LABEL_60;
          v31 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
          v30 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v38.fields.currentCryptoKey = v31;
          *(_QWORD *)&v38.fields.fakeValue = v30;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v38, 0);
          if ( !v12 )
            goto LABEL_60;
          v32 = *(_DWORD *)(v12 + 16);
          if ( (_DWORD)Instance != v32 )
          {
            if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
            ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v32, 0, v8);
            v28 = 1;
          }
          max_length = List->max_length;
          ++v27;
        }
        while ( v27 < max_length );
        if ( (v28 & 1) == 0 )
        {
LABEL_52:
          if ( !v12 )
            goto LABEL_60;
          v33 = *(_DWORD *)(v12 + 16);
          if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v33, 1, v8);
        }
      }
      Instance = v36;
      ++v10;
      LODWORD(m_CancellationTokenSource) = v36->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v10 < (int)m_CancellationTokenSource );
  }
  v34 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v34);
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
  long double inited; // q0
  ServantProfileEventJoinManager_c *v10; // x0
  __int64 v11; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  System_Collections_Generic_List_object__o *v13; // x0
  _BOOL8 v14; // x0
  Il2CppObject *current; // x21
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C443D9 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    byte_4C443D9 = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  memset(&v21, 0, sizeof(v21));
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v8, v7, 0);
  v10 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  if ( !v8 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method,
    inited);
  v11 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
          v8,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v8->klass->vtable._8_Write.method);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_1C372B4(v11);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)infoList->fields._size,
    v8->klass->vtable._17_Write.method);
  v13 = (System_Collections_Generic_List_object__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v13 )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    v13,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C372B4(v14);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
      v8,
      LODWORD(v21.fields._current[1].klass),
      v8->klass->vtable._17_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
      v8,
      BYTE4(current[1].klass),
      v8->klass->vtable._8_Write.method);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  klass = v8->klass;
  v17 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_27;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v19 = sub_1C87870(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v19)(v8, *(_QWORD *)(v19 + 8));
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
  if ( (byte_4C443DB & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C443DB = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0 )
    sub_1C372B4(this);
  servantId = i->fields.servantId;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v10, 0);
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
    sub_1C372B4(this);
  return i->fields.servantId == this->fields.servantId;
}