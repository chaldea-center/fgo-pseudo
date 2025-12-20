void QuestFocusStateManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct QuestFocusStateManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2DBEE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    sub_1C94098(&StringLiteral_6695/*"Fgo_20240306_1"*/);
    byte_4D2DBEE = 1;
  }
  QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6695/*"Fgo_20240306_1"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)QuestFocusStateManager_TypeInfo->static_fields,
    StringLiteral_6695/*"Fgo_20240306_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  QuestFocusStateManager_TypeInfo->static_fields->isContinueDevice = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  static_fields = QuestFocusStateManager_TypeInfo->static_fields;
  static_fields->_QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v7;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_QuestFocusStateDataList_k__BackingField,
    (int32_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestFocusStateManager__AddQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  QuestFocusStateManager_c *v6; // x0
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x21
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4D2DBE9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__);
    sub_1C94098(&QuestFocusStateManager_QuestFocusStateData_TypeInfo);
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DBE9 = 1;
  }
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !byte_4D2DC5B )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DC5B = 1;
  }
  v6 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v6 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v6->static_fields->_QuestFocusStateDataList_k__BackingField;
  v8 = sub_1C942E4(QuestFocusStateManager_QuestFocusStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = questId;
  *(_DWORD *)(v8 + 20) = state;
  if ( !QuestFocusStateDataList_k__BackingField
    || (items = QuestFocusStateDataList_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
        ++QuestFocusStateDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1C942F0(v9, v10);
  }
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      QuestFocusStateDataList_k__BackingField,
      (Il2CppObject *)v8,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    QuestFocusStateDataList_k__BackingField->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
  }
}


void QuestFocusStateManager__ClearQuestFocusStateDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestFocusStateManager_c *v2; // x0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *v4; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4D2DBEA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DBEA = 1;
  }
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !byte_4D2DC5B )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DC5B = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = v2->static_fields->_QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    goto LABEL_23;
  if ( QuestFocusStateDataList_k__BackingField->fields._size < 1 )
    goto LABEL_20;
  if ( !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4D2DC5B )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DC5B = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  v4 = v2->static_fields->_QuestFocusStateDataList_k__BackingField;
  if ( !v4 )
LABEL_23:
    sub_1C942F0(v2, v1);
  size = v4->fields._size;
  v6 = v4->fields._version + 1;
  v4->fields._size = 0;
  v4->fields._version = v6;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)v4->fields._items, 0, size, 0);
    v2 = QuestFocusStateManager_TypeInfo;
  }
LABEL_20:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
}


void QuestFocusStateManager__DeleteSaveData(const MethodInfo *method)
{
  QuestFocusStateManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  QuestFocusStateManager_c *v3; // x0

  if ( (byte_4D2DBED & 1) == 0 )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DBED = 1;
  }
  v1 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  SaveFileName = QuestFocusStateManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v3 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  QuestFocusStateManager__ClearQuestFocusStateDataList((const MethodInfo *)v3);
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
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  QuestFocusStateManager_c *v7; // x0
  System_Collections_Generic_List_object__o *QuestFocusStateDataList_k__BackingField; // x20
  System_Predicate_object__o *v9; // x21

  if ( (byte_4D2DBE8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
    sub_1C94098(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    sub_1C94098(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__);
    sub_1C94098(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
    byte_4D2DBE8 = 1;
  }
  v4 = sub_1C942E4(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_12;
  *(_DWORD *)(v4 + 16) = questId;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !byte_4D2DC5B )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DC5B = 1;
  }
  v7 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v7 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v7->static_fields->_QuestFocusStateDataList_k__BackingField;
  v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
    0);
  if ( !QuestFocusStateDataList_k__BackingField )
LABEL_12:
    sub_1C942F0(v5, v6);
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_object___Find(
                                                           QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *QuestFocusStateManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D2DBE7 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2DBE7 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(42, 0);
  return System_String__Concat_64456008(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


bool QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryReader_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  QuestFocusStateManager_c *v9; // x0
  int v10; // w21
  char v11; // w20
  QuestFocusStateManager_c *v12; // x0
  int v13; // w20
  int32_t v14; // w21
  QuestFocusStateManager_o *v15; // x0
  const MethodInfo *v16; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  QuestFocusStateManager_c *v22; // x0

  if ( (byte_4D2DBEB & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryReader_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DBEB = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  SaveFileName = QuestFocusStateManager__GetSaveFileName((const MethodInfo *)v2);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    v22 = QuestFocusStateManager_TypeInfo;
    if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager__ClearQuestFocusStateDataList((const MethodInfo *)v22);
    return 0;
  }
  v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v5 = (System_IO_BinaryReader_o *)sub_1C942E4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v5, v4, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._22_ReadString.methodPtr)(
                            v5,
                            v5->klass->vtable._22_ReadString.method);
  v9 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v9 = QuestFocusStateManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0) )
  {
    v10 = 4;
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._9_ReadBoolean.methodPtr)(
            v5,
            v5->klass->vtable._9_ReadBoolean.method);
    v12 = QuestFocusStateManager_TypeInfo;
    if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
      v12 = QuestFocusStateManager_TypeInfo;
    }
    v12->static_fields->isContinueDevice = v11 & 1;
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
            v5,
            v5->klass->vtable._15_ReadInt32.method);
    if ( v13 >= 1 )
    {
      do
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                v5,
                v5->klass->vtable._15_ReadInt32.method);
        v15 = (QuestFocusStateManager_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                                            v5,
                                            v5->klass->vtable._15_ReadInt32.method);
        QuestFocusStateManager__AddQuestFocusStateData(v15, v14, (int32_t)v15, v16);
        --v13;
      }
      while ( v13 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._6_Close.methodPtr)(
      v5,
      v5->klass->vtable._6_Close.method);
    v10 = 7;
  }
  klass = v5->klass;
  v18 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_20;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_20:
    v20 = sub_1C6A420(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v20)(v5, *(_QWORD *)(v20 + 8));
  return v10 == 7;
}


// local variable allocation has failed, the output may be wrong!
void QuestFocusStateManager__SetFocusState(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  QuestFocusStateManager_QuestFocusStateData_o *QuestFocusStateData; // x0
  const MethodInfo *v7; // x3

  QuestFocusStateData = QuestFocusStateManager__GetQuestFocusStateData(this, questId, *(const MethodInfo **)&state);
  if ( QuestFocusStateData )
    QuestFocusStateData->fields.FocusState = state;
  else
    QuestFocusStateManager__AddQuestFocusStateData(0, questId, state, v7);
}


bool QuestFocusStateManager__WriteData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  QuestFocusStateManager_c *v4; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  long double inited; // q0
  QuestFocusStateManager_c *v10; // x0
  struct QuestFocusStateManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x9
  int size; // w21
  __int64 v14; // x1
  int32_t i; // w22
  QuestFocusStateManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4D2DBEC & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryWriter_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DBEC = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v4 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  SaveFileName = QuestFocusStateManager__GetSaveFileName((const MethodInfo *)v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C942E4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65327072(v7, v6, 0);
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  if ( !byte_4D2DC5B )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DC5B = 1;
  }
  v10 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v10 = QuestFocusStateManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  QuestFocusStateDataList_k__BackingField = static_fields->_QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_1C942F0(v10, v8);
  if ( !v7 )
    sub_1C942F0(v10, v8);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *, long double))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method,
    inited);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v7->klass->vtable._8_Write.methodPtr)(
    v7,
    QuestFocusStateManager_TypeInfo->static_fields->isContinueDevice,
    v7->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
    v7,
    (unsigned int)size,
    v7->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
      if ( !byte_4D2DC5B )
      {
        sub_1C94098(&QuestFocusStateManager_TypeInfo);
        byte_4D2DC5B = 1;
      }
      v16 = QuestFocusStateManager_TypeInfo;
      if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
        v16 = QuestFocusStateManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->_QuestFocusStateDataList_k__BackingField;
      if ( !v17 )
        sub_1C942F0(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C942F0(0, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v20[1].klass),
        v7->klass->vtable._17_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v7->klass->vtable._5_Close.methodPtr)(
    v7,
    v7->klass->vtable._5_Close.method);
  klass = v7->klass;
  v22 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_32;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_32:
    v24 = sub_1C6A420(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v7, *(_QWORD *)(v24 + 8));
  return 1;
}


System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateManager__get_QuestFocusStateDataList(
        const MethodInfo *method)
{
  QuestFocusStateManager_c *v1; // x0

  if ( (byte_4D2DBE6 & 1) == 0 )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    byte_4D2DBE6 = 1;
  }
  v1 = QuestFocusStateManager_TypeInfo;
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
    v1 = QuestFocusStateManager_TypeInfo;
  }
  return v1->static_fields->_QuestFocusStateDataList_k__BackingField;
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
    sub_1C942F0(this, 0);
  return n->fields.QuestId == this->fields.questId;
}