void __fastcall ServantProfileEventJoinManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  ServantProfileEventJoinManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct ServantProfileEventJoinManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438D110 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    sub_B775C4(&StringLiteral_6769/*"Fgo_20191115"*/);
    byte_438D110 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileEventJoinManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6769/*"Fgo_20191115"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6769/*"Fgo_20191115"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantProfileEventJoinManager_TypeInfo;
  ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  v11 = ServantProfileEventJoinManager_TypeInfo->static_fields;
  v11->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v10;
  sub_B77560((BattleServantConfConponent_o *)&v11->infoList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall ServantProfileEventJoinManager___ctor(ServantProfileEventJoinManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileEventJoinManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x8

  if ( (byte_438D109 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    byte_438D109 = 1;
  }
  v2 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->infoList;
  if ( !infoList )
    goto LABEL_16;
  if ( infoList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantProfileEventJoinManager_TypeInfo->static_fields->infoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        infoList,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
      v2 = ServantProfileEventJoinManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileEventJoinManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModified = 1;
}


void __fastcall ServantProfileEventJoinManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_438D108 & 1) == 0 )
  {
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    byte_438D108 = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


bool __fastcall ServantProfileEventJoinManager__GetIsNeedToCheckEventJoinName(
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x19
  void *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  _QWORD *v12; // x20
  const MethodInfo *v13; // x2
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w24
  __int64 v17; // x8
  _QWORD *v18; // x9
  int v19; // w26
  __int64 v20; // x22
  __int64 v21; // x23
  ServantProfileEventJoinManager_c *v23; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x21
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_438D10C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
    sub_B775C4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__);
    sub_B775C4(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
    byte_438D10C = 1;
  }
  v3 = sub_B77694(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
    (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 16) = servantEntity;
  v12 = (_QWORD *)(v3 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)servantEntity, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = ServantProfileMaster__GetServantProfileEntities((ServantProfileMaster_o *)Instance, 21, v13);
  if ( !Instance )
    goto LABEL_29;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= v14 )
    {
      v27 = sub_B776C8(Instance);
      sub_B77668(v27, 0LL);
    }
    v17 = *((_QWORD *)v15 + (int)v16 + 4);
    if ( !v17 )
      goto LABEL_29;
    v18 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_29;
    v19 = *(_DWORD *)(v17 + 16);
    v21 = v18[2];
    v20 = v18[3];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v28.fields.currentCryptoKey = v21;
    *(_QWORD *)&v28.fields.fakeValue = v20;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
    if ( v19 == (_DWORD)Instance )
      break;
    v14 = *((_DWORD *)v15 + 6);
    if ( (int)++v16 >= v14 )
      return 0;
  }
  Instance = (void *)*v12;
  if ( !*v12 )
    goto LABEL_29;
  if ( ServantEntity__GetIsMasterForEventNameComplete((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (void *)*v12;
    if ( *v12 )
      return ServantEntity__GetIsNeedToCheckEventJoinName((ServantEntity_o *)Instance, 0LL);
LABEL_29:
    sub_B7769C(Instance, v5);
  }
  v23 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v23 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v23->static_fields->infoList;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v3,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_29;
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v26 || BYTE4(v26->fields.gameObject) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438D107 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438D107 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0

  if ( (byte_438D10A & 1) == 0 )
  {
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    byte_438D10A = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall ServantProfileEventJoinManager__ReadData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  ServantProfileEventJoinManager_c *v5; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x1
  ServantProfileEventJoinManager_c *v10; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v12; // x1
  int v13; // w8
  char v14; // w20
  ServantProfileEventJoinManager_c *v15; // x0
  int v16; // w20
  int i; // w24
  ServantProfileEventJoinManager_c *v18; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  int v29; // [xsp+8h] [xbp-58h]

  if ( (byte_438D10E & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    byte_438D10E = 1;
  }
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
  v1->static_fields->isModified = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v5 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v5);
  ServantProfileEventJoinManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  v10 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v10 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v8 )
    sub_B7769C(v10, v9);
  SAVE_DATA_VERSION = v10->static_fields->SAVE_DATA_VERSION;
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v12, 0LL) )
  {
    v13 = 165;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v15 = ServantProfileEventJoinManager_TypeInfo;
    if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v15 = ServantProfileEventJoinManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v16 >= 1 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v18 = ServantProfileEventJoinManager_TypeInfo;
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v18 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18->static_fields->infoList;
        v20 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B77694(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v20, 0LL);
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v20 )
          sub_B7769C(v21, v22);
        v20->fields.servantId = v21;
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
                v8,
                v8->klass->vtable._10_ReadByte.methodPtr);
        v20->fields.isNeedToCheckEventJoinNameExist = v23 & 1;
        if ( !infoList )
          sub_B7769C(v23, v24);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
      }
    }
    v13 = 156;
  }
  v29 = v13;
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v28 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v8, *(_QWORD *)(v28 + 8));
  return v29 == 156;
}


void __fastcall ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(
        int32_t servantId,
        bool isNeedToChecEventJoinNameExist,
        const MethodInfo *method)
{
  ServantProfileEventJoinManager___c__DisplayClass11_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  ServantProfileEventJoinManager_c *v8; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v10; // x22
  peRenderTexture_ChangeLayerObject_o *v11; // x0
  ServantProfileEventJoinManager_c *v12; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v14; // x22
  int32_t v15; // w8

  if ( (byte_438D10D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
    sub_B775C4(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
    sub_B775C4(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    sub_B775C4(&Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__);
    sub_B775C4(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
    byte_438D10D = 1;
  }
  v5 = (ServantProfileEventJoinManager___c__DisplayClass11_0_o *)sub_B77694(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  v5->fields.servantId = servantId;
  v8 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v8 = ServantProfileEventJoinManager_TypeInfo;
  }
  v8->static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v8->static_fields->infoList;
  v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  v11 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v10,
          (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v11 )
  {
    BYTE4(v11->fields.gameObject) = isNeedToChecEventJoinNameExist;
    return;
  }
  v12 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v12 = ServantProfileEventJoinManager_TypeInfo;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12->static_fields->infoList;
  v14 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B77694(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v14, 0LL);
  if ( !v14
    || (v15 = v5->fields.servantId,
        v14->fields.isNeedToCheckEventJoinNameExist = isNeedToChecEventJoinNameExist,
        v14->fields.servantId = v15,
        !v13) )
  {
LABEL_16:
    sub_B7769C(v6, v7);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
}


void __fastcall ServantProfileEventJoinManager__UpdateProfileServantEventJoin(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  ServantProfileMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantMaster_o *v4; // x19
  UserServantCollectionMaster_o *v5; // x20
  DataManager_o *v6; // x19
  UserServantCollectionEntity_array *List; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v11; // x26
  int v12; // w8
  __int64 v13; // x22
  unsigned int v14; // w28
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  int max_length; // w8
  int v19; // w25
  char v20; // w28
  UserServantCollectionEntity_o *v21; // x8
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w23
  int32_t v25; // w23
  bool v26; // w1
  int32_t v27; // w0
  int v28; // w8
  DataManager_o *v29; // x24
  unsigned int v30; // w28
  EventServantEntity_o *v31; // x25
  int v32; // w25
  int32_t v33; // w24
  bool IsEventJoin; // w23
  ServantProfileEventJoinManager_c *v35; // x0
  __int64 v36; // x0
  EventServantMaster_o *v37; // [xsp+0h] [xbp-60h]
  DataManager_o *v38; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_438D10B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&EventServantEntity_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D10B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = (ServantProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  v4 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v4 )
    goto LABEL_69;
  v5 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList(v4, 0LL);
  if ( !v5
    || (v6 = Instance,
        List = UserServantCollectionMaster__getList(v5, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventServantMaster___),
        v37 = (EventServantMaster_o *)Instance,
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                      MasterData_WarQuestSelectionMaster,
                                      21,
                                      v8)) == 0LL )
  {
LABEL_69:
    sub_B7769C(Instance, v2);
  }
  datalist = Instance->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v11 = 0LL;
    v38 = Instance;
    do
    {
      if ( v11 >= (unsigned int)datalist )
      {
LABEL_70:
        v36 = sub_B776C8(Instance);
        sub_B77668(v36, 0LL);
      }
      if ( !v6 )
        goto LABEL_69;
      v12 = (int)v6->fields.datalist;
      v13 = *((_QWORD *)&Instance->fields.lookup + v11);
      if ( v12 < 1 )
      {
LABEL_25:
        if ( !List )
          goto LABEL_69;
        max_length = List->max_length;
        if ( max_length >= 1 )
        {
          v19 = 0;
          v20 = 0;
          do
          {
            if ( v19 >= (unsigned int)max_length )
              goto LABEL_70;
            v21 = List->m_Items[v19];
            if ( !v21 )
              goto LABEL_69;
            v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
            v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = v23;
            *(_QWORD *)&v40.fields.fakeValue = v22;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v40, 0LL);
            if ( !v13 )
              goto LABEL_69;
            v24 = *(_DWORD *)(v13 + 16);
            if ( (_DWORD)Instance != v24 )
            {
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v24, 0, v9);
              v20 = 1;
            }
            max_length = List->max_length;
            ++v19;
          }
          while ( v19 < max_length );
          if ( (v20 & 1) != 0 )
            goto LABEL_64;
        }
        if ( !v13 )
          goto LABEL_69;
        v25 = *(_DWORD *)(v13 + 16);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v26 = 1;
        v27 = v25;
      }
      else
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= v12 )
            goto LABEL_70;
          v15 = *((_QWORD *)&v6->fields.lookup + (int)v14);
          if ( !v15 )
            goto LABEL_69;
          v17 = *(_QWORD *)(v15 + 80);
          v16 = *(_QWORD *)(v15 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v39.fields.currentCryptoKey = v17;
          *(_QWORD *)&v39.fields.fakeValue = v16;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v39, 0LL);
          if ( !v13 )
            goto LABEL_69;
          v2 = (unsigned int)Instance;
          if ( (_DWORD)Instance == *(_DWORD *)(v13 + 16) )
            break;
          v12 = (int)v6->fields.datalist;
          if ( (int)++v14 >= v12 )
            goto LABEL_25;
        }
        Instance = (DataManager_o *)v37;
        if ( !v37 )
          goto LABEL_69;
        Instance = (DataManager_o *)EventServantMaster__GetEntities(v37, v2, 0LL);
        if ( !Instance )
          goto LABEL_69;
        v28 = (int)Instance->fields.datalist;
        v29 = Instance;
        if ( v28 < 1 )
        {
LABEL_57:
          v32 = 1;
        }
        else
        {
          v30 = 0;
          while ( 1 )
          {
            if ( v30 >= v28 )
              goto LABEL_70;
            Instance = (DataManager_o *)EventServantEntity_TypeInfo;
            v31 = (EventServantEntity_o *)*((_QWORD *)&v29->fields.lookup + (int)v30);
            if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventServantEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
            }
            if ( !v31 )
              goto LABEL_69;
            Instance = (DataManager_o *)EventServantEntity__GetIsCondClear(
                                          v31,
                                          EventServantEntity_TypeInfo->static_fields->NAME_RELEASE_COND,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              break;
            v28 = (int)v29->fields.datalist;
            if ( (int)++v30 >= v28 )
              goto LABEL_57;
          }
          v32 = 0;
        }
        v33 = *(_DWORD *)(v13 + 16);
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v15, 0LL);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v26 = v32 != 0 && IsEventJoin;
        v27 = v33;
      }
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v27, v26, v9);
LABEL_64:
      Instance = v38;
      ++v11;
      LODWORD(datalist) = v38->fields.datalist;
    }
    while ( (__int64)v11 < (int)datalist );
  }
  v35 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__WriteData((const MethodInfo *)v35);
}


bool __fastcall ServantProfileEventJoinManager__WriteData(const MethodInfo *method)
{
  ServantProfileEventJoinManager_c *v1; // x0
  struct ServantProfileEventJoinManager_StaticFields *static_fields; // x8
  bool *p_isModified; // x8
  _BOOL4 isModified; // t1
  ManagerConfig_c *v5; // x0
  ServantProfileEventJoinManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  long double v12; // q0
  ServantProfileEventJoinManager_c *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  __int64 v17; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  char v22; // w8
  int v23; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+0h] [xbp-70h] BYREF
  int v29[4]; // [xsp+18h] [xbp-58h] BYREF
  int v30; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_438D10F & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&ServantProfileEventJoinManager_TypeInfo);
    byte_438D10F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  v1 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v1 = ServantProfileEventJoinManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModified = static_fields->isModified;
  p_isModified = &static_fields->isModified;
  if ( !isModified )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModified = &ServantProfileEventJoinManager_TypeInfo->static_fields->isModified;
  }
  *p_isModified = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  SaveFileName = ServantProfileEventJoinManager__GetSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40221404(v10, v9, 0LL);
  v13 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  if ( !v10 )
    sub_B7769C(v13, v11);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v10->klass->vtable._22_Write.method)(
    v10,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v10->klass[1]._1.image,
    v12);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
          v10,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v10->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_B7769C(v14, v15);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
    v10,
    (unsigned int)infoList->fields._size,
    v10->klass->vtable._18_Write.methodPtr);
  v18 = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v18 )
    sub_B7769C(0LL, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v31 = v28;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v19 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B7769C(v19, v20);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
      v10,
      LODWORD(v31.fields.current[1].klass),
      v10->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
      v10,
      BYTE4(current[1].klass),
      v10->klass->vtable._9_Write.methodPtr);
  }
  v29[0] = 150;
  v30 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  if ( v29[0] == 150 )
  {
    v22 = 0;
    v30 = 0;
  }
  else
  {
    v22 = 1;
  }
  *(_DWORD *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v22 & 1))) = 162;
  v23 = ++v30;
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v27 = sub_B0F4C0(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v10, *(_QWORD *)(v27 + 8));
  if ( v23 && v29[v23 - 1] == 162 )
    v30 = v23 - 1;
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
  if ( (byte_4388836 & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4388836 = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0LL )
    sub_B7769C(this, i);
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
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL);
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
    sub_B7769C(this, 0LL);
  return i->fields.servantId == this->fields.servantId;
}