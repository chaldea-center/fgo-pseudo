void __fastcall QuestFocusStateManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FD50B & 1) == 0 )
  {
    sub_1B640C8(&QuestFocusStateManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6626/*"Fgo_20240306_1"*/, v4);
    byte_49FD50B = 1;
  }
  QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6626/*"Fgo_20240306_1"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestFocusStateManager_TypeInfo->static_fields,
    StringLiteral_6626/*"Fgo_20240306_1"*/,
    v2,
    v3);
}


void __fastcall QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FD50A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v4);
    byte_49FD50A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  this->fields._QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._QuestFocusStateDataList_k__BackingField,
    (int32_t)v5,
    v6,
    v7);
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
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_49FD506 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
      *(_QWORD *)&questId);
    sub_1B640C8(&QuestFocusStateManager_QuestFocusStateData_TypeInfo, v7);
    byte_49FD506 = 1;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
  v9 = sub_1B64314(QuestFocusStateManager_QuestFocusStateData_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&state);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = state;
  if ( !QuestFocusStateDataList_k__BackingField
    || (items = QuestFocusStateDataList_k__BackingField->fields._items,
        v14 = Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
        ++QuestFocusStateDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1B64324(v10);
  }
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      QuestFocusStateDataList_k__BackingField,
      (Il2CppObject *)v9,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    QuestFocusStateDataList_k__BackingField->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 4), v9, v11, v12);
  }
}


void __fastcall QuestFocusStateManager__ClearQuestFocusStateDataList(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  QuestFocusStateManager_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v7; // w9

  v2 = this;
  if ( (byte_49FD507 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__, method);
    this = (QuestFocusStateManager_o *)sub_1B640C8(
                                         &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__,
                                         v3);
    byte_49FD507 = 1;
  }
  QuestFocusStateDataList_k__BackingField = v2->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1B64324(this);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)QuestFocusStateDataList_k__BackingField->fields._items;
    v7 = QuestFocusStateDataList_k__BackingField->fields._version + 1;
    QuestFocusStateDataList_k__BackingField->fields._size = 0;
    QuestFocusStateDataList_k__BackingField->fields._version = v7;
    System_Array__Clear(items, 0, size, 0LL);
  }
  v2->fields.isContinueDevice = 0;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FD505 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__,
      *(_QWORD *)&questId);
    sub_1B640C8(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v5);
    sub_1B640C8(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__, v6);
    sub_1B640C8(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo, v7);
    byte_49FD505 = 1;
  }
  v8 = sub_1B64314(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo, *(_QWORD *)&questId, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField,
        v13 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo,
                                              v10,
                                              v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
          0LL),
        !QuestFocusStateDataList_k__BackingField) )
  {
    sub_1B64324(v9);
  }
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_object___Find(
                                                           QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v13,
                                                           (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *__fastcall QuestFocusStateManager__GetSaveFileName(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD504 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD504 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(42, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


bool __fastcall QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *SaveFileName; // x20
  const MethodInfo *v6; // x1
  System_IO_Stream_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  System_IO_BinaryReader_o *v10; // x20
  __int64 v11; // x0
  System_String_o *v12; // x21
  QuestFocusStateManager_c *v13; // x0
  int v14; // w22
  int v15; // w21
  int32_t v16; // w22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0

  v2 = this;
  if ( (byte_49FD508 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    this = (QuestFocusStateManager_o *)sub_1B640C8(&QuestFocusStateManager_TypeInfo, v4);
    byte_49FD508 = 1;
  }
  SaveFileName = QuestFocusStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    QuestFocusStateManager__ClearQuestFocusStateDataList(v2, v6);
    return 0;
  }
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v10 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v8, v9);
  System_IO_BinaryReader___ctor(v10, v7, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                             v10,
                             v10->klass->vtable._23_ReadChars.methodPtr);
  v13 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v13 = QuestFocusStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v13->static_fields->SAVE_DATA_VERSION, v12, 0LL) )
  {
    v14 = 4;
  }
  else
  {
    v2->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
                                    v10,
                                    v10->klass->vtable._10_ReadByte.methodPtr) & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
            v10,
            v10->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                v10,
                v10->klass->vtable._16_ReadUInt32.methodPtr);
        QuestFocusStateManager__AddQuestFocusStateData(v2, v16, v17, v18);
        --v15;
      }
      while ( v15 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._6_Close.method)(
      v10,
      v10->klass->vtable._7_Dispose.methodPtr);
    v14 = 7;
  }
  klass = v10->klass;
  v20 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v22 = sub_1BB60A8(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v22)(v10, *(_QWORD *)(v22 + 8));
  return v14 == 7;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestFocusStateManager_o *v8; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x0
  long double inited; // q0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int size; // w21
  QuestFocusStateManager_c *v19; // x0
  int32_t i; // w22
  System_Collections_Generic_List_object__o *v21; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_49FD509 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__, v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    sub_1B640C8(&QuestFocusStateManager_TypeInfo, v7);
    byte_49FD509 = 1;
  }
  v8 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  }
  if ( HIBYTE(v8[5].fields._QuestFocusStateDataList_k__BackingField[17].fields._size) )
    return 0;
  SaveFileName = QuestFocusStateManager__GetSaveFileName(v8, method);
  v11 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v12, v13);
  System_IO_BinaryWriter___ctor_61613552(v14, v11, 0LL);
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1B64324(v15);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  v19 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !v14 )
    sub_1B64324(v19);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v14->klass->vtable._22_Write.method)(
    v14,
    QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
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
      v21 = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
      if ( !v21 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v21,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
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
        goto LABEL_20;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v27 = sub_1BB60A8(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v14, *(_QWORD *)(v27 + 8));
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
    sub_1B64324(this);
  return n->fields.QuestId == this->fields.questId;
}