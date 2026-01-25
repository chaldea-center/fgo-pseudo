void LastUsedDeckNumberManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEE229 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C7BAE8(&StringLiteral_6688/*"Fgo_20210906"*/);
    byte_4CEE229 = 1;
  }
  LastUsedDeckNumberManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6688/*"Fgo_20210906"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)LastUsedDeckNumberManager_TypeInfo->static_fields,
    StringLiteral_6688/*"Fgo_20210906"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  static_fields->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->lastUsedInfoList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CEE223 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    byte_4CEE223 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = v2->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_14;
  if ( lastUsedInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = LastUsedDeckNumberManager_TypeInfo;
    lastUsedInfoList = LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList;
    if ( !lastUsedInfoList )
LABEL_14:
      sub_1C7BD40(v2, v1);
  }
  size = lastUsedInfoList->fields._size;
  v5 = lastUsedInfoList->fields._version + 1;
  lastUsedInfoList->fields._size = 0;
  lastUsedInfoList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)lastUsedInfoList->fields._items, 0, size, 0);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *v4; // x0
  __int64 v5; // x1
  LastUsedDeckNumberManager_c *v6; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v8; // x21
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x19
  LastUsedDeckNumberManager_c *v11; // x0

  if ( (byte_4CEE226 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
    sub_1C7BAE8(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C7BAE8(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__);
    sub_1C7BAE8(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
    byte_4CEE226 = 1;
  }
  v3 = sub_1C7BD34(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 16) = questId;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v6 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v6->static_fields->lastUsedInfoList;
  v8 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    0);
  if ( !lastUsedInfoList )
    goto LABEL_13;
  v9 = System_Collections_Generic_List_object___Find(
         lastUsedInfoList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v9 )
    return;
  v10 = v9;
  v11 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v11 = LastUsedDeckNumberManager_TypeInfo;
  }
  v4 = (System_Collections_Generic_List_object__o *)v11->static_fields->lastUsedInfoList;
  if ( !v4 )
LABEL_13:
    sub_1C7BD40(v4, v5);
  System_Collections_Generic_List_object___Remove(
    v4,
    v10,
    (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  const MethodInfo *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4CEE221 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    byte_4CEE221 = 1;
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
  __int64 v5; // x1
  LastUsedDeckNumberManager_c *v6; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v8; // x21
  Il2CppObject *v9; // x0

  if ( (byte_4CEE225 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_1C7BAE8(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C7BAE8(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__);
    sub_1C7BAE8(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
    byte_4CEE225 = 1;
  }
  v3 = sub_1C7BD34(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = questId;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v6 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v6->static_fields->lastUsedInfoList;
  v8 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    0);
  if ( !lastUsedInfoList )
LABEL_10:
    sub_1C7BD40(v4, v5);
  v9 = System_Collections_Generic_List_object___Find(
         lastUsedInfoList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v9 )
    LODWORD(v9) = HIDWORD(v9[1].klass);
  return (int)v9;
}


System_String_o *LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CEE220 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&DatFileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEE220 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0);
  return System_String__Concat_64215176(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


void LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0

  if ( (byte_4CEE222 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    byte_4CEE222 = 1;
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
  __int64 v10; // x1
  System_String_o *v11; // x20
  LastUsedDeckNumberManager_c *v12; // x0
  int v13; // w21
  char v14; // w20
  LastUsedDeckNumberManager_c *v15; // x0
  int v16; // w20
  int v17; // w22
  int v18; // w23
  __int64 v19; // x24
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  LastUsedDeckNumberManager_c *v29; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  LastUsedDeckNumberManager_c *v39; // x0

  if ( (byte_4CEE227 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryReader_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEE227 = 1;
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
      v8 = (System_IO_BinaryReader_o *)sub_1C7BD34(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0);
      if ( !v8 )
        sub_1C7BD40(v9, v10);
      v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                                 v8,
                                 v8->klass->vtable._22_ReadString.method);
      v12 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v12 = LastUsedDeckNumberManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
      {
        v13 = 5;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
                v8,
                v8->klass->vtable._9_ReadBoolean.method);
        v15 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v15 = LastUsedDeckNumberManager_TypeInfo;
        }
        v15->static_fields->isContinueDevice = v14 & 1;
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v16 >= 1 )
        {
          do
          {
            v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._17_ReadInt64.methodPtr)(
                    v8,
                    v8->klass->vtable._17_ReadInt64.method);
            v20 = sub_1C7BD34(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v20, 0);
            if ( !v20 )
              sub_1C7BD40(v21, v22);
            *(_DWORD *)(v20 + 16) = v17;
            *(_DWORD *)(v20 + 20) = v18;
            *(_QWORD *)(v20 + 24) = v19;
            v29 = LastUsedDeckNumberManager_TypeInfo;
            if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
              v29 = LastUsedDeckNumberManager_TypeInfo;
            }
            lastUsedInfoList = (System_Collections_Generic_List_object__o *)v29->static_fields->lastUsedInfoList;
            if ( !lastUsedInfoList )
              sub_1C7BD40(0, v22);
            items = lastUsedInfoList->fields._items;
            v32 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
            ++lastUsedInfoList->fields._version;
            if ( !items )
              sub_1C7BD40(lastUsedInfoList, v22);
            size = lastUsedInfoList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                lastUsedInfoList,
                (Il2CppObject *)v20,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              lastUsedInfoList->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v20;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 4), v20, v23, v24, v25, v26, v27, v28);
            }
            --v16;
          }
          while ( v16 );
        }
        v13 = 8;
      }
      klass = v8->klass;
      v36 = *(unsigned __int16 *)&v8->klass->_2.rank;
      if ( *(_WORD *)&v8->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_36;
        }
        v38 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_36:
        v38 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v8, *(_QWORD *)(v38 + 8));
      if ( (v13 | 8) == 8 )
        return 1;
    }
    else
    {
      v39 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v39);
    }
    return 0;
  }
  return 1;
}


void LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  const MethodInfo *v7; // x1
  int64_t Time; // x0
  LastUsedDeckNumberManager_c *v9; // x8
  void *v10; // x21
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x22
  System_Predicate_object__o *v12; // x23
  Il2CppObject *v13; // x0
  LastUsedDeckNumberManager_c *v14; // x0
  __int64 v15; // x8
  int32_t v16; // w22
  BalanceConfig_c *v17; // x0
  LastUsedDeckNumberManager_c *v18; // x8
  LastUsedDeckNumberManager___c_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Func_T1__T2__TResult__o *_9__9_1; // x23
  Il2CppObject *v22; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t items; // w22
  __int64 v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int v38; // w8
  LastUsedDeckNumberManager_c *v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x8

  if ( (byte_4CEE224 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
    sub_1C7BAE8(&System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_1C7BAE8(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__);
    sub_1C7BAE8(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__);
    sub_1C7BAE8(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
    sub_1C7BAE8(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_4CEE224 = 1;
  }
  v5 = sub_1C7BD34(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_DWORD *)(v5 + 16) = questId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v9 = LastUsedDeckNumberManager_TypeInfo;
  v10 = (void *)Time;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v9 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v9->static_fields->lastUsedInfoList;
  v12 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    0);
  if ( !lastUsedInfoList )
    goto LABEL_40;
  v13 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v13 )
  {
    v6 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v6 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    }
    v15 = *(_QWORD *)(*(_QWORD *)&v6[4].fields._size + 16LL);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 24);
      v17 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      if ( v16 >= v17->static_fields->MemoryDeckLimitByQuest )
      {
        v18 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v18 = LastUsedDeckNumberManager_TypeInfo;
        }
        v19 = LastUsedDeckNumberManager___c_TypeInfo;
        v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18->static_fields->lastUsedInfoList;
        if ( !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v19 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        _9__9_1 = (System_Func_T1__T2__TResult__o *)v19->static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = LastUsedDeckNumberManager___c_TypeInfo;
          }
          v22 = (Il2CppObject *)v19->static_fields->__9;
          _9__9_1 = (System_Func_T1__T2__TResult__o *)sub_1C7BD34(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_object__object__object____ctor(
            _9__9_1,
            v22,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            0);
          static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          static_fields->__9__9_1 = (struct System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)_9__9_1;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__9_1,
            (int32_t)_9__9_1,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        v6 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Aggregate_object_(
                                                            v20,
                                                            (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                                            (const MethodInfo_3177D2C *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !v6 )
          goto LABEL_40;
        items = (int32_t)v6->fields._items;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        LastUsedDeckNumberManager__DeleteData(items, v7);
      }
      v31 = sub_1C7BD34(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v31, 0);
      if ( v31 )
      {
        v38 = *(_DWORD *)(v5 + 16);
        *(_QWORD *)(v31 + 24) = v10;
        *(_DWORD *)(v31 + 16) = v38;
        *(_DWORD *)(v31 + 20) = deckNumber;
        v39 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v39 = LastUsedDeckNumberManager_TypeInfo;
        }
        v6 = (System_Collections_Generic_List_object__o *)v39->static_fields->lastUsedInfoList;
        if ( v6 )
        {
          v40 = v6->fields._items;
          v41 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
          ++v6->fields._version;
          if ( v40 )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(v40->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v31,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = (__int64)v40 + 8 * size;
              v6->fields._size = size + 1;
              *(_QWORD *)(v43 + 32) = v31;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 32), v31, v32, v33, v34, v35, v36, v37);
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    sub_1C7BD40(v6, v7);
  }
  HIDWORD(v13[1].klass) = deckNumber;
  v13[1].monitor = v10;
  v14 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_38:
    v14 = LastUsedDeckNumberManager_TypeInfo;
  }
  v14->static_fields->isModfiy = 1;
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
  __int64 v9; // x1
  LastUsedDeckNumberManager_c *v10; // x0
  struct LastUsedDeckNumberManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v14; // x1
  int32_t i; // w21
  LastUsedDeckNumberManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4CEE228 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryWriter_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEE228 = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C7BD34(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65086240(v8, v7, 0);
  v10 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v10 = LastUsedDeckNumberManager_TypeInfo;
  }
  v11 = v10->static_fields;
  lastUsedInfoList = v11->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_1C7BD40(v10, v9);
  if ( !v8 )
    sub_1C7BD40(v10, v9);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION,
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
      v16 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v16 = LastUsedDeckNumberManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->lastUsedInfoList;
      if ( !v17 )
        sub_1C7BD40(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C7BD40(0, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v8->klass->vtable._19_Write.methodPtr)(
        v8,
        v20[1].monitor,
        v8->klass->vtable._19_Write.method);
    }
  }
  klass = v8->klass;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v24 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE22A & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_4CEE22A = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LastUsedDeckNumberManager___c_TypeInfo->static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, x);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
  return x->fields.questId == this->fields.questId;
}