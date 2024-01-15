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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct ServantProfileEventJoinManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FBB78 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v8);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6597/*"Fgo_20191115"*/, v10);
    byte_40FBB78 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileEventJoinManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6597/*"Fgo_20191115"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6597/*"Fgo_20191115"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantProfileEventJoinManager_TypeInfo;
  ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  v19 = ServantProfileEventJoinManager_TypeInfo->static_fields;
  v19->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v19->infoList, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_40FBB71 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__, v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v2);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v3);
    byte_40FBB71 = 1;
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
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
      v4 = ServantProfileEventJoinManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
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

  if ( (byte_40FBB70 & 1) == 0 )
  {
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_40FBB70 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantEntity_o **v21; // x20
  WebViewManager_o *Instance; // x0
  ServantProfileMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v24; // x2
  ServantProfileEntity_array *ServantProfileEntities; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  int max_length; // w8
  ServantProfileEntity_array *v29; // x21
  unsigned int v30; // w24
  ServantProfileEntity_o *v31; // x8
  ServantEntity_o *v32; // x9
  int32_t svtId; // w26
  __int64 v34; // x22
  __int64 v35; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  ServantProfileEventJoinManager_c *v41; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x21
  peRenderTexture_ChangeLayerObject_o *v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_40FBB74 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantProfileMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v8);
    sub_B16FFC(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v9);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__, v12);
    sub_B16FFC(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v13);
    byte_40FBB74 = 1;
  }
  v14 = sub_B170CC(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, method, v2, v3, v4);
  ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
    (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_29;
  *(_QWORD *)(v14 + 16) = servantEntity;
  v21 = (ServantEntity_o **)(v14 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 16),
    (System_Int32_array **)servantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (ServantProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  ServantProfileEntities = ServantProfileMaster__GetServantProfileEntities(MasterData_WarQuestSelectionMaster, 21, v24);
  if ( !ServantProfileEntities )
    goto LABEL_29;
  max_length = ServantProfileEntities->max_length;
  v29 = ServantProfileEntities;
  if ( max_length < 1 )
    return 0;
  v30 = 0;
  while ( 1 )
  {
    if ( v30 >= max_length )
    {
      sub_B17100(ServantProfileEntities, v26, v27);
      sub_B170A0();
    }
    v31 = v29->m_Items[v30];
    if ( !v31 )
      goto LABEL_29;
    v32 = *v21;
    if ( !*v21 )
      goto LABEL_29;
    svtId = v31->fields.svtId;
    v35 = *(_QWORD *)&v32->fields.id.fields.currentCryptoKey;
    v34 = *(_QWORD *)&v32->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v35;
    *(_QWORD *)&v45.fields.fakeValue = v34;
    ServantProfileEntities = (ServantProfileEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                             v45,
                                                             0LL);
    if ( svtId == (_DWORD)ServantProfileEntities )
      break;
    max_length = v29->max_length;
    if ( (int)++v30 >= max_length )
      return 0;
  }
  if ( !*v21 )
    goto LABEL_29;
  if ( ServantEntity__GetIsMasterForEventNameComplete(*v21, 0LL) )
  {
    if ( *v21 )
      return ServantEntity__GetIsNeedToCheckEventJoinName(*v21, 0LL);
LABEL_29:
    sub_B170D4();
  }
  v41 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v41 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v41->static_fields->infoList;
  v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                                   v37,
                                                                   v38,
                                                                   v39,
                                                                   v40);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v43,
    (Il2CppObject *)v14,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_29;
  v44 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v43,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v44 || BYTE4(v44->fields.gameObject) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40FBB6F & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40FBB6F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0

  if ( (byte_40FBB72 & 1) == 0 )
  {
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_40FBB72 = 1;
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  ServantProfileEventJoinManager_c *v19; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v21; // x1
  int v22; // w8
  char v23; // w20
  ServantProfileEventJoinManager_c *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int v29; // w20
  int i; // w24
  ServantProfileEventJoinManager_c *v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v33; // x22
  int32_t v34; // w0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  int v39; // [xsp+8h] [xbp-58h]

  if ( (byte_40FBB76 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v5);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v6);
    byte_40FBB76 = 1;
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
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  v19 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v19 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v18 )
    sub_B170D4();
  SAVE_DATA_VERSION = v19->static_fields->SAVE_DATA_VERSION;
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v21, 0LL) )
  {
    v22 = 165;
  }
  else
  {
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
            v18,
            v18->klass->vtable._10_ReadByte.methodPtr);
    v24 = ServantProfileEventJoinManager_TypeInfo;
    if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v24 = ServantProfileEventJoinManager_TypeInfo;
    }
    v24->static_fields->isContinueDevice = v23 & 1;
    v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
            v18,
            v18->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v29 >= 1 )
    {
      for ( i = 0; i < v29; ++i )
      {
        v31 = ServantProfileEventJoinManager_TypeInfo;
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v31 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->static_fields->infoList;
        v33 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B170CC(
                                                                         ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo,
                                                                         v25,
                                                                         v26,
                                                                         v27,
                                                                         v28);
        ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v33, 0LL);
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v33 )
          sub_B170D4();
        v33->fields.servantId = v34;
        v33->fields.isNeedToCheckEventJoinNameExist = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
                                                        v18,
                                                        v18->klass->vtable._10_ReadByte.methodPtr) & 1;
        if ( !infoList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
      }
    }
    v22 = 156;
  }
  v39 = v22;
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
  return v39 == 156;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ServantProfileEventJoinManager___c__DisplayClass11_0_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantProfileEventJoinManager_c *v19; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x22
  peRenderTexture_ChangeLayerObject_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  ServantProfileEventJoinManager_c *v27; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v29; // x22
  int32_t v30; // w8

  if ( (byte_40FBB75 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v7);
    sub_B16FFC(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v8);
    sub_B16FFC(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v9);
    sub_B16FFC(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v10);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v11);
    sub_B16FFC(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v12);
    sub_B16FFC(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v13);
    byte_40FBB75 = 1;
  }
  v14 = (ServantProfileEventJoinManager___c__DisplayClass11_0_o *)sub_B170CC(
                                                                    ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo,
                                                                    isNeedToChecEventJoinNameExist,
                                                                    method,
                                                                    v3,
                                                                    v4);
  ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v14->fields.servantId = servantId;
  v19 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v19 = ServantProfileEventJoinManager_TypeInfo;
  }
  v19->static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v19->static_fields->infoList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo,
                                                                   v15,
                                                                   v16,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  v22 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v22 )
  {
    BYTE4(v22->fields.gameObject) = isNeedToChecEventJoinNameExist;
    return;
  }
  v27 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v27 = ServantProfileEventJoinManager_TypeInfo;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27->static_fields->infoList;
  v29 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B170CC(
                                                                   ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo,
                                                                   v23,
                                                                   v24,
                                                                   v25,
                                                                   v26);
  ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v29, 0LL);
  if ( !v29
    || (v30 = v14->fields.servantId,
        v29->fields.isNeedToCheckEventJoinNameExist = isNeedToChecEventJoinNameExist,
        v29->fields.servantId = v30,
        !v28) )
  {
LABEL_16:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v28,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
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
  WebViewManager_o *Instance; // x0
  ServantProfileMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v11; // x0
  UserServantMaster_o *v12; // x19
  WebViewManager_o *v13; // x0
  WarQuestSelectionMaster_o *v14; // x0
  UserServantCollectionMaster_o *v15; // x20
  UserServantEntity_array *OrganizationList; // x0
  UserServantEntity_array *v17; // x19
  UserServantCollectionEntity_array *List; // x20
  WebViewManager_o *v19; // x0
  const MethodInfo *v20; // x2
  void *ServantProfileEntities; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x8
  unsigned __int64 v25; // x26
  int max_length; // w8
  __int64 v27; // x22
  unsigned int v28; // w28
  UserServantEntity_o *v29; // x23
  __int64 v30; // x24
  __int64 v31; // x25
  int v32; // w8
  int v33; // w25
  char v34; // w28
  UserServantCollectionEntity_o *v35; // x8
  __int64 v36; // x23
  __int64 v37; // x24
  int32_t v38; // w23
  int32_t v39; // w23
  bool v40; // w1
  int32_t v41; // w0
  int v42; // w8
  void *v43; // x24
  unsigned int v44; // w28
  EventServantEntity_o *v45; // x25
  int v46; // w25
  int32_t v47; // w24
  bool IsEventJoin; // w23
  ServantProfileEventJoinManager_c *v49; // x0
  EventServantMaster_o *v50; // [xsp+0h] [xbp-60h]
  _DWORD *v51; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40FBB73 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantProfileMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&EventServantEntity_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FBB73 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = (ServantProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_69;
  v12 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v11,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_69;
  v14 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v13,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v12
    || (v15 = (UserServantCollectionMaster_o *)v14,
        OrganizationList = UserServantMaster__getOrganizationList(v12, 0LL),
        !v15)
    || (v17 = OrganizationList,
        List = UserServantCollectionMaster__getList(v15, 2, 0LL),
        (v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v50 = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v19,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (ServantProfileEntities = ServantProfileMaster__GetServantProfileEntities(
                                   MasterData_WarQuestSelectionMaster,
                                   21,
                                   v20)) == 0LL )
  {
LABEL_69:
    sub_B170D4();
  }
  v24 = *((_QWORD *)ServantProfileEntities + 3);
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    v51 = ServantProfileEntities;
    do
    {
      if ( v25 >= (unsigned int)v24 )
      {
LABEL_70:
        sub_B17100(ServantProfileEntities, v22, v23);
        sub_B170A0();
      }
      if ( !v17 )
        goto LABEL_69;
      max_length = v17->max_length;
      v27 = *((_QWORD *)ServantProfileEntities + v25 + 4);
      if ( max_length < 1 )
      {
LABEL_25:
        if ( !List )
          goto LABEL_69;
        v32 = List->max_length;
        if ( v32 >= 1 )
        {
          v33 = 0;
          v34 = 0;
          do
          {
            if ( v33 >= (unsigned int)v32 )
              goto LABEL_70;
            v35 = List->m_Items[v33];
            if ( !v35 )
              goto LABEL_69;
            v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
            v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v53.fields.currentCryptoKey = v37;
            *(_QWORD *)&v53.fields.fakeValue = v36;
            ServantProfileEntities = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                               v53,
                                               0LL);
            if ( !v27 )
              goto LABEL_69;
            v38 = *(_DWORD *)(v27 + 16);
            if ( (_DWORD)ServantProfileEntities != v38 )
            {
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v38, 0, v23);
              v34 = 1;
            }
            v32 = List->max_length;
            ++v33;
          }
          while ( v33 < v32 );
          if ( (v34 & 1) != 0 )
            goto LABEL_64;
        }
        if ( !v27 )
          goto LABEL_69;
        v39 = *(_DWORD *)(v27 + 16);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v40 = 1;
        v41 = v39;
      }
      else
      {
        v28 = 0;
        while ( 1 )
        {
          if ( v28 >= max_length )
            goto LABEL_70;
          v29 = v17->m_Items[v28];
          if ( !v29 )
            goto LABEL_69;
          v31 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
          v30 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v52.fields.currentCryptoKey = v31;
          *(_QWORD *)&v52.fields.fakeValue = v30;
          ServantProfileEntities = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
          if ( !v27 )
            goto LABEL_69;
          v22 = (unsigned int)ServantProfileEntities;
          if ( (_DWORD)ServantProfileEntities == *(_DWORD *)(v27 + 16) )
            break;
          max_length = v17->max_length;
          if ( (int)++v28 >= max_length )
            goto LABEL_25;
        }
        if ( !v50 )
          goto LABEL_69;
        ServantProfileEntities = EventServantMaster__GetEntities(v50, (int32_t)ServantProfileEntities, 0LL);
        if ( !ServantProfileEntities )
          goto LABEL_69;
        v42 = *((_DWORD *)ServantProfileEntities + 6);
        v43 = ServantProfileEntities;
        if ( v42 < 1 )
        {
LABEL_57:
          v46 = 1;
        }
        else
        {
          v44 = 0;
          while ( 1 )
          {
            if ( v44 >= v42 )
              goto LABEL_70;
            v45 = (EventServantEntity_o *)*((_QWORD *)v43 + (int)v44 + 4);
            if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventServantEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
            }
            if ( !v45 )
              goto LABEL_69;
            ServantProfileEntities = (void *)EventServantEntity__GetIsCondClear(
                                               v45,
                                               EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                               0LL);
            if ( ((unsigned __int8)ServantProfileEntities & 1) != 0 )
              break;
            v42 = *((_DWORD *)v43 + 6);
            if ( (int)++v44 >= v42 )
              goto LABEL_57;
          }
          v46 = 0;
        }
        v47 = *(_DWORD *)(v27 + 16);
        IsEventJoin = UserServantEntity__IsEventJoin(v29, 0LL);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v40 = v46 != 0 && IsEventJoin;
        v41 = v47;
      }
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v41, v40, v23);
LABEL_64:
      ServantProfileEntities = v51;
      ++v25;
      LODWORD(v24) = v51[6];
    }
    while ( (__int64)v25 < (int)v24 );
  }
  v49 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v49);
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
  __int64 v21; // x3
  __int64 v22; // x4
  System_IO_BinaryWriter_o *v23; // x19
  long double v24; // q0
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *v26; // x0
  Il2CppObject *current; // x21
  char v28; // w8
  int v29; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+0h] [xbp-70h] BYREF
  int v35[4]; // [xsp+18h] [xbp-58h] BYREF
  int v36; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_40FBB77 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v7);
    sub_B16FFC(&ManagerConfig_TypeInfo, v8);
    sub_B16FFC(&ServantProfileEventJoinManager_TypeInfo, v9);
    byte_40FBB77 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v36 = 0;
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
  v23 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v19, v20, v21, v22);
  System_IO_BinaryWriter___ctor_39195976(v23, v18, 0LL);
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v24 = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  if ( !v23 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v23->klass->vtable._22_Write.method)(
    v23,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v23->klass[1]._1.image,
    v24);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)infoList->fields._size,
    v23->klass->vtable._18_Write.methodPtr);
  v26 = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v26 )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v37 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__) )
  {
    current = v37.fields.current;
    if ( !v37.fields.current )
      sub_B170D4();
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
      v23,
      LODWORD(v37.fields.current[1].klass),
      v23->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
      v23,
      BYTE4(current[1].klass),
      v23->klass->vtable._9_Write.methodPtr);
  }
  v35[0] = 150;
  v36 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  if ( v35[0] == 150 )
  {
    v28 = 0;
    v36 = 0;
  }
  else
  {
    v28 = 1;
  }
  *(_DWORD *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v28 & 1))) = 162;
  v29 = ++v36;
  klass = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v33 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v33)(v23, *(_QWORD *)(v33 + 8));
  if ( v29 && v35[v29 - 1] == 162 )
    v36 = v29 - 1;
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
  struct ServantEntity_o *servantEntity; // x8
  int32_t servantId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40F7641 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, i);
    byte_40F7641 = 1;
  }
  if ( !i || (servantEntity = this->fields.servantEntity) == 0LL )
    sub_B170D4();
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
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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
    sub_B170D4();
  return i->fields.servantId == this->fields.servantId;
}