void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
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
  ServantProfileLimitCountManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct ServantProfileLimitCountManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FBB83 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6596/*"Fgo_20191029"*/, v10);
    byte_40FBB83 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileLimitCountManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6596/*"Fgo_20191029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6596/*"Fgo_20191029"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantProfileLimitCountManager_TypeInfo;
  ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  v19 = ServantProfileLimitCountManager_TypeInfo->static_fields;
  v19->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v19->limitCountList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall ServantProfileLimitCountManager___ctor(
        ServantProfileLimitCountManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantProfileLimitCountManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *limitCountList; // x8

  if ( (byte_40FBB7C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v3);
    byte_40FBB7C = 1;
  }
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_16;
  if ( limitCountList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        limitCountList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
      v4 = ServantProfileLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v4; // x0

  if ( (byte_40FBB7A & 1) == 0 )
  {
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_40FBB7A = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v4);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantProfileLimitCountManager___c__DisplayClass10_0_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantProfileLimitCountManager_c *v16; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x21
  peRenderTexture_ChangeLayerObject_o *v19; // x0

  if ( (byte_40FBB7E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      method);
    sub_B16FFC(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__, v6);
    sub_B16FFC(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v7);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v8);
    sub_B16FFC(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v9);
    sub_B16FFC(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v10);
    byte_40FBB7E = 1;
  }
  v11 = (ServantProfileLimitCountManager___c__DisplayClass10_0_o *)sub_B170CC(
                                                                     ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3,
                                                                     v4);
  ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.servantId = servantId;
  v16 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v16 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v16->static_fields->limitCountList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
LABEL_11:
    sub_B170D4();
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v19 )
    LODWORD(v19) = HIDWORD(v19->fields.gameObject);
  return (int)v19;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40FBB79 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40FBB79 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0

  if ( (byte_40FBB7B & 1) == 0 )
  {
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_40FBB7B = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileLimitCountManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  ServantProfileLimitCountManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v12; // x0
  System_IO_Stream_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x20
  System_String_o *v19; // x21
  ServantProfileLimitCountManager_c *v20; // x0
  char v21; // w21
  ServantProfileLimitCountManager_c *v22; // x0
  int v23; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v25; // w21
  int v26; // w26
  int32_t v27; // w23
  int32_t v28; // w24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v33; // x22
  ServantProfileLimitCountManager_c *v34; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  System_IO_Stream_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  ServantProfileLimitCountManager_c *v44; // x0
  int v45; // [xsp+8h] [xbp-68h]

  if ( (byte_40FBB7F & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v5);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_40FBB7F = 1;
  }
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v44 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v44);
    return 0;
  }
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  if ( !v18 )
    sub_B170D4();
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v20 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v20 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
  {
    v45 = 213;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
            v18,
            v18->klass->vtable._10_ReadByte.methodPtr);
    v22 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v22 = ServantProfileLimitCountManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
            v18,
            v18->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v18->klass;
    v25 = v23;
    if ( v23 >= 1 )
    {
      v26 = 0;
      do
      {
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v18,
                klass->vtable._16_ReadUInt32.methodPtr);
        v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v33 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B170CC(
                                                                           ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo,
                                                                           v29,
                                                                           v30,
                                                                           v31,
                                                                           v32);
        ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v33, 0LL);
        if ( !v33 )
          sub_B170D4();
        v33->fields.servantId = v27;
        v33->fields.limitCount = v28;
        v34 = ServantProfileLimitCountManager_TypeInfo;
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v34 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->static_fields->limitCountList;
        if ( !limitCountList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          limitCountList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        klass = v18->klass;
        ++v26;
      }
      while ( v26 < v25 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v18,
      klass->vtable._7_Dispose.methodPtr);
    v45 = 186;
  }
  v36 = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      p_offset += 4;
      if ( v37 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v39 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v18, *(_QWORD *)(v39 + 8));
  if ( v45 != 186 )
  {
    if ( !v13 )
      return v45 == 198;
LABEL_46:
    v40 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
    }
    else
    {
LABEL_50:
      v43 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
    return v45 == 198;
  }
  v45 = 198;
  if ( v13 )
    goto LABEL_46;
  return v45 == 198;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
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
  ServantProfileLimitCountManager___c__DisplayClass9_0_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantProfileLimitCountManager_c *v19; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x22
  peRenderTexture_ChangeLayerObject_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  ServantProfileLimitCountManager_c *v27; // x0
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v28; // x21
  ServantProfileLimitCountManager_c *v29; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x0

  if ( (byte_40FBB7D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v7);
    sub_B16FFC(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__, v8);
    sub_B16FFC(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v9);
    sub_B16FFC(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v10);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v11);
    sub_B16FFC(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v12);
    sub_B16FFC(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v13);
    byte_40FBB7D = 1;
  }
  v14 = (ServantProfileLimitCountManager___c__DisplayClass9_0_o *)sub_B170CC(
                                                                    ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo,
                                                                    *(_QWORD *)&limitCount,
                                                                    method,
                                                                    v3,
                                                                    v4);
  ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_22;
  v14->fields.servantId = servantId;
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v19 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v19->static_fields->limitCountList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                                   v15,
                                                                   v16,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
    goto LABEL_22;
  v22 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v22 )
  {
    v28 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B170CC(
                                                                       ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo,
                                                                       v23,
                                                                       v24,
                                                                       v25,
                                                                       v26);
    ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v28, 0LL);
    if ( v28 )
    {
      v28->fields.servantId = v14->fields.servantId;
      v28->fields.limitCount = limitCount;
      v29 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v29 = ServantProfileLimitCountManager_TypeInfo;
      }
      v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->static_fields->limitCountList;
      if ( v30 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  if ( SHIDWORD(v22->fields.gameObject) >= limitCount )
    return;
  HIDWORD(v22->fields.gameObject) = limitCount;
  v27 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v27 = ServantProfileLimitCountManager_TypeInfo;
  }
  v27->static_fields->isModfiy = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ServantProfileLimitCountManager___c__DisplayClass14_0_o *v17; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x22
  const MethodInfo *v31; // x2
  int32_t v32; // w20
  const MethodInfo *v33; // x0

  if ( (byte_40FBB82 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantProfileMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___66744696, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_ServantProfileEntity___ctor__, v11);
    sub_B16FFC(&System_Predicate_ServantProfileEntity__TypeInfo, v12);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__, v15);
    sub_B16FFC(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v16);
    byte_40FBB82 = 1;
  }
  v17 = (ServantProfileLimitCountManager___c__DisplayClass14_0_o *)sub_B170CC(
                                                                     ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo,
                                                                     *(_QWORD *)&limitCount,
                                                                     method,
                                                                     v3,
                                                                     v4);
  ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  v17->fields.servantId = servantId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           MasterData_WarQuestSelectionMaster,
                                                                                           (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v25 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                                                v21,
                                                                                v22,
                                                                                v23,
                                                                                v24),
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v25,
          Entitys_WarQuestSelectionEntity,
          (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___66744696),
        v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_ServantProfileEntity__TypeInfo,
                                                                         v26,
                                                                         v27,
                                                                         v28,
                                                                         v29),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v30,
          (Il2CppObject *)v17,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantProfileEntity___ctor__),
        !v25) )
  {
LABEL_13:
    sub_B170D4();
  }
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v25,
         (System_Predicate_T__o *)v30,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v32 = v17->fields.servantId;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__SetLimitCount(v32, limitCount, v31);
    ServantProfileLimitCountManager__WriteData(v33);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v24; // x19
  WebViewManager_o *v25; // x0
  WarQuestSelectionMaster_o *v26; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w21
  __int64 v33; // x23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x10
  System_Int32_array **v42; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  __int64 v50; // x23
  __int64 v51; // x24
  int32_t v52; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  int32_t v54; // w22
  const MethodInfo *v55; // x2
  int32_t v56; // w23
  ServantProfileLimitCountManager_c *v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_40FBB81 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v1);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantProfileMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___66744696, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_ServantProfileEntity___ctor__, v10);
    sub_B16FFC(&System_Predicate_ServantProfileEntity__TypeInfo, v11);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v14);
    sub_B16FFC(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v15);
    sub_B16FFC(&UserServantEntity_TypeInfo, v16);
    byte_40FBB81 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                     MasterData_WarQuestSelectionMaster,
                                                                                     (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v24 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                                          v20,
                                                                          v21,
                                                                          v22,
                                                                          v23);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v24,
    Entitys_WarQuestSelectionEntity,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___66744696);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_33;
  v26 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v25,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v26 )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v26->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v26->fields.list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      v33 = sub_B170CC(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v28, v29, v30, v31);
      ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)v33,
        0LL);
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v32,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v33 )
        break;
      if ( Item
        && (v41 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
      {
        v42 = (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v41 - 1] == UserServantEntity_TypeInfo
            ? (System_Int32_array **)Item
            : 0LL;
      }
      else
      {
        v42 = 0LL;
      }
      *(_QWORD *)(v33 + 16) = v42;
      v43 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v33 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), v42, v35, v36, v37, v38, v39, v40);
      v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_ServantProfileEntity__TypeInfo,
                                                                       v44,
                                                                       v45,
                                                                       v46,
                                                                       v47);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v48,
        (Il2CppObject *)v33,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantProfileEntity___ctor__);
      if ( !v24 )
        break;
      if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
             (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v24,
             (System_Predicate_T__o *)v48,
             (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
      {
        v49 = *v43;
        if ( !*v43 )
          break;
        v51 = *(_QWORD *)&v49[5].fields.currentCryptoKey;
        v50 = *(_QWORD *)&v49[5].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v51;
        *(_QWORD *)&v58.fields.fakeValue = v50;
        v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
        v53 = *v43;
        if ( !*v43 )
          break;
        v54 = v52;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53[6], 0LL);
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        }
        ServantProfileLimitCountManager__SetLimitCount(v54, v56, v55);
      }
      if ( ++v32 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_29;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_29:
  v57 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v57);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileLimitCountManager_c *v7; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  ServantProfileLimitCountManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x20
  ServantProfileLimitCountManager_c *v21; // x0
  struct ServantProfileLimitCountManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v25; // x23
  ServantProfileLimitCountManager_c *v26; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *v27; // x24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v28; // x24
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  int v33; // w22
  System_IO_Stream_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v38[4]; // [xsp+8h] [xbp-48h]
  int v39; // [xsp+18h] [xbp-38h]

  if ( (byte_40FBB80 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_40FBB80 = 1;
  }
  v39 = 0;
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 0;
  v13 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v21 = ServantProfileLimitCountManager_TypeInfo;
  }
  v22 = v21->static_fields;
  limitCountList = v22->limitCountList;
  if ( !limitCountList )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v22->SAVE_DATA_VERSION,
    v20->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
    v20,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v20->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
    v20,
    (unsigned int)size,
    v20->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v25 = 0LL;
    do
    {
      v26 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v26 = ServantProfileLimitCountManager_TypeInfo;
      }
      v27 = v26->static_fields->limitCountList;
      if ( !v27 )
        sub_B170D4();
      if ( v27->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = v27->fields._items->m_Items[v25];
      if ( !v28 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.servantId,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.limitCount,
        v20->klass->vtable._18_Write.methodPtr);
      ++v25;
    }
    while ( (int)v25 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v20->klass->vtable._5_Close.method)(
    v20,
    v20->klass->vtable._6_Dispose.methodPtr);
  v38[0] = 158;
  v39 = 1;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v32 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
  v39 = 0;
  v38[0] = 170;
  v33 = ++v39;
  if ( v15 )
  {
    v34 = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v36);
    }
    else
    {
LABEL_46:
      v37 = sub_AAFEF8(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v37)(v15, *(_QWORD *)(v37 + 8));
  }
  if ( v33 )
  {
    if ( v38[v33 - 1] == 170 )
      v39 = v33 - 1;
  }
  return 1;
}


void __fastcall ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass10_0___GetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.servantId == this->fields.servantId;
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass13_0___UpdateProfileServantLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *ent; // x8
  int32_t svtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40F7642 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    byte_40F7642 = 1;
  }
  if ( !x || (ent = this->fields.ent) == 0LL )
    sub_B170D4();
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass14_0___SetLimitCountExistProfile_b__0(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.svtId == this->fields.servantId;
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass9_0___SetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.servantId == this->fields.servantId;
}