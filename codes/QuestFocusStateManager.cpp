void QuestFocusStateManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C285FA & 1) == 0 )
  {
    sub_1C2D490(&QuestFocusStateManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6682/*"Fgo_20240306_1"*/);
    byte_4C285FA = 1;
  }
  QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6682/*"Fgo_20240306_1"*/;
  sub_1C2D434((CGThumbnailListItem_o *)QuestFocusStateManager_TypeInfo->static_fields, StringLiteral_6682/*"Fgo_20240306_1"*/, v1, v2);
}


void QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C285F9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    byte_4C285F9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  this->fields._QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._QuestFocusStateDataList_k__BackingField, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestFocusStateManager__AddQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C285F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__);
    sub_1C2D490(&QuestFocusStateManager_QuestFocusStateData_TypeInfo);
    byte_4C285F5 = 1;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
  v8 = sub_1C2D6DC(QuestFocusStateManager_QuestFocusStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = questId;
  *(_DWORD *)(v8 + 20) = state;
  if ( !QuestFocusStateDataList_k__BackingField
    || (items = QuestFocusStateDataList_k__BackingField->fields._items,
        v14 = Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
        ++QuestFocusStateDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1C2D6EC(v9, v10);
  }
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      QuestFocusStateDataList_k__BackingField,
      (Il2CppObject *)v8,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    QuestFocusStateDataList_k__BackingField->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), v8, v11, v12);
  }
}


void QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_o *v2; // x19
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v6; // w9

  v2 = this;
  if ( (byte_4C285F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__);
    this = (QuestFocusStateManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    byte_4C285F6 = 1;
  }
  QuestFocusStateDataList_k__BackingField = v2->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1C2D6EC(this, method);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)QuestFocusStateDataList_k__BackingField->fields._items;
    v6 = QuestFocusStateDataList_k__BackingField->fields._version + 1;
    QuestFocusStateDataList_k__BackingField->fields._size = 0;
    QuestFocusStateDataList_k__BackingField->fields._version = v6;
    System_Array__Clear(items, 0, size, 0);
  }
  v2->fields.isContinueDevice = 0;
}


int32_t QuestFocusStateManager__GetFocusState(
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


QuestFocusStateManager_QuestFocusStateData_o *QuestFocusStateManager__GetQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C285F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
    sub_1C2D490(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    sub_1C2D490(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__);
    sub_1C2D490(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
    byte_4C285F4 = 1;
  }
  v5 = sub_1C2D6DC(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
          0),
        !QuestFocusStateDataList_k__BackingField) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_object___Find(
                                                           QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *QuestFocusStateManager__GetSaveFileName(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C285F3 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C285F3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(42, 0);
  return System_String__Concat_63496112(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


bool QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_o *v2; // x19
  System_String_o *SaveFileName; // x20
  const MethodInfo *v4; // x1
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryReader_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  QuestFocusStateManager_c *v10; // x0
  int v11; // w22
  int v12; // w21
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4C285F7 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryReader_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    this = (QuestFocusStateManager_o *)sub_1C2D490(&QuestFocusStateManager_TypeInfo);
    byte_4C285F7 = 1;
  }
  SaveFileName = QuestFocusStateManager__GetSaveFileName(this, method);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    QuestFocusStateManager__ClearQuestFocusStateDataList(v2, v4);
    return 0;
  }
  v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v6 = (System_IO_BinaryReader_o *)sub_1C2D6DC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v6, v5, 0);
  if ( !v6 )
    sub_1C2D6EC(v7, v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
                            v6,
                            v6->klass->vtable._22_ReadString.method);
  v10 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v10 = QuestFocusStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
  {
    v11 = 4;
  }
  else
  {
    v2->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._9_ReadBoolean.methodPtr)(
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
        QuestFocusStateManager__AddQuestFocusStateData(v2, v13, v14, v15);
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
  v17 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v19 = sub_1C7DCA8(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v19)(v6, *(_QWORD *)(v19 + 8));
  return v11 == 7;
}


// local variable allocation has failed, the output may be wrong!
void QuestFocusStateManager__SetFocusState(
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


bool QuestFocusStateManager__WriteData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_o *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  long double inited; // q0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int size; // w21
  QuestFocusStateManager_c *v13; // x0
  __int64 v14; // x1
  int32_t i; // w22
  System_Collections_Generic_List_object__o *v16; // x0
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4C285F8 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryWriter_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&QuestFocusStateManager_TypeInfo);
    byte_4C285F8 = 1;
  }
  v3 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  }
  if ( HIBYTE(v3[5].fields._QuestFocusStateDataList_k__BackingField[17].fields._size) )
    return 0;
  SaveFileName = QuestFocusStateManager__GetSaveFileName(v3, method);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C2D6DC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64369912(v7, v6, 0);
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1C2D6EC(v8, v9);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  v13 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !v7 )
    sub_1C2D6EC(v13, v9);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
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
      v16 = (System_Collections_Generic_List_object__o *)this->fields._QuestFocusStateDataList_k__BackingField;
      if ( !v16 )
        sub_1C2D6EC(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               i,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
      v19 = Item;
      if ( !Item )
        sub_1C2D6EC(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v19[1].klass),
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
        goto LABEL_20;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_20:
    v23 = sub_1C7DCA8(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
  return 1;
}


System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateManager__get_QuestFocusStateDataList(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestFocusStateDataList_k__BackingField;
}


void QuestFocusStateManager_QuestFocusStateData___ctor(
        QuestFocusStateManager_QuestFocusStateData_o *this,
        int32_t questId,
        int32_t focusState,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.QuestId = questId;
  this->fields.FocusState = focusState;
}


void QuestFocusStateManager___c__DisplayClass8_0___ctor(
        QuestFocusStateManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestFocusStateManager___c__DisplayClass8_0___GetQuestFocusStateData_b__0(
        QuestFocusStateManager___c__DisplayClass8_0_o *this,
        QuestFocusStateManager_QuestFocusStateData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C2D6EC(this, 0);
  return n->fields.QuestId == this->fields.questId;
}