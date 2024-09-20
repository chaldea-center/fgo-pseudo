void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_Collections_Generic_List_int__o *v3; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C29E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6644/*"Fgo_20210622"*/);
    byte_4A5C29E = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6644/*"Fgo_20210622"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    StringLiteral_6644/*"Fgo_20210622"*/,
    v1,
    v2);
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questHintDialogOpenList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->questHintDialogOpenList, (int32_t)v3, v5, v6);
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
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v4; // w9

  if ( (byte_4A5C295 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C295 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v2->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1B8880C(v2, v1);
  v4 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v4;
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A5C293 & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C293 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5C292 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C292 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


int32_t __fastcall QuestHintDialogOpenManager__GetTemporarilyId(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_4A5C29B & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C29B = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v1 = QuestHintDialogOpenManager_TypeInfo;
  }
  return v1->static_fields->temporarilyId;
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_4A5C294 & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C294 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  struct System_Collections_Generic_List_int__o *v5; // x8
  int size; // w21
  int v7; // w24
  bool v8; // w23

  if ( (byte_4A5C298 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C298 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v3->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_23;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = v3->static_fields->questHintDialogOpenList;
  if ( !v5 )
    goto LABEL_23;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v7 = 1;
    v8 = 1;
    while ( 1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestHintDialogOpenManager_TypeInfo;
      }
      v3 = (QuestHintDialogOpenManager_c *)v3->static_fields->questHintDialogOpenList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v3,
             v7 - 1,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == questId )
        return v8;
      v8 = v7 < size;
      if ( size == v7 )
        return v8;
      v3 = QuestHintDialogOpenManager_TypeInfo;
      ++v7;
    }
LABEL_23:
    sub_1B8880C(v3, method);
  }
  return 0;
}


bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4A5C29D & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C29D = 1;
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
  ManagerConfig_c *v1; // x0
  bool v2; // w21
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
  __int64 v13; // x1
  int32_t v14; // w21
  QuestHintDialogOpenManager_c *v15; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  QuestHintDialogOpenManager_c *v24; // x0

  if ( (byte_4A5C296 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C296 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v5 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v7 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0LL);
    if ( !v7 )
      sub_1B8880C(v8, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                               v7,
                               v7->klass->vtable._23_ReadChars.methodPtr);
    v11 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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
        do
        {
          v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                  v7,
                  v7->klass->vtable._16_ReadUInt32.methodPtr);
          v15 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v15 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v15->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1B8880C(0LL, v13);
          items = questHintDialogOpenList->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1B8880C(questHintDialogOpenList, v13);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v14,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size + 1] = v14;
          }
          --v12;
        }
        while ( v12 );
      }
      v2 = 1;
    }
    klass = v7->klass;
    v21 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_31;
      }
      v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_31:
      v23 = sub_1BDA590(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
  }
  else
  {
    v24 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v24);
    return 0;
  }
  return v2;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_4A5C29C & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C29C = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
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
  int32_t v6; // w20
  int v7; // w24
  const char *name; // x8
  _QWORD *v9; // x9
  __int64 namespaze_low; // x10

  if ( (byte_4A5C299 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C299 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v3->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_25;
  if ( !questHintDialogOpenList->fields._size )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = v3->static_fields->questHintDialogOpenList;
  if ( !v5 )
    goto LABEL_25;
  v6 = 0;
  v7 = v5->fields._size & ~(v5->fields._size >> 31);
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestHintDialogOpenManager_TypeInfo;
    }
    v3 = (QuestHintDialogOpenManager_c *)v3->static_fields->questHintDialogOpenList;
    if ( !v3 )
      goto LABEL_25;
    if ( v7 == v6 )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)v3,
           v6,
           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == questId )
      return;
    v3 = QuestHintDialogOpenManager_TypeInfo;
    ++v6;
  }
  name = v3->_1.name;
  v9 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(v3->_1.namespaze);
  if ( !name )
LABEL_25:
    sub_1B8880C(v3, method);
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v3,
      questId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = questId;
  }
}


void __fastcall QuestHintDialogOpenManager__SetTemporarilyId(int32_t id, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4A5C29A & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C29A = 1;
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
  ManagerConfig_c *v1; // x0
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryWriter_o *v5; // x19
  __int64 v6; // x1
  QuestHintDialogOpenManager_c *v7; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x9
  int size; // w20
  __int64 v11; // x1
  int32_t i; // w21
  QuestHintDialogOpenManager_c *v13; // x0
  System_Collections_Generic_List_int__o *v14; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0

  if ( (byte_4A5C297 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A5C297 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v2 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v2);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v5 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_61945196(v5, v4, 0LL);
    v7 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v7 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    questHintDialogOpenList = static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
      sub_1B8880C(v7, v6);
    if ( !v5 )
      sub_1B8880C(v7, v6);
    size = questHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v5->klass->vtable._22_Write.method)(
      v5,
      static_fields->SAVE_DATA_VERSION,
      v5->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._17_Write.method)(
      v5,
      (unsigned int)size,
      v5->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v13 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v13 = QuestHintDialogOpenManager_TypeInfo;
        }
        v14 = v13->static_fields->questHintDialogOpenList;
        if ( !v14 )
          sub_1B8880C(0LL, v11);
        Item = System_Collections_Generic_List_int___get_Item(
                 v14,
                 i,
                 (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._17_Write.method)(
          v5,
          Item,
          v5->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v5->klass;
    v17 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_22;
      }
      v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_22:
      v19 = sub_1BDA590(v5, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v19)(v5, *(_QWORD *)(v19 + 8));
  }
  return 1;
}