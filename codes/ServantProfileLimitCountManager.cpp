void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  ServantProfileLimitCountManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct ServantProfileLimitCountManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_43538E5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&StringLiteral_6712/*"Fgo_20191029"*/);
    byte_43538E5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileLimitCountManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6712/*"Fgo_20191029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6712/*"Fgo_20191029"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantProfileLimitCountManager_TypeInfo;
  ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  v11 = ServantProfileLimitCountManager_TypeInfo->static_fields;
  v11->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&v11->limitCountList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  ServantProfileLimitCountManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *limitCountList; // x8

  if ( (byte_43538DE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    byte_43538DE = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_16;
  if ( limitCountList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        limitCountList,
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
      v2 = ServantProfileLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7076C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v3; // x0

  if ( (byte_43538DC & 1) == 0 )
  {
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    byte_43538DC = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v3 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v3);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  ServantProfileLimitCountManager___c__DisplayClass10_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  ServantProfileLimitCountManager_c *v6; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v8; // x21
  peRenderTexture_ChangeLayerObject_o *v9; // x0

  if ( (byte_43538E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_B70694(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_B70694(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__);
    sub_B70694(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_43538E0 = 1;
  }
  v3 = (ServantProfileLimitCountManager___c__DisplayClass10_0_o *)sub_B70764(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  v3->fields.servantId = servantId;
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v6 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v6->static_fields->limitCountList;
  v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
LABEL_11:
    sub_B7076C(v4, v5);
  v9 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         limitCountList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v9 )
    LODWORD(v9) = HIDWORD(v9->fields.gameObject);
  return (int)v9;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_43538DB & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_43538DB = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0

  if ( (byte_43538DD & 1) == 0 )
  {
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    byte_43538DD = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  ServantProfileLimitCountManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v6; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryReader_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  ServantProfileLimitCountManager_c *v12; // x0
  char v13; // w21
  ServantProfileLimitCountManager_c *v14; // x0
  int v15; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v17; // w21
  int v18; // w26
  int32_t v19; // w23
  int32_t v20; // w24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  ServantProfileLimitCountManager_c *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  System_IO_Stream_c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  ServantProfileLimitCountManager_c *v34; // x0
  int v35; // [xsp+8h] [xbp-68h]

  if ( (byte_43538E1 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    byte_43538E1 = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v34 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v34);
    return 0;
  }
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B7076C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v35 = 213;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v14 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v14 = ServantProfileLimitCountManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v8->klass;
    v17 = v15;
    if ( v15 >= 1 )
    {
      v18 = 0;
      do
      {
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v8,
                klass->vtable._16_ReadUInt32.methodPtr);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v21 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B70764(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v21, 0LL);
        if ( !v21 )
          sub_B7076C(v22, v23);
        v21->fields.servantId = v19;
        v21->fields.limitCount = v20;
        v24 = ServantProfileLimitCountManager_TypeInfo;
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v24 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->static_fields->limitCountList;
        if ( !limitCountList )
          sub_B7076C(0LL, v23);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          limitCountList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        klass = v8->klass;
        ++v18;
      }
      while ( v18 < v17 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v8,
      klass->vtable._7_Dispose.methodPtr);
    v35 = 186;
  }
  v26 = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v29 = (__int64)(&v26->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v29 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v8, *(_QWORD *)(v29 + 8));
  if ( v35 != 186 )
  {
    if ( !v7 )
      return v35 == 198;
LABEL_46:
    v30 = v7->klass;
    if ( *(_WORD *)&v7->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *v32);
    }
    else
    {
LABEL_50:
      v33 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v33)(v7, *(_QWORD *)(v33 + 8));
    return v35 == 198;
  }
  v35 = 198;
  if ( v7 )
    goto LABEL_46;
  return v35 == 198;
}


void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantProfileLimitCountManager___c__DisplayClass9_0_o *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x0
  __int64 v7; // x1
  ServantProfileLimitCountManager_c *v8; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v10; // x22
  peRenderTexture_ChangeLayerObject_o *v11; // x0
  ServantProfileLimitCountManager_c *v12; // x0
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v13; // x21
  ServantProfileLimitCountManager_c *v14; // x0

  if ( (byte_43538DF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_B70694(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_B70694(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__);
    sub_B70694(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
    byte_43538DF = 1;
  }
  v5 = (ServantProfileLimitCountManager___c__DisplayClass9_0_o *)sub_B70764(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  v5->fields.servantId = servantId;
  v8 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v8 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v8->static_fields->limitCountList;
  v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
    goto LABEL_22;
  v11 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v10,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v11 )
  {
    v13 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B70764(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v13, 0LL);
    if ( v13 )
    {
      v13->fields.servantId = v5->fields.servantId;
      v13->fields.limitCount = limitCount;
      v14 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v14 = ServantProfileLimitCountManager_TypeInfo;
      }
      v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14->static_fields->limitCountList;
      if ( v6 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B7076C(v6, v7);
  }
  if ( SHIDWORD(v11->fields.gameObject) >= limitCount )
    return;
  HIDWORD(v11->fields.gameObject) = limitCount;
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  v12->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantProfileLimitCountManager___c__DisplayClass14_0_o *v5; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v9; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v10; // x22
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  const MethodInfo *v13; // x0

  if ( (byte_43538E4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_ServantProfileEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___69172584);
    sub_B70694(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantProfileEntity___ctor__);
    sub_B70694(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__);
    sub_B70694(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
    byte_43538E4 = 1;
  }
  v5 = (ServantProfileLimitCountManager___c__DisplayClass14_0_o *)sub_B70764(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.servantId = servantId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)Instance,
                                                                                           (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v9 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v9,
          Entitys_WarQuestSelectionEntity,
          (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___69172584),
        v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantProfileEntity___ctor__),
        !v9) )
  {
LABEL_13:
    sub_B7076C(Instance, v7);
  }
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v9,
         (System_Predicate_T__o *)v10,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v12 = v5->fields.servantId;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__SetLimitCount(v12, limitCount, v11);
    ServantProfileLimitCountManager__WriteData(v13);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v4; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v5; // x20
  int32_t v6; // w21
  __int64 v7; // x23
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x10
  System_Int32_array **v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  __int64 v19; // x23
  __int64 v20; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v21; // x8
  int32_t v22; // w22
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  ServantProfileLimitCountManager_c *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_43538E3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_ServantProfileEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___69172584);
    sub_B70694(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantProfileEntity___ctor__);
    sub_B70694(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__);
    sub_B70694(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
    sub_B70694(&UserServantEntity_TypeInfo);
    byte_43538E3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_33;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                     (DataMasterBase_o *)Instance,
                                                                                     (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v4 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v4,
    Entitys_WarQuestSelectionEntity,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___69172584);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  v5 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  if ( !v5 )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         *((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)Instance + 4),
         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_B70764(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)v7,
        0LL);
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v5,
                   v6,
                   (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v7 )
        break;
      if ( Instance
        && (v14 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v14) )
      {
        v15 = *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v14 - 8) == UserServantEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      *(_QWORD *)(v7 + 16) = v15;
      v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 16);
      sub_B70630((BattleServantConfConponent_o *)(v7 + 16), v15, v8, v9, v10, v11, v12, v13);
      v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v17,
        (Il2CppObject *)v7,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantProfileEntity___ctor__);
      if ( !v4 )
        break;
      Instance = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4,
                   (System_Predicate_T__o *)v17,
                   (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v18 = *v16;
        if ( !*v16 )
          break;
        v20 = *(_QWORD *)&v18[5].fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18[5].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v26.fields.currentCryptoKey = v20;
        *(_QWORD *)&v26.fields.fakeValue = v19;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v26, 0LL);
        v21 = *v16;
        if ( !*v16 )
          break;
        v22 = (int)Instance;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21[6], 0LL);
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        }
        ServantProfileLimitCountManager__SetLimitCount(v22, v24, v23);
      }
      if ( ++v6 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     v5,
                     (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_29;
    }
LABEL_33:
    sub_B7076C(Instance, v2);
  }
LABEL_29:
  v25 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v25);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  ServantProfileLimitCountManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x19
  System_IO_BinaryWriter_o *v10; // x20
  __int64 v11; // x1
  ServantProfileLimitCountManager_c *v12; // x0
  struct ServantProfileLimitCountManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v16; // x1
  __int64 v17; // x23
  ServantProfileLimitCountManager_c *v18; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *v19; // x24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v20; // x24
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  int v25; // w22
  System_IO_Stream_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v30[4]; // [xsp+8h] [xbp-48h]
  int v31; // [xsp+18h] [xbp-38h]

  if ( (byte_43538E2 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    byte_43538E2 = 1;
  }
  v31 = 0;
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v10, v9, 0LL);
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  v13 = v12->static_fields;
  limitCountList = v13->limitCountList;
  if ( !limitCountList )
    sub_B7076C(v12, v11);
  if ( !v10 )
    sub_B7076C(v12, v11);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v10->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
    v10,
    (unsigned int)size,
    v10->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v17 = 0LL;
    do
    {
      v18 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v18 = ServantProfileLimitCountManager_TypeInfo;
      }
      v19 = v18->static_fields->limitCountList;
      if ( !v19 )
        sub_B7076C(v18, v16);
      if ( v19->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v20 = v19->fields._items->m_Items[v17];
      if ( !v20 )
        sub_B7076C(v18, v16);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.servantId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.limitCount,
        v10->klass->vtable._18_Write.methodPtr);
      ++v17;
    }
    while ( (int)v17 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v10->klass->vtable._5_Close.method)(
    v10,
    v10->klass->vtable._6_Dispose.methodPtr);
  v30[0] = 158;
  v31 = 1;
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v24 = sub_B08590(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  v31 = 0;
  v30[0] = 170;
  v25 = ++v31;
  if ( v9 )
  {
    v26 = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v29 = (__int64)(&v26->vtable._0_Equals.method + 2 * *v28);
    }
    else
    {
LABEL_46:
      v29 = sub_B08590(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v29)(v9, *(_QWORD *)(v29 + 8));
  }
  if ( v25 )
  {
    if ( v30[v25 - 1] == 170 )
      v31 = v25 - 1;
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
    sub_B7076C(this, 0LL);
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
  ServantProfileLimitCountManager___c__DisplayClass13_0_o *v4; // x20
  struct UserServantEntity_o *ent; // x8
  int32_t svtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_434F256 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F256 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_B7076C(this, x);
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
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}