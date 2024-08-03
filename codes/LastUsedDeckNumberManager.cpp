void __fastcall LastUsedDeckNumberManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FC015 & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6619/*"Fgo_20210906"*/, v6);
    byte_49FC015 = 1;
  }
  LastUsedDeckNumberManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6619/*"Fgo_20210906"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)LastUsedDeckNumberManager_TypeInfo->static_fields,
    StringLiteral_6619/*"Fgo_20210906"*/,
    v2,
    v3);
  *(_WORD *)&LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  static_fields->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->lastUsedInfoList, (int32_t)v9, v11, v12);
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

  if ( (byte_49FC00F & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v3);
    byte_49FC00F = 1;
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
      sub_1B64324(v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  LastUsedDeckNumberManager_c *v13; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v15; // x21
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x19
  LastUsedDeckNumberManager_c *v18; // x0

  if ( (byte_49FC012 & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v5);
    sub_1B640C8(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v6);
    sub_1B640C8(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v7);
    sub_1B640C8(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v8);
    byte_49FC012 = 1;
  }
  v9 = sub_1B64314(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 16) = questId;
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v13 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v13->static_fields->lastUsedInfoList;
  v15 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                        v11,
                                        v12);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    0LL);
  if ( !lastUsedInfoList )
    goto LABEL_13;
  v16 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v16 )
    return;
  v17 = v16;
  v18 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v18 = LastUsedDeckNumberManager_TypeInfo;
  }
  v10 = (System_Collections_Generic_List_object__o *)v18->static_fields->lastUsedInfoList;
  if ( !v10 )
LABEL_13:
    sub_1B64324(v10);
  System_Collections_Generic_List_object___Remove(
    v10,
    v17,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  const MethodInfo *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FC00D & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_49FC00D = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  LastUsedDeckNumberManager_c *v12; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v14; // x21
  Il2CppObject *v15; // x0

  if ( (byte_49FC011 & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v4);
    sub_1B640C8(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v5);
    sub_1B640C8(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v6);
    sub_1B640C8(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_49FC011 = 1;
  }
  v8 = sub_1B64314(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_DWORD *)(v8 + 16) = questId;
  v12 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v12 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v12->static_fields->lastUsedInfoList;
  v14 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                        v10,
                                        v11);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    0LL);
  if ( !lastUsedInfoList )
LABEL_10:
    sub_1B64324(v9);
  v15 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v15 )
    LODWORD(v15) = HIDWORD(v15[1].klass);
  return (int)v15;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FC00C & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FC00C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0

  if ( (byte_49FC00E & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_49FC00E = 1;
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  System_String_o *v18; // x20
  LastUsedDeckNumberManager_c *v19; // x0
  int v20; // w21
  char v21; // w20
  LastUsedDeckNumberManager_c *v22; // x0
  int v23; // w20
  int v24; // w22
  int v25; // w23
  __int64 v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  LastUsedDeckNumberManager_c *v33; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  LastUsedDeckNumberManager_c *v43; // x0

  if ( (byte_49FC013 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_1B640C8(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    byte_49FC013 = 1;
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
      v16 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v14, v15);
      System_IO_BinaryReader___ctor(v16, v13, 0LL);
      if ( !v16 )
        sub_1B64324(v17);
      v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                 v16,
                                 v16->klass->vtable._23_ReadChars.methodPtr);
      v19 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v19 = LastUsedDeckNumberManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
      {
        v20 = 5;
      }
      else
      {
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
                v16,
                v16->klass->vtable._10_ReadByte.methodPtr);
        v22 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v22 = LastUsedDeckNumberManager_TypeInfo;
        }
        v22->static_fields->isContinueDevice = v21 & 1;
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v23 >= 1 )
        {
          do
          {
            v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                    v16,
                    v16->klass->vtable._16_ReadUInt32.methodPtr);
            v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                    v16,
                    v16->klass->vtable._16_ReadUInt32.methodPtr);
            v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._17_ReadInt64.method)(
                    v16,
                    v16->klass->vtable._18_ReadUInt64.methodPtr);
            v29 = sub_1B64314(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v27, v28);
            System_Object___ctor((Il2CppObject *)v29, 0LL);
            if ( !v29 )
              sub_1B64324(v30);
            *(_DWORD *)(v29 + 16) = v24;
            *(_DWORD *)(v29 + 20) = v25;
            *(_QWORD *)(v29 + 24) = v26;
            v33 = LastUsedDeckNumberManager_TypeInfo;
            if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
              v33 = LastUsedDeckNumberManager_TypeInfo;
            }
            lastUsedInfoList = (System_Collections_Generic_List_object__o *)v33->static_fields->lastUsedInfoList;
            if ( !lastUsedInfoList )
              sub_1B64324(0LL);
            items = lastUsedInfoList->fields._items;
            v36 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
            ++lastUsedInfoList->fields._version;
            if ( !items )
              sub_1B64324(lastUsedInfoList);
            size = lastUsedInfoList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                lastUsedInfoList,
                (Il2CppObject *)v29,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              lastUsedInfoList->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v29;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), v29, v31, v32);
            }
            --v23;
          }
          while ( v23 );
        }
        v20 = 8;
      }
      klass = v16->klass;
      v40 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_36;
        }
        v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v42 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v16, *(_QWORD *)(v42 + 8));
      if ( (v20 | 8) == 8 )
        return 1;
    }
    else
    {
      v43 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v43);
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
  int64_t Time; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  LastUsedDeckNumberManager_c *v23; // x8
  void *v24; // x21
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x22
  System_Predicate_object__o *v26; // x23
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  LastUsedDeckNumberManager_c *v30; // x0
  __int64 v31; // x8
  int32_t v32; // w22
  BalanceConfig_c *v33; // x0
  LastUsedDeckNumberManager_c *v34; // x8
  LastUsedDeckNumberManager___c_c *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_T1__T2__TResult__o *_9__9_1; // x23
  Il2CppObject *v38; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x1
  int32_t items; // w22
  __int64 v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  int v47; // w8
  LastUsedDeckNumberManager_c *v48; // x0
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  __int64 v52; // x8

  if ( (byte_49FC010 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNumber);
    sub_1B640C8(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v5);
    sub_1B640C8(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v6);
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v7);
    sub_1B640C8(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v13);
    sub_1B640C8(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v14);
    sub_1B640C8(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v15);
    sub_1B640C8(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v16);
    sub_1B640C8(&LastUsedDeckNumberManager___c_TypeInfo, v17);
    byte_49FC010 = 1;
  }
  v18 = sub_1B64314(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&deckNumber, method);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_40;
  *(_DWORD *)(v18 + 16) = questId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v23 = LastUsedDeckNumberManager_TypeInfo;
  v24 = (void *)Time;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v23 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v23->static_fields->lastUsedInfoList;
  v26 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                        v21,
                                        v22);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v18,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    0LL);
  if ( !lastUsedInfoList )
    goto LABEL_40;
  v27 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v27 )
  {
    v19 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v19 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    }
    v31 = *(_QWORD *)(*(_QWORD *)&v19[4].fields._size + 16LL);
    if ( v31 )
    {
      v32 = *(_DWORD *)(v31 + 24);
      v33 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      if ( v32 >= v33->static_fields->MemoryDeckLimitByQuest )
      {
        v34 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v34 = LastUsedDeckNumberManager_TypeInfo;
        }
        v35 = LastUsedDeckNumberManager___c_TypeInfo;
        v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v34->static_fields->lastUsedInfoList;
        if ( !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v35 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        _9__9_1 = (System_Func_T1__T2__TResult__o *)v35->static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = LastUsedDeckNumberManager___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v35->static_fields->__9;
          _9__9_1 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                                        System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                        v28,
                                                        v29);
          System_Func_object__object__object____ctor(
            _9__9_1,
            v38,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            0LL);
          static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          static_fields->__9__9_1 = (struct System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)_9__9_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v40, v41);
        }
        v19 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Aggregate_object_(
                                                             v36,
                                                             (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                                             (const MethodInfo_2E43150 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !v19 )
          goto LABEL_40;
        items = (int32_t)v19->fields._items;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        LastUsedDeckNumberManager__DeleteData(items, v42);
      }
      v44 = sub_1B64314(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v28, v29);
      System_Object___ctor((Il2CppObject *)v44, 0LL);
      if ( v44 )
      {
        v47 = *(_DWORD *)(v18 + 16);
        *(_QWORD *)(v44 + 24) = v24;
        *(_DWORD *)(v44 + 16) = v47;
        *(_DWORD *)(v44 + 20) = deckNumber;
        v48 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v48 = LastUsedDeckNumberManager_TypeInfo;
        }
        v19 = (System_Collections_Generic_List_object__o *)v48->static_fields->lastUsedInfoList;
        if ( v19 )
        {
          v49 = v19->fields._items;
          v50 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
          ++v19->fields._version;
          if ( v49 )
          {
            size = v19->fields._size;
            if ( (unsigned int)size >= v49->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v44,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = (__int64)v49 + 8 * size;
              v19->fields._size = size + 1;
              *(_QWORD *)(v52 + 32) = v44;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 32), v44, v45, v46);
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    sub_1B64324(v19);
  }
  HIDWORD(v27[1].klass) = deckNumber;
  v27[1].monitor = v24;
  v30 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_38:
    v30 = LastUsedDeckNumberManager_TypeInfo;
  }
  v30->static_fields->isModfiy = 1;
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryWriter_o *v16; // x19
  LastUsedDeckNumberManager_c *v17; // x0
  struct LastUsedDeckNumberManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  int32_t i; // w21
  LastUsedDeckNumberManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_49FC014 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__, v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    byte_49FC014 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_61613552(v16, v13, 0LL);
  v17 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v17 = LastUsedDeckNumberManager_TypeInfo;
  }
  v18 = v17->static_fields;
  lastUsedInfoList = v18->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_1B64324(v17);
  if ( !v16 )
    sub_1B64324(v17);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v18->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
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
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        HIDWORD(v25[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v16->klass->vtable._19_Write.method)(
        v16,
        v25[1].monitor,
        v16->klass->vtable._20_Write.methodPtr);
    }
  }
  klass = v16->klass;
  v27 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v29 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v16, *(_QWORD *)(v29 + 8));
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC016 & 1) == 0 )
  {
    sub_1B640C8(&LastUsedDeckNumberManager___c_TypeInfo, v1);
    byte_49FC016 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(LastUsedDeckNumberManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  LastUsedDeckNumberManager___c_TypeInfo->static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.questId == this->fields.questId;
}