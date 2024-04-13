void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  System_Collections_Generic_List_int__o *v19; // x19
  struct QuestHintDialogOpenManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E8AD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6702/*"Fgo_20210622"*/, v14, v15, v16);
    byte_42E8AD9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestHintDialogOpenManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6702/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6702/*"Fgo_20210622"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v20 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v20->questHintDialogOpenList = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v20->questHintDialogOpenList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  QuestHintDialogOpenManager_TypeInfo->static_fields->temporarilyId = 0;
}


void __fastcall QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  QuestHintDialogOpenManager_c *v7; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0

  if ( (byte_42E8AD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v1, v2, v3);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v4, v5, v6);
    byte_42E8AD0 = 1;
  }
  v7 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v7 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v7->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_List_int___Clear(
    questHintDialogOpenList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  QuestHintDialogOpenManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E8ACE & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v1, v2, v3);
    byte_42E8ACE = 1;
  }
  v4 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  int v1; // w1
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

  if ( (byte_42E8ACD & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E8ACD = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


int32_t __fastcall QuestHintDialogOpenManager__GetTemporarilyId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  QuestHintDialogOpenManager_c *v4; // x0

  if ( (byte_42E8AD6 & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v1, v2, v3);
    byte_42E8AD6 = 1;
  }
  v4 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v4 = QuestHintDialogOpenManager_TypeInfo;
  }
  return v4->static_fields->temporarilyId;
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  QuestHintDialogOpenManager_c *v4; // x0

  if ( (byte_42E8ACF & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v1, v2, v3);
    byte_42E8ACF = 1;
  }
  v4 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  QuestHintDialogOpenManager_c *v11; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v13; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v16; // x23

  if ( (byte_42E8AD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6, v7);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v8, v9, v10);
    byte_42E8AD3 = 1;
  }
  v11 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v11 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v11->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_29;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v11);
    v11 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = QuestHintDialogOpenManager_TypeInfo;
  }
  v13 = v11->static_fields->questHintDialogOpenList;
  if ( !v13 )
LABEL_29:
    sub_B5D69C(v11, method);
  size = v13->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = QuestHintDialogOpenManager_TypeInfo;
    }
    v16 = v11->static_fields->questHintDialogOpenList;
    if ( !v16 )
      goto LABEL_29;
    if ( v16->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( v16->fields._items->m_Items[i + 1] == questId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v11 = QuestHintDialogOpenManager_TypeInfo;
  }
  return 1;
}


bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyId(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestHintDialogOpenManager_c *v5; // x0

  if ( (byte_42E8AD8 & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8AD8 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  return v5->static_fields->temporarilyId == id;
}


bool __fastcall QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ManagerConfig_c *v16; // x0
  bool v17; // w20
  QuestHintDialogOpenManager_c *v18; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v20; // x0
  System_IO_Stream_o *v21; // x20
  System_IO_BinaryReader_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  QuestHintDialogOpenManager_c *v26; // x0
  __int64 v27; // x3
  int v28; // w20
  int i; // w23
  __int64 v30; // x1
  int32_t v31; // w21
  QuestHintDialogOpenManager_c *v32; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  QuestHintDialogOpenManager_c *v38; // x0

  if ( (byte_42E8AD1 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v13, v14, v15);
    byte_42E8AD1 = 1;
  }
  v16 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  if ( v16->static_fields->UseMock )
    return 1;
  v18 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v18);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v20 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v20);
    v21 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v22 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v22, v21, 0LL);
    if ( !v22 )
      sub_B5D69C(v23, v24);
    v25 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._22_ReadString.method)(
                               v22,
                               v22->klass->vtable._23_ReadChars.methodPtr);
    v26 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v26 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v26->static_fields->SAVE_DATA_VERSION, v25, 0LL) )
    {
      v17 = 0;
    }
    else
    {
      v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
              v22,
              v22->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v28 >= 1 )
      {
        for ( i = 0; i < v28; ++i )
        {
          v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
                  v22,
                  v22->klass->vtable._16_ReadUInt32.methodPtr);
          v32 = QuestHintDialogOpenManager_TypeInfo;
          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v32 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v32->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_B5D69C(0LL, v30);
          System_Collections_Generic_List_int___Add(
            questHintDialogOpenList,
            v31,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      v17 = 1;
    }
    klass = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v37 = sub_AF54C0(v22, System_IDisposable_TypeInfo, 0LL, v27);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v22, *(_QWORD *)(v37 + 8));
  }
  else
  {
    v38 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v38);
    return 0;
  }
  return v17;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  QuestHintDialogOpenManager_c *v4; // x0

  if ( (byte_42E8AD7 & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v1, v2, v3);
    byte_42E8AD7 = 1;
  }
  v4 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v4 = QuestHintDialogOpenManager_TypeInfo;
  }
  v4->static_fields->temporarilyId = 0;
}


void __fastcall QuestHintDialogOpenManager__SetQuestId(int32_t questId, const MethodInfo *method)
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
  QuestHintDialogOpenManager_c *v14; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v16; // x8
  int size; // w21
  int v18; // w8
  __int64 v19; // x22
  struct System_Collections_Generic_List_int__o *v20; // x23

  if ( (byte_42E8AD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9, v10);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v11, v12, v13);
    byte_42E8AD4 = 1;
  }
  v14 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v14 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v14->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_32;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v14);
    v14 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = QuestHintDialogOpenManager_TypeInfo;
  }
  v16 = v14->static_fields->questHintDialogOpenList;
  if ( !v16 )
    goto LABEL_32;
  size = v16->fields._size;
  v18 = (BYTE3(v14->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( (v18 & 1) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = QuestHintDialogOpenManager_TypeInfo;
      }
      v20 = v14->static_fields->questHintDialogOpenList;
      if ( !v20 )
        break;
      if ( v20->fields._size <= (unsigned int)v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v20->fields._items->m_Items[v19 + 1] == questId )
        return;
      v14 = QuestHintDialogOpenManager_TypeInfo;
      ++v19;
      v18 = (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v19 >= size )
        goto LABEL_26;
    }
LABEL_32:
    sub_B5D69C(v14, method);
  }
LABEL_26:
  if ( v18 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = QuestHintDialogOpenManager_TypeInfo;
    }
  }
  v14 = (QuestHintDialogOpenManager_c *)v14->static_fields->questHintDialogOpenList;
  if ( !v14 )
    goto LABEL_32;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v14,
    questId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall QuestHintDialogOpenManager__SetTemporarilyId(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestHintDialogOpenManager_c *v5; // x0

  if ( (byte_42E8AD5 & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8AD5 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5->static_fields->temporarilyId = id;
}


bool __fastcall QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ManagerConfig_c *v19; // x0
  QuestHintDialogOpenManager_c *v21; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v23; // x20
  System_IO_BinaryWriter_o *v24; // x19
  __int64 v25; // x1
  QuestHintDialogOpenManager_c *v26; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x9
  signed __int64 size; // x20
  __int64 v30; // x1
  __int64 v31; // x3
  unsigned __int64 i; // x22
  QuestHintDialogOpenManager_c *v33; // x0
  struct System_Collections_Generic_List_int__o *v34; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0

  if ( (byte_42E8AD2 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v10, v11, v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v16, v17, v18);
    byte_42E8AD2 = 1;
  }
  v19 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( !v19->static_fields->UseMock )
  {
    v21 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v21);
    v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v24 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40360312(v24, v23, 0LL);
    v26 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v26 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v26->static_fields;
    questHintDialogOpenList = static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
      sub_B5D69C(v26, v25);
    if ( !v24 )
      sub_B5D69C(v26, v25);
    size = questHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v24->klass->vtable._22_Write.method)(
      v24,
      static_fields->SAVE_DATA_VERSION,
      v24->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
      v24,
      (unsigned int)size,
      v24->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v33 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v33 = QuestHintDialogOpenManager_TypeInfo;
        }
        v34 = v33->static_fields->questHintDialogOpenList;
        if ( !v34 )
          sub_B5D69C(v33, v30);
        if ( i >= (unsigned int)v34->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
          v24,
          (unsigned int)v34->fields._items->m_Items[i + 1],
          v24->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v24->klass;
    if ( *(_WORD *)&v24->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v38 = sub_AF54C0(v24, System_IDisposable_TypeInfo, 0LL, v31);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v38)(v24, *(_QWORD *)(v38 + 8));
  }
  return 1;
}