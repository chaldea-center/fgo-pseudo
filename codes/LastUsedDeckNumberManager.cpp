void LastUsedDeckNumberManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C37551 & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C32C20(&StringLiteral_6680/*"Fgo_20210906"*/);
    byte_4C37551 = 1;
  }
  LastUsedDeckNumberManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6680/*"Fgo_20210906"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)LastUsedDeckNumberManager_TypeInfo->static_fields, StringLiteral_6680/*"Fgo_20210906"*/, v1, v2);
  *(_WORD *)&LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  static_fields->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->lastUsedInfoList, (int32_t)v3, v5, v6);
}


void LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C3754B & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    byte_4C3754B = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = v1->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_14;
  if ( lastUsedInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = LastUsedDeckNumberManager_TypeInfo;
    lastUsedInfoList = LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList;
    if ( !lastUsedInfoList )
LABEL_14:
      sub_1C32E7C(v1);
  }
  size = lastUsedInfoList->fields._size;
  v4 = lastUsedInfoList->fields._version + 1;
  lastUsedInfoList->fields._size = 0;
  lastUsedInfoList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)lastUsedInfoList->fields._items, 0, size, 0);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModfiy = 1;
}


void LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *v4; // x0
  LastUsedDeckNumberManager_c *v5; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v7; // x21
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x19
  LastUsedDeckNumberManager_c *v10; // x0

  if ( (byte_4C3754E & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
    sub_1C32C20(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C32C20(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__);
    sub_1C32C20(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
    byte_4C3754E = 1;
  }
  v3 = sub_1C32E6C(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 16) = questId;
  v5 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v5 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v5->static_fields->lastUsedInfoList;
  v7 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    0);
  if ( !lastUsedInfoList )
    goto LABEL_13;
  v8 = System_Collections_Generic_List_object___Find(
         lastUsedInfoList,
         (System_Predicate_T__o *)v7,
         (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v8 )
    return;
  v9 = v8;
  v10 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v10 = LastUsedDeckNumberManager_TypeInfo;
  }
  v4 = (System_Collections_Generic_List_object__o *)v10->static_fields->lastUsedInfoList;
  if ( !v4 )
LABEL_13:
    sub_1C32E7C(v4);
  System_Collections_Generic_List_object___Remove(
    v4,
    v9,
    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  const MethodInfo *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C37549 & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    byte_4C37549 = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v1);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


int32_t LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  LastUsedDeckNumberManager_c *v5; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v7; // x21
  Il2CppObject *v8; // x0

  if ( (byte_4C3754D & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_1C32C20(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C32C20(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__);
    sub_1C32C20(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
    byte_4C3754D = 1;
  }
  v3 = sub_1C32E6C(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = questId;
  v5 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v5 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v5->static_fields->lastUsedInfoList;
  v7 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    0);
  if ( !lastUsedInfoList )
LABEL_10:
    sub_1C32E7C(v4);
  v8 = System_Collections_Generic_List_object___Find(
         lastUsedInfoList,
         (System_Predicate_T__o *)v7,
         (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v8 )
    LODWORD(v8) = HIDWORD(v8[1].klass);
  return (int)v8;
}


System_String_o *LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C37548 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C37548 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0

  if ( (byte_4C3754A & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    byte_4C3754A = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v1);
}


bool LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  LastUsedDeckNumberManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  LastUsedDeckNumberManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  System_String_o *v10; // x20
  LastUsedDeckNumberManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  LastUsedDeckNumberManager_c *v14; // x0
  int v15; // w20
  int v16; // w22
  int v17; // w23
  __int64 v18; // x24
  __int64 v19; // x21
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  LastUsedDeckNumberManager_c *v23; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  LastUsedDeckNumberManager_c *v33; // x0

  if ( (byte_4C3754F & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C3754F = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v4 = LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v6 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v8 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0);
      if ( !v8 )
        sub_1C32E7C(v9);
      v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                                 v8,
                                 v8->klass->vtable._22_ReadString.method);
      v11 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v11 = LastUsedDeckNumberManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
      {
        v12 = 5;
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
                v8,
                v8->klass->vtable._9_ReadBoolean.method);
        v14 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v14 = LastUsedDeckNumberManager_TypeInfo;
        }
        v14->static_fields->isContinueDevice = v13 & 1;
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v15 >= 1 )
        {
          do
          {
            v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._17_ReadInt64.methodPtr)(
                    v8,
                    v8->klass->vtable._17_ReadInt64.method);
            v19 = sub_1C32E6C(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v19, 0);
            if ( !v19 )
              sub_1C32E7C(v20);
            *(_DWORD *)(v19 + 16) = v16;
            *(_DWORD *)(v19 + 20) = v17;
            *(_QWORD *)(v19 + 24) = v18;
            v23 = LastUsedDeckNumberManager_TypeInfo;
            if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
              v23 = LastUsedDeckNumberManager_TypeInfo;
            }
            lastUsedInfoList = (System_Collections_Generic_List_object__o *)v23->static_fields->lastUsedInfoList;
            if ( !lastUsedInfoList )
              sub_1C32E7C(0);
            items = lastUsedInfoList->fields._items;
            v26 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
            ++lastUsedInfoList->fields._version;
            if ( !items )
              sub_1C32E7C(lastUsedInfoList);
            size = lastUsedInfoList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                lastUsedInfoList,
                (Il2CppObject *)v19,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              lastUsedInfoList->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v19;
              sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), v19, v21, v22);
            }
            --v15;
          }
          while ( v15 );
        }
        v12 = 8;
      }
      klass = v8->klass;
      v30 = *(unsigned __int16 *)&v8->klass->_2.rank;
      if ( *(_WORD *)&v8->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_36;
        }
        v32 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_36:
        v32 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v8, *(_QWORD *)(v32 + 8));
      if ( (v12 | 8) == 8 )
        return 1;
    }
    else
    {
      v33 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v33);
    }
    return 0;
  }
  return 1;
}


void LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  int64_t Time; // x0
  LastUsedDeckNumberManager_c *v8; // x8
  void *v9; // x21
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x22
  System_Predicate_object__o *v11; // x23
  Il2CppObject *v12; // x0
  LastUsedDeckNumberManager_c *v13; // x0
  __int64 v14; // x8
  int32_t v15; // w22
  BalanceConfig_c *v16; // x0
  LastUsedDeckNumberManager_c *v17; // x8
  LastUsedDeckNumberManager___c_c *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  System_Func_T1__T2__TResult__o *_9__9_1; // x23
  Il2CppObject *v21; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  int32_t items; // w22
  __int64 v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int v30; // w8
  LastUsedDeckNumberManager_c *v31; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  __int64 v35; // x8

  if ( (byte_4C3754C & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
    sub_1C32C20(&System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C32C20(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__);
    sub_1C32C20(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__);
    sub_1C32C20(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_4C3754C = 1;
  }
  v5 = sub_1C32E6C(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_DWORD *)(v5 + 16) = questId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v8 = LastUsedDeckNumberManager_TypeInfo;
  v9 = (void *)Time;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v8 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v8->static_fields->lastUsedInfoList;
  v11 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    0);
  if ( !lastUsedInfoList )
    goto LABEL_40;
  v12 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v12 )
  {
    v6 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v6 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    }
    v14 = *(_QWORD *)(*(_QWORD *)&v6[4].fields._size + 16LL);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 24);
      v16 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( v15 >= v16->static_fields->MemoryDeckLimitByQuest )
      {
        v17 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v17 = LastUsedDeckNumberManager_TypeInfo;
        }
        v18 = LastUsedDeckNumberManager___c_TypeInfo;
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->lastUsedInfoList;
        if ( !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v18 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        _9__9_1 = (System_Func_T1__T2__TResult__o *)v18->static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = LastUsedDeckNumberManager___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v18->static_fields->__9;
          _9__9_1 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_object__object__object____ctor(
            _9__9_1,
            v21,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            0);
          static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          static_fields->__9__9_1 = (struct System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)_9__9_1;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v23, v24);
        }
        v6 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Aggregate_object_(
                                                            v19,
                                                            (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                                            (const MethodInfo_30E4D28 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !v6 )
          goto LABEL_40;
        items = (int32_t)v6->fields._items;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        LastUsedDeckNumberManager__DeleteData(items, v25);
      }
      v27 = sub_1C32E6C(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0);
      if ( v27 )
      {
        v30 = *(_DWORD *)(v5 + 16);
        *(_QWORD *)(v27 + 24) = v9;
        *(_DWORD *)(v27 + 16) = v30;
        *(_DWORD *)(v27 + 20) = deckNumber;
        v31 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v31 = LastUsedDeckNumberManager_TypeInfo;
        }
        v6 = (System_Collections_Generic_List_object__o *)v31->static_fields->lastUsedInfoList;
        if ( v6 )
        {
          v32 = v6->fields._items;
          v33 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
          ++v6->fields._version;
          if ( v32 )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(v32->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v27,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = (__int64)v32 + 8 * size;
              v6->fields._size = size + 1;
              *(_QWORD *)(v35 + 32) = v27;
              sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 32), v27, v28, v29);
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    sub_1C32E7C(v6);
  }
  HIDWORD(v12[1].klass) = deckNumber;
  v12[1].monitor = v9;
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_38:
    v13 = LastUsedDeckNumberManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 1;
}


bool LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  LastUsedDeckNumberManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  LastUsedDeckNumberManager_c *v9; // x0
  struct LastUsedDeckNumberManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  int32_t i; // w21
  LastUsedDeckNumberManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4C37550 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C37550 = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v8, v7, 0);
  v9 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v9 = LastUsedDeckNumberManager_TypeInfo;
  }
  v10 = v9->static_fields;
  lastUsedInfoList = v10->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_1C32E7C(v9);
  if ( !v8 )
    sub_1C32E7C(v9);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v10->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v14 = LastUsedDeckNumberManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->lastUsedInfoList;
      if ( !v15 )
        sub_1C32E7C(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
      v17 = Item;
      if ( !Item )
        sub_1C32E7C(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v17[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v8->klass->vtable._19_Write.methodPtr)(
        v8,
        v17[1].monitor,
        v8->klass->vtable._19_Write.method);
    }
  }
  klass = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_29;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v21 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return 1;
}


void LastUsedDeckNumberManager_LastUsedInfo___ctor(
        LastUsedDeckNumberManager_LastUsedInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LastUsedDeckNumberManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37552 & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_4C37552 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LastUsedDeckNumberManager___c_TypeInfo->static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void LastUsedDeckNumberManager___c___ctor(LastUsedDeckNumberManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


LastUsedDeckNumberManager_LastUsedInfo_o *LastUsedDeckNumberManager___c___SetDeckNumber_b__9_1(
        LastUsedDeckNumberManager___c_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        LastUsedDeckNumberManager_LastUsedInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C32E7C(this);
  if ( x->fields.time >= y->fields.time )
    return y;
  else
    return x;
}


void LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool LastUsedDeckNumberManager___c__DisplayClass10_0___GetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId;
}


void LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool LastUsedDeckNumberManager___c__DisplayClass11_0___DeleteData_b__0(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId;
}


void LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool LastUsedDeckNumberManager___c__DisplayClass9_0___SetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId;
}