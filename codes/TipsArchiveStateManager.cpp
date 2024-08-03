void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FD607 & 1) == 0 )
  {
    sub_1B640C8(&TipsArchiveStateManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6625/*"Fgo_20230514_1"*/, v4);
    byte_49FD607 = 1;
  }
  TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6625/*"Fgo_20230514_1"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TipsArchiveStateManager_TypeInfo->static_fields,
    StringLiteral_6625/*"Fgo_20230514_1"*/,
    v2,
    v3);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FD606 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      method);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v4);
    byte_49FD606 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stateDataList, (int32_t)v5, v6, v7);
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
  if ( (byte_49FD603 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      method);
    this = (TipsArchiveStateManager_o *)sub_1B640C8(
                                          &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
                                          v3);
    byte_49FD603 = 1;
  }
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    sub_1B64324(this);
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

  if ( (byte_49FD602 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    byte_49FD602 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_61375396(DatFileSavePath, this->fields.saveName, 0LL);
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
  int v16; // w22
  int v17; // w21
  int32_t v18; // w23
  int32_t v19; // w24
  int32_t v20; // w25
  __int64 v21; // x1
  __int64 v22; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *stateDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0

  if ( (byte_49FD604 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v4);
    sub_1B640C8(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v5);
    sub_1B640C8(&TipsArchiveStateManager_TypeInfo, v6);
    byte_49FD604 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v8);
    return 0;
  }
  v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v12 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v10, v11);
  System_IO_BinaryReader___ctor(v12, v9, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                             v12,
                             v12->klass->vtable._23_ReadChars.methodPtr);
  v15 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
    v15 = TipsArchiveStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0LL) )
  {
    v16 = 4;
  }
  else
  {
    this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
                                      v12,
                                      v12->klass->vtable._10_ReadByte.methodPtr) & 1;
    v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
            v12,
            v12->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v17 >= 1 )
    {
      do
      {
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                v12,
                v12->klass->vtable._16_ReadUInt32.methodPtr);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                v12,
                v12->klass->vtable._16_ReadUInt32.methodPtr);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                v12,
                v12->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_1B64314(
                                                                           EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
                                                                           v21,
                                                                           v22);
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v23, v18, v19, v20, 0LL);
        stateDataList = (System_Collections_Generic_List_object__o *)this->fields.stateDataList;
        if ( !stateDataList )
          sub_1B64324(0LL);
        items = stateDataList->fields._items;
        v28 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++stateDataList->fields._version;
        if ( !items )
          sub_1B64324(stateDataList);
        size = stateDataList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            stateDataList,
            (Il2CppObject *)v23,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          stateDataList->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v23;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v24, v25);
        }
        --v17;
      }
      while ( v17 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._6_Close.method)(
      v12,
      v12->klass->vtable._7_Dispose.methodPtr);
    v16 = 7;
  }
  klass = v12->klass;
  v32 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_21;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v34 = sub_1BB60A8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v12, *(_QWORD *)(v34 + 8));
  return v16 == 7;
}


void __fastcall TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *FileName_37370684; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FD601 & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, eventUiName);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v5);
    byte_49FD601 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_37370684 = DatFileName__getFileName_37370684(40, eventUiName, 0LL, 0LL);
  v7 = System_String__Concat_61375396((System_String_o *)StringLiteral_1124/*"/"*/, FileName_37370684, 0LL);
  this->fields.saveName = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.saveName, (int32_t)v7, v8, v9);
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
  long double inited; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v19; // x0
  int32_t i; // w22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v21; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_49FD605 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    sub_1B640C8(&TipsArchiveStateManager_TypeInfo, v7);
    byte_49FD605 = 1;
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
  v14 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v12, v13);
  System_IO_BinaryWriter___ctor_61613552(v14, v11, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_1B64324(v15);
  size = stateDataList->fields._size;
  v19 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  if ( !v14 )
    sub_1B64324(v19);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v14->klass->vtable._22_Write.method)(
    v14,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v14->klass[1]._1.image,
    inited);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    this->fields.isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v21 = this->fields.stateDataList;
      if ( !v21 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v21,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
      v23 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v23[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(v23[1].monitor),
        v14->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v14->klass->vtable._5_Close.method)(
    v14,
    v14->klass->vtable._6_Dispose.methodPtr);
  klass = v14->klass;
  v25 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_21;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v27 = sub_1BB60A8(v14, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v3; // w3

  this->fields.stateDataList = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stateDataList, (int32_t)value, (int32_t)method, v3);
}