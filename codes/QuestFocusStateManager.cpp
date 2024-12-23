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

  if ( (byte_4B67D69 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestFocusStateManager_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_6789/*"Fgo_20240306_1"*/, v8);
    byte_4B67D69 = 1;
  }
  QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6789/*"Fgo_20240306_1"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestFocusStateManager_TypeInfo->static_fields,
    StringLiteral_6789/*"Fgo_20240306_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B67D68 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v3);
    byte_4B67D68 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  this->fields._QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v4;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._QuestFocusStateDataList_k__BackingField,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  int64_t v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B67D64 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
      *(_QWORD *)&questId);
    sub_1BE4ACC(&QuestFocusStateManager_QuestFocusStateData_TypeInfo, v7);
    byte_4B67D64 = 1;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
  v9 = sub_1BE4D18(QuestFocusStateManager_QuestFocusStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = state;
  if ( !QuestFocusStateDataList_k__BackingField
    || (items = QuestFocusStateDataList_k__BackingField->fields._items,
        v19 = Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
        ++QuestFocusStateDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BE4D28(v10, v11);
  }
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      QuestFocusStateDataList_k__BackingField,
      (Il2CppObject *)v9,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    QuestFocusStateDataList_k__BackingField->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 4), v9, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_4B67D65 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__, method);
    this = (QuestFocusStateManager_o *)sub_1BE4ACC(
                                         &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__,
                                         v3);
    byte_4B67D65 = 1;
  }
  QuestFocusStateDataList_k__BackingField = v2->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1BE4D28(this, method);
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
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4B67D63 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__,
      *(_QWORD *)&questId);
    sub_1BE4ACC(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v5);
    sub_1BE4ACC(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__, v6);
    sub_1BE4ACC(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo, v7);
    byte_4B67D63 = 1;
  }
  v8 = sub_1BE4D18(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField,
        v12 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
          0LL),
        !QuestFocusStateDataList_k__BackingField) )
  {
    sub_1BE4D28(v9, v10);
  }
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_object___Find(
                                                           QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v12,
                                                           (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *__fastcall QuestFocusStateManager__GetSaveFileName(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B67D62 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, method);
    sub_1BE4ACC(&DatFileName_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B67D62 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(42, 0LL);
  return System_String__Concat_62710068(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


bool __fastcall QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *SaveFileName; // x20
  const MethodInfo *v6; // x1
  System_IO_Stream_o *v7; // x21
  System_IO_BinaryReader_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  QuestFocusStateManager_c *v12; // x0
  int v13; // w22
  int v14; // w21
  int32_t v15; // w22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  v2 = this;
  if ( (byte_4B67D66 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v3);
    this = (QuestFocusStateManager_o *)sub_1BE4ACC(&QuestFocusStateManager_TypeInfo, v4);
    byte_4B67D66 = 1;
  }
  SaveFileName = QuestFocusStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    QuestFocusStateManager__ClearQuestFocusStateDataList(v2, v6);
    return 0;
  }
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_1BE4D18(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v12 = QuestFocusStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v13 = 4;
  }
  else
  {
    v2->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
                                    v8,
                                    v8->klass->vtable._10_ReadByte.methodPtr) & 1;
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v14 >= 1 )
    {
      do
      {
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        QuestFocusStateManager__AddQuestFocusStateData(v2, v15, v16, v17);
        --v14;
      }
      while ( v14 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._6_Close.method)(
      v8,
      v8->klass->vtable._7_Dispose.methodPtr);
    v13 = 7;
  }
  klass = v8->klass;
  v19 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v21 = sub_1C36AAC(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return v13 == 7;
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
  System_IO_BinaryWriter_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  long double inited; // q0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int size; // w21
  QuestFocusStateManager_c *v18; // x0
  __int64 v19; // x1
  int32_t i; // w22
  System_Collections_Generic_List_object__o *v21; // x0
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  if ( (byte_4B67D67 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__, v5);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v6);
    sub_1BE4ACC(&QuestFocusStateManager_TypeInfo, v7);
    byte_4B67D67 = 1;
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
  v12 = (System_IO_BinaryWriter_o *)sub_1BE4D18(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_62937300(v12, v11, 0LL);
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1BE4D28(v13, v14);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  v18 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !v12 )
    sub_1BE4D28(v18, v14);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v12->klass->vtable._22_Write.method)(
    v12,
    QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
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
      v21 = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
      if ( !v21 )
        sub_1BE4D28(0LL, v19);
      Item = System_Collections_Generic_List_object___get_Item(
               v21,
               i,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
      v24 = Item;
      if ( !Item )
        sub_1BE4D28(0LL, v23);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        LODWORD(Item[1].klass),
        v12->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
        v12,
        HIDWORD(v24[1].klass),
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
        goto LABEL_20;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v28 = sub_1C36AAC(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
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
    sub_1BE4D28(this, 0LL);
  return n->fields.QuestId == this->fields.questId;
}