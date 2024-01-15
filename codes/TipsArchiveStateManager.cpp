void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F7225 & 1) == 0 )
  {
    sub_B16FFC(&TipsArchiveStateManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6606/*"Fgo_20230514_1"*/, v8);
    byte_40F7225 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TipsArchiveStateManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6606/*"Fgo_20230514_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6606/*"Fgo_20230514_1"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7224 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      method);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v6);
    byte_40F7224 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stateDataList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *stateDataList; // x0

  if ( (byte_40F7221 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v3);
    byte_40F7221 = 1;
  }
  stateDataList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.stateDataList;
  if ( !stateDataList )
    sub_B170D4();
  if ( stateDataList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      stateDataList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  *(_WORD *)&this->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_40F7220 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    byte_40F7220 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_43743732(DatFileSavePath, this->fields.saveName, 0LL);
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_IO_BinaryReader_o *v14; // x20
  System_String_o *v15; // x21
  TipsArchiveStateManager_c *v16; // x0
  int v17; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v19; // w21
  int v20; // w26
  int32_t v21; // w22
  int32_t v22; // w23
  int32_t v23; // w25
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v28; // x24
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x0
  System_IO_BinaryReader_c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  int v35; // [xsp+8h] [xbp-68h]

  if ( (byte_40F7222 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__, v4);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v5);
    sub_B16FFC(&TipsArchiveStateManager_TypeInfo, v6);
    byte_40F7222 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v14 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v10, v11, v12, v13);
    System_IO_BinaryReader___ctor(v14, v9, 0LL);
    if ( !v14 )
      sub_B170D4();
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v16 = TipsArchiveStateManager_TypeInfo;
    if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
      v16 = TipsArchiveStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0LL) )
    {
      v35 = 183;
    }
    else
    {
      this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                                        v14,
                                        v14->klass->vtable._10_ReadByte.methodPtr) & 1;
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v14->klass;
      v19 = v17;
      if ( v17 >= 1 )
      {
        v20 = 0;
        do
        {
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v14,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v28 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B170CC(
                                                                             EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v28, v21, v22, v23, 0LL);
          stateDataList = this->fields.stateDataList;
          if ( !stateDataList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stateDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
          klass = v14->klass;
          ++v20;
        }
        while ( v20 < v19 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v14,
        klass->vtable._7_Dispose.methodPtr);
      v35 = 161;
    }
    v30 = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v33 = sub_AAFEF8(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v14, *(_QWORD *)(v33 + 8));
    return v35 == 161;
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
  System_String_o *FileName_27471476; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F721F & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, eventUiName);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v5);
    byte_40F721F = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471476 = DatFileName__getFileName_27471476(40, eventUiName, 0LL, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_871/*"/"*/, FileName_27471476, 0LL);
  this->fields.saveName = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.saveName,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_IO_BinaryWriter_o *v16; // x19
  long double v17; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  __int64 v20; // x22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v21; // x23
  unsigned int *v22; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_40F7223 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    sub_B16FFC(&TipsArchiveStateManager_TypeInfo, v7);
    byte_40F7223 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v12, v13, v14, v15);
  System_IO_BinaryWriter___ctor_39195976(v16, v11, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_B170D4();
  size = stateDataList->fields._size;
  if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v17 = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  }
  if ( !v16 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v16->klass->vtable._22_Write.method)(
    v16,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v16->klass[1]._1.image,
    v17);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    this->fields.isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v20 = 0LL;
    do
    {
      v21 = this->fields.stateDataList;
      if ( !v21 )
        sub_B170D4();
      if ( v21->fields._size <= (unsigned int)v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v22 = (unsigned int *)v21->fields._items->m_Items[v20];
      if ( !v22 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        v22[4],
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        v22[5],
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        v22[6],
        v16->klass->vtable._18_Write.methodPtr);
      ++v20;
    }
    while ( (int)v20 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v16->klass->vtable._5_Close.method)(
    v16,
    v16->klass->vtable._6_Dispose.methodPtr);
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_25:
    v26 = sub_AAFEF8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v26)(v16, *(_QWORD *)(v26 + 8));
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.stateDataList = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stateDataList,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}