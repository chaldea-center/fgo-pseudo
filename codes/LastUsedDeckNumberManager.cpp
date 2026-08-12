void LastUsedDeckNumberManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59703A7 & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_2213A60(&StringLiteral_6964/*"Fgo_20210906"*/);
    byte_59703A7 = 1;
  }
  v7 = StringLiteral_6964/*"Fgo_20210906"*/;
  LastUsedDeckNumberManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6964/*"Fgo_20210906"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)LastUsedDeckNumberManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo;
  *(_WORD *)&LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  static_fields->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->lastUsedInfoList,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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

  if ( (byte_59703A1 & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    byte_59703A1 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = v2->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_14;
  if ( lastUsedInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = LastUsedDeckNumberManager_TypeInfo;
    lastUsedInfoList = LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList;
    if ( !lastUsedInfoList )
LABEL_14:
      sub_2213CDC(v2, v1);
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
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
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
  int v7; // w8
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v9; // x21
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x19
  LastUsedDeckNumberManager_c *v12; // x0

  if ( (byte_59703A4 & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
    sub_2213A60(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_2213A60(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__);
    sub_2213A60(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
    byte_59703A4 = 1;
  }
  v3 = sub_2213CCC(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  v7 = *(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = questId;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v6, v5);
    v6 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v6->static_fields->lastUsedInfoList;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    0);
  if ( !lastUsedInfoList )
    goto LABEL_13;
  v10 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v10 )
    return;
  v11 = v10;
  v12 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v5);
    v12 = LastUsedDeckNumberManager_TypeInfo;
  }
  v4 = (System_Collections_Generic_List_object__o *)v12->static_fields->lastUsedInfoList;
  if ( !v4 )
LABEL_13:
    sub_2213CDC(v4, v5);
  System_Collections_Generic_List_object___Remove(
    v4,
    v11,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  const MethodInfo *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_597039F & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    byte_597039F = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v2);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v3);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


int32_t LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  LastUsedDeckNumberManager_c *v6; // x0
  int v7; // w8
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v9; // x21
  Il2CppObject *v10; // x0

  if ( (byte_59703A3 & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_2213A60(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_2213A60(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__);
    sub_2213A60(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
    byte_59703A3 = 1;
  }
  v3 = sub_2213CCC(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  v7 = *(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = questId;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v6, v5);
    v6 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v6->static_fields->lastUsedInfoList;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    0);
  if ( !lastUsedInfoList )
LABEL_10:
    sub_2213CDC(v4, v5);
  v10 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v10 )
    LODWORD(v10) = HIDWORD(v10[1].klass);
  return (int)v10;
}


System_String_o *LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_597039E & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_597039E = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(34, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0

  if ( (byte_59703A0 & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    byte_59703A0 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v2);
}


bool LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  LastUsedDeckNumberManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  LastUsedDeckNumberManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  LastUsedDeckNumberManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  char v19; // w19
  LastUsedDeckNumberManager_c *v20; // x0
  int v21; // w19
  int v22; // w21
  int v23; // w22
  __int64 v24; // x23
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  LastUsedDeckNumberManager_c *v34; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int *p_offset; // x10
  __int64 v43; // x0
  LastUsedDeckNumberManager_c *v44; // x0
  System_IO_BinaryReader_o *v46; // [xsp+28h] [xbp-48h]

  if ( (byte_59703A5 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59703A5 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  v3 = ManagerConfig_TypeInfo;
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->isModfiy = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = LastUsedDeckNumberManager_TypeInfo;
    if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v8);
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v46 = v11;
    if ( !v11 )
      sub_2213CDC(v12, v13);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v16 = LastUsedDeckNumberManager_TypeInfo;
    if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v14);
      v16 = LastUsedDeckNumberManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0) )
    {
      v5 = 0;
    }
    else
    {
      if ( !v46 )
        sub_2213CDC(0, v17);
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._9_ReadBoolean.methodPtr)(
              v46,
              v46->klass->vtable._9_ReadBoolean.method);
      v20 = LastUsedDeckNumberManager_TypeInfo;
      if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v18);
        v20 = LastUsedDeckNumberManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._15_ReadInt32.methodPtr)(
              v46,
              v46->klass->vtable._15_ReadInt32.method);
      if ( v21 >= 1 )
      {
        do
        {
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._15_ReadInt32.methodPtr)(
                  v46,
                  v46->klass->vtable._15_ReadInt32.method);
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._15_ReadInt32.methodPtr)(
                  v46,
                  v46->klass->vtable._15_ReadInt32.method);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v46->klass->vtable._17_ReadInt64.methodPtr)(
                  v46,
                  v46->klass->vtable._17_ReadInt64.method);
          v25 = sub_2213CCC(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v25, 0);
          if ( !v25 )
            sub_2213CDC(v26, v27);
          v34 = LastUsedDeckNumberManager_TypeInfo;
          *(_DWORD *)(v25 + 16) = v22;
          *(_DWORD *)(v25 + 20) = v23;
          *(_QWORD *)(v25 + 24) = v24;
          if ( !*(&v34->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v34, v27);
            v34 = LastUsedDeckNumberManager_TypeInfo;
          }
          lastUsedInfoList = (System_Collections_Generic_List_object__o *)v34->static_fields->lastUsedInfoList;
          if ( !lastUsedInfoList
            || (items = lastUsedInfoList->fields._items,
                v37 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__,
                ++lastUsedInfoList->fields._version,
                !items) )
          {
            sub_2213CDC(lastUsedInfoList, v27);
          }
          size = lastUsedInfoList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lastUsedInfoList,
              (Il2CppObject *)v25,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            lastUsedInfoList->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v25;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), v25, v28, v29, v30, v31, v32, v33);
          }
          --v21;
        }
        while ( v21 );
      }
      v5 = 1;
    }
    if ( v46 )
    {
      klass = v46->klass;
      v41 = *(unsigned __int16 *)&v46->klass->_2.rank;
      if ( *(_WORD *)&v46->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v41;
          p_offset += 4;
          if ( !v41 )
            goto LABEL_38;
        }
        v43 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_38:
        v43 = sub_224BC3C(v46, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v46, *(_QWORD *)(v43 + 8));
    }
  }
  else
  {
    v44 = LastUsedDeckNumberManager_TypeInfo;
    if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v8);
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v44);
    return 0;
  }
  return v5;
}


void LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  const MethodInfo *v7; // x1
  NetworkManager_c *v8; // x0
  int v9; // w8
  int64_t Time; // x0
  __int64 v11; // x1
  LastUsedDeckNumberManager_c *v12; // x8
  int64_t v13; // x21
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x22
  System_Predicate_object__o *v15; // x23
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x8
  LastUsedDeckNumberManager_c *v18; // x0
  int v19; // w9
  __int64 v20; // x8
  int32_t v21; // w22
  BalanceConfig_c *v22; // x0
  LastUsedDeckNumberManager_c *v23; // x8
  LastUsedDeckNumberManager___c_c *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x8
  System_Func_T1__T2__TResult__o *_9__9_1; // x23
  Il2CppObject *v28; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t items; // w22
  __int64 v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  LastUsedDeckNumberManager_c *v44; // x0
  int v45; // w8
  int v46; // w9
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  __int64 v50; // x8

  if ( (byte_59703A2 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
    sub_2213A60(&System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_2213A60(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__);
    sub_2213A60(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__);
    sub_2213A60(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
    sub_2213A60(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_59703A2 = 1;
  }
  v5 = sub_2213CCC(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  v8 = NetworkManager_TypeInfo;
  v9 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v5 + 16) = questId;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(v8, v7);
  Time = NetworkManager__getTime(0);
  v12 = LastUsedDeckNumberManager_TypeInfo;
  v13 = Time;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v11);
    v12 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v12->static_fields->lastUsedInfoList;
  v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    0);
  if ( !lastUsedInfoList )
    goto LABEL_40;
  v16 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v16 )
  {
    v6 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v7);
      v6 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    }
    v20 = *(_QWORD *)(*(_QWORD *)&v6[4].fields._size + 16LL);
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 + 24);
      v22 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
        v22 = BalanceConfig_TypeInfo;
      }
      if ( v21 >= v22->static_fields->MemoryDeckLimitByQuest )
      {
        v23 = LastUsedDeckNumberManager_TypeInfo;
        if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v7);
          v23 = LastUsedDeckNumberManager_TypeInfo;
        }
        v24 = LastUsedDeckNumberManager___c_TypeInfo;
        v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v23->static_fields->lastUsedInfoList;
        if ( !*(&LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo, v7);
          v24 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        static_fields = v24->static_fields;
        _9__9_1 = (System_Func_T1__T2__TResult__o *)static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !*(&v24->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v24, v7);
            static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          }
          v28 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_object__object__object____ctor(
            _9__9_1,
            v28,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            0);
          v29 = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          v29->__9__9_1 = (struct System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)_9__9_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v29->__9__9_1,
            (int32_t)_9__9_1,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
        v6 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Aggregate_object_(
                                                            v25,
                                                            (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                                            (const MethodInfo_38622C4 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !v6 )
          goto LABEL_40;
        items = (int32_t)v6->fields._items;
        if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v7);
        LastUsedDeckNumberManager__DeleteData(items, v7);
      }
      v37 = sub_2213CCC(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v37, 0);
      if ( v37 )
      {
        v44 = LastUsedDeckNumberManager_TypeInfo;
        v45 = *(_DWORD *)(v5 + 16);
        *(_QWORD *)(v37 + 24) = v13;
        v46 = *(&v44->_2.cctor_finished + 1);
        *(_DWORD *)(v37 + 16) = v45;
        *(_DWORD *)(v37 + 20) = deckNumber;
        if ( !v46 )
        {
          j_il2cpp_runtime_class_init_0(v44, v7);
          v44 = LastUsedDeckNumberManager_TypeInfo;
        }
        v6 = (System_Collections_Generic_List_object__o *)v44->static_fields->lastUsedInfoList;
        if ( v6 )
        {
          v47 = v6->fields._items;
          v48 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
          ++v6->fields._version;
          if ( v47 )
          {
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(v47->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v37,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = (__int64)v47 + 8 * size;
              v6->fields._size = size + 1;
              *(_QWORD *)(v50 + 32) = v37;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), v37, v38, v39, v40, v41, v42, v43);
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    sub_2213CDC(v6, v7);
  }
  v17 = v16;
  v18 = LastUsedDeckNumberManager_TypeInfo;
  HIDWORD(v17[1].klass) = deckNumber;
  v19 = *(&v18->_2.cctor_finished + 1);
  v17[1].monitor = (void *)v13;
  if ( !v19 )
  {
    j_il2cpp_runtime_class_init_0(v18, v7);
LABEL_38:
    v18 = LastUsedDeckNumberManager_TypeInfo;
  }
  v18->static_fields->isModfiy = 1;
}


bool LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  LastUsedDeckNumberManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  LastUsedDeckNumberManager_c *v11; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w19
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t i; // w20
  LastUsedDeckNumberManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_59703A6 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59703A6 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  }
  v4 = ManagerConfig_TypeInfo;
  static_fields->isModfiy = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 0;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v9, v8, 0);
  v11 = LastUsedDeckNumberManager_TypeInfo;
  v24 = v9;
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v10);
    v11 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = v11->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_2213CDC(v11, v10);
  if ( !v9 )
    sub_2213CDC(0, v10);
  size = lastUsedInfoList->fields._size;
  v24->klass->vtable._22_Write.methodPtr();
  v24->klass->vtable._8_Write.methodPtr();
  if ( !v24 )
    sub_2213CDC(0, v14);
  v24->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v17 = LastUsedDeckNumberManager_TypeInfo;
      if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v15);
        v17 = LastUsedDeckNumberManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->lastUsedInfoList;
      if ( !v18 )
        sub_2213CDC(0, v15);
      if ( !System_Collections_Generic_List_object___get_Item(
              v18,
              i,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__) )
        sub_2213CDC(0, v19);
      v24->klass->vtable._17_Write.methodPtr();
      v24->klass->vtable._17_Write.methodPtr();
      v24->klass->vtable._19_Write.methodPtr();
    }
  }
  klass = v24->klass;
  v21 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_30;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_30:
    v23 = sub_224BC3C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v24, *(_QWORD *)(v23 + 8));
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59703A8 & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_59703A8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LastUsedDeckNumberManager___c_TypeInfo->static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.questId;
}