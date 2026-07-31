void QuestFocusStateManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct QuestFocusStateManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5939B1F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6958/*"Fgo_20240306_1"*/);
    byte_5939B1F = 1;
  }
  v7 = StringLiteral_6958/*"Fgo_20240306_1"*/;
  QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6958/*"Fgo_20240306_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestFocusStateManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo;
  QuestFocusStateManager_TypeInfo->static_fields->isContinueDevice = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  static_fields = QuestFocusStateManager_TypeInfo->static_fields;
  static_fields->_QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_QuestFocusStateDataList_k__BackingField,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5939B1A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__);
    sub_21FFC50(&QuestFocusStateManager_QuestFocusStateData_TypeInfo);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B1A = 1;
  }
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, *(_QWORD *)&questId);
  if ( !byte_5939B8A )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B8A = 1;
  }
  v6 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, *(_QWORD *)&questId);
    v6 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v6->static_fields->_QuestFocusStateDataList_k__BackingField;
  v8 = sub_21FFEBC(QuestFocusStateManager_QuestFocusStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = questId;
  *(_DWORD *)(v8 + 20) = state;
  if ( !QuestFocusStateDataList_k__BackingField
    || (items = QuestFocusStateDataList_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
        ++QuestFocusStateDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_21FFECC(v9, v10);
  }
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      QuestFocusStateDataList_k__BackingField,
      (Il2CppObject *)v8,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    QuestFocusStateDataList_k__BackingField->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_5939B1B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B1B = 1;
  }
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v1);
  if ( !byte_5939B8A )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B8A = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v1);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = v2->static_fields->_QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    goto LABEL_23;
  if ( QuestFocusStateDataList_k__BackingField->fields._size < 1 )
    goto LABEL_20;
  if ( !*(&v2->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v2, v1);
  if ( !byte_5939B8A )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B8A = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v1);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  v4 = v2->static_fields->_QuestFocusStateDataList_k__BackingField;
  if ( !v4 )
LABEL_23:
    sub_21FFECC(v2, v1);
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
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
}


void QuestFocusStateManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestFocusStateManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  QuestFocusStateManager_c *v5; // x0

  if ( (byte_5939B1E & 1) == 0 )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B1E = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v1);
  SaveFileName = QuestFocusStateManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v5 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v4);
  QuestFocusStateManager__ClearQuestFocusStateDataList((const MethodInfo *)v5);
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

  if ( (byte_5939B19 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
    sub_21FFC50(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    sub_21FFC50(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__);
    sub_21FFC50(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
    byte_5939B19 = 1;
  }
  v4 = sub_21FFEBC(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_12;
  *(_DWORD *)(v4 + 16) = questId;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v6);
  if ( !byte_5939B8A )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B8A = 1;
  }
  v7 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v6);
    v7 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_object__o *)v7->static_fields->_QuestFocusStateDataList_k__BackingField;
  v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
    0);
  if ( !QuestFocusStateDataList_k__BackingField )
LABEL_12:
    sub_21FFECC(v5, v6);
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_object___Find(
                                                           QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *QuestFocusStateManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5939B18 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939B18 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(42, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


bool QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  QuestFocusStateManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryReader_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x19
  QuestFocusStateManager_c *v11; // x0
  __int64 v12; // x1
  bool v13; // w22
  __int64 v14; // x1
  char v15; // w19
  QuestFocusStateManager_c *v16; // x0
  int v17; // w19
  int32_t v18; // w20
  QuestFocusStateManager_o *v19; // x0
  const MethodInfo *v20; // x3
  System_IO_BinaryReader_c *klass; // x8
  __int64 v22; // x9
  int *p_offset; // x10
  __int64 v24; // x0
  QuestFocusStateManager_c *v26; // x0
  System_IO_BinaryReader_o *v27; // [xsp+28h] [xbp-38h]

  if ( (byte_5939B1C & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B1C = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, method);
  SaveFileName = QuestFocusStateManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v6 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v6, v5, 0);
    v27 = v6;
    if ( !v6 )
      sub_21FFECC(v7, v8);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v6->klass->vtable._22_ReadString.methodPtr)(
                               v6,
                               v6->klass->vtable._22_ReadString.method);
    v11 = QuestFocusStateManager_TypeInfo;
    if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v9);
      v11 = QuestFocusStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
    {
      v13 = 0;
    }
    else
    {
      if ( !v27 )
        sub_21FFECC(0, v12);
      v15 = ((__int64 (*)(void))v27->klass->vtable._9_ReadBoolean.methodPtr)();
      v16 = QuestFocusStateManager_TypeInfo;
      if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v14);
        v16 = QuestFocusStateManager_TypeInfo;
      }
      v16->static_fields->isContinueDevice = v15 & 1;
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v27->klass->vtable._15_ReadInt32.methodPtr)(
              v27,
              v27->klass->vtable._15_ReadInt32.method);
      if ( v17 >= 1 )
      {
        do
        {
          v18 = ((__int64 (*)(void))v27->klass->vtable._15_ReadInt32.methodPtr)();
          v19 = (QuestFocusStateManager_o *)((__int64 (*)(void))v27->klass->vtable._15_ReadInt32.methodPtr)();
          QuestFocusStateManager__AddQuestFocusStateData(v19, v18, (int32_t)v19, v20);
          --v17;
        }
        while ( v17 );
      }
      v27->klass->vtable._6_Close.methodPtr();
      v13 = 1;
    }
    if ( v27 )
    {
      klass = v27->klass;
      v22 = *(unsigned __int16 *)&v27->klass->_2.rank;
      if ( *(_WORD *)&v27->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_22;
        }
        v24 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_22:
        v24 = sub_2237E2C(v27, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v24)(v27, *(_QWORD *)(v24 + 8));
    }
    return v13;
  }
  else
  {
    v26 = QuestFocusStateManager_TypeInfo;
    if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v4);
    QuestFocusStateManager__ClearQuestFocusStateDataList((const MethodInfo *)v26);
    return 0;
  }
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
  System_IO_BinaryWriter_o *v7; // x20
  __int64 v8; // x1
  long double v9; // q0
  QuestFocusStateManager_c *v10; // x0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x9
  int size; // w20
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t i; // w21
  QuestFocusStateManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_IO_BinaryWriter_o *v23; // [xsp+28h] [xbp-48h]

  if ( (byte_5939B1D & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B1D = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v4 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, method);
  SaveFileName = QuestFocusStateManager__GetSaveFileName((const MethodInfo *)v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v7, v6, 0);
  v23 = v7;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v8);
  if ( !byte_5939B8A )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B8A = 1;
  }
  v10 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
  {
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v8);
    v10 = QuestFocusStateManager_TypeInfo;
  }
  QuestFocusStateDataList_k__BackingField = v10->static_fields->_QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_21FFECC(v10, v8);
  if ( !v7 )
    sub_21FFECC(0, v8);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  ((void (__fastcall *)(long double))v23->klass->vtable._22_Write.methodPtr)(v9);
  v23->klass->vtable._8_Write.methodPtr();
  if ( !v23 )
    sub_21FFECC(0, v13);
  v23->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v14);
      if ( !byte_5939B8A )
      {
        sub_21FFC50(&QuestFocusStateManager_TypeInfo);
        byte_5939B8A = 1;
      }
      v16 = QuestFocusStateManager_TypeInfo;
      if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v14);
        v16 = QuestFocusStateManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->_QuestFocusStateDataList_k__BackingField;
      if ( !v17 )
        sub_21FFECC(0, v14);
      if ( !System_Collections_Generic_List_object___get_Item(
              v17,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__) )
        sub_21FFECC(0, v18);
      v23->klass->vtable._17_Write.methodPtr();
      v23->klass->vtable._17_Write.methodPtr();
    }
  }
  v23->klass->vtable._5_Close.methodPtr();
  klass = v23->klass;
  v20 = *(unsigned __int16 *)&v23->klass->_2.rank;
  if ( *(_WORD *)&v23->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_33;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_33:
    v22 = sub_2237E2C(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v23, *(_QWORD *)(v22 + 8));
  return 1;
}


System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateManager__get_QuestFocusStateDataList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  QuestFocusStateManager_c *v2; // x0

  if ( (byte_5939B17 & 1) == 0 )
  {
    sub_21FFC50(&QuestFocusStateManager_TypeInfo);
    byte_5939B17 = 1;
  }
  v2 = QuestFocusStateManager_TypeInfo;
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v1);
    v2 = QuestFocusStateManager_TypeInfo;
  }
  return v2->static_fields->_QuestFocusStateDataList_k__BackingField;
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
    sub_21FFECC(this, 0);
  return n->fields.QuestId == this->fields.questId;
}