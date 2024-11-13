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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17428 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__,
      v1,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6762/*"Fgo_20191115"*/, v12, v13);
    byte_4B17428 = 1;
  }
  ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6762/*"Fgo_20191115"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantProfileEventJoinManager_TypeInfo->static_fields,
    StringLiteral_6762/*"Fgo_20191115"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ServantProfileEventJoinManager_c *v7; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B17421 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v3,
      v4);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v5, v6);
    byte_4B17421 = 1;
  }
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = v7->static_fields->infoList;
  if ( !infoList )
    goto LABEL_14;
  if ( infoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = ServantProfileEventJoinManager_TypeInfo;
    infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = infoList->fields._size;
  v10 = infoList->fields._version + 1;
  infoList->fields._size = 0;
  infoList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModified = 1;
}


void __fastcall ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantProfileEventJoinManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B17420 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v1, v2);
    byte_4B17420 = 1;
  }
  v3 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


bool __fastcall ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  ServantProfileEntity_array *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ServantProfileEntity_array **v28; // x20
  int max_length; // w8
  ServantProfileEntity_array *v30; // x21
  unsigned int v31; // w24
  ServantProfileEntity_o *v32; // x8
  ServantProfileEntity_array *v33; // x9
  int32_t svtId; // w26
  __int64 v35; // x22
  Il2CppArrayBounds *bounds; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  ServantProfileEventJoinManager_c *v40; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v42; // x21
  Il2CppObject *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B17424 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantProfileMaster___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__,
      v5,
      v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(
      &Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v17, v18);
    byte_4B17424 = 1;
  }
  v19 = sub_1BCAA2C(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_27;
  *(_QWORD *)(v19 + 16) = servantEntity;
  v28 = (ServantProfileEntity_array **)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)servantEntity, v22, v23, v24, v25, v26, v27);
  Instance = (ServantProfileEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (ServantProfileEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, 0LL);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v30 = Instance;
  if ( max_length < 1 )
    return 0;
  v31 = 0;
  while ( 1 )
  {
    if ( v31 >= max_length )
      sub_1BCAA44(Instance, v21);
    v32 = v30->m_Items[v31];
    if ( !v32 )
      goto LABEL_27;
    v33 = *v28;
    if ( !*v28 )
      goto LABEL_27;
    svtId = v32->fields.svtId;
    bounds = v33->bounds;
    v35 = *(_QWORD *)&v33->max_length;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    *(_QWORD *)&v44.fields.currentCryptoKey = bounds;
    *(_QWORD *)&v44.fields.fakeValue = v35;
    Instance = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v44,
                                               0LL);
    if ( svtId == (_DWORD)Instance )
      break;
    max_length = v30->max_length;
    if ( (int)++v31 >= max_length )
      return 0;
  }
  Instance = *v28;
  if ( !*v28 )
    goto LABEL_27;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = *v28;
    if ( *v28 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0LL);
LABEL_27:
    sub_1BCAA3C(Instance, v21);
  }
  v40 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v21);
    v40 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v40->static_fields->infoList;
  v42 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                        v21,
                                        v38,
                                        v39);
  System_Predicate_object____ctor(
    v42,
    (Il2CppObject *)v19,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_27;
  v43 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v43 || BYTE4(v43[1].klass) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B1741F & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B1741F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantProfileEventJoinManager_c *v3; // x0

  if ( (byte_4B17422 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v1, v2);
    byte_4B17422 = 1;
  }
  v3 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantProfileEventJoinManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  ServantProfileEventJoinManager_c *v16; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryReader_o *v22; // x19
  __int64 v23; // x1
  ServantProfileEventJoinManager_c *v24; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v26; // x1
  int v27; // w21
  __int64 v28; // x1
  char v29; // w20
  ServantProfileEventJoinManager_c *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  int v34; // w20
  ServantProfileEventJoinManager_c *v35; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  int64_t v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0

  if ( (byte_4B17426 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      v5,
      v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v11, v12);
    byte_4B17426 = 1;
  }
  v13 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
    v13 = ServantProfileEventJoinManager_TypeInfo;
  }
  v13->static_fields->isModified = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 1;
  v16 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v16);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v18 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v22 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v19, v20, v21);
  System_IO_BinaryReader___ctor(v22, v18, 0LL);
  v24 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v23);
    v24 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v22 )
    sub_1BCAA3C(v24, v23);
  SAVE_DATA_VERSION = v24->static_fields->SAVE_DATA_VERSION;
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._22_ReadString.method)(
                             v22,
                             v22->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v26, 0LL) )
  {
    v27 = 5;
  }
  else
  {
    v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._9_ReadBoolean.method)(
            v22,
            v22->klass->vtable._10_ReadByte.methodPtr);
    v30 = ServantProfileEventJoinManager_TypeInfo;
    if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v28);
      v30 = ServantProfileEventJoinManager_TypeInfo;
    }
    v30->static_fields->isContinueDevice = v29 & 1;
    v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
            v22,
            v22->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v34 >= 1 )
    {
      do
      {
        v35 = ServantProfileEventJoinManager_TypeInfo;
        if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v31);
          v35 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v35->static_fields->infoList;
        v37 = sub_1BCAA2C(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v31, v32, v33);
        System_Object___ctor((Il2CppObject *)v37, 0LL);
        v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
                v22,
                v22->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v37 )
          sub_1BCAA3C(v38, v39);
        *(_DWORD *)(v37 + 16) = v38;
        v40 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._9_ReadBoolean.method)(
                v22,
                v22->klass->vtable._10_ReadByte.methodPtr);
        *(_BYTE *)(v37 + 20) = v40 & 1;
        if ( !infoList )
          sub_1BCAA3C(v40, v41);
        items = infoList->fields._items;
        v49 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BCAA3C(v40, v41);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v37;
          sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v37, v42, v43, v44, v45, v46, v47);
        }
        --v34;
      }
      while ( v34 );
    }
    v27 = 8;
  }
  klass = v22->klass;
  v53 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_34;
    }
    v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v55 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v55)(v22, *(_QWORD *)(v55 + 8));
  return (v27 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantProfileEventJoinManager_c *v23; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v26; // x22
  bool v27; // w24
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ServantProfileEventJoinManager_c *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x19
  int64_t v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int v41; // w8
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0

  if ( (byte_4B17425 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__,
      v6,
      v7);
    sub_1BCA7E0(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v14,
      v15);
    sub_1BCA7E0(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v16, v17);
    byte_4B17425 = 1;
  }
  v18 = sub_1BCAA2C(
          ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo,
          isNeedToChecEventJoinNameExist,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_17;
  *(_DWORD *)(v18 + 16) = servantId;
  v23 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v20);
    v23 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v23->static_fields;
  static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_object__o *)static_fields->infoList;
  v26 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                        v20,
                                        v21,
                                        v22);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v18,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_17;
  v27 = isNeedToChecEventJoinNameExist;
  v28 = System_Collections_Generic_List_object___Find(
          infoList,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v28 )
  {
    BYTE4(v28[1].klass) = v27;
    return;
  }
  v32 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v29);
    v32 = ServantProfileEventJoinManager_TypeInfo;
  }
  v33 = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
  v34 = sub_1BCAA2C(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v29, v30, v31);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34
    || (v41 = *(_DWORD *)(v18 + 16), *(_BYTE *)(v34 + 20) = v27, *(_DWORD *)(v34 + 16) = v41, !v33)
    || (items = v33->fields._items,
        v43 = Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
        ++v33->fields._version,
        !items) )
  {
LABEL_17:
    sub_1BCAA3C(v19, v20);
  }
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v45[4] = (Il2CppClass *)v34;
    sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), v34, v35, v36, v37, v38, v39, v40);
  }
}


void __fastcall ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v20; // x19
  UserServantCollectionMaster_o *v21; // x20
  DataManager_o *v22; // x19
  UserServantCollectionEntity_array *List; // x20
  EventServantMaster_o *v24; // x26
  const MethodInfo *v25; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v27; // x27
  int v28; // w8
  __int64 v29; // x21
  bool v30; // w22
  int v31; // w29
  __int64 v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  int v35; // w8
  DataManager_o *v36; // x24
  bool v37; // w29
  int v38; // w26
  EventServantEntity_o *v39; // x25
  int32_t v40; // w24
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  bool IsEventJoin; // w23
  int max_length; // w8
  int v45; // w22
  char v46; // w25
  UserServantCollectionEntity_o *v47; // x8
  __int64 v48; // x23
  __int64 v49; // x24
  int32_t v50; // w23
  int32_t v51; // w23
  ServantProfileEventJoinManager_c *v52; // x0
  EventServantMaster_o *v53; // [xsp+0h] [xbp-70h]
  DataManager_o *v54; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4B17423 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventServantMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantProfileMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&EventServantEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B17423 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v20 )
    goto LABEL_60;
  v21 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)v20, 0LL);
  if ( !v21
    || (v22 = Instance,
        List = UserServantCollectionMaster__getList(v21, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_object)
    || (v24 = (EventServantMaster_o *)Instance,
        (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                       (ServantProfileMaster_o *)MasterData_object,
                                       21,
                                       0LL)) == 0LL) )
  {
LABEL_60:
    sub_1BCAA3C(Instance, v18);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v27 = 0LL;
    v53 = v24;
    v54 = Instance;
    do
    {
      if ( v27 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_61;
      if ( !v22 )
        goto LABEL_60;
      v28 = (int)v22->fields.m_CancellationTokenSource;
      v29 = *((_QWORD *)&Instance->fields._DispLog + v27);
      v30 = v28 > 0;
      if ( v28 < 1 )
        goto LABEL_38;
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v28 )
          goto LABEL_61;
        v32 = *((_QWORD *)&v22->fields._DispLog + v31);
        if ( !v32 )
          goto LABEL_60;
        v34 = *(_QWORD *)(v32 + 80);
        v33 = *(_QWORD *)(v32 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
        *(_QWORD *)&v55.fields.currentCryptoKey = v34;
        *(_QWORD *)&v55.fields.fakeValue = v33;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
        if ( !v29 )
          goto LABEL_60;
        v18 = (unsigned int)Instance;
        if ( (_DWORD)Instance == *(_DWORD *)(v29 + 16) )
          break;
        v28 = (int)v22->fields.m_CancellationTokenSource;
        v30 = ++v31 < v28;
        if ( v31 >= v28 )
          goto LABEL_38;
      }
      if ( !v24 )
        goto LABEL_60;
      Instance = (DataManager_o *)EventServantMaster__GetEntities(v24, (int32_t)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      v35 = (int)Instance->fields.m_CancellationTokenSource;
      v36 = Instance;
      v37 = v35 > 0;
      if ( v35 >= 1 )
      {
        v38 = 0;
        while ( v38 < (unsigned int)v35 )
        {
          Instance = (DataManager_o *)EventServantEntity_TypeInfo;
          v39 = (EventServantEntity_o *)*((_QWORD *)&v36->fields._DispLog + v38);
          if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo, v18);
          if ( !v39 )
            goto LABEL_60;
          Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                        v39,
                                        EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v35 = (int)v36->fields.m_CancellationTokenSource;
            v37 = ++v38 < v35;
            if ( v38 < v35 )
              continue;
          }
          goto LABEL_35;
        }
LABEL_61:
        sub_1BCAA44(Instance, v18);
      }
LABEL_35:
      v40 = *(_DWORD *)(v29 + 16);
      IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v32, 0LL);
      if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v41);
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v40, IsEventJoin && !v37, v42);
      v24 = v53;
      if ( !v30 )
      {
LABEL_38:
        if ( !List )
          goto LABEL_60;
        max_length = List->max_length;
        if ( max_length < 1 )
          goto LABEL_52;
        v45 = 0;
        v46 = 0;
        do
        {
          if ( v45 >= (unsigned int)max_length )
            goto LABEL_61;
          v47 = List->m_Items[v45];
          if ( !v47 )
            goto LABEL_60;
          v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
          v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
          *(_QWORD *)&v56.fields.currentCryptoKey = v49;
          *(_QWORD *)&v56.fields.fakeValue = v48;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
          if ( !v29 )
            goto LABEL_60;
          v50 = *(_DWORD *)(v29 + 16);
          if ( (_DWORD)Instance != v50 )
          {
            if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v18);
            ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v50, 0, v25);
            v46 = 1;
          }
          max_length = List->max_length;
          ++v45;
        }
        while ( v45 < max_length );
        if ( (v46 & 1) == 0 )
        {
LABEL_52:
          if ( !v29 )
            goto LABEL_60;
          v51 = *(_DWORD *)(v29 + 16);
          if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v18);
          ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v51, 1, v25);
        }
      }
      Instance = v54;
      ++v27;
      LODWORD(m_CancellationTokenSource) = v54->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v27 < (int)m_CancellationTokenSource );
  }
  v52 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v18);
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v52);
}


bool __fastcall ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ServantProfileEventJoinManager_c *v19; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v21; // x0
  ServantProfileEventJoinManager_c *v23; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_IO_BinaryWriter_o *v29; // x19
  __int64 v30; // x1
  long double inited; // q0
  ServantProfileEventJoinManager_c *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x21
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B17427 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v3,
      v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v13,
      v14);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v17, v18);
    byte_4B17427 = 1;
  }
  v19 = ServantProfileEventJoinManager_TypeInfo;
  memset(&v46, 0, sizeof(v46));
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
    v19 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  if ( !static_fields->isModified )
    return 0;
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19, v1);
    static_fields = ServantProfileEventJoinManager_TypeInfo->static_fields;
  }
  static_fields->isModified = 0;
  v21 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v21 = ManagerConfig_TypeInfo;
  }
  if ( v21->static_fields->UseMock )
    return 0;
  v23 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v1);
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v23);
  v25 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v29 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v26, v27, v28);
  System_IO_BinaryWriter___ctor_62639712(v29, v25, 0LL);
  v32 = ServantProfileEventJoinManager_TypeInfo;
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v30);
  if ( !v29 )
    sub_1BCAA3C(v32, v30);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v29->klass->vtable._22_Write.method)(
    v29,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v29->klass[1]._1.image,
    inited);
  v33 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v29->klass->vtable._8_Write.method)(
          v29,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v29->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_1BCAA3C(v33, v34);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._17_Write.method)(
    v29,
    (unsigned int)infoList->fields._size,
    v29->klass->vtable._18_Write.methodPtr);
  v37 = (System_Collections_Generic_List_object__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v37 )
    sub_1BCAA3C(0LL, v36);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    v37,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v38 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1BCAA3C(v38, v39);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._17_Write.method)(
      v29,
      LODWORD(v46.fields._current[1].klass),
      v29->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._8_Write.method)(
      v29,
      BYTE4(current[1].klass),
      v29->klass->vtable._9_Write.methodPtr);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  klass = v29->klass;
  v42 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_27;
    }
    v44 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v44 = sub_1C1C7C0(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v44)(v29, *(_QWORD *)(v44 + 8));
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
  if ( (byte_4B17429 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_1BCA7E0(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                       i,
                                                                       method);
    byte_4B17429 = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0LL )
    sub_1BCAA3C(this, i);
  servantId = i->fields.servantId;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, i);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return i->fields.servantId == this->fields.servantId;
}