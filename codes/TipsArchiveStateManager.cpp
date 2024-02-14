void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct TipsArchiveStateManager_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4210C4E & 1) == 0 )
  {
    sub_B0D8A4(&TipsArchiveStateManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_6647/*"Fgo_20230514_1"*/, v2);
    byte_4210C4E = 1;
  }
  static_fields = TipsArchiveStateManager_TypeInfo->static_fields;
  v4 = StringLiteral_6647/*"Fgo_20230514_1"*/;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6647/*"Fgo_20230514_1"*/;
  sub_B0D840(static_fields, v4);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_4210C4D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      method);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v4);
    byte_4210C4D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v5;
  sub_B0D840(&this->fields.stateDataList, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *stateDataList; // x0

  if ( (byte_4210C4A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v3);
    byte_4210C4A = 1;
  }
  stateDataList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.stateDataList;
  if ( !stateDataList )
    sub_B0D97C(0LL);
  if ( stateDataList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      stateDataList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  *(_WORD *)&this->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_4210C49 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, method);
    byte_4210C49 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_43849904(DatFileSavePath, this->fields.saveName, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_IO_BinaryReader_o *v12; // x20
  __int64 v13; // x0
  System_String_o *v14; // x21
  TipsArchiveStateManager_c *v15; // x0
  int v16; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v18; // w21
  int v19; // w26
  int32_t v20; // w22
  int32_t v21; // w23
  int32_t v22; // w25
  __int64 v23; // x1
  __int64 v24; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v25; // x24
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x0
  System_IO_BinaryReader_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  int v32; // [xsp+8h] [xbp-68h]

  if ( (byte_4210C4B & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__, v4);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v5);
    sub_B0D8A4(&TipsArchiveStateManager_TypeInfo, v6);
    byte_4210C4B = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v12 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v10, v11);
    System_IO_BinaryReader___ctor(v12, v9, 0LL);
    if ( !v12 )
      sub_B0D97C(v13);
    v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                               v12,
                               v12->klass->vtable._23_ReadChars.methodPtr);
    v15 = TipsArchiveStateManager_TypeInfo;
    if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
      v15 = TipsArchiveStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0LL) )
    {
      v32 = 183;
    }
    else
    {
      this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
                                        v12,
                                        v12->klass->vtable._10_ReadByte.methodPtr) & 1;
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
              v12,
              v12->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v12->klass;
      v18 = v16;
      if ( v16 >= 1 )
      {
        v19 = 0;
        do
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v12,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                  v12,
                  v12->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                  v12,
                  v12->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B0D974(
                                                                             EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
                                                                             v23,
                                                                             v24);
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v25, v20, v21, v22, 0LL);
          stateDataList = this->fields.stateDataList;
          if ( !stateDataList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stateDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
          klass = v12->klass;
          ++v19;
        }
        while ( v19 < v18 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v12,
        klass->vtable._7_Dispose.methodPtr);
      v32 = 161;
    }
    v27 = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v30 = (__int64)(&v27->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v30 = sub_AA67A0(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v12, *(_QWORD *)(v30 + 8));
    return v32 == 161;
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
  System_String_o *FileName_27230736; // x0
  struct System_String_o *v7; // x0

  if ( (byte_4210C48 & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, eventUiName);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v5);
    byte_4210C48 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27230736 = DatFileName__getFileName_27230736(40, eventUiName, 0LL, 0LL);
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_879/*"/"*/, FileName_27230736, 0LL);
  this->fields.saveName = v7;
  sub_B0D840(&this->fields.saveName, v7);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x0
  long double v16; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v22; // x23
  unsigned int *v23; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0

  if ( (byte_4210C4C & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    sub_B0D8A4(&TipsArchiveStateManager_TypeInfo, v7);
    byte_4210C4C = 1;
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
  v14 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v12, v13);
  System_IO_BinaryWriter___ctor_39036700(v14, v11, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_B0D97C(v15);
  size = stateDataList->fields._size;
  v19 = TipsArchiveStateManager_TypeInfo;
  if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v16 = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  }
  if ( !v14 )
    sub_B0D97C(v19);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v14->klass->vtable._22_Write.method)(
    v14,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v14->klass[1]._1.image,
    v16);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    this->fields.isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  v20 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
          v14,
          (unsigned int)size,
          v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v21 = 0LL;
    do
    {
      v22 = this->fields.stateDataList;
      if ( !v22 )
        sub_B0D97C(v20);
      if ( v22->fields._size <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v23 = (unsigned int *)v22->fields._items->m_Items[v21];
      if ( !v23 )
        sub_B0D97C(v20);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        v23[4],
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        v23[5],
        v14->klass->vtable._18_Write.methodPtr);
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
              v14,
              v23[6],
              v14->klass->vtable._18_Write.methodPtr);
      ++v21;
    }
    while ( (int)v21 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v14->klass->vtable._5_Close.method)(
    v14,
    v14->klass->vtable._6_Dispose.methodPtr);
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_25:
    v27 = sub_AA67A0(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v14, *(_QWORD *)(v27 + 8));
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
  sub_B0D840(&this->fields.stateDataList, value);
}