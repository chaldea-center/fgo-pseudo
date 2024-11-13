void __fastcall QuestFocusStateManager___cctor(const MethodInfo *method)
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

  if ( (byte_4B17357 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestFocusStateManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6772/*"Fgo_20240306_1"*/, v8, v9);
    byte_4B17357 = 1;
  }
  QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6772/*"Fgo_20240306_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestFocusStateManager_TypeInfo->static_fields,
    StringLiteral_6772/*"Fgo_20240306_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
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

  if ( (byte_4B17356 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v5, v6);
    byte_4B17356 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  this->fields._QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._QuestFocusStateDataList_k__BackingField,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestFocusStateManager__AddQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  int64_t v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B17352 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
      *(_QWORD *)&questId,
      *(_QWORD *)&state);
    sub_1BCA7E0(&QuestFocusStateManager_QuestFocusStateData_TypeInfo, v7, v8);
    byte_4B17352 = 1;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
  v10 = sub_1BCAA2C(QuestFocusStateManager_QuestFocusStateData_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&state, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = state;
  if ( !QuestFocusStateDataList_k__BackingField
    || (items = QuestFocusStateDataList_k__BackingField->fields._items,
        v20 = Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
        ++QuestFocusStateDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BCAA3C(v11, v12);
  }
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      QuestFocusStateDataList_k__BackingField,
      (Il2CppObject *)v10,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    QuestFocusStateDataList_k__BackingField->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v10;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), v10, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall QuestFocusStateManager__ClearQuestFocusStateDataList(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestFocusStateManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v9; // w9

  v3 = this;
  if ( (byte_4B17353 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__, method, v2);
    this = (QuestFocusStateManager_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__,
                                         v4,
                                         v5);
    byte_4B17353 = 1;
  }
  QuestFocusStateDataList_k__BackingField = v3->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1BCAA3C(this, method);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)QuestFocusStateDataList_k__BackingField->fields._items;
    v9 = QuestFocusStateDataList_k__BackingField->fields._version + 1;
    QuestFocusStateDataList_k__BackingField->fields._size = 0;
    QuestFocusStateDataList_k__BackingField->fields._version = v9;
    System_Array__Clear(items, 0, size, 0LL);
  }
  v3->fields.isContinueDevice = 0;
}


int32_t __fastcall QuestFocusStateManager__GetFocusState(
        QuestFocusStateManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestFocusStateManager_QuestFocusStateData_o *QuestFocusStateData; // x0

  QuestFocusStateData = QuestFocusStateManager__GetQuestFocusStateData(this, questId, method);
  if ( QuestFocusStateData )
    LODWORD(QuestFocusStateData) = QuestFocusStateData->fields.FocusState;
  return (int)QuestFocusStateData;
}


// local variable allocation has failed, the output may be wrong!
QuestFocusStateManager_QuestFocusStateData_o *__fastcall QuestFocusStateManager__GetQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B17351 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__, v8, v9);
    sub_1BCA7E0(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo, v10, v11);
    byte_4B17351 = 1;
  }
  v12 = sub_1BCAA2C(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = questId,
        QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
          0LL),
        !QuestFocusStateDataList_k__BackingField) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_object___Find(
                                                           QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v18,
                                                           (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *__fastcall QuestFocusStateManager__GetSaveFileName(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B17350 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17350 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(42, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


bool __fastcall QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestFocusStateManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *SaveFileName; // x20
  const MethodInfo *v9; // x1
  System_IO_Stream_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *v18; // x21
  QuestFocusStateManager_c *v19; // x0
  int v20; // w22
  int v21; // w21
  int32_t v22; // w22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  v3 = this;
  if ( (byte_4B17354 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    this = (QuestFocusStateManager_o *)sub_1BCA7E0(&QuestFocusStateManager_TypeInfo, v6, v7);
    byte_4B17354 = 1;
  }
  SaveFileName = QuestFocusStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    QuestFocusStateManager__ClearQuestFocusStateDataList(v3, v9);
    return 0;
  }
  v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v14 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v11, v12, v13);
  System_IO_BinaryReader___ctor(v14, v10, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v19 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v17);
    v19 = QuestFocusStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
  {
    v20 = 4;
  }
  else
  {
    v3->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                                    v14,
                                    v14->klass->vtable._10_ReadByte.methodPtr) & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      do
      {
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        QuestFocusStateManager__AddQuestFocusStateData(v3, v22, v23, v24);
        --v21;
      }
      while ( v21 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._6_Close.method)(
      v14,
      v14->klass->vtable._7_Dispose.methodPtr);
    v20 = 7;
  }
  klass = v14->klass;
  v26 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_16;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v28 = sub_1C1C7C0(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v14, *(_QWORD *)(v28 + 8));
  return v20 == 7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestFocusStateManager__SetFocusState(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  QuestFocusStateManager_QuestFocusStateData_o *QuestFocusStateData; // x0
  const MethodInfo *v8; // x3

  QuestFocusStateData = QuestFocusStateManager__GetQuestFocusStateData(this, questId, *(const MethodInfo **)&state);
  if ( QuestFocusStateData )
    QuestFocusStateData->fields.FocusState = state;
  else
    QuestFocusStateManager__AddQuestFocusStateData(this, questId, state, v8);
}


bool __fastcall QuestFocusStateManager__WriteData(QuestFocusStateManager_o *this, const MethodInfo *method)
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
  QuestFocusStateManager_o *v14; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_IO_BinaryWriter_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  long double inited; // q0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int size; // w21
  QuestFocusStateManager_c *v27; // x0
  __int64 v28; // x1
  int32_t i; // w22
  System_Collections_Generic_List_object__o *v30; // x0
  Il2CppObject *Item; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0

  if ( (byte_4B17355 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__, v8, v9);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v10, v11);
    sub_1BCA7E0(&QuestFocusStateManager_TypeInfo, v12, v13);
    byte_4B17355 = 1;
  }
  v14 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v14 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  }
  if ( HIBYTE(v14[5].fields._QuestFocusStateDataList_k__BackingField[17].fields._size) )
    return 0;
  SaveFileName = QuestFocusStateManager__GetSaveFileName(v14, method);
  v17 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v21 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v18, v19, v20);
  System_IO_BinaryWriter___ctor_62639712(v21, v17, 0LL);
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1BCAA3C(v22, v23);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  v27 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v23);
  if ( !v21 )
    sub_1BCAA3C(v27, v23);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v21->klass->vtable._22_Write.method)(
    v21,
    QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
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
      v30 = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
      if ( !v30 )
        sub_1BCAA3C(0LL, v28);
      Item = System_Collections_Generic_List_object___get_Item(
               v30,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
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
        goto LABEL_20;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v37 = sub_1C1C7C0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
  return 1;
}


System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *__fastcall QuestFocusStateManager__get_QuestFocusStateDataList(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestFocusStateDataList_k__BackingField;
}


void __fastcall QuestFocusStateManager_QuestFocusStateData___ctor(
        QuestFocusStateManager_QuestFocusStateData_o *this,
        int32_t questId,
        int32_t focusState,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.QuestId = questId;
  this->fields.FocusState = focusState;
}


void __fastcall QuestFocusStateManager___c__DisplayClass8_0___ctor(
        QuestFocusStateManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestFocusStateManager___c__DisplayClass8_0___GetQuestFocusStateData_b__0(
        QuestFocusStateManager___c__DisplayClass8_0_o *this,
        QuestFocusStateManager_QuestFocusStateData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.QuestId == this->fields.questId;
}