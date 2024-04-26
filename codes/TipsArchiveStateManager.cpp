void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  struct TipsArchiveStateManager_StaticFields *static_fields; // x0

  if ( (byte_434E48C & 1) == 0 )
  {
    sub_B70694(&TipsArchiveStateManager_TypeInfo);
    sub_B70694(&StringLiteral_6722/*"Fgo_20230514_1"*/);
    byte_434E48C = 1;
  }
  static_fields = TipsArchiveStateManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6722/*"Fgo_20230514_1"*/;
  sub_B70630(static_fields);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_434E48B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    byte_434E48B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v3;
  sub_B70630(&this->fields.stateDataList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *stateDataList; // x0

  if ( (byte_434E488 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    byte_434E488 = 1;
  }
  stateDataList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.stateDataList;
  if ( !stateDataList )
    sub_B7076C(0LL, method);
  if ( stateDataList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      stateDataList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  *(_WORD *)&this->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_434E487 & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    byte_434E487 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_44758168(DatFileSavePath, this->fields.saveName, 0LL);
}


bool __fastcall TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *SaveFileName; // x20
  const MethodInfo *v4; // x1
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryReader_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  TipsArchiveStateManager_c *v10; // x0
  int v11; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v13; // w21
  int v14; // w26
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t v17; // w25
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v18; // x24
  __int64 v19; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x0
  System_IO_BinaryReader_c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  int v26; // [xsp+8h] [xbp-68h]

  if ( (byte_434E489 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_B70694(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    sub_B70694(&TipsArchiveStateManager_TypeInfo);
    byte_434E489 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v6 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v6, v5, 0LL);
    if ( !v6 )
      sub_B7076C(v7, v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._22_ReadString.method)(
                              v6,
                              v6->klass->vtable._23_ReadChars.methodPtr);
    v10 = TipsArchiveStateManager_TypeInfo;
    if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
      v10 = TipsArchiveStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0LL) )
    {
      v26 = 183;
    }
    else
    {
      this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._9_ReadBoolean.method)(
                                        v6,
                                        v6->klass->vtable._10_ReadByte.methodPtr) & 1;
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
              v6,
              v6->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v6->klass;
      v13 = v11;
      if ( v11 >= 1 )
      {
        v14 = 0;
        do
        {
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v6,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                  v6,
                  v6->klass->vtable._16_ReadUInt32.methodPtr);
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                  v6,
                  v6->klass->vtable._16_ReadUInt32.methodPtr);
          v18 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B70764(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v18, v15, v16, v17, 0LL);
          stateDataList = this->fields.stateDataList;
          if ( !stateDataList )
            sub_B7076C(0LL, v19);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stateDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
          klass = v6->klass;
          ++v14;
        }
        while ( v14 < v13 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v6,
        klass->vtable._7_Dispose.methodPtr);
      v26 = 161;
    }
    v21 = v6->klass;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &v21->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v24 = (__int64)(&v21->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v24 = sub_B08590(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v24)(v6, *(_QWORD *)(v24 + 8));
    return v26 == 161;
  }
  else
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v4);
    return 0;
  }
}


void __fastcall TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  System_String_o *FileName_27665620; // x0

  if ( (byte_434E486 & 1) == 0 )
  {
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_434E486 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27665620 = DatFileName__getFileName_27665620(40, eventUiName, 0LL, 0LL);
  this->fields.saveName = System_String__Concat_44758168((System_String_o *)StringLiteral_890/*"/"*/, FileName_27665620, 0LL);
  sub_B70630(&this->fields.saveName);
}


bool __fastcall TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v17; // x23
  unsigned int *v18; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0

  if ( (byte_434E48A & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&TipsArchiveStateManager_TypeInfo);
    byte_434E48A = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v7 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v7, v6, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_B7076C(v8, v9);
  size = stateDataList->fields._size;
  v13 = TipsArchiveStateManager_TypeInfo;
  if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  }
  if ( !v7 )
    sub_B7076C(v13, v9);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v7->klass->vtable._22_Write.method)(
    v7,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v7->klass[1]._1.image,
    v10);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v7->klass->vtable._8_Write.method)(
    v7,
    this->fields.isContinueDevice,
    v7->klass->vtable._9_Write.methodPtr);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
          v7,
          (unsigned int)size,
          v7->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v16 = 0LL;
    do
    {
      v17 = this->fields.stateDataList;
      if ( !v17 )
        sub_B7076C(v14, v15);
      if ( v17->fields._size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v18 = (unsigned int *)v17->fields._items->m_Items[v16];
      if ( !v18 )
        sub_B7076C(v14, v15);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
        v7,
        v18[4],
        v7->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
        v7,
        v18[5],
        v7->klass->vtable._18_Write.methodPtr);
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
              v7,
              v18[6],
              v7->klass->vtable._18_Write.methodPtr);
      ++v16;
    }
    while ( (int)v16 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v7->klass->vtable._5_Close.method)(
    v7,
    v7->klass->vtable._6_Dispose.methodPtr);
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_25:
    v22 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v7, *(_QWORD *)(v22 + 8));
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
  sub_B70630(&this->fields.stateDataList);
}