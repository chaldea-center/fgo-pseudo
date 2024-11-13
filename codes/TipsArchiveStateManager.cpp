void __fastcall TipsArchiveStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B17456 & 1) == 0 )
  {
    sub_1BCA7E0(&TipsArchiveStateManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6771/*"Fgo_20230514_1"*/, v8, v9);
    byte_4B17456 = 1;
  }
  TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6771/*"Fgo_20230514_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TipsArchiveStateManager_TypeInfo->static_fields,
    StringLiteral_6771/*"Fgo_20230514_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TipsArchiveStateManager___ctor(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17455 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
      v5,
      v6);
    byte_4B17455 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stateDataList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TipsArchiveStateManager__ClearSaveDataList(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TipsArchiveStateManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v9; // w9

  v3 = this;
  if ( (byte_4B17452 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      method,
      v2);
    this = (TipsArchiveStateManager_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
                                          v4,
                                          v5);
    byte_4B17452 = 1;
  }
  stateDataList = v3->fields.stateDataList;
  if ( !stateDataList )
    sub_1BCAA3C(this, method);
  size = stateDataList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)stateDataList->fields._items;
    v9 = stateDataList->fields._version + 1;
    stateDataList->fields._size = 0;
    stateDataList->fields._version = v9;
    System_Array__Clear(items, 0, size, 0LL);
  }
  *(_WORD *)&v3->fields.isModfiy = 1;
}


System_String_o *__fastcall TipsArchiveStateManager__GetSaveFileName(
        TipsArchiveStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *DatFileSavePath; // x0

  if ( (byte_4B17451 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    byte_4B17451 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  return System_String__Concat_62401220(DatFileSavePath, this->fields.saveName, 0LL);
}


bool __fastcall TipsArchiveStateManager__ReadData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *SaveFileName; // x20
  const MethodInfo *v13; // x1
  System_IO_Stream_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_IO_BinaryReader_o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_o *v22; // x21
  TipsArchiveStateManager_c *v23; // x0
  int v24; // w22
  int v25; // w21
  int32_t v26; // w23
  int32_t v27; // w24
  int32_t v28; // w25
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v32; // x22
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o *stateDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0

  if ( (byte_4B17453 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v6,
      v7);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, v8, v9);
    sub_1BCA7E0(&TipsArchiveStateManager_TypeInfo, v10, v11);
    byte_4B17453 = 1;
  }
  this->fields.isModfiy = 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    TipsArchiveStateManager__ClearSaveDataList(this, v13);
    return 0;
  }
  v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v18 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v14, 0LL);
  if ( !v18 )
    sub_1BCAA3C(v19, v20);
  v22 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v23 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo, v21);
    v23 = TipsArchiveStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v23->static_fields->SAVE_DATA_VERSION, v22, 0LL) )
  {
    v24 = 4;
  }
  else
  {
    this->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
                                      v18,
                                      v18->klass->vtable._10_ReadByte.methodPtr) & 1;
    v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
            v18,
            v18->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v25 >= 1 )
    {
      do
      {
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v32 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_1BCAA2C(
                                                                           EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
                                                                           v29,
                                                                           v30,
                                                                           v31);
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v32, v26, v27, v28, 0LL);
        stateDataList = (System_Collections_Generic_List_object__o *)this->fields.stateDataList;
        if ( !stateDataList )
          sub_1BCAA3C(0LL, v33);
        items = stateDataList->fields._items;
        v42 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++stateDataList->fields._version;
        if ( !items )
          sub_1BCAA3C(stateDataList, v33);
        size = stateDataList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            stateDataList,
            (Il2CppObject *)v32,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          stateDataList->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v32;
          sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v32, v34, v35, v36, v37, v38, v39);
        }
        --v25;
      }
      while ( v25 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._6_Close.method)(
      v18,
      v18->klass->vtable._7_Dispose.methodPtr);
    v24 = 7;
  }
  klass = v18->klass;
  v46 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      p_offset += 4;
      if ( !v46 )
        goto LABEL_21;
    }
    v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v48 = sub_1C1C7C0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v48)(v18, *(_QWORD *)(v48 + 8));
  return v24 == 7;
}


void __fastcall TipsArchiveStateManager__SetSaveFileName(
        TipsArchiveStateManager_o *this,
        System_String_o *eventUiName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *FileName_38395840; // x0
  struct System_String_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B17450 & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, eventUiName, method);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17450 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, eventUiName);
  FileName_38395840 = DatFileName__getFileName_38395840(40, eventUiName, 0LL, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_1120/*"/"*/, FileName_38395840, 0LL);
  this->fields.saveName = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.saveName, (int64_t)v8, v9, v10, v11, v12, v13, v14);
}


bool __fastcall TipsArchiveStateManager__WriteData(TipsArchiveStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  ManagerConfig_c *v14; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_IO_BinaryWriter_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  long double inited; // q0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  int size; // w21
  TipsArchiveStateManager_c *v27; // x0
  __int64 v28; // x1
  int32_t i; // w22
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v30; // x0
  Il2CppObject *Item; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0

  if ( (byte_4B17454 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Count__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__,
      v8,
      v9);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v10, v11);
    sub_1BCA7E0(&TipsArchiveStateManager_TypeInfo, v12, v13);
    byte_4B17454 = 1;
  }
  if ( !this->fields.isModfiy )
    return 0;
  this->fields.isModfiy = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 0;
  SaveFileName = TipsArchiveStateManager__GetSaveFileName(this, method);
  v17 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v21 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v18, v19, v20);
  System_IO_BinaryWriter___ctor_62639712(v21, v17, 0LL);
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    sub_1BCAA3C(v22, v23);
  size = stateDataList->fields._size;
  v27 = TipsArchiveStateManager_TypeInfo;
  if ( !TipsArchiveStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TipsArchiveStateManager_TypeInfo, v23);
  if ( !v21 )
    sub_1BCAA3C(v27, v23);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v21->klass->vtable._22_Write.method)(
    v21,
    TipsArchiveStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v21->klass[1]._1.image,
    inited);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v21->klass->vtable._8_Write.method)(
    v21,
    this->fields.isContinueDevice,
    v21->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._17_Write.method)(
    v21,
    (unsigned int)size,
    v21->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v30 = this->fields.stateDataList;
      if ( !v30 )
        sub_1BCAA3C(0LL, v28);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v30,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Item__);
      v33 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._17_Write.method)(
        v21,
        LODWORD(Item[1].klass),
        v21->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._17_Write.method)(
        v21,
        HIDWORD(v33[1].klass),
        v21->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v21->klass->vtable._17_Write.method)(
        v21,
        LODWORD(v33[1].monitor),
        v21->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v21->klass->vtable._5_Close.method)(
    v21,
    v21->klass->vtable._6_Dispose.methodPtr);
  klass = v21->klass;
  v35 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_21;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v37 = sub_1C1C7C0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.stateDataList = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.stateDataList,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}