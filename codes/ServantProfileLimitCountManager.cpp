void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
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
  ServantProfileLimitCountManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct ServantProfileLimitCountManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EAA39 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
      v8,
      v9,
      v10);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6699/*"Fgo_20191029"*/, v14, v15, v16);
    byte_42EAA39 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantProfileLimitCountManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6699/*"Fgo_20191029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6699/*"Fgo_20191029"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = ServantProfileLimitCountManager_TypeInfo;
  ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  v21 = ServantProfileLimitCountManager_TypeInfo->static_fields;
  v21->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v21->limitCountList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ServantProfileLimitCountManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *limitCountList; // x8

  if ( (byte_42EAA32 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v7, v8, v9);
    byte_42EAA32 = 1;
  }
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_16;
  if ( limitCountList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        limitCountList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
      v10 = ServantProfileLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantProfileLimitCountManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v6; // x0

  if ( (byte_42EAA30 & 1) == 0 )
  {
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v1, v2, v3);
    byte_42EAA30 = 1;
  }
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
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
  ServantProfileLimitCountManager___c__DisplayClass10_0_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  ServantProfileLimitCountManager_c *v23; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x21
  peRenderTexture_ChangeLayerObject_o *v26; // x0

  if ( (byte_42EAA34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v14, v15, v16);
    sub_B5D5C4(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v17, v18, v19);
    byte_42EAA34 = 1;
  }
  v20 = (ServantProfileLimitCountManager___c__DisplayClass10_0_o *)sub_B5D694(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_11;
  v20->fields.servantId = servantId;
  v23 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v23 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v23->static_fields->limitCountList;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v20,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
LABEL_11:
    sub_B5D69C(v21, v22);
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v26 )
    LODWORD(v26) = HIDWORD(v26->fields.gameObject);
  return (int)v26;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_42EAA2F & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EAA2F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantProfileLimitCountManager_c *v4; // x0

  if ( (byte_42EAA31 & 1) == 0 )
  {
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v1, v2, v3);
    byte_42EAA31 = 1;
  }
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
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
  ServantProfileLimitCountManager_c *v19; // x0
  ManagerConfig_c *v20; // x0
  ServantProfileLimitCountManager_c *v22; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v24; // x0
  System_IO_Stream_o *v25; // x19
  System_IO_BinaryReader_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x21
  ServantProfileLimitCountManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w21
  ServantProfileLimitCountManager_c *v33; // x0
  int v34; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v36; // w21
  int v37; // w26
  int32_t v38; // w23
  int32_t v39; // w24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  ServantProfileLimitCountManager_c *v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 v48; // x0
  __int64 v49; // x3
  System_IO_Stream_c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  ServantProfileLimitCountManager_c *v54; // x0
  int v55; // [xsp+8h] [xbp-68h]

  if ( (byte_42EAA35 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v16, v17, v18);
    byte_42EAA35 = 1;
  }
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v19 = ServantProfileLimitCountManager_TypeInfo;
  }
  v19->static_fields->isModfiy = 0;
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    return 1;
  v22 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v54 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v54);
    return 0;
  }
  v24 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v24);
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  v30 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v30 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
  {
    v55 = 213;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
            v26,
            v26->klass->vtable._10_ReadByte.methodPtr);
    v33 = ServantProfileLimitCountManager_TypeInfo;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v33 = ServantProfileLimitCountManager_TypeInfo;
    }
    v33->static_fields->isContinueDevice = v32 & 1;
    v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
            v26,
            v26->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v26->klass;
    v36 = v34;
    if ( v34 >= 1 )
    {
      v37 = 0;
      do
      {
        v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v26,
                klass->vtable._16_ReadUInt32.methodPtr);
        v39 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v40 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B5D694(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v40, 0LL);
        if ( !v40 )
          sub_B5D69C(v41, v42);
        v40->fields.servantId = v38;
        v40->fields.limitCount = v39;
        v43 = ServantProfileLimitCountManager_TypeInfo;
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v43 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43->static_fields->limitCountList;
        if ( !limitCountList )
          sub_B5D69C(0LL, v42);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          limitCountList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        klass = v26->klass;
        ++v37;
      }
      while ( v37 < v36 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v26,
      klass->vtable._7_Dispose.methodPtr);
    v55 = 186;
  }
  v45 = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    p_offset = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      p_offset += 4;
      if ( v46 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v48 = (__int64)(&v45->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v48 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v48)(v26, *(_QWORD *)(v48 + 8));
  if ( v55 != 186 )
  {
    if ( !v25 )
      return v55 == 198;
LABEL_46:
    v50 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v53 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v52);
    }
    else
    {
LABEL_50:
      v53 = sub_AF54C0(v25, System_IDisposable_TypeInfo, 0LL, v49);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v53)(v25, *(_QWORD *)(v53 + 8));
    return v55 == 198;
  }
  v55 = 198;
  if ( v25 )
    goto LABEL_46;
  return v55 == 198;
}


void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  ServantProfileLimitCountManager___c__DisplayClass9_0_o *v27; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x0
  __int64 v29; // x1
  ServantProfileLimitCountManager_c *v30; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *limitCountList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x22
  peRenderTexture_ChangeLayerObject_o *v33; // x0
  ServantProfileLimitCountManager_c *v34; // x0
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v35; // x21
  ServantProfileLimitCountManager_c *v36; // x0

  if ( (byte_42EAA33 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      limitCount,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v21, v22, v23);
    sub_B5D5C4(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v24, v25, v26);
    byte_42EAA33 = 1;
  }
  v27 = (ServantProfileLimitCountManager___c__DisplayClass9_0_o *)sub_B5D694(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_22;
  v27->fields.servantId = servantId;
  v30 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v30 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v30->static_fields->limitCountList;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v27,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  if ( !limitCountList )
    goto LABEL_22;
  v33 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          limitCountList,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v33 )
  {
    v35 = (ServantProfileLimitCountManager_ServantLimitCountInfo_o *)sub_B5D694(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(v35, 0LL);
    if ( v35 )
    {
      v35->fields.servantId = v27->fields.servantId;
      v35->fields.limitCount = limitCount;
      v36 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v36 = ServantProfileLimitCountManager_TypeInfo;
      }
      v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36->static_fields->limitCountList;
      if ( v28 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_19;
      }
    }
LABEL_22:
    sub_B5D69C(v28, v29);
  }
  if ( SHIDWORD(v33->fields.gameObject) >= limitCount )
    return;
  HIDWORD(v33->fields.gameObject) = limitCount;
  v34 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v34 = ServantProfileLimitCountManager_TypeInfo;
  }
  v34->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  ServantProfileLimitCountManager___c__DisplayClass14_0_o *v36; // x20
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v40; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x22
  const MethodInfo *v42; // x2
  int32_t v43; // w20
  const MethodInfo *v44; // x0

  if ( (byte_42EAA38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantProfileMaster___, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___68747800, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Predicate_ServantProfileEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Predicate_ServantProfileEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(
      &Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v33, v34, v35);
    byte_42EAA38 = 1;
  }
  v36 = (ServantProfileLimitCountManager___c__DisplayClass14_0_o *)sub_B5D694(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_13;
  v36->fields.servantId = servantId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)Instance,
                                                                                           (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v40 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v40,
          Entitys_WarQuestSelectionEntity,
          (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___68747800),
        v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v41,
          (Il2CppObject *)v36,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_ServantProfileEntity___ctor__),
        !v40) )
  {
LABEL_13:
    sub_B5D69C(Instance, v38);
  }
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v40,
         (System_Predicate_T__o *)v41,
         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v43 = v36->fields.servantId;
    if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    }
    ServantProfileLimitCountManager__SetLimitCount(v43, limitCount, v42);
    ServantProfileLimitCountManager__WriteData(v44);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  void *Instance; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_WarQuestSelectionEntity; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v52; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v53; // x20
  int32_t v54; // w21
  __int64 v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x10
  System_Int32_array **v63; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v64; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v65; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  __int64 v67; // x23
  __int64 v68; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x8
  int32_t v70; // w22
  const MethodInfo *v71; // x2
  int32_t v72; // w23
  ServantProfileLimitCountManager_c *v73; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_42EAA37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___68747800, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Predicate_ServantProfileEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Predicate_ServantProfileEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v40,
      v41,
      v42);
    sub_B5D5C4(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v46, v47, v48);
    byte_42EAA37 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_33;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                     (DataMasterBase_o *)Instance,
                                                                                     (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v52 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v52,
    Entitys_WarQuestSelectionEntity,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___68747800);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  v53 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  if ( !v53 )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         *((System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)Instance + 4),
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v54 = 0;
    while ( 1 )
    {
      v55 = sub_B5D694(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)v55,
        0LL);
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v53,
                   v54,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v55 )
        break;
      if ( Instance
        && (v62 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v62) )
      {
        v63 = *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v62 - 8) == UserServantEntity_TypeInfo
            ? (System_Int32_array **)Instance
            : 0LL;
      }
      else
      {
        v63 = 0LL;
      }
      *(_QWORD *)(v55 + 16) = v63;
      v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v55 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v55 + 16), v63, v56, v57, v58, v59, v60, v61);
      v65 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v65,
        (Il2CppObject *)v55,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_ServantProfileEntity___ctor__);
      if ( !v52 )
        break;
      Instance = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v52,
                   (System_Predicate_T__o *)v65,
                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v66 = *v64;
        if ( !*v64 )
          break;
        v68 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
        v67 = *(_QWORD *)&v66[5].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v74.fields.currentCryptoKey = v68;
        *(_QWORD *)&v74.fields.fakeValue = v67;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL);
        v69 = *v64;
        if ( !*v64 )
          break;
        v70 = (int)Instance;
        v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69[6], 0LL);
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        }
        ServantProfileLimitCountManager__SetLimitCount(v70, v72, v71);
      }
      if ( ++v54 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v53,
                      (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_29;
    }
LABEL_33:
    sub_B5D69C(Instance, v50);
  }
LABEL_29:
  v73 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v73);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
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
  ServantProfileLimitCountManager_c *v19; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v23; // x0
  ServantProfileLimitCountManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x19
  System_IO_BinaryWriter_o *v28; // x20
  __int64 v29; // x1
  ServantProfileLimitCountManager_c *v30; // x0
  struct ServantProfileLimitCountManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v34; // x1
  __int64 v35; // x23
  ServantProfileLimitCountManager_c *v36; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *v37; // x24
  ServantProfileLimitCountManager_ServantLimitCountInfo_o *v38; // x24
  __int64 v39; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  __int64 v44; // x3
  int v45; // w22
  System_IO_Stream_c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  int v50[4]; // [xsp+8h] [xbp-48h]
  int v51; // [xsp+18h] [xbp-38h]

  if ( (byte_42EAA36 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v16, v17, v18);
    byte_42EAA36 = 1;
  }
  v51 = 0;
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v19 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModfiy = &ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  if ( v23->static_fields->UseMock )
    return 0;
  v25 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  }
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v25);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
  v30 = ServantProfileLimitCountManager_TypeInfo;
  if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v30 = ServantProfileLimitCountManager_TypeInfo;
  }
  v31 = v30->static_fields;
  limitCountList = v31->limitCountList;
  if ( !limitCountList )
    sub_B5D69C(v30, v29);
  if ( !v28 )
    sub_B5D69C(v30, v29);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v31->SAVE_DATA_VERSION,
    v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
    v28,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v28->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
    v28,
    (unsigned int)size,
    v28->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v35 = 0LL;
    do
    {
      v36 = ServantProfileLimitCountManager_TypeInfo;
      if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v36 = ServantProfileLimitCountManager_TypeInfo;
      }
      v37 = v36->static_fields->limitCountList;
      if ( !v37 )
        sub_B5D69C(v36, v34);
      if ( v37->fields._size <= (unsigned int)v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v38 = v37->fields._items->m_Items[v35];
      if ( !v38 )
        sub_B5D69C(v36, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v38->fields.servantId,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v38->fields.limitCount,
        v28->klass->vtable._18_Write.methodPtr);
      ++v35;
    }
    while ( (int)v35 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v28->klass->vtable._5_Close.method)(
    v28,
    v28->klass->vtable._6_Dispose.methodPtr);
  v50[0] = 158;
  v51 = 1;
  klass = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v43 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v39);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
  v51 = 0;
  v50[0] = 170;
  v45 = ++v51;
  if ( v27 )
  {
    v46 = v27->klass;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
    }
    else
    {
LABEL_46:
      v49 = sub_AF54C0(v27, System_IDisposable_TypeInfo, 0LL, v44);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v49)(v27, *(_QWORD *)(v49 + 8));
  }
  if ( v45 )
  {
    if ( v50[v45 - 1] == 170 )
      v51 = v45 - 1;
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  ServantProfileLimitCountManager___c__DisplayClass13_0_o *v5; // x20
  struct UserServantEntity_o *ent; // x8
  int32_t svtId; // w21
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E5D77 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_B5D5C4(
                                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                        (_DWORD)x,
                                                                        (_DWORD)method,
                                                                        v3);
    byte_42E5D77 = 1;
  }
  if ( !x || (ent = v5->fields.ent) == 0LL )
    sub_B5D69C(this, x);
  svtId = x->fields.svtId;
  v9 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}