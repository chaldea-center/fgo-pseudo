void TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D31EED & 1) == 0 )
  {
    sub_1C93AD4(&TipsArchiveStateManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6715/*"Fgo_20230514_1"*/);
    byte_4D31EED = 1;
  }
  TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6715/*"Fgo_20230514_1"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TipsArchiveStateManager_TypeInfo->static_fields,
    StringLiteral_6715/*"Fgo_20230514_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D31EEC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    byte_4D31EEC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.stateDataList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4D31EE8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    this = (TipsArchiveStateManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    byte_4D31EE8 = 1;
  }
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    sub_1C93D2C(this, method);
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
  __int64 v4; // x1
  void *monitor; // x8
  unsigned __int64 v6; // x22
  System_String_o *v7; // x20
  System_String_o *FileName_41135804; // x20
  System_String_o *DatFileSavePath; // x21
  System_String_o *v10; // x20
  int v11; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D31EEB & 1) == 0 )
  {
    sub_1C93AD4(&AndroidUtil_TypeInfo);
    sub_1C93AD4(&DatFileName_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_IO_Path_TypeInfo);
    byte_4D31EEB = 1;
  }
  v11 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( DataManager__HasMaster(0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventUiMaster___);
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
          v6 = 0;
          do
          {
            if ( v6 >= (unsigned int)monitor )
              sub_1C93D34(IsNullOrEmpty);
            v11 = *((_DWORD *)&UniqueIds[2].klass + v6);
            v7 = System_Int32__ToString((int32_t)&v11, 0);
            if ( !DatFileName_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
            FileName_41135804 = DatFileName__getFileName_41135804(40, v7, 0, 0);
            if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
            DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
            if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
            v10 = System_IO_Path__Combine(DatFileSavePath, FileName_41135804, 0);
            IsNullOrEmpty = System_IO_File__Exists(v10, 0);
            if ( IsNullOrEmpty )
              System_IO_File__Delete(v10, 0);
            LODWORD(monitor) = UniqueIds[1].monitor;
            ++v6;
          }
          while ( (__int64)v6 < (int)monitor );
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
    sub_1C93D2C(IsNullOrEmpty, v4);
  }
}


System_String_o *TipsArchiveStateManager__GetSaveFileName(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_4D31EE7 & 1) == 0 )
  {
    sub_1C93AD4(&AndroidUtil_TypeInfo);
    byte_4D31EE7 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  return System_String__Concat_64425724(DatFileSavePath, this->fields.saveName, 0);
}


bool TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *SaveFileName; // x20
  const MethodInfo *v4; // x1
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryReader_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  TipsArchiveStateManager_c *v10; // x0
  int v11; // w22
  int v12; // w21
  int32_t v13; // w23
  int32_t v14; // w24
  int32_t v15; // w25
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v16; // x22
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *stateDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0

  if ( (byte_4D31EE9 & 1) == 0 )
  {
    sub_1C93AD4(&System_IO_BinaryReader_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_1C93AD4(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    sub_1C93AD4(&TipsArchiveStateManager_TypeInfo);
    byte_4D31EE9 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v4);
    return 0;
  }
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v6 = (System_IO_BinaryReader_o *)sub_1C93D20(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0);
  if ( !v6 )
    sub_1C93D2C(v7, v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
                            v6,
                            v6->klass->vtable._22_ReadString.method);
  v10 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
    v10 = TipsArchiveStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
  {
    v11 = 4;
  }
  else
  {
    this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._9_ReadBoolean.methodPtr)(
                                      v6,
                                      v6->klass->vtable._9_ReadBoolean.method)
                                  & 1;
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
            v6,
            v6->klass->vtable._15_ReadInt32.method);
    if ( v12 >= 1 )
    {
      do
      {
        v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                v6,
                v6->klass->vtable._15_ReadInt32.method);
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                v6,
                v6->klass->vtable._15_ReadInt32.method);
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._15_ReadInt32.methodPtr)(
                v6,
                v6->klass->vtable._15_ReadInt32.method);
        v16 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_1C93D20(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v16, v13, v14, v15, 0);
        stateDataList = (System_Collections_Generic_List_object__o *)this->fields.stateDataList;
        if ( !stateDataList )
          sub_1C93D2C(0, v17);
        items = stateDataList->fields._items;
        v26 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++stateDataList->fields._version;
        if ( !items )
          sub_1C93D2C(stateDataList, v17);
        size = stateDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            stateDataList,
            (Il2CppObject *)v16,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          stateDataList->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v16;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v16, v18, v19, v20, v21, v22, v23);
        }
        --v12;
      }
      while ( v12 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._6_Close.methodPtr)(
      v6,
      v6->klass->vtable._6_Close.method);
    v11 = 7;
  }
  klass = v6->klass;
  v30 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_21;
    }
    v32 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v32 = sub_1C69E5C(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v6, *(_QWORD *)(v32 + 8));
  return v11 == 7;
}


void TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  System_String_o *FileName_41135804; // x0
  struct System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D31EE6 & 1) == 0 )
  {
    sub_1C93AD4(&DatFileName_TypeInfo);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D31EE6 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_41135804 = DatFileName__getFileName_41135804(40, eventUiName, 0, 0);
  v6 = System_String__Concat_64425724((System_String_o *)StringLiteral_1042/*"/"*/, FileName_41135804, 0);
  this->fields.saveName = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.saveName, (int32_t)v6, v7, v8, v9, v10, v11, v12);
}


bool TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  long double inited; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v13; // x0
  __int64 v14; // x1
  int32_t i; // w22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v16; // x0
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4D31EEA & 1) == 0 )
  {
    sub_1C93AD4(&System_IO_BinaryWriter_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&TipsArchiveStateManager_TypeInfo);
    byte_4D31EEA = 1;
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
  v7 = (System_IO_BinaryWriter_o *)sub_1C93D20(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65335052(v7, v6, 0);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_1C93D2C(v8, v9);
  size = stateDataList->fields._size;
  v13 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo);
  if ( !v7 )
    sub_1C93D2C(v13, v9);
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
      v16 = this->fields.stateDataList;
      if ( !v16 )
        sub_1C93D2C(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v16,
               i,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
      v19 = Item;
      if ( !Item )
        sub_1C93D2C(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v19[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v19[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v7->klass->vtable._5_Close.methodPtr)(
    v7,
    v7->klass->vtable._5_Close.method);
  klass = v7->klass;
  v21 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_21;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v23 = sub_1C69E5C(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.stateDataList = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.stateDataList,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}