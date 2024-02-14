void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x19
  struct QuestHintDialogOpenManager_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4213CB7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6640/*"Fgo_20210622"*/, v10);
    byte_4213CB7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestHintDialogOpenManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6640/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6640/*"Fgo_20210622"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v16->questHintDialogOpenList = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v16->questHintDialogOpenList,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  QuestHintDialogOpenManager_TypeInfo->static_fields->temporarilyId = 0;
}


void __fastcall QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  QuestHintDialogOpenManager_c *v3; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0

  if ( (byte_4213CAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4213CAE = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v3->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_int___Clear(
    questHintDialogOpenList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4213CAC & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4213CAC = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4213CAB & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4213CAB = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


int32_t __fastcall QuestHintDialogOpenManager__GetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4213CB4 & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4213CB4 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  return v2->static_fields->temporarilyId;
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4213CAD & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4213CAD = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v7; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v10; // x23

  if ( (byte_4213CB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v4);
    byte_4213CB1 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v5->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_29;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v7 = v5->static_fields->questHintDialogOpenList;
  if ( !v7 )
LABEL_29:
    sub_B0D97C(v5);
  size = v7->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestHintDialogOpenManager_TypeInfo;
    }
    v10 = v5->static_fields->questHintDialogOpenList;
    if ( !v10 )
      goto LABEL_29;
    if ( v10->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( v10->fields._items->m_Items[i + 1] == questId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  return 1;
}


bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4213CB6 & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4213CB6 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  return v3->static_fields->temporarilyId == id;
}


bool __fastcall QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ManagerConfig_c *v6; // x0
  bool v7; // w20
  QuestHintDialogOpenManager_c *v8; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v10; // x0
  System_IO_Stream_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  System_String_o *v16; // x20
  QuestHintDialogOpenManager_c *v17; // x0
  int v18; // w20
  int i; // w23
  int32_t v20; // w21
  QuestHintDialogOpenManager_c *v21; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  QuestHintDialogOpenManager_c *v27; // x0

  if ( (byte_4213CAF & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v5);
    byte_4213CAF = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( v6->static_fields->UseMock )
    return 1;
  v8 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v8);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v10 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v10);
    v11 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v14 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v12, v13);
    System_IO_BinaryReader___ctor(v14, v11, 0LL);
    if ( !v14 )
      sub_B0D97C(v15);
    v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v17 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v17 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v18 >= 1 )
      {
        for ( i = 0; i < v18; ++i )
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v21 = QuestHintDialogOpenManager_TypeInfo;
          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v21 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v21->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_int___Add(
            questHintDialogOpenList,
            v20,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      v7 = 1;
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v26 = sub_AA67A0(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v14, *(_QWORD *)(v26 + 8));
  }
  else
  {
    v27 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v27);
    return 0;
  }
  return v7;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4213CB5 & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4213CB5 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  v2->static_fields->temporarilyId = 0;
}


void __fastcall QuestHintDialogOpenManager__SetQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  QuestHintDialogOpenManager_c *v6; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v8; // x8
  int size; // w21
  int v10; // w8
  __int64 v11; // x22
  struct System_Collections_Generic_List_int__o *v12; // x23

  if ( (byte_4213CB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v5);
    byte_4213CB2 = 1;
  }
  v6 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v6 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v6->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_32;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v6);
    v6 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = QuestHintDialogOpenManager_TypeInfo;
  }
  v8 = v6->static_fields->questHintDialogOpenList;
  if ( !v8 )
    goto LABEL_32;
  size = v8->fields._size;
  v10 = (BYTE3(v6->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (v10 & 1) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = QuestHintDialogOpenManager_TypeInfo;
      }
      v12 = v6->static_fields->questHintDialogOpenList;
      if ( !v12 )
        break;
      if ( v12->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( v12->fields._items->m_Items[v11 + 1] == questId )
        return;
      v6 = QuestHintDialogOpenManager_TypeInfo;
      ++v11;
      v10 = (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v11 >= size )
        goto LABEL_26;
    }
LABEL_32:
    sub_B0D97C(v6);
  }
LABEL_26:
  if ( v10 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestHintDialogOpenManager_TypeInfo;
    }
  }
  v6 = (QuestHintDialogOpenManager_c *)v6->static_fields->questHintDialogOpenList;
  if ( !v6 )
    goto LABEL_32;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v6,
    questId,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall QuestHintDialogOpenManager__SetTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4213CB3 & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4213CB3 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  v3->static_fields->temporarilyId = id;
}


bool __fastcall QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  QuestHintDialogOpenManager_c *v9; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_IO_BinaryWriter_o *v14; // x19
  QuestHintDialogOpenManager_c *v15; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x9
  signed __int64 size; // x20
  unsigned __int64 i; // x22
  QuestHintDialogOpenManager_c *v20; // x0
  struct System_Collections_Generic_List_int__o *v21; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0

  if ( (byte_4213CB0 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v6);
    byte_4213CB0 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v9 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v9);
    v11 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v14 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v12, v13);
    System_IO_BinaryWriter___ctor_39036700(v14, v11, 0LL);
    v15 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v15 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v15->static_fields;
    questHintDialogOpenList = static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
      sub_B0D97C(v15);
    if ( !v14 )
      sub_B0D97C(v15);
    size = questHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
      v14,
      static_fields->SAVE_DATA_VERSION,
      v14->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
      v14,
      (unsigned int)size,
      v14->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v20 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v20 = QuestHintDialogOpenManager_TypeInfo;
        }
        v21 = v20->static_fields->questHintDialogOpenList;
        if ( !v21 )
          sub_B0D97C(v20);
        if ( i >= (unsigned int)v21->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
          v14,
          (unsigned int)v21->fields._items->m_Items[i + 1],
          v14->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v25 = sub_AA67A0(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v14, *(_QWORD *)(v25 + 8));
  }
  return 1;
}