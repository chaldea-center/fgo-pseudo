void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct TipsArchiveStateManager_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4184CE6 & 1) == 0 )
  {
    sub_B2C35C(&TipsArchiveStateManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6630/*"Fgo_20230514_1"*/, v2);
    byte_4184CE6 = 1;
  }
  static_fields = TipsArchiveStateManager_TypeInfo->static_fields;
  v4 = StringLiteral_6630/*"Fgo_20230514_1"*/;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6630/*"Fgo_20230514_1"*/;
  sub_B2C2F8(static_fields, v4);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_4184CE5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      method);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v3);
    byte_4184CE5 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v4;
  sub_B2C2F8(&this->fields.stateDataList, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *stateDataList; // x0

  if ( (byte_4184CE2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v3);
    byte_4184CE2 = 1;
  }
  stateDataList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.stateDataList;
  if ( !stateDataList )
    sub_B2C434(0LL, method);
  if ( stateDataList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      stateDataList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  *(_WORD *)&this->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_4184CE1 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    byte_4184CE1 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_44305532(DatFileSavePath, this->fields.saveName, 0LL);
}


bool __fastcall TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *SaveFileName; // x20
  const MethodInfo *v8; // x1
  System_IO_Stream_o *v9; // x21
  System_IO_BinaryReader_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  TipsArchiveStateManager_c *v14; // x0
  __int64 v15; // x3
  int v16; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v18; // w21
  int v19; // w26
  int32_t v20; // w22
  int32_t v21; // w23
  int32_t v22; // w25
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v23; // x24
  __int64 v24; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x0
  System_IO_BinaryReader_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  int v31; // [xsp+8h] [xbp-68h]

  if ( (byte_4184CE3 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__, v4);
    sub_B2C35C(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v5);
    sub_B2C35C(&TipsArchiveStateManager_TypeInfo, v6);
    byte_4184CE3 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v10 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v10, v9, 0LL);
    if ( !v10 )
      sub_B2C434(v11, v12);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                               v10,
                               v10->klass->vtable._23_ReadChars.methodPtr);
    v14 = TipsArchiveStateManager_TypeInfo;
    if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
      v14 = TipsArchiveStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0LL) )
    {
      v31 = 183;
    }
    else
    {
      this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
                                        v10,
                                        v10->klass->vtable._10_ReadByte.methodPtr) & 1;
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
              v10,
              v10->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v10->klass;
      v18 = v16;
      if ( v16 >= 1 )
      {
        v19 = 0;
        do
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v10,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v23 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B2C42C(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v23, v20, v21, v22, 0LL);
          stateDataList = this->fields.stateDataList;
          if ( !stateDataList )
            sub_B2C434(0LL, v24);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stateDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
          klass = v10->klass;
          ++v19;
        }
        while ( v19 < v18 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v10,
        klass->vtable._7_Dispose.methodPtr);
      v31 = 161;
    }
    v26 = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v29 = (__int64)(&v26->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v29 = sub_AC5258(v10, System_IDisposable_TypeInfo, 0LL, v15);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v10, *(_QWORD *)(v29 + 8));
    return v31 == 161;
  }
  else
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v8);
    return 0;
  }
}


void __fastcall TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *FileName_27462832; // x0
  struct System_String_o *v7; // x0

  if ( (byte_4184CE0 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, eventUiName);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v5);
    byte_4184CE0 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462832 = DatFileName__getFileName_27462832(40, eventUiName, 0LL, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_872/*"/"*/, FileName_27462832, 0LL);
  this->fields.saveName = v7;
  sub_B2C2F8(&this->fields.saveName, v7);
}


bool __fastcall TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ManagerConfig_c *v8; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v11; // x21
  System_IO_BinaryWriter_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  long double v15; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v22; // x23
  unsigned int *v23; // x23
  __int64 v24; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0

  if ( (byte_4184CE4 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v5);
    sub_B2C35C(&ManagerConfig_TypeInfo, v6);
    sub_B2C35C(&TipsArchiveStateManager_TypeInfo, v7);
    byte_4184CE4 = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v11 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v12 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v12, v11, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_B2C434(v13, v14);
  size = stateDataList->fields._size;
  v18 = TipsArchiveStateManager_TypeInfo;
  if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  }
  if ( !v12 )
    sub_B2C434(v18, v14);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v12->klass->vtable._22_Write.method)(
    v12,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v12->klass[1]._1.image,
    v15);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v12->klass->vtable._8_Write.method)(
    v12,
    this->fields.isContinueDevice,
    v12->klass->vtable._9_Write.methodPtr);
  v19 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
          v12,
          (unsigned int)size,
          v12->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v21 = 0LL;
    do
    {
      v22 = this->fields.stateDataList;
      if ( !v22 )
        sub_B2C434(v19, v20);
      if ( v22->fields._size <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v23 = (unsigned int *)v22->fields._items->m_Items[v21];
      if ( !v23 )
        sub_B2C434(v19, v20);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        v23[4],
        v12->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        v23[5],
        v12->klass->vtable._18_Write.methodPtr);
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
              v12,
              v23[6],
              v12->klass->vtable._18_Write.methodPtr);
      ++v21;
    }
    while ( (int)v21 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v12->klass->vtable._5_Close.method)(
    v12,
    v12->klass->vtable._6_Dispose.methodPtr);
  klass = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_25:
    v28 = sub_AC5258(v12, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
  return 1;
}


bool __fastcall TipsArchiveStateManager__get_IsModfiy(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  return this->fields.isModfiy;
}


System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *__fastcall TipsArchiveStateManager__get_StateDataList(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  return this->fields.stateDataList;
}


void __fastcall TipsArchiveStateManager__set_IsModfiy(
        TipsArchiveStateManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isModfiy = value;
}


void __fastcall TipsArchiveStateManager__set_StateDataList(
        TipsArchiveStateManager_o *this,
        System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *value,
        const MethodInfo *method)
{
  this->fields.stateDataList = value;
  sub_B2C2F8(&this->fields.stateDataList, value);
}