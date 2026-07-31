void TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5939C23 & 1) == 0 )
  {
    sub_21FFC50(&TipsArchiveStateManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6957/*"Fgo_20230514_1"*/);
    byte_5939C23 = 1;
  }
  v7 = StringLiteral_6957/*"Fgo_20230514_1"*/;
  TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6957/*"Fgo_20230514_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TipsArchiveStateManager_TypeInfo->static_fields,
    v7,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5939C22 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    byte_5939C22 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stateDataList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_5939C1E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    this = (TipsArchiveStateManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    byte_5939C1E = 1;
  }
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    sub_21FFECC(this, method);
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
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *UniqueIds; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  void *monitor; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x1
  System_String_o *v10; // x20
  __int64 v11; // x1
  System_String_o *FileName_47353176; // x20
  __int64 v13; // x1
  System_String_o *DatFileSavePath; // x21
  System_String_o *v15; // x20
  int v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5939C21 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    byte_5939C21 = 1;
  }
  v16 = 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  if ( DataManager__HasMaster(0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventUiMaster___);
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
          v8 = 0;
          do
          {
            if ( v8 >= (unsigned int)monitor )
              sub_21FFED4(IsNullOrEmpty);
            v16 = *((_DWORD *)&UniqueIds[2].klass + v8);
            v10 = System_Int32__ToString((int32_t)&v16, 0);
            if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v9);
            FileName_47353176 = DatFileName__getFileName_47353176(40, v10, 0, 0);
            if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v11);
            DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
            if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v13);
            v15 = System_IO_Path__Combine(DatFileSavePath, FileName_47353176, 0);
            IsNullOrEmpty = System_IO_File__Exists(v15, 0);
            if ( IsNullOrEmpty )
              System_IO_File__Delete(v15, 0);
            LODWORD(monitor) = UniqueIds[1].monitor;
            ++v8;
          }
          while ( (__int64)v8 < (int)monitor );
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
    sub_21FFECC(IsNullOrEmpty, v6);
  }
}


System_String_o *TipsArchiveStateManager__GetSaveFileName(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0

  if ( (byte_5939C1D & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    byte_5939C1D = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  return System_String__Concat_75438412(DatFileSavePath, this->fields.saveName, 0);
}


bool TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  System_String_o *SaveFileName; // x20
  const MethodInfo *v4; // x1
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryReader_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x20
  TipsArchiveStateManager_c *v11; // x0
  __int64 v12; // x1
  bool v13; // w22
  int v14; // w20
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t v17; // w24
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v18; // x21
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *stateDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v32; // x9
  int *p_offset; // x10
  __int64 v34; // x0
  System_IO_BinaryReader_o *v36; // [xsp+28h] [xbp-48h]

  if ( (byte_5939C1F & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    sub_21FFC50(&TipsArchiveStateManager_TypeInfo);
    byte_5939C1F = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v6 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v6, v5, 0);
    v36 = v6;
    if ( !v6 )
      sub_21FFECC(v7, v8);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
                               v6,
                               v6->klass->vtable._22_ReadString.method);
    v11 = TipsArchiveStateManager_TypeInfo;
    if ( !*(&TipsArchiveStateManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo, v9);
      v11 = TipsArchiveStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
    {
      v13 = 0;
    }
    else
    {
      if ( !v36 )
        sub_21FFECC(0, v12);
      this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v36->klass->vtable._9_ReadBoolean.methodPtr)(
                                        v36,
                                        v36->klass->vtable._9_ReadBoolean.method)
                                    & 1;
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v36->klass->vtable._15_ReadInt32.methodPtr)(
              v36,
              v36->klass->vtable._15_ReadInt32.method);
      if ( v14 >= 1 )
      {
        do
        {
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v36->klass->vtable._15_ReadInt32.methodPtr)(
                  v36,
                  v36->klass->vtable._15_ReadInt32.method);
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v36->klass->vtable._15_ReadInt32.methodPtr)(
                  v36,
                  v36->klass->vtable._15_ReadInt32.method);
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v36->klass->vtable._15_ReadInt32.methodPtr)(
                  v36,
                  v36->klass->vtable._15_ReadInt32.method);
          v18 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_21FFEBC(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v18, v15, v16, v17, 0);
          stateDataList = (System_Collections_Generic_List_object__o *)this->fields.stateDataList;
          if ( !stateDataList
            || (items = stateDataList->fields._items,
                v28 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
                ++stateDataList->fields._version,
                !items) )
          {
            sub_21FFECC(stateDataList, v19);
          }
          size = stateDataList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              stateDataList,
              (Il2CppObject *)v18,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            stateDataList->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v18;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v18, v20, v21, v22, v23, v24, v25);
          }
          --v14;
        }
        while ( v14 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v36->klass->vtable._6_Close.methodPtr)(
        v36,
        v36->klass->vtable._6_Close.method);
      v13 = 1;
    }
    if ( v36 )
    {
      klass = v36->klass;
      v32 = *(unsigned __int16 *)&v36->klass->_2.rank;
      if ( *(_WORD *)&v36->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_23;
        }
        v34 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_23:
        v34 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v36, *(_QWORD *)(v34 + 8));
    }
    return v13;
  }
  else
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v4);
    return 0;
  }
}


void TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  System_String_o *FileName_47353176; // x0
  struct System_String_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5939C1C & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939C1C = 1;
  }
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, eventUiName);
  FileName_47353176 = DatFileName__getFileName_47353176(40, eventUiName, 0, 0);
  v6 = System_String__Concat_75438412((System_String_o *)StringLiteral_1123/*"/"*/, FileName_47353176, 0);
  this->fields.saveName = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.saveName, (int32_t)v6, v7, v8, v9, v10, v11, v12);
}


bool TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w20
  TipsArchiveStateManager_c *v13; // x0
  __int64 v14; // x1
  int32_t i; // w21
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v16; // x0
  __int64 v17; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  System_IO_BinaryWriter_o *v22; // [xsp+28h] [xbp-38h]

  if ( (byte_5939C20 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&TipsArchiveStateManager_TypeInfo);
    byte_5939C20 = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v7, v6, 0);
  stateDataList = this->fields.stateDataList;
  v22 = v7;
  if ( !stateDataList )
    sub_21FFECC(v8, v9);
  size = stateDataList->fields._size;
  v13 = TipsArchiveStateManager_TypeInfo;
  if ( !*(&TipsArchiveStateManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo, v9);
  if ( !v7 )
    sub_21FFECC(v13, v9);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method,
    v10);
  v7->klass->vtable._8_Write.methodPtr();
  v7->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = this->fields.stateDataList;
      if ( !v16 )
        sub_21FFECC(0, v14);
      if ( !System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v16,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__) )
        sub_21FFECC(0, v17);
      if ( !v22 )
        sub_21FFECC(0, v17);
      v22->klass->vtable._17_Write.methodPtr();
      v22->klass->vtable._17_Write.methodPtr();
      v22->klass->vtable._17_Write.methodPtr();
    }
  }
  if ( !v22 )
    sub_21FFECC(0, v14);
  v22->klass->vtable._5_Close.methodPtr();
  klass = v22->klass;
  v19 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_23;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_23:
    v21 = sub_2237E2C(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v22, *(_QWORD *)(v21 + 8));
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.stateDataList = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.stateDataList,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}