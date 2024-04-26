void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  struct QuestHintDialogOpenManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43524EE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    sub_B70694(&StringLiteral_6715/*"Fgo_20210622"*/);
    byte_43524EE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestHintDialogOpenManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6715/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6715/*"Fgo_20210622"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v10->questHintDialogOpenList = v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->questHintDialogOpenList,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  QuestHintDialogOpenManager_TypeInfo->static_fields->temporarilyId = 0;
}


void __fastcall QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0

  if ( (byte_43524E5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E5 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v2->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_B7076C(0LL, v1);
  System_Collections_Generic_List_int___Clear(
    questHintDialogOpenList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_43524E3 & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E3 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_43524E2 & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_43524E2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


int32_t __fastcall QuestHintDialogOpenManager__GetTemporarilyId(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_43524EB & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524EB = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v1 = QuestHintDialogOpenManager_TypeInfo;
  }
  return v1->static_fields->temporarilyId;
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_43524E4 & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E4 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v5; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v8; // x23

  if ( (byte_43524E8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E8 = 1;
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
    goto LABEL_29;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = v3->static_fields->questHintDialogOpenList;
  if ( !v5 )
LABEL_29:
    sub_B7076C(v3, method);
  size = v5->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestHintDialogOpenManager_TypeInfo;
    }
    v8 = v3->static_fields->questHintDialogOpenList;
    if ( !v8 )
      goto LABEL_29;
    if ( v8->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( v8->fields._items->m_Items[i + 1] == questId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  return 1;
}


bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_43524ED & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524ED = 1;
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
  ManagerConfig_c *v1; // x0
  bool v2; // w20
  QuestHintDialogOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  QuestHintDialogOpenManager_c *v11; // x0
  int v12; // w20
  int i; // w23
  __int64 v14; // x1
  int32_t v15; // w21
  QuestHintDialogOpenManager_c *v16; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  QuestHintDialogOpenManager_c *v22; // x0

  if ( (byte_43524E6 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E6 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v5 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v7 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0LL);
    if ( !v7 )
      sub_B7076C(v8, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                               v7,
                               v7->klass->vtable._23_ReadChars.methodPtr);
    v11 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v11 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0LL) )
    {
      v2 = 0;
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
              v7,
              v7->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v12 >= 1 )
      {
        for ( i = 0; i < v12; ++i )
        {
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                  v7,
                  v7->klass->vtable._16_ReadUInt32.methodPtr);
          v16 = QuestHintDialogOpenManager_TypeInfo;
          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v16 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v16->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_B7076C(0LL, v14);
          System_Collections_Generic_List_int___Add(
            questHintDialogOpenList,
            v15,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    if ( *(_WORD *)&v7->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v21 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v21)(v7, *(_QWORD *)(v21 + 8));
  }
  else
  {
    v22 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v22);
    return 0;
  }
  return v2;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_43524EC & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524EC = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v1 = QuestHintDialogOpenManager_TypeInfo;
  }
  v1->static_fields->temporarilyId = 0;
}


void __fastcall QuestHintDialogOpenManager__SetQuestId(int32_t questId, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v5; // x8
  int size; // w21
  int v7; // w8
  __int64 v8; // x22
  struct System_Collections_Generic_List_int__o *v9; // x23

  if ( (byte_43524E9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E9 = 1;
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
    goto LABEL_32;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = v3->static_fields->questHintDialogOpenList;
  if ( !v5 )
    goto LABEL_32;
  size = v5->fields._size;
  v7 = (BYTE3(v3->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( (v7 & 1) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestHintDialogOpenManager_TypeInfo;
      }
      v9 = v3->static_fields->questHintDialogOpenList;
      if ( !v9 )
        break;
      if ( v9->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( v9->fields._items->m_Items[v8 + 1] == questId )
        return;
      v3 = QuestHintDialogOpenManager_TypeInfo;
      ++v8;
      v7 = (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v8 >= size )
        goto LABEL_26;
    }
LABEL_32:
    sub_B7076C(v3, method);
  }
LABEL_26:
  if ( v7 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestHintDialogOpenManager_TypeInfo;
    }
  }
  v3 = (QuestHintDialogOpenManager_c *)v3->static_fields->questHintDialogOpenList;
  if ( !v3 )
    goto LABEL_32;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v3,
    questId,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall QuestHintDialogOpenManager__SetTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_43524EA & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524EA = 1;
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
  ManagerConfig_c *v1; // x0
  QuestHintDialogOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  QuestHintDialogOpenManager_c *v8; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x9
  signed __int64 size; // x20
  __int64 v12; // x1
  unsigned __int64 i; // x22
  QuestHintDialogOpenManager_c *v14; // x0
  struct System_Collections_Generic_List_int__o *v15; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0

  if ( (byte_43524E7 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43524E7 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v3 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v3);
    v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v6 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_39879612(v6, v5, 0LL);
    v8 = QuestHintDialogOpenManager_TypeInfo;
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v8 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    questHintDialogOpenList = static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
      sub_B7076C(v8, v7);
    if ( !v6 )
      sub_B7076C(v8, v7);
    size = questHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v6->klass->vtable._22_Write.method)(
      v6,
      static_fields->SAVE_DATA_VERSION,
      v6->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
      v6,
      (unsigned int)size,
      v6->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v14 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v14 = QuestHintDialogOpenManager_TypeInfo;
        }
        v15 = v14->static_fields->questHintDialogOpenList;
        if ( !v15 )
          sub_B7076C(v14, v12);
        if ( i >= (unsigned int)v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
          v6,
          (unsigned int)v15->fields._items->m_Items[i + 1],
          v6->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v6->klass;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v19 = sub_B08590(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v19)(v6, *(_QWORD *)(v19 + 8));
  }
  return 1;
}