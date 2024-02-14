void __fastcall ServantProfileEventJoinManager___cctor(const MethodInfo *method)
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
  ServantProfileEventJoinManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct ServantProfileEventJoinManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4216A0E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v8);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6638/*"Fgo_20191115"*/, v10);
    byte_4216A0E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileEventJoinManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6638/*"Fgo_20191115"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6638/*"Fgo_20191115"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantProfileEventJoinManager_TypeInfo;
  ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v13->static_fields->isContinueDevice = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  v17 = ServantProfileEventJoinManager_TypeInfo->static_fields;
  v17->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&v17->infoList, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x8

  if ( (byte_4216A07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__, v1);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v2);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v3);
    byte_4216A07 = 1;
  }
  v4 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->infoList;
  if ( !infoList )
    goto LABEL_16;
  if ( infoList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        infoList,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
      v4 = ServantProfileEventJoinManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v4);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileEventJoinManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModified = 1;
}


void __fastcall ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4216A06 & 1) == 0 )
  {
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_4216A06 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


bool __fastcall ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  void *Instance; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  _QWORD *v20; // x20
  const MethodInfo *v21; // x2
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w24
  __int64 v25; // x8
  _QWORD *v26; // x9
  int v27; // w26
  __int64 v28; // x22
  __int64 v29; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  ServantProfileEventJoinManager_c *v33; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x21
  peRenderTexture_ChangeLayerObject_o *v36; // x0
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4216A0A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantProfileMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v6);
    sub_B0D8A4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v7);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__, v10);
    sub_B0D8A4(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v11);
    byte_4216A0A = 1;
  }
  v12 = sub_B0D974(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, method, v2);
  ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
    (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_29;
  *(_QWORD *)(v12 + 16) = servantEntity;
  v20 = (_QWORD *)(v12 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)servantEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, v21);
  if ( !Instance )
    goto LABEL_29;
  v22 = *((_DWORD *)Instance + 6);
  v23 = Instance;
  if ( v22 < 1 )
    return 0;
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= v22 )
    {
      v37 = sub_B0D9A8(Instance);
      sub_B0D948(v37, 0LL);
    }
    v25 = *((_QWORD *)v23 + (int)v24 + 4);
    if ( !v25 )
      goto LABEL_29;
    v26 = (_QWORD *)*v20;
    if ( !*v20 )
      goto LABEL_29;
    v27 = *(_DWORD *)(v25 + 16);
    v29 = v26[2];
    v28 = v26[3];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v29;
    *(_QWORD *)&v38.fields.fakeValue = v28;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v38, 0LL);
    if ( v27 == (_DWORD)Instance )
      break;
    v22 = *((_DWORD *)v23 + 6);
    if ( (int)++v24 >= v22 )
      return 0;
  }
  Instance = (void *)*v20;
  if ( !*v20 )
    goto LABEL_29;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (void *)*v20;
    if ( *v20 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0LL);
LABEL_29:
    sub_B0D97C(Instance);
  }
  v33 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v33 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v33->static_fields->infoList;
  v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                                   v31,
                                                                   v32);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v35,
    (Il2CppObject *)v12,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_29;
  v36 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v36 || BYTE4(v36->fields.gameObject) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4216A05 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4216A05 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0

  if ( (byte_4216A08 & 1) == 0 )
  {
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_4216A08 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
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
  ServantProfileEventJoinManager_c *v11; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x19
  ServantProfileEventJoinManager_c *v17; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v19; // x1
  int v20; // w8
  char v21; // w20
  ServantProfileEventJoinManager_c *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w20
  int i; // w24
  ServantProfileEventJoinManager_c *v27; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  int v36; // [xsp+8h] [xbp-58h]

  if ( (byte_4216A0C & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__, v3);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v5);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v6);
    byte_4216A0C = 1;
  }
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v7 = ServantProfileEventJoinManager_TypeInfo;
  }
  v7->static_fields->isModified = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v11 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v11);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v16 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v14, v15);
  System_IO_BinaryReader___ctor(v16, v13, 0LL);
  v17 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v17 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v16 )
    sub_B0D97C(v17);
  SAVE_DATA_VERSION = v17->static_fields->SAVE_DATA_VERSION;
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                             v16,
                             v16->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v19, 0LL) )
  {
    v20 = 165;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
            v16,
            v16->klass->vtable._10_ReadByte.methodPtr);
    v22 = ServantProfileEventJoinManager_TypeInfo;
    if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v22 = ServantProfileEventJoinManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
            v16,
            v16->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v25 >= 1 )
    {
      for ( i = 0; i < v25; ++i )
      {
        v27 = ServantProfileEventJoinManager_TypeInfo;
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v27 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27->static_fields->infoList;
        v29 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B0D974(
                                                                         ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo,
                                                                         v23,
                                                                         v24);
        ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v29, 0LL);
        v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v29 )
          sub_B0D97C(v30);
        v29->fields.servantId = v30;
        v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
                v16,
                v16->klass->vtable._10_ReadByte.methodPtr);
        v29->fields.isNeedToCheckEventJoinNameExist = v31 & 1;
        if ( !infoList )
          sub_B0D97C(v31);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
      }
    }
    v20 = 156;
  }
  v36 = v20;
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v35 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v16, *(_QWORD *)(v35 + 8));
  return v36 == 156;
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
  __int64 v11; // x1
  ServantProfileEventJoinManager___c__DisplayClass11_0_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  ServantProfileEventJoinManager_c *v16; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  peRenderTexture_ChangeLayerObject_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  ServantProfileEventJoinManager_c *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v24; // x22
  int32_t v25; // w8

  if ( (byte_4216A0B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v5);
    sub_B0D8A4(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v6);
    sub_B0D8A4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v7);
    sub_B0D8A4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v8);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v9);
    sub_B0D8A4(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v10);
    sub_B0D8A4(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v11);
    byte_4216A0B = 1;
  }
  v12 = (ServantProfileEventJoinManager___c__DisplayClass11_0_o *)sub_B0D974(
                                                                    ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo,
                                                                    isNeedToChecEventJoinNameExist,
                                                                    method);
  ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v12->fields.servantId = servantId;
  v16 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v16 = ServantProfileEventJoinManager_TypeInfo;
  }
  v16->static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v16->static_fields->infoList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v19 )
  {
    BYTE4(v19->fields.gameObject) = isNeedToChecEventJoinNameExist;
    return;
  }
  v22 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v22 = ServantProfileEventJoinManager_TypeInfo;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22->static_fields->infoList;
  v24 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B0D974(
                                                                   ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo,
                                                                   v20,
                                                                   v21);
  ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v24, 0LL);
  if ( !v24
    || (v25 = v12->fields.servantId,
        v24->fields.isNeedToCheckEventJoinNameExist = isNeedToChecEventJoinNameExist,
        v24->fields.servantId = v25,
        !v23) )
  {
LABEL_16:
    sub_B0D97C(v13);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v23,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
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
  ServantProfileMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantMaster_o *v11; // x19
  UserServantCollectionMaster_o *v12; // x20
  DataManager_o *v13; // x19
  UserServantCollectionEntity_array *List; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v18; // x26
  int v19; // w8
  __int64 v20; // x22
  unsigned int v21; // w28
  __int64 v22; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t v25; // w1
  int max_length; // w8
  int v27; // w25
  char v28; // w28
  UserServantCollectionEntity_o *v29; // x8
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w23
  int32_t v33; // w23
  bool v34; // w1
  int32_t v35; // w0
  int v36; // w8
  DataManager_o *v37; // x24
  unsigned int v38; // w28
  EventServantEntity_o *v39; // x25
  int v40; // w25
  int32_t v41; // w24
  bool IsEventJoin; // w23
  ServantProfileEventJoinManager_c *v43; // x0
  __int64 v44; // x0
  EventServantMaster_o *v45; // [xsp+0h] [xbp-60h]
  DataManager_o *v46; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4216A09 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventServantMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantProfileMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&EventServantEntity_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4216A09 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = (ServantProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  v11 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v11 )
    goto LABEL_69;
  v12 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList(v11, 0LL);
  if ( !v12
    || (v13 = Instance,
        List = UserServantCollectionMaster__getList(v12, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventServantMaster___),
        v45 = (EventServantMaster_o *)Instance,
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                      MasterData_WarQuestSelectionMaster,
                                      21,
                                      v15)) == 0LL )
  {
LABEL_69:
    sub_B0D97C(Instance);
  }
  datalist = Instance->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v18 = 0LL;
    v46 = Instance;
    do
    {
      if ( v18 >= (unsigned int)datalist )
      {
LABEL_70:
        v44 = sub_B0D9A8(Instance);
        sub_B0D948(v44, 0LL);
      }
      if ( !v13 )
        goto LABEL_69;
      v19 = (int)v13->fields.datalist;
      v20 = *((_QWORD *)&Instance->fields.lookup + v18);
      if ( v19 < 1 )
      {
LABEL_25:
        if ( !List )
          goto LABEL_69;
        max_length = List->max_length;
        if ( max_length >= 1 )
        {
          v27 = 0;
          v28 = 0;
          do
          {
            if ( v27 >= (unsigned int)max_length )
              goto LABEL_70;
            v29 = List->m_Items[v27];
            if ( !v29 )
              goto LABEL_69;
            v31 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v48.fields.currentCryptoKey = v31;
            *(_QWORD *)&v48.fields.fakeValue = v30;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v48, 0LL);
            if ( !v20 )
              goto LABEL_69;
            v32 = *(_DWORD *)(v20 + 16);
            if ( (_DWORD)Instance != v32 )
            {
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v32, 0, v16);
              v28 = 1;
            }
            max_length = List->max_length;
            ++v27;
          }
          while ( v27 < max_length );
          if ( (v28 & 1) != 0 )
            goto LABEL_64;
        }
        if ( !v20 )
          goto LABEL_69;
        v33 = *(_DWORD *)(v20 + 16);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v34 = 1;
        v35 = v33;
      }
      else
      {
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= v19 )
            goto LABEL_70;
          v22 = *((_QWORD *)&v13->fields.lookup + (int)v21);
          if ( !v22 )
            goto LABEL_69;
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v47.fields.currentCryptoKey = v24;
          *(_QWORD *)&v47.fields.fakeValue = v23;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL);
          if ( !v20 )
            goto LABEL_69;
          v25 = (int)Instance;
          if ( (_DWORD)Instance == *(_DWORD *)(v20 + 16) )
            break;
          v19 = (int)v13->fields.datalist;
          if ( (int)++v21 >= v19 )
            goto LABEL_25;
        }
        Instance = (DataManager_o *)v45;
        if ( !v45 )
          goto LABEL_69;
        Instance = (DataManager_o *)EventServantMaster__GetEntities(v45, v25, 0LL);
        if ( !Instance )
          goto LABEL_69;
        v36 = (int)Instance->fields.datalist;
        v37 = Instance;
        if ( v36 < 1 )
        {
LABEL_57:
          v40 = 1;
        }
        else
        {
          v38 = 0;
          while ( 1 )
          {
            if ( v38 >= v36 )
              goto LABEL_70;
            Instance = (DataManager_o *)EventServantEntity_TypeInfo;
            v39 = (EventServantEntity_o *)*((_QWORD *)&v37->fields.lookup + (int)v38);
            if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventServantEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
            }
            if ( !v39 )
              goto LABEL_69;
            Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                          v39,
                                          EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              break;
            v36 = (int)v37->fields.datalist;
            if ( (int)++v38 >= v36 )
              goto LABEL_57;
          }
          v40 = 0;
        }
        v41 = *(_DWORD *)(v20 + 16);
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v22, 0LL);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v34 = v40 != 0 && IsEventJoin;
        v35 = v41;
      }
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v35, v34, v16);
LABEL_64:
      Instance = v46;
      ++v18;
      LODWORD(datalist) = v46->fields.datalist;
    }
    while ( (__int64)v18 < (int)datalist );
  }
  v43 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
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
  bool *p_isModified; // x8
  _BOOL4 isModified; // t1
  ManagerConfig_c *v14; // x0
  ServantProfileEventJoinManager_c *v16; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_IO_BinaryWriter_o *v21; // x19
  long double v22; // q0
  ServantProfileEventJoinManager_c *v23; // x0
  __int64 v24; // x0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *v26; // x0
  _BOOL8 v27; // x0
  Il2CppObject *current; // x21
  char v29; // w8
  int v30; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+0h] [xbp-70h] BYREF
  int v36[4]; // [xsp+18h] [xbp-58h] BYREF
  int v37; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4216A0D & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v2);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v9);
    byte_4216A0D = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
  v10 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v10 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  isModified = static_fields->isModified;
  p_isModified = &static_fields->isModified;
  if ( !isModified )
    return 0;
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    p_isModified = &ServantProfileEventJoinManager_TypeInfo->static_fields->isModified;
  }
  *p_isModified = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 0;
  v16 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v16);
  v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v21 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v19, v20);
  System_IO_BinaryWriter___ctor_39036700(v21, v18, 0LL);
  v23 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v22 = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  if ( !v21 )
    sub_B0D97C(v23);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v21->klass->vtable._22_Write.method)(
    v21,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v21->klass[1]._1.image,
    v22);
  v24 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v21->klass->vtable._8_Write.method)(
          v21,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v21->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_B0D97C(v24);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._17_Write.method)(
    v21,
    (unsigned int)infoList->fields._size,
    v21->klass->vtable._18_Write.methodPtr);
  v26 = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v26 )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v38 = v35;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v27 )
      break;
    current = v38.fields.current;
    if ( !v38.fields.current )
      sub_B0D97C(v27);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._17_Write.method)(
      v21,
      LODWORD(v38.fields.current[1].klass),
      v21->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._8_Write.method)(
      v21,
      BYTE4(current[1].klass),
      v21->klass->vtable._9_Write.methodPtr);
  }
  v36[0] = 150;
  v37 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  if ( v36[0] == 150 )
  {
    v29 = 0;
    v37 = 0;
  }
  else
  {
    v29 = 1;
  }
  *(_DWORD *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v29 & 1))) = 162;
  v30 = ++v37;
  klass = v21->klass;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v34 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v21, *(_QWORD *)(v34 + 8));
  if ( v30 && v36[v30 - 1] == 162 )
    v37 = v30 - 1;
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
  if ( (byte_4212244 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_B0D8A4(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                       i);
    byte_4212244 = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0LL )
    sub_B0D97C(this);
  servantId = i->fields.servantId;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
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
    sub_B0D97C(this);
  return i->fields.servantId == this->fields.servantId;
}