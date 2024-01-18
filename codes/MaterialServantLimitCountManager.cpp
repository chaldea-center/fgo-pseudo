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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct MaterialServantLimitCountManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_41881CB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_B2C35C(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6619/*"Fgo_20191017"*/, v10);
    byte_41881CB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialServantLimitCountManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6619/*"Fgo_20191017"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6619/*"Fgo_20191017"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialServantLimitCountManager_TypeInfo;
  MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  v15 = MaterialServantLimitCountManager_TypeInfo->static_fields;
  v15->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v14;
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

  if ( (byte_41881C6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_41881C6 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
      v4 = MaterialServantLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_41881C4 & 1) == 0 )
  {
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_41881C4 = 1;
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

  if ( (byte_41881C8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v3);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v4);
    byte_41881C8 = 1;
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
    sub_B2C434(v5, method);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_41881C3 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41881C3 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(26, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0

  if ( (byte_41881C5 & 1) == 0 )
  {
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_41881C5 = 1;
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
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  MaterialServantLimitCountManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w20
  MaterialServantLimitCountManager_c *v21; // x0
  int v22; // w20
  int i; // w25
  int32_t v24; // w22
  int32_t v25; // w23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  MaterialServantLimitCountManager_c *v29; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  MaterialServantLimitCountManager_c *v35; // x0
  int v36; // [xsp+8h] [xbp-68h]

  if ( (byte_41881C9 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v5);
    sub_B2C35C(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v6);
    byte_41881C9 = 1;
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
    v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v14, v13, 0LL);
    if ( !v14 )
      sub_B2C434(v15, v16);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v18 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      v18 = MaterialServantLimitCountManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
    {
      v36 = 188;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
              v14,
              v14->klass->vtable._10_ReadByte.methodPtr);
      v21 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v21 = MaterialServantLimitCountManager_TypeInfo;
      }
      v21->static_fields->isContinueDevice = v20 & 1;
      v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v22 >= 1 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v26 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B2C42C(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
          MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v26, 0LL);
          if ( !v26 )
            sub_B2C434(v27, v28);
          v26->fields.servantId = v24;
          v26->fields.limitCount = v25;
          v29 = MaterialServantLimitCountManager_TypeInfo;
          if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
            v29 = MaterialServantLimitCountManager_TypeInfo;
          }
          limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->static_fields->limitCountList;
          if ( !limitCountList )
            sub_B2C434(0LL, v28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            limitCountList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        }
      }
      v36 = 173;
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v34 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v14, *(_QWORD *)(v34 + 8));
    return v36 == 173;
  }
  else
  {
    v35 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v35);
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

  if ( (byte_41881C7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v6);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v7);
    sub_B2C35C(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v8);
    byte_41881C7 = 1;
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
    v16 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B2C42C(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B2C434(v9, *(_QWORD *)&limitCount);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  MaterialServantLimitCountManager_c *v18; // x0
  struct MaterialServantLimitCountManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x22
  MaterialServantLimitCountManager_c *v25; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v26; // x23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v27; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0

  if ( (byte_41881CA & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v6);
    byte_41881CA = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v18 = MaterialServantLimitCountManager_TypeInfo;
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
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v24 = 0LL;
    do
    {
      v25 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v25 = MaterialServantLimitCountManager_TypeInfo;
      }
      v26 = v25->static_fields->limitCountList;
      if ( !v26 )
        sub_B2C434(v25, v22);
      if ( v26->fields._size <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = v26->fields._items->m_Items[v24];
      if ( !v27 )
        sub_B2C434(v25, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.servantId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.limitCount,
        v16->klass->vtable._18_Write.methodPtr);
      ++v24;
    }
    while ( (int)v24 < size );
  }
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
    v31 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
  return 1;
}


void __fastcall MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}