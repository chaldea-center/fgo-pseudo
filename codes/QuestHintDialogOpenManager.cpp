void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A20BF7 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_6623/*"Fgo_20210622"*/, v6);
    byte_4A20BF7 = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6623/*"Fgo_20210622"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    StringLiteral_6623/*"Fgo_20210622"*/,
    v2,
    v3);
  v7 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questHintDialogOpenList = v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->questHintDialogOpenList, (int32_t)v7, v9, v10);
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
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v5; // w9

  if ( (byte_4A20BEE & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4A20BEE = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v3->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1B71828(v3, v1);
  v5 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v5;
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A20BEC & 1) == 0 )
  {
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4A20BEC = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
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

  if ( (byte_4A20BEB & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, v1);
    sub_1B715CC(&DatFileName_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A20BEB = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_61516764(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


int32_t __fastcall QuestHintDialogOpenManager__GetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4A20BF4 & 1) == 0 )
  {
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4A20BF4 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A20BED & 1) == 0 )
  {
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4A20BED = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
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
  int v9; // w24
  bool v10; // w23

  if ( (byte_4A20BF1 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v4);
    byte_4A20BF1 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v5->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_23;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v7 = v5->static_fields->questHintDialogOpenList;
  if ( !v7 )
    goto LABEL_23;
  size = v7->fields._size;
  if ( size >= 1 )
  {
    v9 = 1;
    v10 = 1;
    while ( 1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = QuestHintDialogOpenManager_TypeInfo;
      }
      v5 = (QuestHintDialogOpenManager_c *)v5->static_fields->questHintDialogOpenList;
      if ( !v5 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v5,
             v9 - 1,
             (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) == questId )
        return v10;
      v10 = v9 < size;
      if ( size == v9 )
        return v10;
      v5 = QuestHintDialogOpenManager_TypeInfo;
      ++v9;
    }
LABEL_23:
    sub_1B71828(v5, method);
  }
  return 0;
}


bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4A20BF6 & 1) == 0 )
  {
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4A20BF6 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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
  bool v7; // w21
  QuestHintDialogOpenManager_c *v8; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v10; // x0
  System_IO_Stream_o *v11; // x20
  System_IO_BinaryReader_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  QuestHintDialogOpenManager_c *v16; // x0
  int v17; // w20
  __int64 v18; // x1
  int32_t v19; // w21
  QuestHintDialogOpenManager_c *v20; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  QuestHintDialogOpenManager_c *v29; // x0

  if ( (byte_4A20BEF & 1) == 0 )
  {
    sub_1B715CC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B715CC(&System_IDisposable_TypeInfo, v2);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B715CC(&ManagerConfig_TypeInfo, v4);
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v5);
    byte_4A20BEF = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( v6->static_fields->UseMock )
    return 1;
  v8 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v8);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v10 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v10);
    v11 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v12 = (System_IO_BinaryReader_o *)sub_1B71818(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v12, v11, 0LL);
    if ( !v12 )
      sub_1B71828(v13, v14);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                               v12,
                               v12->klass->vtable._23_ReadChars.methodPtr);
    v16 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
              v12,
              v12->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v17 >= 1 )
      {
        do
        {
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                  v12,
                  v12->klass->vtable._16_ReadUInt32.methodPtr);
          v20 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v20 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v20->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1B71828(0LL, v18);
          items = questHintDialogOpenList->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1B71828(questHintDialogOpenList, v18);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v19,
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size + 1] = v19;
          }
          --v17;
        }
        while ( v17 );
      }
      v7 = 1;
    }
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
          goto LABEL_31;
      }
      v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_31:
      v28 = sub_1BC35AC(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
  }
  else
  {
    v29 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v29);
    return 0;
  }
  return v7;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4A20BF5 & 1) == 0 )
  {
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4A20BF5 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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
  int32_t v9; // w20
  int v10; // w24
  const char *name; // x8
  _QWORD *v12; // x9
  __int64 namespaze_low; // x10

  if ( (byte_4A20BF2 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v5);
    byte_4A20BF2 = 1;
  }
  v6 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v6 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v6->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_25;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v6);
    v6 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = QuestHintDialogOpenManager_TypeInfo;
  }
  v8 = v6->static_fields->questHintDialogOpenList;
  if ( !v8 )
    goto LABEL_25;
  v9 = 0;
  v10 = v8->fields._size & ~(v8->fields._size >> 31);
  while ( 1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestHintDialogOpenManager_TypeInfo;
    }
    v6 = (QuestHintDialogOpenManager_c *)v6->static_fields->questHintDialogOpenList;
    if ( !v6 )
      goto LABEL_25;
    if ( v10 == v9 )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)v6,
           v9,
           (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__) == questId )
      return;
    v6 = QuestHintDialogOpenManager_TypeInfo;
    ++v9;
  }
  name = v6->_1.name;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(v6->_1.namespaze);
  if ( !name )
LABEL_25:
    sub_1B71828(v6, method);
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v6,
      questId,
      *(const MethodInfo_34B323C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = questId;
  }
}


void __fastcall QuestHintDialogOpenManager__SetTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4A20BF3 & 1) == 0 )
  {
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4A20BF3 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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
  QuestHintDialogOpenManager_c *v8; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryWriter_o *v11; // x19
  __int64 v12; // x1
  QuestHintDialogOpenManager_c *v13; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x9
  int size; // w20
  __int64 v17; // x1
  int32_t i; // w21
  QuestHintDialogOpenManager_c *v19; // x0
  System_Collections_Generic_List_int__o *v20; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0

  if ( (byte_4A20BF0 & 1) == 0 )
  {
    sub_1B715CC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B715CC(&System_IDisposable_TypeInfo, v2);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B715CC(&ManagerConfig_TypeInfo, v5);
    sub_1B715CC(&QuestHintDialogOpenManager_TypeInfo, v6);
    byte_4A20BF0 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v8 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v8);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v11 = (System_IO_BinaryWriter_o *)sub_1B71818(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_61743668(v11, v10, 0LL);
    v13 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v13 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    questHintDialogOpenList = static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
      sub_1B71828(v13, v12);
    if ( !v11 )
      sub_1B71828(v13, v12);
    size = questHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v11->klass->vtable._22_Write.method)(
      v11,
      static_fields->SAVE_DATA_VERSION,
      v11->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
      v11,
      (unsigned int)size,
      v11->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v19 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v19 = QuestHintDialogOpenManager_TypeInfo;
        }
        v20 = v19->static_fields->questHintDialogOpenList;
        if ( !v20 )
          sub_1B71828(0LL, v17);
        Item = System_Collections_Generic_List_int___get_Item(
                 v20,
                 i,
                 (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
          v11,
          Item,
          v11->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v11->klass;
    v23 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_22:
      v25 = sub_1BC35AC(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v11, *(_QWORD *)(v25 + 8));
  }
  return 1;
}