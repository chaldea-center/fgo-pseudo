void __fastcall MaterialServantLimitCountManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  MaterialServantLimitCountManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct MaterialServantLimitCountManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42AF9EA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    sub_B52984(&StringLiteral_6662/*"Fgo_20191017"*/);
    byte_42AF9EA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialServantLimitCountManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6662/*"Fgo_20191017"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6662/*"Fgo_20191017"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MaterialServantLimitCountManager_TypeInfo;
  MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  v11 = MaterialServantLimitCountManager_TypeInfo->static_fields;
  v11->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&v11->limitCountList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  MaterialServantLimitCountManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *limitCountList; // x8

  if ( (byte_42AF9E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    byte_42AF9E5 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_16;
  if ( limitCountList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (limitCountList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)MaterialServantLimitCountManager_TypeInfo->static_fields->limitCountList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        limitCountList,
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
      v2 = MaterialServantLimitCountManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall MaterialServantLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42AF9E3 & 1) == 0 )
  {
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    byte_42AF9E3 = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall MaterialServantLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v3; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v7; // x23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v8; // x8

  if ( (byte_42AF9E7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    byte_42AF9E7 = 1;
  }
  v3 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v3 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v3->static_fields->limitCountList;
  if ( !limitCountList )
LABEL_21:
    sub_B52A5C(v3, method);
  size = limitCountList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MaterialServantLimitCountManager_TypeInfo;
    }
    v7 = v3->static_fields->limitCountList;
    if ( !v7 )
      goto LABEL_21;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v8 = v7->fields._items->m_Items[i];
    if ( !v8 )
      goto LABEL_21;
    if ( v8->fields.servantId == servantId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v3 = MaterialServantLimitCountManager_TypeInfo;
  }
  return v8->fields.limitCount;
}


System_String_o *__fastcall MaterialServantLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42AF9E2 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AF9E2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(26, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0

  if ( (byte_42AF9E4 & 1) == 0 )
  {
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    byte_42AF9E4 = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  MaterialServantLimitCountManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall MaterialServantLimitCountManager__ReadData(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  MaterialServantLimitCountManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  MaterialServantLimitCountManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  MaterialServantLimitCountManager_c *v12; // x0
  __int64 v13; // x3
  char v14; // w20
  MaterialServantLimitCountManager_c *v15; // x0
  int v16; // w20
  int i; // w25
  int32_t v18; // w22
  int32_t v19; // w23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  MaterialServantLimitCountManager_c *v23; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *limitCountList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  MaterialServantLimitCountManager_c *v29; // x0
  int v30; // [xsp+8h] [xbp-68h]

  if ( (byte_42AF9E8 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    sub_B52984(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    byte_42AF9E8 = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v1 = MaterialServantLimitCountManager_TypeInfo;
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
  v4 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B52A5C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      v12 = MaterialServantLimitCountManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v30 = 188;
    }
    else
    {
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
              v8,
              v8->klass->vtable._10_ReadByte.methodPtr);
      v15 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v15 = MaterialServantLimitCountManager_TypeInfo;
      }
      v15->static_fields->isContinueDevice = v14 & 1;
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v16 >= 1 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v20 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B52A54(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
          MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v20, 0LL);
          if ( !v20 )
            sub_B52A5C(v21, v22);
          v20->fields.servantId = v18;
          v20->fields.limitCount = v19;
          v23 = MaterialServantLimitCountManager_TypeInfo;
          if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
            v23 = MaterialServantLimitCountManager_TypeInfo;
          }
          limitCountList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23->static_fields->limitCountList;
          if ( !limitCountList )
            sub_B52A5C(0LL, v22);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            limitCountList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        }
      }
      v30 = 173;
    }
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
          goto LABEL_40;
      }
      v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v28 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v8, *(_QWORD *)(v28 + 8));
    return v30 == 173;
  }
  else
  {
    v29 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    }
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v29);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialServantLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v5; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int size; // w21
  __int64 i; // x23
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v9; // x24
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v10; // x8
  MaterialServantLimitCountManager_c *v11; // x0
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v12; // x21
  MaterialServantLimitCountManager_c *v13; // x0

  if ( (byte_42AF9E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    sub_B52984(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    byte_42AF9E6 = 1;
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
    goto LABEL_32;
  size = limitCountList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    v12 = (MaterialServantLimitCountManager_ServantLimitCountInfo_o *)sub_B52A54(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(v12, 0LL);
    if ( v12 )
    {
      v12->fields.servantId = servantId;
      v12->fields.limitCount = limitCount;
      v13 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v13 = MaterialServantLimitCountManager_TypeInfo;
      }
      v5 = (MaterialServantLimitCountManager_c *)v13->static_fields->limitCountList;
      if ( v5 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B52A5C(v5, *(_QWORD *)&limitCount);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MaterialServantLimitCountManager_TypeInfo;
    }
    v9 = v5->static_fields->limitCountList;
    if ( !v9 )
      goto LABEL_32;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v10 = v9->fields._items->m_Items[i];
    if ( !v10 )
      goto LABEL_32;
    if ( v10->fields.servantId == servantId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_23;
    v5 = MaterialServantLimitCountManager_TypeInfo;
  }
  if ( v10->fields.limitCount != limitCount )
  {
    v10->fields.limitCount = limitCount;
    v11 = MaterialServantLimitCountManager_TypeInfo;
    if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_30;
    }
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
LABEL_29:
    v11 = MaterialServantLimitCountManager_TypeInfo;
LABEL_30:
    v11->static_fields->isModfiy = 1;
  }
}


bool __fastcall MaterialServantLimitCountManager__WriteData(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  MaterialServantLimitCountManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  MaterialServantLimitCountManager_c *v12; // x0
  struct MaterialServantLimitCountManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v16; // x1
  __int64 v17; // x3
  __int64 v18; // x22
  MaterialServantLimitCountManager_c *v19; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *v20; // x23
  MaterialServantLimitCountManager_ServantLimitCountInfo_o *v21; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0

  if ( (byte_42AF9E9 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&MaterialServantLimitCountManager_TypeInfo);
    byte_42AF9E9 = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v1 = MaterialServantLimitCountManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy;
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
  v7 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  }
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40252128(v10, v9, 0LL);
  v12 = MaterialServantLimitCountManager_TypeInfo;
  if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v12 = MaterialServantLimitCountManager_TypeInfo;
  }
  v13 = v12->static_fields;
  limitCountList = v13->limitCountList;
  if ( !limitCountList )
    sub_B52A5C(v12, v11);
  if ( !v10 )
    sub_B52A5C(v12, v11);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v10->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
    v10,
    (unsigned int)size,
    v10->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v18 = 0LL;
    do
    {
      v19 = MaterialServantLimitCountManager_TypeInfo;
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v19 = MaterialServantLimitCountManager_TypeInfo;
      }
      v20 = v19->static_fields->limitCountList;
      if ( !v20 )
        sub_B52A5C(v19, v16);
      if ( v20->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v21 = v20->fields._items->m_Items[v18];
      if ( !v21 )
        sub_B52A5C(v19, v16);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.servantId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.limitCount,
        v10->klass->vtable._18_Write.methodPtr);
      ++v18;
    }
    while ( (int)v18 < size );
  }
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v25 = sub_AEB880(v10, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v10, *(_QWORD *)(v25 + 8));
  return 1;
}


void __fastcall MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}