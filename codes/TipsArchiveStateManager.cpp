void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FF700 & 1) == 0 )
  {
    sub_1B64870(&TipsArchiveStateManager_TypeInfo, v1);
    sub_1B64870(&StringLiteral_6625/*"Fgo_20230514_1"*/, v4);
    byte_49FF700 = 1;
  }
  TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6625/*"Fgo_20230514_1"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)TipsArchiveStateManager_TypeInfo->static_fields,
    StringLiteral_6625/*"Fgo_20230514_1"*/,
    v2,
    v3);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF6FF & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      method);
    sub_1B64870(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v3);
    byte_49FF6FF = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.stateDataList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  TipsArchiveStateManager_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v7; // w9

  v2 = this;
  if ( (byte_49FF6FC & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      method);
    this = (TipsArchiveStateManager_o *)sub_1B64870(
                                          &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
                                          v3);
    byte_49FF6FC = 1;
  }
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    sub_1B64ACC(this, method);
  size = stateDataList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)stateDataList->fields._items;
    v7 = stateDataList->fields._version + 1;
    stateDataList->fields._size = 0;
    stateDataList->fields._version = v7;
    System_Array__Clear(items, 0, size, 0LL);
  }
  *(_WORD *)&v2->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_49FF6FB & 1) == 0 )
  {
    sub_1B64870(&AndroidUtil_TypeInfo, method);
    byte_49FF6FB = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_61383576(DatFileSavePath, this->fields.saveName, 0LL);
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
  int v15; // w22
  int v16; // w21
  int32_t v17; // w23
  int32_t v18; // w24
  int32_t v19; // w25
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v20; // x22
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *stateDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0

  if ( (byte_49FF6FD & 1) == 0 )
  {
    sub_1B64870(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B64870(&System_IDisposable_TypeInfo, v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v4);
    sub_1B64870(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v5);
    sub_1B64870(&TipsArchiveStateManager_TypeInfo, v6);
    byte_49FF6FD = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v8);
    return 0;
  }
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v10 = (System_IO_BinaryReader_o *)sub_1B64ABC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v10, v9, 0LL);
  if ( !v10 )
    sub_1B64ACC(v11, v12);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                             v10,
                             v10->klass->vtable._23_ReadChars.methodPtr);
  v14 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
    v14 = TipsArchiveStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0LL) )
  {
    v15 = 4;
  }
  else
  {
    this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
                                      v10,
                                      v10->klass->vtable._10_ReadByte.methodPtr) & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
            v10,
            v10->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v16 >= 1 )
    {
      do
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v20 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_1B64ABC(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v20, v17, v18, v19, 0LL);
        stateDataList = (System_Collections_Generic_List_object__o *)this->fields.stateDataList;
        if ( !stateDataList )
          sub_1B64ACC(0LL, v21);
        items = stateDataList->fields._items;
        v26 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++stateDataList->fields._version;
        if ( !items )
          sub_1B64ACC(stateDataList, v21);
        size = stateDataList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            stateDataList,
            (Il2CppObject *)v20,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          stateDataList->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v20;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v20, v22, v23);
        }
        --v16;
      }
      while ( v16 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._6_Close.method)(
      v10,
      v10->klass->vtable._7_Dispose.methodPtr);
    v15 = 7;
  }
  klass = v10->klass;
  v30 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_21;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v32 = sub_1BB6850(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v10, *(_QWORD *)(v32 + 8));
  return v15 == 7;
}


void __fastcall TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *FileName_37375048; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF6FA & 1) == 0 )
  {
    sub_1B64870(&DatFileName_TypeInfo, eventUiName);
    sub_1B64870(&StringLiteral_1124/*"/"*/, v5);
    byte_49FF6FA = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37375048 = DatFileName__getFileName_37375048(40, eventUiName, 0LL, 0LL);
  v7 = System_String__Concat_61383576((System_String_o *)StringLiteral_1124/*"/"*/, FileName_37375048, 0LL);
  this->fields.saveName = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.saveName, (int32_t)v7, v8, v9);
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
  long double inited; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v18; // x0
  __int64 v19; // x1
  int32_t i; // w22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v21; // x0
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  if ( (byte_49FF6FE & 1) == 0 )
  {
    sub_1B64870(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B64870(&System_IDisposable_TypeInfo, v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v4);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v5);
    sub_1B64870(&ManagerConfig_TypeInfo, v6);
    sub_1B64870(&TipsArchiveStateManager_TypeInfo, v7);
    byte_49FF6FE = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v11 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v12 = (System_IO_BinaryWriter_o *)sub_1B64ABC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61621732(v12, v11, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_1B64ACC(v13, v14);
  size = stateDataList->fields._size;
  v18 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  if ( !v12 )
    sub_1B64ACC(v18, v14);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v12->klass->vtable._22_Write.method)(
    v12,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v12->klass[1]._1.image,
    inited);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v12->klass->vtable._8_Write.method)(
    v12,
    this->fields.isContinueDevice,
    v12->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
    v12,
    (unsigned int)size,
    v12->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v21 = this->fields.stateDataList;
      if ( !v21 )
        sub_1B64ACC(0LL, v19);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v21,
               i,
               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
      v24 = Item;
      if ( !Item )
        sub_1B64ACC(0LL, v23);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        LODWORD(Item[1].klass),
        v12->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        HIDWORD(v24[1].klass),
        v12->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        LODWORD(v24[1].monitor),
        v12->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v12->klass->vtable._5_Close.method)(
    v12,
    v12->klass->vtable._6_Dispose.methodPtr);
  klass = v12->klass;
  v26 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_21;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v28 = sub_1BB6850(v12, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v3; // w3

  this->fields.stateDataList = value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.stateDataList, (int32_t)value, (int32_t)method, v3);
}