void __fastcall ServantProfileEventJoinManager___cctor(const MethodInfo *method)
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
  ServantProfileEventJoinManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct ServantProfileEventJoinManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EAA2E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
      v8,
      v9,
      v10);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6700/*"Fgo_20191115"*/, v14, v15, v16);
    byte_42EAA2E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileEventJoinManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6700/*"Fgo_20191115"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6700/*"Fgo_20191115"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = ServantProfileEventJoinManager_TypeInfo;
  ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  v21 = ServantProfileEventJoinManager_TypeInfo->static_fields;
  v21->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v21->infoList, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ServantProfileEventJoinManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x8

  if ( (byte_42EAA27 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__,
      v1,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v7, v8, v9);
    byte_42EAA27 = 1;
  }
  v10 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v10 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->infoList;
  if ( !infoList )
    goto LABEL_16;
  if ( infoList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        infoList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
      v10 = ServantProfileEventJoinManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = ServantProfileEventJoinManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModified = 1;
}


void __fastcall ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantProfileEventJoinManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42EAA26 & 1) == 0 )
  {
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v1, v2, v3);
    byte_42EAA26 = 1;
  }
  v4 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


bool __fastcall ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x19
  void *Instance; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  _QWORD *v38; // x20
  const MethodInfo *v39; // x2
  int v40; // w8
  void *v41; // x21
  unsigned int v42; // w24
  __int64 v43; // x8
  _QWORD *v44; // x9
  int v45; // w26
  __int64 v46; // x22
  __int64 v47; // x23
  ServantProfileEventJoinManager_c *v49; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v51; // x21
  peRenderTexture_ChangeLayerObject_o *v52; // x0
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_42EAA2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantProfileMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(
      &Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v26, v27, v28);
    byte_42EAA2A = 1;
  }
  v29 = sub_B5D694(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
    (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_29;
  *(_QWORD *)(v29 + 16) = servantEntity;
  v38 = (_QWORD *)(v29 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v29 + 16),
    (System_Int32_array **)servantEntity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, v39);
  if ( !Instance )
    goto LABEL_29;
  v40 = *((_DWORD *)Instance + 6);
  v41 = Instance;
  if ( v40 < 1 )
    return 0;
  v42 = 0;
  while ( 1 )
  {
    if ( v42 >= v40 )
    {
      v53 = sub_B5D6C8(Instance);
      sub_B5D668(v53, 0LL);
    }
    v43 = *((_QWORD *)v41 + (int)v42 + 4);
    if ( !v43 )
      goto LABEL_29;
    v44 = (_QWORD *)*v38;
    if ( !*v38 )
      goto LABEL_29;
    v45 = *(_DWORD *)(v43 + 16);
    v47 = v44[2];
    v46 = v44[3];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = v47;
    *(_QWORD *)&v54.fields.fakeValue = v46;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v54, 0LL);
    if ( v45 == (_DWORD)Instance )
      break;
    v40 = *((_DWORD *)v41 + 6);
    if ( (int)++v42 >= v40 )
      return 0;
  }
  Instance = (void *)*v38;
  if ( !*v38 )
    goto LABEL_29;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (void *)*v38;
    if ( *v38 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0LL);
LABEL_29:
    sub_B5D69C(Instance, v31);
  }
  v49 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v49 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v49->static_fields->infoList;
  v51 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v51,
    (Il2CppObject *)v29,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_29;
  v52 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v51,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v52 || BYTE4(v52->fields.gameObject) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_42EAA25 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EAA25 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantProfileEventJoinManager_c *v4; // x0

  if ( (byte_42EAA28 & 1) == 0 )
  {
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v1, v2, v3);
    byte_42EAA28 = 1;
  }
  v4 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
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
  ServantProfileEventJoinManager_c *v19; // x0
  ManagerConfig_c *v20; // x0
  ServantProfileEventJoinManager_c *v23; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x1
  ServantProfileEventJoinManager_c *v28; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v30; // x1
  __int64 v31; // x3
  int v32; // w8
  char v33; // w20
  ServantProfileEventJoinManager_c *v34; // x0
  int v35; // w20
  int i; // w24
  ServantProfileEventJoinManager_c *v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x0
  __int64 v43; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  int v48; // [xsp+8h] [xbp-58h]

  if ( (byte_42EAA2C & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v16, v17, v18);
    byte_42EAA2C = 1;
  }
  v19 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v19 = ServantProfileEventJoinManager_TypeInfo;
  }
  v19->static_fields->isModified = 0;
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    return 1;
  v23 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v23);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  v28 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v28 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v26 )
    sub_B5D69C(v28, v27);
  SAVE_DATA_VERSION = v28->static_fields->SAVE_DATA_VERSION;
  v30 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v30, 0LL) )
  {
    v32 = 165;
  }
  else
  {
    v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
            v26,
            v26->klass->vtable._10_ReadByte.methodPtr);
    v34 = ServantProfileEventJoinManager_TypeInfo;
    if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v34 = ServantProfileEventJoinManager_TypeInfo;
    }
    v34->static_fields->isContinueDevice = v33 & 1;
    v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
            v26,
            v26->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v35 >= 1 )
    {
      for ( i = 0; i < v35; ++i )
      {
        v37 = ServantProfileEventJoinManager_TypeInfo;
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v37 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37->static_fields->infoList;
        v39 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B5D694(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v39, 0LL);
        v40 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v39 )
          sub_B5D69C(v40, v41);
        v39->fields.servantId = v40;
        v42 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
                v26,
                v26->klass->vtable._10_ReadByte.methodPtr);
        v39->fields.isNeedToCheckEventJoinNameExist = v42 & 1;
        if ( !infoList )
          sub_B5D69C(v42, v43);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
      }
    }
    v32 = 156;
  }
  v48 = v32;
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
  return v48 == 156;
}


void __fastcall ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  ServantProfileEventJoinManager___c__DisplayClass11_0_o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  ServantProfileEventJoinManager_c *v30; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x22
  peRenderTexture_ChangeLayerObject_o *v33; // x0
  ServantProfileEventJoinManager_c *v34; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v36; // x22
  int32_t v37; // w8

  if ( (byte_42EAA2B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v24, v25, v26);
    byte_42EAA2B = 1;
  }
  v27 = (ServantProfileEventJoinManager___c__DisplayClass11_0_o *)sub_B5D694(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_16;
  v27->fields.servantId = servantId;
  v30 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v30 = ServantProfileEventJoinManager_TypeInfo;
  }
  v30->static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v30->static_fields->infoList;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v27,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  v33 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v33 )
  {
    BYTE4(v33->fields.gameObject) = isNeedToChecEventJoinNameExist;
    return;
  }
  v34 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v34 = ServantProfileEventJoinManager_TypeInfo;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->static_fields->infoList;
  v36 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B5D694(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v36, 0LL);
  if ( !v36
    || (v37 = v27->fields.servantId,
        v36->fields.isNeedToCheckEventJoinNameExist = isNeedToChecEventJoinNameExist,
        v36->fields.servantId = v37,
        !v35) )
  {
LABEL_16:
    sub_B5D69C(v28, v29);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
}


void __fastcall ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  ServantProfileMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantMaster_o *v28; // x19
  UserServantCollectionMaster_o *v29; // x20
  DataManager_o *v30; // x19
  UserServantCollectionEntity_array *List; // x20
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v35; // x26
  int v36; // w8
  __int64 v37; // x22
  unsigned int v38; // w28
  __int64 v39; // x23
  __int64 v40; // x24
  __int64 v41; // x25
  int max_length; // w8
  int v43; // w25
  char v44; // w28
  UserServantCollectionEntity_o *v45; // x8
  __int64 v46; // x23
  __int64 v47; // x24
  int32_t v48; // w23
  int32_t v49; // w23
  bool v50; // w1
  int32_t v51; // w0
  int v52; // w8
  DataManager_o *v53; // x24
  unsigned int v54; // w28
  EventServantEntity_o *v55; // x25
  int v56; // w25
  int32_t v57; // w24
  bool IsEventJoin; // w23
  ServantProfileEventJoinManager_c *v59; // x0
  __int64 v60; // x0
  EventServantMaster_o *v61; // [xsp+0h] [xbp-60h]
  DataManager_o *v62; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42EAA29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventServantMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantProfileMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11, v12);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EAA29 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = (ServantProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  v28 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v28 )
    goto LABEL_69;
  v29 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList(v28, 0LL);
  if ( !v29
    || (v30 = Instance,
        List = UserServantCollectionMaster__getList(v29, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___),
        v61 = (EventServantMaster_o *)Instance,
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                      MasterData_WarQuestSelectionMaster,
                                      21,
                                      v32)) == 0LL )
  {
LABEL_69:
    sub_B5D69C(Instance, v26);
  }
  datalist = Instance->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v35 = 0LL;
    v62 = Instance;
    do
    {
      if ( v35 >= (unsigned int)datalist )
      {
LABEL_70:
        v60 = sub_B5D6C8(Instance);
        sub_B5D668(v60, 0LL);
      }
      if ( !v30 )
        goto LABEL_69;
      v36 = (int)v30->fields.datalist;
      v37 = *((_QWORD *)&Instance->fields.lookup + v35);
      if ( v36 < 1 )
      {
LABEL_25:
        if ( !List )
          goto LABEL_69;
        max_length = List->max_length;
        if ( max_length >= 1 )
        {
          v43 = 0;
          v44 = 0;
          do
          {
            if ( v43 >= (unsigned int)max_length )
              goto LABEL_70;
            v45 = List->m_Items[v43];
            if ( !v45 )
              goto LABEL_69;
            v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
            v46 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v64.fields.currentCryptoKey = v47;
            *(_QWORD *)&v64.fields.fakeValue = v46;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
            if ( !v37 )
              goto LABEL_69;
            v48 = *(_DWORD *)(v37 + 16);
            if ( (_DWORD)Instance != v48 )
            {
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v48, 0, v33);
              v44 = 1;
            }
            max_length = List->max_length;
            ++v43;
          }
          while ( v43 < max_length );
          if ( (v44 & 1) != 0 )
            goto LABEL_64;
        }
        if ( !v37 )
          goto LABEL_69;
        v49 = *(_DWORD *)(v37 + 16);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v50 = 1;
        v51 = v49;
      }
      else
      {
        v38 = 0;
        while ( 1 )
        {
          if ( v38 >= v36 )
            goto LABEL_70;
          v39 = *((_QWORD *)&v30->fields.lookup + (int)v38);
          if ( !v39 )
            goto LABEL_69;
          v41 = *(_QWORD *)(v39 + 80);
          v40 = *(_QWORD *)(v39 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v63.fields.currentCryptoKey = v41;
          *(_QWORD *)&v63.fields.fakeValue = v40;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
          if ( !v37 )
            goto LABEL_69;
          v26 = (unsigned int)Instance;
          if ( (_DWORD)Instance == *(_DWORD *)(v37 + 16) )
            break;
          v36 = (int)v30->fields.datalist;
          if ( (int)++v38 >= v36 )
            goto LABEL_25;
        }
        Instance = (DataManager_o *)v61;
        if ( !v61 )
          goto LABEL_69;
        Instance = (DataManager_o *)EventServantMaster__GetEntities(v61, v26, 0LL);
        if ( !Instance )
          goto LABEL_69;
        v52 = (int)Instance->fields.datalist;
        v53 = Instance;
        if ( v52 < 1 )
        {
LABEL_57:
          v56 = 1;
        }
        else
        {
          v54 = 0;
          while ( 1 )
          {
            if ( v54 >= v52 )
              goto LABEL_70;
            Instance = (DataManager_o *)EventServantEntity_TypeInfo;
            v55 = (EventServantEntity_o *)*((_QWORD *)&v53->fields.lookup + (int)v54);
            if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventServantEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
            }
            if ( !v55 )
              goto LABEL_69;
            Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                          v55,
                                          EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              break;
            v52 = (int)v53->fields.datalist;
            if ( (int)++v54 >= v52 )
              goto LABEL_57;
          }
          v56 = 0;
        }
        v57 = *(_DWORD *)(v37 + 16);
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v39, 0LL);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v50 = v56 != 0 && IsEventJoin;
        v51 = v57;
      }
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v51, v50, v33);
LABEL_64:
      Instance = v62;
      ++v35;
      LODWORD(datalist) = v62->fields.datalist;
    }
    while ( (__int64)v35 < (int)datalist );
  }
  v59 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v59);
}


bool __fastcall ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
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
  ServantProfileEventJoinManager_c *v28; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  bool *p_isModified; // x8
  _BOOL4 isModified; // t1
  ManagerConfig_c *v32; // x0
  ServantProfileEventJoinManager_c *v34; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v36; // x20
  System_IO_BinaryWriter_o *v37; // x19
  __int64 v38; // x1
  long double v39; // q0
  ServantProfileEventJoinManager_c *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  __int64 v44; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *v45; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *current; // x21
  __int64 v49; // x3
  char v50; // w8
  int v51; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 v55; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+0h] [xbp-70h] BYREF
  int v57[4]; // [xsp+18h] [xbp-58h] BYREF
  int v58; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42EAA2D & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v4,
      v5,
      v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v19,
      v20,
      v21);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v25, v26, v27);
    byte_42EAA2D = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v58 = 0;
  v28 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v28 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v28->static_fields;
  isModified = static_fields->isModified;
  p_isModified = &static_fields->isModified;
  if ( !isModified )
    return 0;
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    p_isModified = &ServantProfileEventJoinManager_TypeInfo->static_fields->isModified;
  }
  *p_isModified = 0;
  v32 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v32 = ManagerConfig_TypeInfo;
  }
  if ( v32->static_fields->UseMock )
    return 0;
  v34 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v34);
  v36 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v37 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v37, v36, 0LL);
  v40 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v39 = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  if ( !v37 )
    sub_B5D69C(v40, v38);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v37->klass->vtable._22_Write.method)(
    v37,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v37->klass[1]._1.image,
    v39);
  v41 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v37->klass->vtable._8_Write.method)(
          v37,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v37->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_B5D69C(v41, v42);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v37->klass->vtable._17_Write.method)(
    v37,
    (unsigned int)infoList->fields._size,
    v37->klass->vtable._18_Write.methodPtr);
  v45 = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v45 )
    sub_B5D69C(0LL, v44);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v59 = v56;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v46 )
      break;
    current = v59.fields.current;
    if ( !v59.fields.current )
      sub_B5D69C(v46, v47);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v37->klass->vtable._17_Write.method)(
      v37,
      LODWORD(v59.fields.current[1].klass),
      v37->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v37->klass->vtable._8_Write.method)(
      v37,
      BYTE4(current[1].klass),
      v37->klass->vtable._9_Write.methodPtr);
  }
  v57[0] = 150;
  v58 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  if ( v57[0] == 150 )
  {
    v50 = 0;
    v58 = 0;
  }
  else
  {
    v50 = 1;
  }
  *(_DWORD *)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v50 & 1))) = 162;
  v51 = ++v58;
  klass = v37->klass;
  if ( *(_WORD *)&v37->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      p_offset += 4;
      if ( v53 >= *(unsigned __int16 *)&v37->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v55 = sub_AF54C0(v37, System_IDisposable_TypeInfo, 0LL, v49);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v55)(v37, *(_QWORD *)(v55 + 8));
  if ( v51 && v57[v51 - 1] == 162 )
    v58 = v51 - 1;
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
  __int64 v3; // x3
  ServantProfileEventJoinManager___c__DisplayClass10_0_o *v5; // x20
  struct ServantEntity_o *servantEntity; // x8
  int32_t servantId; // w21
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E5D76 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_B5D5C4(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                       (_DWORD)i,
                                                                       (_DWORD)method,
                                                                       v3);
    byte_42E5D76 = 1;
  }
  if ( !i || (servantEntity = v5->fields.servantEntity) == 0LL )
    sub_B5D69C(this, i);
  servantId = i->fields.servantId;
  v9 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
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
    sub_B5D69C(this, 0LL);
  return i->fields.servantId == this->fields.servantId;
}