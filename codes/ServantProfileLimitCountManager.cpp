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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct ServantProfileLimitCountManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4189BC7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6620/*"Fgo_20191029"*/, v10);
    byte_4189BC7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileLimitCountManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6620/*"Fgo_20191029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6620/*"Fgo_20191029"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantProfileLimitCountManager_TypeInfo;
  ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  v15 = ServantProfileLimitCountManager_TypeInfo->static_fields;
  v15->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->limitCountList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_4189BC0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v3);
    byte_4189BC0 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
      v4 = ServantProfileLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_4189BBE & 1) == 0 )
  {
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_4189BBE = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantProfileLimitCountManager___c__DisplayClass10_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  ServantProfileLimitCountManager_c *v11; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x21
  peRenderTexture_ChangeLayerObject_o *v14; // x0

  if ( (byte_4189BC2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      method);
    sub_B2C35C(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__, v3);
    sub_B2C35C(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v4);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v5);
    sub_B2C35C(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v6);
    sub_B2C35C(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_4189BC2 = 1;
  }
  v8 = (ServantProfileLimitCountManager___c__DisplayClass10_0_o *)sub_B2C42C(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v8->fields.servantId = servantId;
  v11 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v11 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v11->static_fields->limitCountList;
  v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
LABEL_11:
    sub_B2C434(v9, v10);
  v14 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v14 )
    LODWORD(v14) = HIDWORD(v14->fields.gameObject);
  return (int)v14;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4189BBD & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189BBD = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0

  if ( (byte_4189BBF & 1) == 0 )
  {
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_4189BBF = 1;
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
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  ServantProfileLimitCountManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w21
  ServantProfileLimitCountManager_c *v21; // x0
  int v22; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v24; // w21
  int v25; // w26
  int32_t v26; // w23
  int32_t v27; // w24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  ServantProfileLimitCountManager_c *v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  __int64 v37; // x3
  System_IO_Stream_c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  ServantProfileLimitCountManager_c *v42; // x0
  int v43; // [xsp+8h] [xbp-68h]

  if ( (byte_4189BC3 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v5);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_4189BC3 = 1;
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
    v42 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v42);
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
  v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v18 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v43 = 213;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v21 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v21 = ServantProfileLimitCountManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v14->klass;
    v24 = v22;
    if ( v22 >= 1 )
    {
      v25 = 0;
      do
      {
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v14,
                klass->vtable._16_ReadUInt32.methodPtr);
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v28 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B2C42C(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v28, 0LL);
        if ( !v28 )
          sub_B2C434(v29, v30);
        v28->fields.servantId = v26;
        v28->fields.limitCount = v27;
        v31 = ServantProfileLimitCountManager_TypeInfo;
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v31 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->static_fields->limitCountList;
        if ( !limitCountList )
          sub_B2C434(0LL, v30);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          limitCountList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        klass = v14->klass;
        ++v25;
      }
      while ( v25 < v24 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v14,
      klass->vtable._7_Dispose.methodPtr);
    v43 = 186;
  }
  v33 = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v36 = (__int64)(&v33->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v36 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v14, *(_QWORD *)(v36 + 8));
  if ( v43 != 186 )
  {
    if ( !v13 )
      return v43 == 198;
LABEL_46:
    v38 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
    }
    else
    {
LABEL_50:
      v41 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v37);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v41)(v13, *(_QWORD *)(v41 + 8));
    return v43 == 198;
  }
  v43 = 198;
  if ( v13 )
    goto LABEL_46;
  return v43 == 198;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantProfileLimitCountManager___c__DisplayClass9_0_o *v12; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x0
  __int64 v14; // x1
  ServantProfileLimitCountManager_c *v15; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x22
  peRenderTexture_ChangeLayerObject_o *v18; // x0
  ServantProfileLimitCountManager_c *v19; // x0
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v20; // x21
  ServantProfileLimitCountManager_c *v21; // x0

  if ( (byte_4189BC1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v5);
    sub_B2C35C(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__, v6);
    sub_B2C35C(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v7);
    sub_B2C35C(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v8);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v9);
    sub_B2C35C(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v10);
    sub_B2C35C(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v11);
    byte_4189BC1 = 1;
  }
  v12 = (ServantProfileLimitCountManager___c__DisplayClass9_0_o *)sub_B2C42C(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  v12->fields.servantId = servantId;
  v15 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v15 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v15->static_fields->limitCountList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
    goto LABEL_22;
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v18 )
  {
    v20 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B2C42C(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v20, 0LL);
    if ( v20 )
    {
      v20->fields.servantId = v12->fields.servantId;
      v20->fields.limitCount = limitCount;
      v21 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v21 = ServantProfileLimitCountManager_TypeInfo;
      }
      v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21->static_fields->limitCountList;
      if ( v13 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B2C434(v13, v14);
  }
  if ( SHIDWORD(v18->fields.gameObject) >= limitCount )
    return;
  HIDWORD(v18->fields.gameObject) = limitCount;
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v19 = ServantProfileLimitCountManager_TypeInfo;
  }
  v19->static_fields->isModfiy = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  ServantProfileLimitCountManager___c__DisplayClass14_0_o *v15; // x20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x22
  const MethodInfo *v21; // x2
  int32_t v22; // w20
  const MethodInfo *v23; // x0

  if ( (byte_4189BC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantProfileMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___67318928, v7);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_ServantProfileEntity___ctor__, v9);
    sub_B2C35C(&System_Predicate_ServantProfileEntity__TypeInfo, v10);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__, v13);
    sub_B2C35C(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v14);
    byte_4189BC6 = 1;
  }
  v15 = (ServantProfileLimitCountManager___c__DisplayClass14_0_o *)sub_B2C42C(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  v15->fields.servantId = servantId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)Instance,
                                                                                           (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v19,
          Entitys_WarQuestSelectionEntity,
          (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___67318928),
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v15,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantProfileEntity___ctor__),
        !v19) )
  {
LABEL_13:
    sub_B2C434(Instance, v17);
  }
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v19,
         (System_Predicate_T__o *)v20,
         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v22 = v15->fields.servantId;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__SetLimitCount(v22, limitCount, v21);
    ServantProfileLimitCountManager__WriteData(v23);
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
  void *Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x20
  int32_t v22; // w21
  __int64 v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x10
  System_Int32_array **v31; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v32; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  __int64 v35; // x23
  __int64 v36; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  int32_t v38; // w22
  const MethodInfo *v39; // x2
  int32_t v40; // w23
  ServantProfileLimitCountManager_c *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4189BC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v1);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantProfileMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___67318928, v7);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_ServantProfileEntity___ctor__, v10);
    sub_B2C35C(&System_Predicate_ServantProfileEntity__TypeInfo, v11);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v14);
    sub_B2C35C(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v15);
    sub_B2C35C(&UserServantEntity_TypeInfo, v16);
    byte_4189BC5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_33;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                     (DataMasterBase_o *)Instance,
                                                                                     (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v20 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v20,
    Entitys_WarQuestSelectionEntity,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___67318928);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  if ( !v21 )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         *((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)Instance + 4),
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = sub_B2C42C(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)v23,
        0LL);
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v21,
                   v22,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v23 )
        break;
      if ( Instance
        && (v30 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v30) )
      {
        v31 = *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) == UserServantEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v31 = 0LL;
      }
      *(_QWORD *)(v23 + 16) = v31;
      v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v23 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), v31, v24, v25, v26, v27, v28, v29);
      v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v33,
        (Il2CppObject *)v23,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantProfileEntity___ctor__);
      if ( !v20 )
        break;
      Instance = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v20,
                   (System_Predicate_T__o *)v33,
                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v34 = *v32;
        if ( !*v32 )
          break;
        v36 = *(_QWORD *)&v34[5].fields.currentCryptoKey;
        v35 = *(_QWORD *)&v34[5].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = v36;
        *(_QWORD *)&v42.fields.fakeValue = v35;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
        v37 = *v32;
        if ( !*v32 )
          break;
        v38 = (int)Instance;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37[6], 0LL);
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        }
        ServantProfileLimitCountManager__SetLimitCount(v38, v40, v39);
      }
      if ( ++v22 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v21,
                      (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_29;
    }
LABEL_33:
    sub_B2C434(Instance, v18);
  }
LABEL_29:
  v41 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v41);
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
  System_IO_BinaryWriter_o *v16; // x20
  __int64 v17; // x1
  ServantProfileLimitCountManager_c *v18; // x0
  struct ServantProfileLimitCountManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v22; // x1
  __int64 v23; // x23
  ServantProfileLimitCountManager_c *v24; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *v25; // x24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v26; // x24
  __int64 v27; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  int v33; // w22
  System_IO_Stream_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v38[4]; // [xsp+8h] [xbp-48h]
  int v39; // [xsp+18h] [xbp-38h]

  if ( (byte_4189BC4 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_4189BC4 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v18 = ServantProfileLimitCountManager_TypeInfo;
  }
  v19 = v18->static_fields;
  limitCountList = v19->limitCountList;
  if ( !limitCountList )
    sub_B2C434(v18, v17);
  if ( !v16 )
    sub_B2C434(v18, v17);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v23 = 0LL;
    do
    {
      v24 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v24 = ServantProfileLimitCountManager_TypeInfo;
      }
      v25 = v24->static_fields->limitCountList;
      if ( !v25 )
        sub_B2C434(v24, v22);
      if ( v25->fields._size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v26 = v25->fields._items->m_Items[v23];
      if ( !v26 )
        sub_B2C434(v24, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v26->fields.servantId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v26->fields.limitCount,
        v16->klass->vtable._18_Write.methodPtr);
      ++v23;
    }
    while ( (int)v23 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v16->klass->vtable._5_Close.method)(
    v16,
    v16->klass->vtable._6_Dispose.methodPtr);
  v38[0] = 158;
  v39 = 1;
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v31 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
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
      v37 = sub_AC5258(v15, System_IDisposable_TypeInfo, 0LL, v32);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_41853FE & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_B2C35C(
                                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                        x);
    byte_41853FE = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_B2C434(this, x);
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
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}