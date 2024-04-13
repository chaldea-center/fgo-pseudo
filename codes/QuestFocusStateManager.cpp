void __fastcall QuestFocusStateManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8ABD & 1) == 0 )
  {
    sub_B5D5C4(&QuestFocusStateManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6710/*"Fgo_20240306_1"*/, v8, v9, v10);
    byte_42E8ABD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestFocusStateManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6710/*"Fgo_20240306_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6710/*"Fgo_20240306_1"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall QuestFocusStateManager___ctor(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8ABC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v5, v6, v7);
    byte_42E8ABC = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData___ctor__);
  this->fields._QuestFocusStateDataList_k__BackingField = (struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._QuestFocusStateDataList_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestFocusStateManager__AddQuestFocusStateData(
        QuestFocusStateManager_o *this,
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x21
  QuestFocusStateManager_QuestFocusStateData_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_42E8AB8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__,
      questId,
      state,
      method);
    sub_B5D5C4(&QuestFocusStateManager_QuestFocusStateData_TypeInfo, v7, v8, v9);
    byte_42E8AB8 = 1;
  }
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  v11 = (QuestFocusStateManager_QuestFocusStateData_o *)sub_B5D694(QuestFocusStateManager_QuestFocusStateData_TypeInfo);
  QuestFocusStateManager_QuestFocusStateData___ctor(v11, questId, state, 0LL);
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_B5D69C(v12, v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)QuestFocusStateDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Add__);
}


void __fastcall QuestFocusStateManager__ClearQuestFocusStateDataList(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *QuestFocusStateDataList_k__BackingField; // x0

  if ( (byte_42E8AB9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__,
      v5,
      v6,
      v7);
    byte_42E8AB9 = 1;
  }
  QuestFocusStateDataList_k__BackingField = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_B5D69C(0LL, method);
  if ( QuestFocusStateDataList_k__BackingField->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      QuestFocusStateDataList_k__BackingField,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Clear__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  QuestFocusStateManager___c__DisplayClass8_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E8AB7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_QuestFocusStateManager_QuestFocusStateData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__, v12, v13, v14);
    sub_B5D5C4(&QuestFocusStateManager___c__DisplayClass8_0_TypeInfo, v15, v16, v17);
    byte_42E8AB7 = 1;
  }
  v18 = (QuestFocusStateManager___c__DisplayClass8_0_o *)sub_B5D694(QuestFocusStateManager___c__DisplayClass8_0_TypeInfo);
  QuestFocusStateManager___c__DisplayClass8_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.questId = questId,
        QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestFocusStateManager_QuestFocusStateData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_QuestFocusStateManager___c__DisplayClass8_0__GetQuestFocusStateData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_QuestFocusStateManager_QuestFocusStateData___ctor__),
        !QuestFocusStateDataList_k__BackingField) )
  {
    sub_B5D69C(v19, v20);
  }
  return (QuestFocusStateManager_QuestFocusStateData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)QuestFocusStateDataList_k__BackingField,
                                                           (System_Predicate_T__o *)v22,
                                                           (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__Find__);
}


System_String_o *__fastcall QuestFocusStateManager__GetSaveFileName(
        QuestFocusStateManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E8AB6 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E8AB6 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(42, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


bool __fastcall QuestFocusStateManager__ReadData(QuestFocusStateManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestFocusStateManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *SaveFileName; // x20
  const MethodInfo *v12; // x1
  System_IO_Stream_o *v13; // x21
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  QuestFocusStateManager_c *v18; // x0
  __int64 v19; // x3
  int v20; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v22; // w21
  int v23; // w23
  int32_t v24; // w22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_IO_BinaryReader_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  int v32; // [xsp+8h] [xbp-48h]

  v4 = this;
  if ( (byte_42E8ABA & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    this = (QuestFocusStateManager_o *)sub_B5D5C4(&QuestFocusStateManager_TypeInfo, v8, v9, v10);
    byte_42E8ABA = 1;
  }
  SaveFileName = QuestFocusStateManager__GetSaveFileName(this, method);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v14 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v14, v13, 0LL);
    if ( !v14 )
      sub_B5D69C(v15, v16);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v18 = QuestFocusStateManager_TypeInfo;
    if ( (BYTE3(QuestFocusStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
      v18 = QuestFocusStateManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
    {
      v32 = 147;
    }
    else
    {
      v4->fields.isContinueDevice = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                                      v14,
                                      v14->klass->vtable._10_ReadByte.methodPtr) & 1;
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      klass = v14->klass;
      v22 = v20;
      if ( v20 >= 1 )
      {
        v23 = 0;
        do
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                  v14,
                  klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          QuestFocusStateManager__AddQuestFocusStateData(v4, v24, v25, v26);
          klass = v14->klass;
          ++v23;
        }
        while ( v23 < v22 );
      }
      ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
        v14,
        klass->vtable._7_Dispose.methodPtr);
      v32 = 131;
    }
    v27 = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v30 = (__int64)(&v27->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_18:
      v30 = sub_AF54C0(v14, System_IDisposable_TypeInfo, 0LL, v19);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
    return v32 == 131;
  }
  else
  {
    QuestFocusStateManager__ClearQuestFocusStateDataList(v4, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  QuestFocusStateManager_o *v20; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v23; // x21
  System_IO_BinaryWriter_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  long double v27; // q0
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *QuestFocusStateDataList_k__BackingField; // x8
  int size; // w21
  QuestFocusStateManager_c *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x22
  struct System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__o *v34; // x23
  QuestFocusStateManager_QuestFocusStateData_o *v35; // x23
  __int64 v36; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0

  if ( (byte_42E8ABB & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Count__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestFocusStateManager_QuestFocusStateData__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&QuestFocusStateManager_TypeInfo, v17, v18, v19);
    byte_42E8ABB = 1;
  }
  v20 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = (QuestFocusStateManager_o *)ManagerConfig_TypeInfo;
  }
  if ( HIBYTE(v20[5].fields._QuestFocusStateDataList_k__BackingField[17].fields._size) )
    return 0;
  SaveFileName = QuestFocusStateManager__GetSaveFileName(v20, method);
  v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v24 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v24, v23, 0LL);
  QuestFocusStateDataList_k__BackingField = this->fields._QuestFocusStateDataList_k__BackingField;
  if ( !QuestFocusStateDataList_k__BackingField )
    sub_B5D69C(v25, v26);
  size = QuestFocusStateDataList_k__BackingField->fields._size;
  v30 = QuestFocusStateManager_TypeInfo;
  if ( (BYTE3(QuestFocusStateManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v27 = j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  }
  if ( !v24 )
    sub_B5D69C(v30, v26);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *, long double))v24->klass->vtable._22_Write.method)(
    v24,
    QuestFocusStateManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
    v24->klass[1]._1.image,
    v27);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v24->klass->vtable._8_Write.method)(
    v24,
    this->fields.isContinueDevice,
    v24->klass->vtable._9_Write.methodPtr);
  v31 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
          v24,
          (unsigned int)size,
          v24->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v33 = 0LL;
    do
    {
      v34 = this->fields._QuestFocusStateDataList_k__BackingField;
      if ( !v34 )
        sub_B5D69C(v31, v32);
      if ( v34->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v35 = v34->fields._items->m_Items[v33];
      if ( !v35 )
        sub_B5D69C(v31, v32);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        (unsigned int)v35->fields.QuestId,
        v24->klass->vtable._18_Write.methodPtr);
      v31 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
              v24,
              (unsigned int)v35->fields.FocusState,
              v24->klass->vtable._18_Write.methodPtr);
      ++v33;
    }
    while ( (int)v33 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v24->klass->vtable._5_Close.method)(
    v24,
    v24->klass->vtable._6_Dispose.methodPtr);
  klass = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_24:
    v40 = sub_AF54C0(v24, System_IDisposable_TypeInfo, 0LL, v36);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8));
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
    sub_B5D69C(this, 0LL);
  return n->fields.QuestId == this->fields.questId;
}