void __fastcall QuestFocusStateManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438BC4E & 1) == 0 )
  {
    sub_B775C4(&QuestFocusStateManager_TypeInfo);
    sub_B775C4(&StringLiteral_6779/*"Fgo_20240306_1"*/);
    byte_438BC4E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestFocusStateManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6779/*"Fgo_20240306_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6779/*"Fgo_20240306_1"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438BC4D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    byte_438BC4D = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  this->fields._QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._QuestFocusStateDataList_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestFocusStateManager__AddQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x21
  QuestFocusStateManager_QuestFocusStateData_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438BC49 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__);
    sub_B775C4(&QuestFocusStateManager_QuestFocusStateData_TypeInfo);
    byte_438BC49 = 1;
  }
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  v8 = (QuestFocusStateManager_QuestFocusStateData_o *)sub_B77694(QuestFocusStateManager_QuestFocusStateData_TypeInfo);
  QuestFocusStateManager_QuestFocusStateData___ctor(v8, questId, state, 0LL);
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_B7769C(v9, v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)QuestFocusStateDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__);
}


void __fastcall QuestFocusStateManager__ClearQuestFocusStateDataList(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *QuestFocusStateDataList_k__BackingField; // x0

  if ( (byte_438BC4A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    byte_438BC4A = 1;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_B7769C(0LL, method);
  if ( QuestFocusStateDataList_k__BackingField->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      QuestFocusStateDataList_k__BackingField,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__);
  this->fields.isContinueDevice = 0;
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


QuestFocusStateManager_QuestFocusStateData_o *__fastcall QuestFocusStateManager__GetQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestFocusStateManager___c__DisplayClass8_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_438BC48 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
    sub_B775C4(&Method_System_Predicate_QuestFocusStateManager_QuestFocusStateData___ctor__);
    sub_B775C4(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
    sub_B775C4(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__);
    sub_B775C4(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
    byte_438BC48 = 1;
  }
  v5 = (QuestFocusStateManager___c__DisplayClass8_0_o *)sub_B77694(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
  QuestFocusStateManager___c__DisplayClass8_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.questId = questId,
        QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_QuestFocusStateManager_QuestFocusStateData___ctor__),
        !QuestFocusStateDataList_k__BackingField) )
  {
    sub_B7769C(v6, v7);
  }
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *__fastcall QuestFocusStateManager__GetSaveFileName(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438BC47 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438BC47 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(42, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


bool __fastcall QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
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
  int v11; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v13; // w21
  int v14; // w23
  int32_t v15; // w22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_IO_BinaryReader_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  int v23; // [xsp+8h] [xbp-48h]

  v2 = this;
  if ( (byte_438BC4B & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    this = (QuestFocusStateManager_o *)sub_B775C4(&QuestFocusStateManager_TypeInfo);
    byte_438BC4B = 1;
  }
  SaveFileName = QuestFocusStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v5 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v6 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v6, v5, 0LL);
    if ( !v6 )
      sub_B7769C(v7, v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._22_ReadString.method)(
                              v6,
                              v6->klass->vtable._23_ReadChars.methodPtr);
    v10 = QuestFocusStateManager_TypeInfo;
    if ( (BYTE3(QuestFocusStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
      v10 = QuestFocusStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0LL) )
    {
      v23 = 147;
    }
    else
    {
      v2->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._9_ReadBoolean.method)(
                                      v6,
                                      v6->klass->vtable._10_ReadByte.methodPtr) & 1;
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
              v6,
              v6->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v6->klass;
      v13 = v11;
      if ( v11 >= 1 )
      {
        v14 = 0;
        do
        {
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v6,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v6->klass->vtable._15_ReadInt32.method)(
                  v6,
                  v6->klass->vtable._16_ReadUInt32.methodPtr);
          QuestFocusStateManager__AddQuestFocusStateData(v2, v15, v16, v17);
          klass = v6->klass;
          ++v14;
        }
        while ( v14 < v13 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v6,
        klass->vtable._7_Dispose.methodPtr);
      v23 = 131;
    }
    v18 = v6->klass;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &v18->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v21 = (__int64)(&v18->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_18:
      v21 = sub_B0F4C0(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v6, *(_QWORD *)(v21 + 8));
    return v23 == 131;
  }
  else
  {
    QuestFocusStateManager__ClearQuestFocusStateDataList(v2, v4);
    return 0;
  }
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
  QuestFocusStateManager_o *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int size; // w21
  QuestFocusStateManager_c *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x22
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *v17; // x23
  QuestFocusStateManager_QuestFocusStateData_o *v18; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0

  if ( (byte_438BC4C & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&QuestFocusStateManager_TypeInfo);
    byte_438BC4C = 1;
  }
  v3 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  }
  if ( HIBYTE(v3[5].fields._QuestFocusStateDataList_k__BackingField[17].fields._size) )
    return 0;
  SaveFileName = QuestFocusStateManager__GetSaveFileName(v3, method);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v7 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40221404(v7, v6, 0LL);
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_B7769C(v8, v9);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  v13 = QuestFocusStateManager_TypeInfo;
  if ( (BYTE3(QuestFocusStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  }
  if ( !v7 )
    sub_B7769C(v13, v9);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v7->klass->vtable._22_Write.method)(
    v7,
    QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v7->klass[1]._1.image,
    v10);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v7->klass->vtable._8_Write.method)(
    v7,
    this->fields.isContinueDevice,
    v7->klass->vtable._9_Write.methodPtr);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
          v7,
          (unsigned int)size,
          v7->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v16 = 0LL;
    do
    {
      v17 = this->fields._QuestFocusStateDataList_k__BackingField;
      if ( !v17 )
        sub_B7769C(v14, v15);
      if ( v17->fields._size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v18 = v17->fields._items->m_Items[v16];
      if ( !v18 )
        sub_B7769C(v14, v15);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
        v7,
        (unsigned int)v18->fields.QuestId,
        v7->klass->vtable._18_Write.methodPtr);
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
              v7,
              (unsigned int)v18->fields.FocusState,
              v7->klass->vtable._18_Write.methodPtr);
      ++v16;
    }
    while ( (int)v16 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v7->klass->vtable._5_Close.method)(
    v7,
    v7->klass->vtable._6_Dispose.methodPtr);
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_24:
    v22 = sub_B0F4C0(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v7, *(_QWORD *)(v22 + 8));
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
    sub_B7769C(this, 0LL);
  return n->fields.QuestId == this->fields.questId;
}