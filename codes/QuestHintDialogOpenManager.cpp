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
  System_Collections_Generic_List_int__o *v13; // x19
  struct QuestHintDialogOpenManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4186E8D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6623/*"Fgo_20210622"*/, v10);
    byte_4186E8D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestHintDialogOpenManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6623/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6623/*"Fgo_20210622"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v14->questHintDialogOpenList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->questHintDialogOpenList,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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

  if ( (byte_4186E84 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4186E84 = 1;
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
    sub_B2C434(0LL, v1);
  System_Collections_Generic_List_int___Clear(
    questHintDialogOpenList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4186E82 & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4186E82 = 1;
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

  if ( (byte_4186E81 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4186E81 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


int32_t __fastcall QuestHintDialogOpenManager__GetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4186E8A & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4186E8A = 1;
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

  if ( (byte_4186E83 & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4186E83 = 1;
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

  if ( (byte_4186E87 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v4);
    byte_4186E87 = 1;
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
    sub_B2C434(v5, method);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4186E8C & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4186E8C = 1;
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
  System_IO_BinaryReader_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  QuestHintDialogOpenManager_c *v16; // x0
  __int64 v17; // x3
  int v18; // w20
  int i; // w23
  __int64 v20; // x1
  int32_t v21; // w21
  QuestHintDialogOpenManager_c *v22; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0
  QuestHintDialogOpenManager_c *v28; // x0

  if ( (byte_4186E85 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v5);
    byte_4186E85 = 1;
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
    v12 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v12, v11, 0LL);
    if ( !v12 )
      sub_B2C434(v13, v14);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                               v12,
                               v12->klass->vtable._23_ReadChars.methodPtr);
    v16 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v16 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
              v12,
              v12->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v18 >= 1 )
      {
        for ( i = 0; i < v18; ++i )
        {
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                  v12,
                  v12->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = QuestHintDialogOpenManager_TypeInfo;
          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v22 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v22->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_B2C434(0LL, v20);
          System_Collections_Generic_List_int___Add(
            questHintDialogOpenList,
            v21,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      v7 = 1;
    }
    klass = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v27 = sub_AC5258(v12, System_IDisposable_TypeInfo, 0LL, v17);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
  }
  else
  {
    v28 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v28);
    return 0;
  }
  return v7;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4186E8B & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4186E8B = 1;
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

  if ( (byte_4186E88 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v5);
    byte_4186E88 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( v12->fields._items->m_Items[v11 + 1] == questId )
        return;
      v6 = QuestHintDialogOpenManager_TypeInfo;
      ++v11;
      v10 = (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v11 >= size )
        goto LABEL_26;
    }
LABEL_32:
    sub_B2C434(v6, method);
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
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall QuestHintDialogOpenManager__SetTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4186E89 & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4186E89 = 1;
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
  System_IO_BinaryWriter_o *v12; // x19
  __int64 v13; // x1
  QuestHintDialogOpenManager_c *v14; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x9
  signed __int64 size; // x20
  __int64 v18; // x1
  __int64 v19; // x3
  unsigned __int64 i; // x22
  QuestHintDialogOpenManager_c *v21; // x0
  struct System_Collections_Generic_List_int__o *v22; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_4186E86 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v6);
    byte_4186E86 = 1;
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
    v12 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_39287252(v12, v11, 0LL);
    v14 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v14 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v14->static_fields;
    questHintDialogOpenList = static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
      sub_B2C434(v14, v13);
    if ( !v12 )
      sub_B2C434(v14, v13);
    size = questHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v12->klass->vtable._22_Write.method)(
      v12,
      static_fields->SAVE_DATA_VERSION,
      v12->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
      v12,
      (unsigned int)size,
      v12->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v21 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v21 = QuestHintDialogOpenManager_TypeInfo;
        }
        v22 = v21->static_fields->questHintDialogOpenList;
        if ( !v22 )
          sub_B2C434(v21, v18);
        if ( i >= (unsigned int)v22->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
          v12,
          (unsigned int)v22->fields._items->m_Items[i + 1],
          v12->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v26 = sub_AC5258(v12, System_IDisposable_TypeInfo, 0LL, v19);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  }
  return 1;
}