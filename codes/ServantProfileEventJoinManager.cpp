void __fastcall ServantProfileEventJoinManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BC8D46 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__,
      v1);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v8);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_6802/*"Fgo_20191115"*/, v10);
    byte_4BC8D46 = 1;
  }
  ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6802/*"Fgo_20191115"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ServantProfileEventJoinManager_TypeInfo->static_fields,
    StringLiteral_6802/*"Fgo_20191115"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
}


void __fastcall ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantProfileEventJoinManager_c *v4; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4BC8D3F & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__,
      v1);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v2);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v3);
    byte_4BC8D3F = 1;
  }
  v4 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = v4->static_fields->infoList;
  if ( !infoList )
    goto LABEL_14;
  if ( infoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileEventJoinManager_TypeInfo;
    infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_1C1AE30(v4, v1);
  }
  size = infoList->fields._size;
  v7 = infoList->fields._version + 1;
  infoList->fields._size = 0;
  infoList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModified = 1;
}


void __fastcall ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BC8D3E & 1) == 0 )
  {
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_4BC8D3E = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


bool __fastcall ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  ServantProfileEntity_array *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  ServantProfileEntity_array **v19; // x20
  int max_length; // w8
  ServantProfileEntity_array *v21; // x21
  unsigned int v22; // w24
  ServantProfileEntity_o *v23; // x8
  ServantProfileEntity_array *v24; // x9
  int32_t svtId; // w26
  __int64 v26; // x22
  Il2CppArrayBounds *bounds; // x23
  ServantProfileEventJoinManager_c *v29; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v31; // x21
  Il2CppObject *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4BC8D42 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantProfileMaster___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v5);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__, v8);
    sub_1C1ABD4(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v9);
    byte_4BC8D42 = 1;
  }
  v10 = sub_1C1AE20(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_27;
  *(_QWORD *)(v10 + 16) = servantEntity;
  v19 = (ServantProfileEntity_array **)(v10 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)servantEntity, v13, v14, v15, v16, v17, v18);
  Instance = (ServantProfileEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (ServantProfileEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, 0LL);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v21 = Instance;
  if ( max_length < 1 )
    return 0;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= max_length )
      sub_1C1AE38(Instance, v12);
    v23 = v21->m_Items[v22];
    if ( !v23 )
      goto LABEL_27;
    v24 = *v19;
    if ( !*v19 )
      goto LABEL_27;
    svtId = v23->fields.svtId;
    bounds = v24->bounds;
    v26 = *(_QWORD *)&v24->max_length;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = bounds;
    *(_QWORD *)&v33.fields.fakeValue = v26;
    Instance = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                               v33,
                                               0LL);
    if ( svtId == (_DWORD)Instance )
      break;
    max_length = v21->max_length;
    if ( (int)++v22 >= max_length )
      return 0;
  }
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_27;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = *v19;
    if ( *v19 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0LL);
LABEL_27:
    sub_1C1AE30(Instance, v12);
  }
  v29 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v29 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v29->static_fields->infoList;
  v31 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v31,
    (Il2CppObject *)v10,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_27;
  v32 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v31,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v32 || BYTE4(v32[1].klass) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BC8D3D & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, v1);
    sub_1C1ABD4(&DatFileName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BC8D3D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_63051628(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0

  if ( (byte_4BC8D40 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_4BC8D40 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileEventJoinManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  ServantProfileEventJoinManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x1
  ServantProfileEventJoinManager_c *v15; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v17; // x1
  int v18; // w21
  char v19; // w20
  ServantProfileEventJoinManager_c *v20; // x0
  int v21; // w20
  ServantProfileEventJoinManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  int64_t v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0

  if ( (byte_4BC8D44 & 1) == 0 )
  {
    sub_1C1ABD4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v2);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__, v3);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v4);
    sub_1C1ABD4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v5);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v6);
    byte_4BC8D44 = 1;
  }
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
  v7->static_fields->isModified = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v10);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v13 = (System_IO_BinaryReader_o *)sub_1C1AE20(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v13, v12, 0LL);
  v15 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v15 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v13 )
    sub_1C1AE30(v15, v14);
  SAVE_DATA_VERSION = v15->static_fields->SAVE_DATA_VERSION;
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                             v13,
                             v13->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v17, 0LL) )
  {
    v18 = 5;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
            v13,
            v13->klass->vtable._10_ReadByte.methodPtr);
    v20 = ServantProfileEventJoinManager_TypeInfo;
    if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v20 = ServantProfileEventJoinManager_TypeInfo;
    }
    v20->static_fields->isContinueDevice = v19 & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
            v13,
            v13->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      do
      {
        v22 = ServantProfileEventJoinManager_TypeInfo;
        if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v22 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
        v24 = sub_1C1AE20(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v24, 0LL);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v24 )
          sub_1C1AE30(v25, v26);
        *(_DWORD *)(v24 + 16) = v25;
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
                v13,
                v13->klass->vtable._10_ReadByte.methodPtr);
        *(_BYTE *)(v24 + 20) = v27 & 1;
        if ( !infoList )
          sub_1C1AE30(v27, v28);
        items = infoList->fields._items;
        v36 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C1AE30(v27, v28);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v24,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v24;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v38 + 4), v24, v29, v30, v31, v32, v33, v34);
        }
        --v21;
      }
      while ( v21 );
    }
    v18 = 8;
  }
  klass = v13->klass;
  v40 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_34;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v42 = sub_1C6CBB4(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v13, *(_QWORD *)(v42 + 8));
  return (v18 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  ServantProfileEventJoinManager_c *v14; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v17; // x22
  bool v18; // w24
  Il2CppObject *v19; // x0
  ServantProfileEventJoinManager_c *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x19
  int64_t v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4BC8D43 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v5);
    sub_1C1ABD4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v6);
    sub_1C1ABD4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v7);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v8);
    sub_1C1ABD4(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v9);
    sub_1C1ABD4(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v10);
    byte_4BC8D43 = 1;
  }
  v11 = sub_1C1AE20(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_DWORD *)(v11 + 16) = servantId;
  v14 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v14 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_object__o *)static_fields->infoList;
  v17 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_17;
  v18 = isNeedToChecEventJoinNameExist;
  v19 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v19 )
  {
    BYTE4(v19[1].klass) = v18;
    return;
  }
  v20 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v20 = ServantProfileEventJoinManager_TypeInfo;
  }
  v21 = (System_Collections_Generic_List_object__o *)v20->static_fields->infoList;
  v22 = sub_1C1AE20(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22
    || (v29 = *(_DWORD *)(v11 + 16), *(_BYTE *)(v22 + 20) = v18, *(_DWORD *)(v22 + 16) = v29, !v21)
    || (items = v21->fields._items,
        v31 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
        ++v21->fields._version,
        !items) )
  {
LABEL_17:
    sub_1C1AE30(v12, v13);
  }
  size = v21->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v22,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v22;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), v22, v23, v24, v25, v26, v27, v28);
  }
}


void __fastcall ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v12; // x19
  UserServantCollectionMaster_o *v13; // x20
  DataManager_o *v14; // x19
  UserServantCollectionEntity_array *List; // x20
  EventServantMaster_o *v16; // x26
  const MethodInfo *v17; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v19; // x27
  int v20; // w8
  __int64 v21; // x21
  bool v22; // w22
  int v23; // w29
  __int64 v24; // x23
  __int64 v25; // x24
  __int64 v26; // x25
  int v27; // w8
  DataManager_o *v28; // x24
  bool v29; // w29
  int v30; // w26
  EventServantEntity_o *v31; // x25
  int32_t v32; // w24
  const MethodInfo *v33; // x2
  bool IsEventJoin; // w23
  int max_length; // w8
  int v36; // w22
  char v37; // w25
  UserServantCollectionEntity_o *v38; // x8
  __int64 v39; // x23
  __int64 v40; // x24
  int32_t v41; // w23
  int32_t v42; // w23
  ServantProfileEventJoinManager_c *v43; // x0
  EventServantMaster_o *v44; // [xsp+0h] [xbp-70h]
  DataManager_o *v45; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4BC8D41 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventServantMaster___, v1);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantProfileMaster___, v2);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1C1ABD4(&EventServantEntity_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC8D41 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v12 )
    goto LABEL_60;
  v13 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)v12, 0LL);
  if ( !v13
    || (v14 = Instance,
        List = UserServantCollectionMaster__getList(v13, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_object)
    || (v16 = (EventServantMaster_o *)Instance,
        (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                       (ServantProfileMaster_o *)MasterData_object,
                                       21,
                                       0LL)) == 0LL) )
  {
LABEL_60:
    sub_1C1AE30(Instance, v10);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v19 = 0LL;
    v44 = v16;
    v45 = Instance;
    do
    {
      if ( v19 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_61;
      if ( !v14 )
        goto LABEL_60;
      v20 = (int)v14->fields.m_CancellationTokenSource;
      v21 = *((_QWORD *)&Instance->fields._DispLog + v19);
      v22 = v20 > 0;
      if ( v20 < 1 )
        goto LABEL_38;
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v20 )
          goto LABEL_61;
        v24 = *((_QWORD *)&v14->fields._DispLog + v23);
        if ( !v24 )
          goto LABEL_60;
        v26 = *(_QWORD *)(v24 + 80);
        v25 = *(_QWORD *)(v24 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v26;
        *(_QWORD *)&v46.fields.fakeValue = v25;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v46, 0LL);
        if ( !v21 )
          goto LABEL_60;
        v10 = (unsigned int)Instance;
        if ( (_DWORD)Instance == *(_DWORD *)(v21 + 16) )
          break;
        v20 = (int)v14->fields.m_CancellationTokenSource;
        v22 = ++v23 < v20;
        if ( v23 >= v20 )
          goto LABEL_38;
      }
      if ( !v16 )
        goto LABEL_60;
      Instance = (DataManager_o *)EventServantMaster__GetEntities(v16, (int32_t)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      v27 = (int)Instance->fields.m_CancellationTokenSource;
      v28 = Instance;
      v29 = v27 > 0;
      if ( v27 >= 1 )
      {
        v30 = 0;
        while ( v30 < (unsigned int)v27 )
        {
          Instance = (DataManager_o *)EventServantEntity_TypeInfo;
          v31 = (EventServantEntity_o *)*((_QWORD *)&v28->fields._DispLog + v30);
          if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
          if ( !v31 )
            goto LABEL_60;
          Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                        v31,
                                        EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v27 = (int)v28->fields.m_CancellationTokenSource;
            v29 = ++v30 < v27;
            if ( v30 < v27 )
              continue;
          }
          goto LABEL_35;
        }
LABEL_61:
        sub_1C1AE38(Instance, v10);
      }
LABEL_35:
      v32 = *(_DWORD *)(v21 + 16);
      IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v24, 0LL);
      if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v32, IsEventJoin && !v29, v33);
      v16 = v44;
      if ( !v22 )
      {
LABEL_38:
        if ( !List )
          goto LABEL_60;
        max_length = List->max_length;
        if ( max_length < 1 )
          goto LABEL_52;
        v36 = 0;
        v37 = 0;
        do
        {
          if ( v36 >= (unsigned int)max_length )
            goto LABEL_61;
          v38 = List->m_Items[v36];
          if ( !v38 )
            goto LABEL_60;
          v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
          v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v47.fields.currentCryptoKey = v40;
          *(_QWORD *)&v47.fields.fakeValue = v39;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v47, 0LL);
          if ( !v21 )
            goto LABEL_60;
          v41 = *(_DWORD *)(v21 + 16);
          if ( (_DWORD)Instance != v41 )
          {
            if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
            ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v41, 0, v17);
            v37 = 1;
          }
          max_length = List->max_length;
          ++v36;
        }
        while ( v36 < max_length );
        if ( (v37 & 1) == 0 )
        {
LABEL_52:
          if ( !v21 )
            goto LABEL_60;
          v42 = *(_DWORD *)(v21 + 16);
          if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v42, 1, v17);
        }
      }
      Instance = v45;
      ++v19;
      LODWORD(m_CancellationTokenSource) = v45->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v19 < (int)m_CancellationTokenSource );
  }
  v43 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v43);
}


bool __fastcall ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
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
  ServantProfileEventJoinManager_c *v10; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v12; // x0
  ServantProfileEventJoinManager_c *v14; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v16; // x20
  System_IO_BinaryWriter_o *v17; // x19
  __int64 v18; // x1
  long double inited; // q0
  ServantProfileEventJoinManager_c *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x21
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC8D45 & 1) == 0 )
  {
    sub_1C1ABD4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v2);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v3);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v4);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v5);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v6);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v7);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v8);
    sub_1C1ABD4(&ServantProfileEventJoinManager_TypeInfo, v9);
    byte_4BC8D45 = 1;
  }
  v10 = ServantProfileEventJoinManager_TypeInfo;
  memset(&v34, 0, sizeof(v34));
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v10 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( !static_fields->isModified )
    return 0;
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  }
  static_fields->isModified = 0;
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v12 = ManagerConfig_TypeInfo;
  }
  if ( v12->static_fields->UseMock )
    return 0;
  v14 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v14);
  v16 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v17 = (System_IO_BinaryWriter_o *)sub_1C1AE20(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63278860(v17, v16, 0LL);
  v20 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  if ( !v17 )
    sub_1C1AE30(v20, v18);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v17->klass->vtable._22_Write.method)(
    v17,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v17->klass[1]._1.image,
    inited);
  v21 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v17->klass->vtable._8_Write.method)(
          v17,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v17->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_1C1AE30(v21, v22);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
    v17,
    (unsigned int)infoList->fields._size,
    v17->klass->vtable._18_Write.methodPtr);
  v25 = (System_Collections_Generic_List_object__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v25 )
    sub_1C1AE30(0LL, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v25,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v26 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C1AE30(v26, v27);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
      v17,
      LODWORD(v34.fields._current[1].klass),
      v17->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._8_Write.method)(
      v17,
      BYTE4(current[1].klass),
      v17->klass->vtable._9_Write.methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  klass = v17->klass;
  v30 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_27;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v32 = sub_1C6CBB4(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v17, *(_QWORD *)(v32 + 8));
  return 1;
}


void __fastcall ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileEventJoinManager___c__DisplayClass10_0___GetIsNeedToCheckEventJoinName_b__0(
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
  if ( (byte_4BC8D47 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_1C1ABD4(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                       i);
    byte_4BC8D47 = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0LL )
    sub_1C1AE30(this, i);
  servantId = i->fields.servantId;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v10, 0LL);
}


void __fastcall ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileEventJoinManager___c__DisplayClass11_0___SetIsNeedToCheckEventJoinNameExist_b__0(
        ServantProfileEventJoinManager___c__DisplayClass11_0_o *this,
        ServantProfileEventJoinManager_ServantEventJoinInfo_o *i,
        const MethodInfo *method)
{
  if ( !i )
    sub_1C1AE30(this, 0LL);
  return i->fields.servantId == this->fields.servantId;
}