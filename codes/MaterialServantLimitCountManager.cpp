void __fastcall MaterialServantLimitCountManager___cctor(const MethodInfo *method)
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
  MaterialServantLimitCountManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct MaterialServantLimitCountManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4214E05 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_B0D8A4(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6636/*"Fgo_20191017"*/, v10);
    byte_4214E05 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialServantLimitCountManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6636/*"Fgo_20191017"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6636/*"Fgo_20191017"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialServantLimitCountManager_TypeInfo;
  MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  v17 = MaterialServantLimitCountManager_TypeInfo->static_fields;
  v17->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->limitCountList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall MaterialServantLimitCountManager___ctor(
        MaterialServantLimitCountManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialServantLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialServantLimitCountManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *limitCountList; // x8

  if ( (byte_4214E00 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4214E00 = 1;
  }
  v4 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v4 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_16;
  if ( limitCountList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)MaterialServantLimitCountManager_TypeInfo->static_fields->limitCountList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        limitCountList,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
      v4 = MaterialServantLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v4);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MaterialServantLimitCountManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall MaterialServantLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4214DFE & 1) == 0 )
  {
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_4214DFE = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall MaterialServantLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MaterialServantLimitCountManager_c *v5; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v9; // x23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v10; // x8

  if ( (byte_4214E02 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v3);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v4);
    byte_4214E02 = 1;
  }
  v5 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v5 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v5->static_fields->limitCountList;
  if ( !limitCountList )
LABEL_21:
    sub_B0D97C(v5);
  size = limitCountList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MaterialServantLimitCountManager_TypeInfo;
    }
    v9 = v5->static_fields->limitCountList;
    if ( !v9 )
      goto LABEL_21;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = v9->fields._items->m_Items[i];
    if ( !v10 )
      goto LABEL_21;
    if ( v10->fields.servantId == servantId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v5 = MaterialServantLimitCountManager_TypeInfo;
  }
  return v10->fields.limitCount;
}


System_String_o *__fastcall MaterialServantLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4214DFD & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4214DFD = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(26, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0

  if ( (byte_4214DFF & 1) == 0 )
  {
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_4214DFF = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  MaterialServantLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall MaterialServantLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialServantLimitCountManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  MaterialServantLimitCountManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  MaterialServantLimitCountManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  System_String_o *v18; // x20
  MaterialServantLimitCountManager_c *v19; // x0
  char v20; // w20
  MaterialServantLimitCountManager_c *v21; // x0
  int v22; // w20
  int i; // w25
  int32_t v24; // w22
  int32_t v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v28; // x21
  __int64 v29; // x0
  MaterialServantLimitCountManager_c *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  MaterialServantLimitCountManager_c *v36; // x0
  int v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4214E03 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v5);
    sub_B0D8A4(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v6);
    byte_4214E03 = 1;
  }
  v7 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v7 = MaterialServantLimitCountManager_TypeInfo;
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
  v10 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v10);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v12 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v12);
    v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v16 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v14, v15);
    System_IO_BinaryReader___ctor(v16, v13, 0LL);
    if ( !v16 )
      sub_B0D97C(v17);
    v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                               v16,
                               v16->klass->vtable._23_ReadChars.methodPtr);
    v19 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      v19 = MaterialServantLimitCountManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
    {
      v37 = 188;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
              v16,
              v16->klass->vtable._10_ReadByte.methodPtr);
      v21 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v21 = MaterialServantLimitCountManager_TypeInfo;
      }
      v21->static_fields->isContinueDevice = v20 & 1;
      v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
              v16,
              v16->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v22 >= 1 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          v28 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B0D974(
                                                                              MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo,
                                                                              v26,
                                                                              v27);
          MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v28, 0LL);
          if ( !v28 )
            sub_B0D97C(v29);
          v28->fields.servantId = v24;
          v28->fields.limitCount = v25;
          v30 = MaterialServantLimitCountManager_TypeInfo;
          if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
            v30 = MaterialServantLimitCountManager_TypeInfo;
          }
          limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->limitCountList;
          if ( !limitCountList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            limitCountList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        }
      }
      v37 = 173;
    }
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
          goto LABEL_40;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v35 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v16, *(_QWORD *)(v35 + 8));
    return v37 == 173;
  }
  else
  {
    v36 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v36);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialServantLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MaterialServantLimitCountManager_c *v9; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int size; // w21
  __int64 i; // x23
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v13; // x24
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v14; // x8
  MaterialServantLimitCountManager_c *v15; // x0
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v16; // x21
  MaterialServantLimitCountManager_c *v17; // x0

  if ( (byte_4214E01 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v6);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v7);
    sub_B0D8A4(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v8);
    byte_4214E01 = 1;
  }
  v9 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v9 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v9->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_32;
  size = limitCountList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    v16 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B0D974(
                                                                        MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo,
                                                                        *(_QWORD *)&limitCount,
                                                                        method);
    MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v16, 0LL);
    if ( v16 )
    {
      v16->fields.servantId = servantId;
      v16->fields.limitCount = limitCount;
      v17 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v17 = MaterialServantLimitCountManager_TypeInfo;
      }
      v9 = (MaterialServantLimitCountManager_c *)v17->static_fields->limitCountList;
      if ( v9 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B0D97C(v9);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = MaterialServantLimitCountManager_TypeInfo;
    }
    v13 = v9->static_fields->limitCountList;
    if ( !v13 )
      goto LABEL_32;
    if ( v13->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v14 = v13->fields._items->m_Items[i];
    if ( !v14 )
      goto LABEL_32;
    if ( v14->fields.servantId == servantId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_23;
    v9 = MaterialServantLimitCountManager_TypeInfo;
  }
  if ( v14->fields.limitCount != limitCount )
  {
    v14->fields.limitCount = limitCount;
    v15 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_30;
    }
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
LABEL_29:
    v15 = MaterialServantLimitCountManager_TypeInfo;
LABEL_30:
    v15->static_fields->isModfiy = 1;
  }
}


bool __fastcall MaterialServantLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialServantLimitCountManager_c *v7; // x0
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  MaterialServantLimitCountManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryWriter_o *v18; // x19
  MaterialServantLimitCountManager_c *v19; // x0
  struct MaterialServantLimitCountManager_StaticFields *v20; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v23; // x22
  MaterialServantLimitCountManager_c *v24; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v25; // x23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_4214E04 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v6);
    byte_4214E04 = 1;
  }
  v7 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v7 = MaterialServantLimitCountManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy;
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
  v13 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v18 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v16, v17);
  System_IO_BinaryWriter___ctor_39036700(v18, v15, 0LL);
  v19 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v19 = MaterialServantLimitCountManager_TypeInfo;
  }
  v20 = v19->static_fields;
  limitCountList = v20->limitCountList;
  if ( !limitCountList )
    sub_B0D97C(v19);
  if ( !v18 )
    sub_B0D97C(v19);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    v20->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
    v18,
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v18->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v23 = 0LL;
    do
    {
      v24 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v24 = MaterialServantLimitCountManager_TypeInfo;
      }
      v25 = v24->static_fields->limitCountList;
      if ( !v25 )
        sub_B0D97C(v24);
      if ( v25->fields._size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = v25->fields._items->m_Items[v23];
      if ( !v26 )
        sub_B0D97C(v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.servantId,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.limitCount,
        v18->klass->vtable._18_Write.methodPtr);
      ++v23;
    }
    while ( (int)v23 < size );
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v30 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v18, *(_QWORD *)(v30 + 8));
  return 1;
}


void __fastcall MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}