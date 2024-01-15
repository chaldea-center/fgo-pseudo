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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct MaterialServantLimitCountManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F7B7B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_B16FFC(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6595/*"Fgo_20191017"*/, v10);
    byte_40F7B7B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialServantLimitCountManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6595/*"Fgo_20191017"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6595/*"Fgo_20191017"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialServantLimitCountManager_TypeInfo;
  MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  v19 = MaterialServantLimitCountManager_TypeInfo->static_fields;
  v19->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v18;
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

  if ( (byte_40F7B76 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_40F7B76 = 1;
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
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
      v4 = MaterialServantLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
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

  if ( (byte_40F7B74 & 1) == 0 )
  {
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_40F7B74 = 1;
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

  if ( (byte_40F7B78 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v3);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v4);
    byte_40F7B78 = 1;
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
    sub_B170D4();
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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

  if ( (byte_40F7B73 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40F7B73 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(26, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0

  if ( (byte_40F7B75 & 1) == 0 )
  {
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_40F7B75 = 1;
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  MaterialServantLimitCountManager_c *v20; // x0
  char v21; // w20
  MaterialServantLimitCountManager_c *v22; // x0
  int v23; // w20
  int i; // w25
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v31; // x21
  MaterialServantLimitCountManager_c *v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  MaterialServantLimitCountManager_c *v38; // x0
  int v39; // [xsp+8h] [xbp-68h]

  if ( (byte_40F7B79 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v5);
    sub_B16FFC(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v6);
    byte_40F7B79 = 1;
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
    v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
    System_IO_BinaryReader___ctor(v18, v13, 0LL);
    if ( !v18 )
      sub_B170D4();
    v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                               v18,
                               v18->klass->vtable._23_ReadChars.methodPtr);
    v20 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      v20 = MaterialServantLimitCountManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
    {
      v39 = 188;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
              v18,
              v18->klass->vtable._10_ReadByte.methodPtr);
      v22 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v22 = MaterialServantLimitCountManager_TypeInfo;
      }
      v22->static_fields->isContinueDevice = v21 & 1;
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
              v18,
              v18->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v23 >= 1 )
      {
        for ( i = 0; i < v23; ++i )
        {
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          v31 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B170CC(
                                                                              MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo,
                                                                              v27,
                                                                              v28,
                                                                              v29,
                                                                              v30);
          MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v31, 0LL);
          if ( !v31 )
            sub_B170D4();
          v31->fields.servantId = v25;
          v31->fields.limitCount = v26;
          v32 = MaterialServantLimitCountManager_TypeInfo;
          if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
            v32 = MaterialServantLimitCountManager_TypeInfo;
          }
          limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32->static_fields->limitCountList;
          if ( !limitCountList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            limitCountList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        }
      }
      v39 = 173;
    }
    klass = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v37 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v18, *(_QWORD *)(v37 + 8));
    return v39 == 173;
  }
  else
  {
    v38 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v38);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialServantLimitCountManager__SetLimitCount(
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
  MaterialServantLimitCountManager_c *v11; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int size; // w21
  __int64 i; // x23
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v15; // x24
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v16; // x8
  MaterialServantLimitCountManager_c *v17; // x0
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v18; // x21
  MaterialServantLimitCountManager_c *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x0

  if ( (byte_40F7B77 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v8);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v9);
    sub_B16FFC(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v10);
    byte_40F7B77 = 1;
  }
  v11 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v11 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v11->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_32;
  size = limitCountList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    v18 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B170CC(
                                                                        MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo,
                                                                        *(_QWORD *)&limitCount,
                                                                        method,
                                                                        v3,
                                                                        v4);
    MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v18, 0LL);
    if ( v18 )
    {
      v18->fields.servantId = servantId;
      v18->fields.limitCount = limitCount;
      v19 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v19 = MaterialServantLimitCountManager_TypeInfo;
      }
      v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->static_fields->limitCountList;
      if ( v20 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B170D4();
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MaterialServantLimitCountManager_TypeInfo;
    }
    v15 = v11->static_fields->limitCountList;
    if ( !v15 )
      goto LABEL_32;
    if ( v15->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = v15->fields._items->m_Items[i];
    if ( !v16 )
      goto LABEL_32;
    if ( v16->fields.servantId == servantId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_23;
    v11 = MaterialServantLimitCountManager_TypeInfo;
  }
  if ( v16->fields.limitCount != limitCount )
  {
    v16->fields.limitCount = limitCount;
    v17 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_30;
    }
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
LABEL_29:
    v17 = MaterialServantLimitCountManager_TypeInfo;
LABEL_30:
    v17->static_fields->isModfiy = 1;
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  MaterialServantLimitCountManager_c *v21; // x0
  struct MaterialServantLimitCountManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v25; // x22
  MaterialServantLimitCountManager_c *v26; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v27; // x23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v28; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0

  if ( (byte_40F7B7A & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&MaterialServantLimitCountManager_TypeInfo, v6);
    byte_40F7B7A = 1;
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
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v21 = MaterialServantLimitCountManager_TypeInfo;
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
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
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
      v26 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v26 = MaterialServantLimitCountManager_TypeInfo;
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
  return 1;
}


void __fastcall MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}