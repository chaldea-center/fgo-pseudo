void __fastcall LastUsedDeckNumberManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A08861 & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v4);
    sub_1B686D4(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v5);
    sub_1B686D4(&StringLiteral_6619/*"Fgo_20210906"*/, v6);
    byte_4A08861 = 1;
  }
  LastUsedDeckNumberManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6619/*"Fgo_20210906"*/;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)LastUsedDeckNumberManager_TypeInfo->static_fields,
    StringLiteral_6619/*"Fgo_20210906"*/,
    v2,
    v3);
  *(_WORD *)&LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  static_fields->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v7;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->lastUsedInfoList, (int32_t)v7, v9, v10);
}


void __fastcall LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  LastUsedDeckNumberManager_c *v4; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4A0885B & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v2);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v3);
    byte_4A0885B = 1;
  }
  v4 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v4 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = v4->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_14;
  if ( lastUsedInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = LastUsedDeckNumberManager_TypeInfo;
    lastUsedInfoList = LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList;
    if ( !lastUsedInfoList )
LABEL_14:
      sub_1B68930(v4, v1);
  }
  size = lastUsedInfoList->fields._size;
  v7 = lastUsedInfoList->fields._version + 1;
  lastUsedInfoList->fields._size = 0;
  lastUsedInfoList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)lastUsedInfoList->fields._items, 0, size, 0LL);
    v4 = LastUsedDeckNumberManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = LastUsedDeckNumberManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  System_Collections_Generic_List_object__o *v9; // x0
  __int64 v10; // x1
  LastUsedDeckNumberManager_c *v11; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v13; // x21
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x19
  LastUsedDeckNumberManager_c *v16; // x0

  if ( (byte_4A0885E & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v4);
    sub_1B686D4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v5);
    sub_1B686D4(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v6);
    sub_1B686D4(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_4A0885E = 1;
  }
  v8 = sub_1B68920(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  *(_DWORD *)(v8 + 16) = questId;
  v11 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v11 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v11->static_fields->lastUsedInfoList;
  v13 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    0LL);
  if ( !lastUsedInfoList )
    goto LABEL_13;
  v14 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v14 )
    return;
  v15 = v14;
  v16 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v16 = LastUsedDeckNumberManager_TypeInfo;
  }
  v9 = (System_Collections_Generic_List_object__o *)v16->static_fields->lastUsedInfoList;
  if ( !v9 )
LABEL_13:
    sub_1B68930(v9, v10);
  System_Collections_Generic_List_object___Remove(
    v9,
    v15,
    (const MethodInfo_34BD7A0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  const MethodInfo *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A08859 & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_4A08859 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v2);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  LastUsedDeckNumberManager_c *v10; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v12; // x21
  Il2CppObject *v13; // x0

  if ( (byte_4A0885D & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v3);
    sub_1B686D4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v4);
    sub_1B686D4(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v5);
    sub_1B686D4(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v6);
    byte_4A0885D = 1;
  }
  v7 = sub_1B68920(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = questId;
  v10 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v10 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v10->static_fields->lastUsedInfoList;
  v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    0LL);
  if ( !lastUsedInfoList )
LABEL_10:
    sub_1B68930(v8, v9);
  v13 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v13 )
    LODWORD(v13) = HIDWORD(v13[1].klass);
  return (int)v13;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A08858 & 1) == 0 )
  {
    sub_1B686D4(&AndroidUtil_TypeInfo, v1);
    sub_1B686D4(&DatFileName_TypeInfo, v2);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v3);
    byte_4A08858 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_61430728(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0

  if ( (byte_4A0885A & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_4A0885A = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  LastUsedDeckNumberManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  LastUsedDeckNumberManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  LastUsedDeckNumberManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  LastUsedDeckNumberManager_c *v18; // x0
  int v19; // w21
  char v20; // w20
  LastUsedDeckNumberManager_c *v21; // x0
  int v22; // w20
  int v23; // w22
  int v24; // w23
  __int64 v25; // x24
  __int64 v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  LastUsedDeckNumberManager_c *v31; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  LastUsedDeckNumberManager_c *v41; // x0

  if ( (byte_4A0885F & 1) == 0 )
  {
    sub_1B686D4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B686D4(&System_IDisposable_TypeInfo, v2);
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_1B686D4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v5);
    sub_1B686D4(&ManagerConfig_TypeInfo, v6);
    byte_4A0885F = 1;
  }
  v7 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v7 = LastUsedDeckNumberManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    v10 = LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v10);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v12 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v12);
      v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v14 = (System_IO_BinaryReader_o *)sub_1B68920(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v14, v13, 0LL);
      if ( !v14 )
        sub_1B68930(v15, v16);
      v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                                 v14,
                                 v14->klass->vtable._23_ReadChars.methodPtr);
      v18 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v18 = LastUsedDeckNumberManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
      {
        v19 = 5;
      }
      else
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                v14,
                v14->klass->vtable._10_ReadByte.methodPtr);
        v21 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v21 = LastUsedDeckNumberManager_TypeInfo;
        }
        v21->static_fields->isContinueDevice = v20 & 1;
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v22 >= 1 )
        {
          do
          {
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                    v14,
                    v14->klass->vtable._16_ReadUInt32.methodPtr);
            v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                    v14,
                    v14->klass->vtable._16_ReadUInt32.methodPtr);
            v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._17_ReadInt64.method)(
                    v14,
                    v14->klass->vtable._18_ReadUInt64.methodPtr);
            v26 = sub_1B68920(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v26, 0LL);
            if ( !v26 )
              sub_1B68930(v27, v28);
            *(_DWORD *)(v26 + 16) = v23;
            *(_DWORD *)(v26 + 20) = v24;
            *(_QWORD *)(v26 + 24) = v25;
            v31 = LastUsedDeckNumberManager_TypeInfo;
            if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
              v31 = LastUsedDeckNumberManager_TypeInfo;
            }
            lastUsedInfoList = (System_Collections_Generic_List_object__o *)v31->static_fields->lastUsedInfoList;
            if ( !lastUsedInfoList )
              sub_1B68930(0LL, v28);
            items = lastUsedInfoList->fields._items;
            v34 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
            ++lastUsedInfoList->fields._version;
            if ( !items )
              sub_1B68930(lastUsedInfoList, v28);
            size = lastUsedInfoList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                lastUsedInfoList,
                (Il2CppObject *)v26,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              lastUsedInfoList->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v26;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v36 + 4), v26, v29, v30);
            }
            --v22;
          }
          while ( v22 );
        }
        v19 = 8;
      }
      klass = v14->klass;
      v38 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          p_offset += 4;
          if ( !v38 )
            goto LABEL_36;
        }
        v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v40 = sub_1BBA6B4(v14, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v14, *(_QWORD *)(v40 + 8));
      if ( (v19 | 8) == 8 )
        return 1;
    }
    else
    {
      v41 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v41);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_Collections_Generic_List_object__o *v19; // x0
  const MethodInfo *v20; // x1
  int64_t Time; // x0
  LastUsedDeckNumberManager_c *v22; // x8
  void *v23; // x21
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x22
  System_Predicate_object__o *v25; // x23
  Il2CppObject *v26; // x0
  LastUsedDeckNumberManager_c *v27; // x0
  __int64 v28; // x8
  int32_t v29; // w22
  BalanceConfig_c *v30; // x0
  LastUsedDeckNumberManager_c *v31; // x8
  LastUsedDeckNumberManager___c_c *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x22
  System_Func_T1__T2__TResult__o *_9__9_1; // x23
  Il2CppObject *v35; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t items; // w22
  __int64 v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  int v43; // w8
  LastUsedDeckNumberManager_c *v44; // x0
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  __int64 v48; // x8

  if ( (byte_4A0885C & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNumber);
    sub_1B686D4(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v5);
    sub_1B686D4(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v6);
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v7);
    sub_1B686D4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v11);
    sub_1B686D4(&NetworkManager_TypeInfo, v12);
    sub_1B686D4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v13);
    sub_1B686D4(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v14);
    sub_1B686D4(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v15);
    sub_1B686D4(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v16);
    sub_1B686D4(&LastUsedDeckNumberManager___c_TypeInfo, v17);
    byte_4A0885C = 1;
  }
  v18 = sub_1B68920(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_40;
  *(_DWORD *)(v18 + 16) = questId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v22 = LastUsedDeckNumberManager_TypeInfo;
  v23 = (void *)Time;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v22 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v22->static_fields->lastUsedInfoList;
  v25 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v18,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    0LL);
  if ( !lastUsedInfoList )
    goto LABEL_40;
  v26 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v26 )
  {
    v19 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v19 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    }
    v28 = *(_QWORD *)(*(_QWORD *)&v19[4].fields._size + 16LL);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 24);
      v30 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
      }
      if ( v29 >= v30->static_fields->MemoryDeckLimitByQuest )
      {
        v31 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v31 = LastUsedDeckNumberManager_TypeInfo;
        }
        v32 = LastUsedDeckNumberManager___c_TypeInfo;
        v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31->static_fields->lastUsedInfoList;
        if ( !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v32 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        _9__9_1 = (System_Func_T1__T2__TResult__o *)v32->static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32);
            v32 = LastUsedDeckNumberManager___c_TypeInfo;
          }
          v35 = (Il2CppObject *)v32->static_fields->__9;
          _9__9_1 = (System_Func_T1__T2__TResult__o *)sub_1B68920(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_object__object__object____ctor(
            _9__9_1,
            v35,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            0LL);
          static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          static_fields->__9__9_1 = (struct System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)_9__9_1;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v37, v38);
        }
        v19 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Aggregate_object_(
                                                             v33,
                                                             (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                                             (const MethodInfo_2E53AB4 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !v19 )
          goto LABEL_40;
        items = (int32_t)v19->fields._items;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        LastUsedDeckNumberManager__DeleteData(items, v20);
      }
      v40 = sub_1B68920(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      if ( v40 )
      {
        v43 = *(_DWORD *)(v18 + 16);
        *(_QWORD *)(v40 + 24) = v23;
        *(_DWORD *)(v40 + 16) = v43;
        *(_DWORD *)(v40 + 20) = deckNumber;
        v44 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v44 = LastUsedDeckNumberManager_TypeInfo;
        }
        v19 = (System_Collections_Generic_List_object__o *)v44->static_fields->lastUsedInfoList;
        if ( v19 )
        {
          v45 = v19->fields._items;
          v46 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
          ++v19->fields._version;
          if ( v45 )
          {
            size = v19->fields._size;
            if ( (unsigned int)size >= v45->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v40,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = (__int64)v45 + 8 * size;
              v19->fields._size = size + 1;
              *(_QWORD *)(v48 + 32) = v40;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 32), v40, v41, v42);
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    sub_1B68930(v19, v20);
  }
  HIDWORD(v26[1].klass) = deckNumber;
  v26[1].monitor = v23;
  v27 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_38:
    v27 = LastUsedDeckNumberManager_TypeInfo;
  }
  v27->static_fields->isModfiy = 1;
}


bool __fastcall LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  LastUsedDeckNumberManager_c *v7; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  LastUsedDeckNumberManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x1
  LastUsedDeckNumberManager_c *v16; // x0
  struct LastUsedDeckNumberManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v20; // x1
  int32_t i; // w21
  LastUsedDeckNumberManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0

  if ( (byte_4A08860 & 1) == 0 )
  {
    sub_1B686D4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B686D4(&System_IDisposable_TypeInfo, v2);
    sub_1B686D4(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__, v5);
    sub_1B686D4(&ManagerConfig_TypeInfo, v6);
    byte_4A08860 = 1;
  }
  v7 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v7 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1B68920(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61657632(v14, v13, 0LL);
  v16 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v16 = LastUsedDeckNumberManager_TypeInfo;
  }
  v17 = v16->static_fields;
  lastUsedInfoList = v17->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_1B68930(v16, v15);
  if ( !v14 )
    sub_1B68930(v16, v15);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v17->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v22 = LastUsedDeckNumberManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->lastUsedInfoList;
      if ( !v23 )
        sub_1B68930(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1B68930(0LL, v25);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v26[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v14->klass->vtable._19_Write.method)(
        v14,
        v26[1].monitor,
        v14->klass->vtable._20_Write.methodPtr);
    }
  }
  klass = v14->klass;
  v28 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v30 = sub_1BBA6B4(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  return 1;
}


void __fastcall LastUsedDeckNumberManager_LastUsedInfo___ctor(
        LastUsedDeckNumberManager_LastUsedInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A08862 & 1) == 0 )
  {
    sub_1B686D4(&LastUsedDeckNumberManager___c_TypeInfo, v1);
    byte_4A08862 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  LastUsedDeckNumberManager___c_TypeInfo->static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall LastUsedDeckNumberManager___c___ctor(LastUsedDeckNumberManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


LastUsedDeckNumberManager_LastUsedInfo_o *__fastcall LastUsedDeckNumberManager___c___SetDeckNumber_b__9_1(
        LastUsedDeckNumberManager___c_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        LastUsedDeckNumberManager_LastUsedInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B68930(this, x);
  if ( x->fields.time >= y->fields.time )
    return y;
  else
    return x;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass10_0___GetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass11_0___DeleteData_b__0(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass9_0___SetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.questId == this->fields.questId;
}