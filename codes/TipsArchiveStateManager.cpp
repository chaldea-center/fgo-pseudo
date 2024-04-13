void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct TipsArchiveStateManager_StaticFields *static_fields; // x0

  if ( (byte_42E4F3A & 1) == 0 )
  {
    sub_B5D5C4(&TipsArchiveStateManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_6709/*"Fgo_20230514_1"*/, v4, v5, v6);
    byte_42E4F3A = 1;
  }
  static_fields = TipsArchiveStateManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6709/*"Fgo_20230514_1"*/;
  sub_B5D560(static_fields);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20

  if ( (byte_42E4F39 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
      v5,
      v6,
      v7);
    byte_42E4F39 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v8;
  sub_B5D560(&this->fields.stateDataList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *stateDataList; // x0

  if ( (byte_42E4F36 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v5,
      v6,
      v7);
    byte_42E4F36 = 1;
  }
  stateDataList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.stateDataList;
  if ( !stateDataList )
    sub_B5D69C(0LL, method);
  if ( stateDataList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      stateDataList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  *(_WORD *)&this->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *DatFileSavePath; // x0

  if ( (byte_42E4F35 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4F35 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_44577788(DatFileSavePath, this->fields.saveName, 0LL);
}


bool __fastcall TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
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
  System_String_o *SaveFileName; // x20
  const MethodInfo *v18; // x1
  System_IO_Stream_o *v19; // x21
  System_IO_BinaryReader_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  TipsArchiveStateManager_c *v24; // x0
  __int64 v25; // x3
  int v26; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v28; // w21
  int v29; // w26
  int32_t v30; // w22
  int32_t v31; // w23
  int32_t v32; // w25
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v33; // x24
  __int64 v34; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x0
  System_IO_BinaryReader_c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  int v41; // [xsp+8h] [xbp-68h]

  if ( (byte_42E4F37 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TipsArchiveStateManager_TypeInfo, v14, v15, v16);
    byte_42E4F37 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v20 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v20, v19, 0LL);
    if ( !v20 )
      sub_B5D69C(v21, v22);
    v23 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                               v20,
                               v20->klass->vtable._23_ReadChars.methodPtr);
    v24 = TipsArchiveStateManager_TypeInfo;
    if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
      v24 = TipsArchiveStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v24->static_fields->SAVE_DATA_VERSION, v23, 0LL) )
    {
      v41 = 183;
    }
    else
    {
      this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._9_ReadBoolean.method)(
                                        v20,
                                        v20->klass->vtable._10_ReadByte.methodPtr) & 1;
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
              v20,
              v20->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v20->klass;
      v28 = v26;
      if ( v26 >= 1 )
      {
        v29 = 0;
        do
        {
          v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v20,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v33 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B5D694(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v33, v30, v31, v32, 0LL);
          stateDataList = this->fields.stateDataList;
          if ( !stateDataList )
            sub_B5D69C(0LL, v34);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stateDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
          klass = v20->klass;
          ++v29;
        }
        while ( v29 < v28 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v20,
        klass->vtable._7_Dispose.methodPtr);
      v41 = 161;
    }
    v36 = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v39 = sub_AF54C0(v20, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
    return v41 == 161;
  }
  else
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v18);
    return 0;
  }
}


void __fastcall TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *FileName_28255104; // x0

  if ( (byte_42E4F34 & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, (_DWORD)eventUiName, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v6, v7, v8);
    byte_42E4F34 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28255104 = DatFileName__getFileName_28255104(40, eventUiName, 0LL, 0LL);
  this->fields.saveName = System_String__Concat_44577788((System_String_o *)StringLiteral_885/*"/"*/, FileName_28255104, 0LL);
  sub_B5D560(&this->fields.saveName);
}


bool __fastcall TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
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
  ManagerConfig_c *v20; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v23; // x21
  System_IO_BinaryWriter_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  long double v27; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v33; // x23
  unsigned int *v34; // x23
  __int64 v35; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  TipsArchiveStateManager_c *v40; // x0

  if ( (byte_42E4F38 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TipsArchiveStateManager_TypeInfo, v17, v18, v19);
    byte_42E4F38 = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v24 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v24, v23, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_B5D69C(v25, v26);
  size = stateDataList->fields._size;
  v40 = TipsArchiveStateManager_TypeInfo;
  if ( (BYTE3(TipsArchiveStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v27 = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  }
  if ( !v24 )
    sub_B5D69C(v40, v26);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v24->klass->vtable._22_Write.method)(
    v24,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v24->klass[1]._1.image,
    v27);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v24->klass->vtable._8_Write.method)(
    v24,
    this->fields.isContinueDevice,
    v24->klass->vtable._9_Write.methodPtr);
  v30 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
          v24,
          (unsigned int)size,
          v24->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v32 = 0LL;
    do
    {
      v33 = this->fields.stateDataList;
      if ( !v33 )
        sub_B5D69C(v30, v31);
      if ( v33->fields._size <= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v34 = (unsigned int *)v33->fields._items->m_Items[v32];
      if ( !v34 )
        sub_B5D69C(v30, v31);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        v34[4],
        v24->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        v34[5],
        v24->klass->vtable._18_Write.methodPtr);
      v30 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
              v24,
              v34[6],
              v24->klass->vtable._18_Write.methodPtr);
      ++v32;
    }
    while ( (int)v32 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v24->klass->vtable._5_Close.method)(
    v24,
    v24->klass->vtable._6_Dispose.methodPtr);
  klass = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      p_offset += 4;
      if ( v37 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_25:
    v39 = sub_AF54C0(v24, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v24, *(_QWORD *)(v39 + 8));
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
  sub_B5D560(&this->fields.stateDataList);
}