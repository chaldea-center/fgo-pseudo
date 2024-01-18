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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct ServantProfileEventJoinManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4189BBC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v8);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6621/*"Fgo_20191115"*/, v10);
    byte_4189BBC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileEventJoinManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6621/*"Fgo_20191115"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6621/*"Fgo_20191115"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantProfileEventJoinManager_TypeInfo;
  ServantProfileEventJoinManager_TypeInfo->static_fields->isModified = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  v15 = ServantProfileEventJoinManager_TypeInfo->static_fields;
  v15->infoList = (struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->infoList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4189BB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__, v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v2);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v3);
    byte_4189BB5 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Clear__);
      v4 = ServantProfileEventJoinManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_4189BB4 & 1) == 0 )
  {
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_4189BB4 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  void *Instance; // x0
  __int64 v13; // x1
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
  ServantProfileEventJoinManager_c *v31; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x21
  peRenderTexture_ChangeLayerObject_o *v34; // x0
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4189BB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantProfileMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v6);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__, v9);
    sub_B2C35C(&ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo, v10);
    byte_4189BB8 = 1;
  }
  v11 = sub_B2C42C(ServantProfileEventJoinManager___c__DisplayClass10_0_TypeInfo);
  ServantProfileEventJoinManager___c__DisplayClass10_0___ctor(
    (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_29;
  *(_QWORD *)(v11 + 16) = servantEntity;
  v20 = (_QWORD *)(v11 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)servantEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
      v35 = sub_B2C460(Instance);
      sub_B2C400(v35, 0LL);
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
    *(_QWORD *)&v36.fields.currentCryptoKey = v29;
    *(_QWORD *)&v36.fields.fakeValue = v28;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
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
    sub_B2C434(Instance, v13);
  }
  v31 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v31 = ServantProfileEventJoinManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v31->static_fields->infoList;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)v11,
    Method_ServantProfileEventJoinManager___c__DisplayClass10_0__GetIsNeedToCheckEventJoinName_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_29;
  v34 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v33,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  return !v34 || BYTE4(v34->fields.gameObject) != 0;
}


System_String_o *__fastcall ServantProfileEventJoinManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4189BB3 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189BB3 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(28, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileEventJoinManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileEventJoinManager_c *v2; // x0

  if ( (byte_4189BB6 & 1) == 0 )
  {
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v1);
    byte_4189BB6 = 1;
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
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x1
  ServantProfileEventJoinManager_c *v16; // x0
  System_String_o *SAVE_DATA_VERSION; // x20
  System_String_o *v18; // x1
  __int64 v19; // x3
  int v20; // w8
  char v21; // w20
  ServantProfileEventJoinManager_c *v22; // x0
  int v23; // w20
  int i; // w24
  ServantProfileEventJoinManager_c *v25; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x0
  __int64 v31; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  int v36; // [xsp+8h] [xbp-58h]

  if ( (byte_4189BBA & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v5);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v6);
    byte_4189BBA = 1;
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
  v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  v16 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v16 = ServantProfileEventJoinManager_TypeInfo;
  }
  if ( !v14 )
    sub_B2C434(v16, v15);
  SAVE_DATA_VERSION = v16->static_fields->SAVE_DATA_VERSION;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  if ( System_String__op_Inequality(SAVE_DATA_VERSION, v18, 0LL) )
  {
    v20 = 165;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v22 = ServantProfileEventJoinManager_TypeInfo;
    if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
      v22 = ServantProfileEventJoinManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v23 >= 1 )
    {
      for ( i = 0; i < v23; ++i )
      {
        v25 = ServantProfileEventJoinManager_TypeInfo;
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
          v25 = ServantProfileEventJoinManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v25->static_fields->infoList;
        v27 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B2C42C(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
        ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v27, 0LL);
        v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        if ( !v27 )
          sub_B2C434(v28, v29);
        v27->fields.servantId = v28;
        v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                v14,
                v14->klass->vtable._10_ReadByte.methodPtr);
        v27->fields.isNeedToCheckEventJoinNameExist = v30 & 1;
        if ( !infoList )
          sub_B2C434(v30, v31);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
      }
    }
    v20 = 156;
  }
  v36 = v20;
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v35 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v14, *(_QWORD *)(v35 + 8));
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
  ServantProfileEventJoinManager_c *v15; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x22
  peRenderTexture_ChangeLayerObject_o *v18; // x0
  ServantProfileEventJoinManager_c *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  ServantProfileEventJoinManager_ServantEventJoinInfo_o *v21; // x22
  int32_t v22; // w8

  if ( (byte_4189BB9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__,
      isNeedToChecEventJoinNameExist);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__, v5);
    sub_B2C35C(&Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__, v6);
    sub_B2C35C(&System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo, v7);
    sub_B2C35C(&ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo, v8);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v9);
    sub_B2C35C(
      &Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
      v10);
    sub_B2C35C(&ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo, v11);
    byte_4189BB9 = 1;
  }
  v12 = (ServantProfileEventJoinManager___c__DisplayClass11_0_o *)sub_B2C42C(ServantProfileEventJoinManager___c__DisplayClass11_0_TypeInfo);
  ServantProfileEventJoinManager___c__DisplayClass11_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v12->fields.servantId = servantId;
  v15 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v15 = ServantProfileEventJoinManager_TypeInfo;
  }
  v15->static_fields->isModified = 1;
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v15->static_fields->infoList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ServantProfileEventJoinManager___c__DisplayClass11_0__SetIsNeedToCheckEventJoinNameExist_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantProfileEventJoinManager_ServantEventJoinInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          infoList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Find__);
  if ( v18 )
  {
    BYTE4(v18->fields.gameObject) = isNeedToChecEventJoinNameExist;
    return;
  }
  v19 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
    v19 = ServantProfileEventJoinManager_TypeInfo;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->static_fields->infoList;
  v21 = (ServantProfileEventJoinManager_ServantEventJoinInfo_o *)sub_B2C42C(ServantProfileEventJoinManager_ServantEventJoinInfo_TypeInfo);
  ServantProfileEventJoinManager_ServantEventJoinInfo___ctor(v21, 0LL);
  if ( !v21
    || (v22 = v12->fields.servantId,
        v21->fields.isNeedToCheckEventJoinNameExist = isNeedToChecEventJoinNameExist,
        v21->fields.servantId = v22,
        !v20) )
  {
LABEL_16:
    sub_B2C434(v13, v14);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__Add__);
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
  ServantProfileMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserServantMaster_o *v12; // x19
  UserServantCollectionMaster_o *v13; // x20
  DataManager_o *v14; // x19
  UserServantCollectionEntity_array *List; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v19; // x26
  int v20; // w8
  __int64 v21; // x22
  unsigned int v22; // w28
  __int64 v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
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

  if ( (byte_4189BB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantProfileMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&EventServantEntity_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4189BB7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = (ServantProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  v12 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v12 )
    goto LABEL_69;
  v13 = (UserServantCollectionMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList(v12, 0LL);
  if ( !v13
    || (v14 = Instance,
        List = UserServantCollectionMaster__getList(v13, 2, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___),
        v45 = (EventServantMaster_o *)Instance,
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)ServantProfileMaster__GetServantProfileEntities(
                                      MasterData_WarQuestSelectionMaster,
                                      21,
                                      v16)) == 0LL )
  {
LABEL_69:
    sub_B2C434(Instance, v10);
  }
  datalist = Instance->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v19 = 0LL;
    v46 = Instance;
    do
    {
      if ( v19 >= (unsigned int)datalist )
      {
LABEL_70:
        v44 = sub_B2C460(Instance);
        sub_B2C400(v44, 0LL);
      }
      if ( !v14 )
        goto LABEL_69;
      v20 = (int)v14->fields.datalist;
      v21 = *((_QWORD *)&Instance->fields.lookup + v19);
      if ( v20 < 1 )
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
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
            if ( !v21 )
              goto LABEL_69;
            v32 = *(_DWORD *)(v21 + 16);
            if ( (_DWORD)Instance != v32 )
            {
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v32, 0, v17);
              v28 = 1;
            }
            max_length = List->max_length;
            ++v27;
          }
          while ( v27 < max_length );
          if ( (v28 & 1) != 0 )
            goto LABEL_64;
        }
        if ( !v21 )
          goto LABEL_69;
        v33 = *(_DWORD *)(v21 + 16);
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
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= v20 )
            goto LABEL_70;
          v23 = *((_QWORD *)&v14->fields.lookup + (int)v22);
          if ( !v23 )
            goto LABEL_69;
          v25 = *(_QWORD *)(v23 + 80);
          v24 = *(_QWORD *)(v23 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v47.fields.currentCryptoKey = v25;
          *(_QWORD *)&v47.fields.fakeValue = v24;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
          if ( !v21 )
            goto LABEL_69;
          v10 = (unsigned int)Instance;
          if ( (_DWORD)Instance == *(_DWORD *)(v21 + 16) )
            break;
          v20 = (int)v14->fields.datalist;
          if ( (int)++v22 >= v20 )
            goto LABEL_25;
        }
        Instance = (DataManager_o *)v45;
        if ( !v45 )
          goto LABEL_69;
        Instance = (DataManager_o *)EventServantMaster__GetEntities(v45, v10, 0LL);
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
        v41 = *(_DWORD *)(v21 + 16);
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)v23, 0LL);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        v34 = v40 != 0 && IsEventJoin;
        v35 = v41;
      }
      ServantProfileEventJoinManager__SetIsNeedToCheckEventJoinNameExist(v35, v34, v17);
LABEL_64:
      Instance = v46;
      ++v19;
      LODWORD(datalist) = v46->fields.datalist;
    }
    while ( (__int64)v19 < (int)datalist );
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
  System_IO_BinaryWriter_o *v19; // x19
  __int64 v20; // x1
  long double v21; // q0
  ServantProfileEventJoinManager_c *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *infoList; // x8
  __int64 v26; // x1
  struct System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__o *v27; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x21
  __int64 v31; // x3
  char v32; // w8
  int v33; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+0h] [xbp-70h] BYREF
  int v39[4]; // [xsp+18h] [xbp-58h] BYREF
  int v40; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_4189BBB & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__,
      v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Current__,
      v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__get_Count__,
      v7);
    sub_B2C35C(&ManagerConfig_TypeInfo, v8);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v9);
    byte_4189BBB = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
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
  v19 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v19, v18, 0LL);
  v22 = ServantProfileEventJoinManager_TypeInfo;
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  if ( !v19 )
    sub_B2C434(v22, v20);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v19->klass->vtable._22_Write.method)(
    v19,
    ServantProfileEventJoinManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v19->klass[1]._1.image,
    v21);
  v23 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v19->klass->vtable._8_Write.method)(
          v19,
          ServantProfileEventJoinManager_TypeInfo->static_fields->isContinueDevice,
          v19->klass->vtable._9_Write.methodPtr);
  infoList = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !infoList )
    sub_B2C434(v23, v24);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
    v19,
    (unsigned int)infoList->fields._size,
    v19->klass->vtable._18_Write.methodPtr);
  v27 = ServantProfileEventJoinManager_TypeInfo->static_fields->infoList;
  if ( !v27 )
    sub_B2C434(0LL, v26);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantProfileEventJoinManager_ServantEventJoinInfo__GetEnumerator__);
  v41 = v38;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__MoveNext__);
    if ( !v28 )
      break;
    current = v41.fields.current;
    if ( !v41.fields.current )
      sub_B2C434(v28, v29);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
      v19,
      LODWORD(v41.fields.current[1].klass),
      v19->klass->vtable._18_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._8_Write.method)(
      v19,
      BYTE4(current[1].klass),
      v19->klass->vtable._9_Write.methodPtr);
  }
  v39[0] = 150;
  v40 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEventJoinManager_ServantEventJoinInfo__Dispose__);
  if ( v39[0] == 150 )
  {
    v32 = 0;
    v40 = 0;
  }
  else
  {
    v32 = 1;
  }
  *(_DWORD *)((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v32 & 1))) = 162;
  v33 = ++v40;
  klass = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v37 = sub_AC5258(v19, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v37)(v19, *(_QWORD *)(v37 + 8));
  if ( v33 && v39[v33 - 1] == 162 )
    v40 = v33 - 1;
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
  if ( (byte_41853FD & 1) == 0 )
  {
    this = (ServantProfileEventJoinManager___c__DisplayClass10_0_o *)sub_B2C35C(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                       i);
    byte_41853FD = 1;
  }
  if ( !i || (servantEntity = v4->fields.servantEntity) == 0LL )
    sub_B2C434(this, i);
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
  return servantId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
    sub_B2C434(this, 0LL);
  return i->fields.servantId == this->fields.servantId;
}