void TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C44409 & 1) == 0 )
  {
    sub_1C37058(&TipsArchiveStateManager_TypeInfo);
    sub_1C37058(&StringLiteral_6687/*"Fgo_20230514_1"*/);
    byte_4C44409 = 1;
  }
  TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6687/*"Fgo_20230514_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)TipsArchiveStateManager_TypeInfo->static_fields, StringLiteral_6687/*"Fgo_20230514_1"*/, v1, v2);
}


void TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C44408 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    byte_4C44408 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.stateDataList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  TipsArchiveStateManager_o *v2; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v6; // w9

  v2 = this;
  if ( (byte_4C44404 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    this = (TipsArchiveStateManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    byte_4C44404 = 1;
  }
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    sub_1C372B4(this);
  size = stateDataList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)stateDataList->fields._items;
    v6 = stateDataList->fields._version + 1;
    stateDataList->fields._size = 0;
    stateDataList->fields._version = v6;
    System_Array__Clear(items, 0, size, 0);
  }
  *(_WORD *)&v2->fields.isModfiy = 1;
}


void TipsArchiveStateManager__DeleteSaveData(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *UniqueIds; // x19
  _BOOL8 IsNullOrEmpty; // x0
  void *monitor; // x8
  unsigned __int64 v5; // x22
  System_String_o *v6; // x20
  System_String_o *FileName_40421340; // x20
  System_String_o *DatFileSavePath; // x21
  System_String_o *v9; // x20
  int v10; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C44407 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_IO_Path_TypeInfo);
    byte_4C44407 = 1;
  }
  v10 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( DataManager__HasMaster(0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( Master_object )
    {
      UniqueIds = (System_Collections_ICollection_o *)EventUiMaster__GetUniqueIds((EventUiMaster_o *)Master_object, 0);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(UniqueIds, 0);
      if ( IsNullOrEmpty )
        return;
      if ( UniqueIds )
      {
        monitor = UniqueIds[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v5 = 0;
          do
          {
            if ( v5 >= (unsigned int)monitor )
              sub_1C372BC(IsNullOrEmpty);
            v10 = *((_DWORD *)&UniqueIds[2].klass + v5);
            v6 = System_Int32__ToString((int32_t)&v10, 0);
            if ( !DatFileName_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
            FileName_40421340 = DatFileName__getFileName_40421340(40, v6, 0, 0);
            if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
            DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
            if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
            v9 = System_IO_Path__Combine(DatFileSavePath, FileName_40421340, 0);
            IsNullOrEmpty = System_IO_File__Exists(v9, 0);
            if ( IsNullOrEmpty )
              System_IO_File__Delete(v9, 0);
            LODWORD(monitor) = UniqueIds[1].monitor;
            ++v5;
          }
          while ( (__int64)v5 < (int)monitor );
        }
        return;
      }
    }
    else
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(0, 0);
      if ( IsNullOrEmpty )
        return;
    }
    sub_1C372B4(IsNullOrEmpty);
  }
}


System_String_o *TipsArchiveStateManager__GetSaveFileName(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_4C44403 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    byte_4C44403 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  return System_String__Concat_63561656(DatFileSavePath, this->fields.saveName, 0);
}


bool TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *SaveFileName; // x20
  const MethodInfo *v4; // x1
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryReader_o *v6; // x20
  __int64 v7; // x0
  System_String_o *v8; // x21
  TipsArchiveStateManager_c *v9; // x0
  int v10; // w22
  int v11; // w21
  int32_t v12; // w23
  int32_t v13; // w24
  int32_t v14; // w25
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *stateDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0

  if ( (byte_4C44405 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_1C37058(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    sub_1C37058(&TipsArchiveStateManager_TypeInfo);
    byte_4C44405 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v4);
    return 0;
  }
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v6 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
                            v6,
                            v6->klass->vtable._22_ReadString.method);
  v9 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
    v9 = TipsArchiveStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0) )
  {
    v10 = 4;
  }
  else
  {
    this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._9_ReadBoolean.methodPtr)(
                                      v6,
                                      v6->klass->vtable._9_ReadBoolean.method)
                                  & 1;
    v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
            v6,
            v6->klass->vtable._15_ReadInt32.method);
    if ( v11 >= 1 )
    {
      do
      {
        v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                v6,
                v6->klass->vtable._15_ReadInt32.method);
        v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                v6,
                v6->klass->vtable._15_ReadInt32.method);
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                v6,
                v6->klass->vtable._15_ReadInt32.method);
        v15 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_1C372A4(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v15, v12, v13, v14, 0);
        stateDataList = (System_Collections_Generic_List_object__o *)this->fields.stateDataList;
        if ( !stateDataList )
          sub_1C372B4(0);
        items = stateDataList->fields._items;
        v20 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++stateDataList->fields._version;
        if ( !items )
          sub_1C372B4(stateDataList);
        size = stateDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            stateDataList,
            (Il2CppObject *)v15,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          stateDataList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v15;
          sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v15, v16, v17);
        }
        --v11;
      }
      while ( v11 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._6_Close.methodPtr)(
      v6,
      v6->klass->vtable._6_Close.method);
    v10 = 7;
  }
  klass = v6->klass;
  v24 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_21;
    }
    v26 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v26 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v6, *(_QWORD *)(v26 + 8));
  return v10 == 7;
}


void TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  System_String_o *FileName_40421340; // x0
  struct System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C44402 & 1) == 0 )
  {
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C44402 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_40421340 = DatFileName__getFileName_40421340(40, eventUiName, 0, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_1048/*"/"*/, FileName_40421340, 0);
  this->fields.saveName = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.saveName, (int32_t)v6, v7, v8);
}


bool TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x0
  long double inited; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v12; // x0
  int32_t i; // w22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v14; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0

  if ( (byte_4C44406 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&TipsArchiveStateManager_TypeInfo);
    byte_4C44406 = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v7, v6, 0);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_1C372B4(v8);
  size = stateDataList->fields._size;
  v12 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  if ( !v7 )
    sub_1C372B4(v12);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method,
    inited);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v7->klass->vtable._8_Write.methodPtr)(
    v7,
    this->fields.isContinueDevice,
    v7->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
    v7,
    (unsigned int)size,
    v7->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = this->fields.stateDataList;
      if ( !v14 )
        sub_1C372B4(0);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v14,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
      v16 = Item;
      if ( !Item )
        sub_1C372B4(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v16[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v16[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v7->klass->vtable._5_Close.methodPtr)(
    v7,
    v7->klass->vtable._5_Close.method);
  klass = v7->klass;
  v18 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_21;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v20 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v20)(v7, *(_QWORD *)(v20 + 8));
  return 1;
}


bool TipsArchiveStateManager__get_IsModfiy(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  return this->fields.isModfiy;
}


System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *TipsArchiveStateManager__get_StateDataList(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  return this->fields.stateDataList;
}


void TipsArchiveStateManager__set_IsModfiy(TipsArchiveStateManager_o *this, bool value, const MethodInfo *method)
{
  this->fields.isModfiy = value;
}


void TipsArchiveStateManager__set_StateDataList(
        TipsArchiveStateManager_o *this,
        System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.stateDataList = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.stateDataList, (int32_t)value, (int32_t)method, v3);
}