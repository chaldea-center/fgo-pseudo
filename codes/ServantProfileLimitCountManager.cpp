void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB5972 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_1C13D24(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6798/*"Fgo_20160620_1"*/, v10);
    byte_4BB5972 = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6798/*"Fgo_20160620_1"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6798/*"Fgo_20160620_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->limitCountList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
}


void __fastcall ServantProfileLimitCountManager___ctor(
        ServantProfileLimitCountManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantProfileLimitCountManager_c *v4; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4BB596B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v3);
    byte_4BB596B = 1;
  }
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v4->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1C13F80(v4, v1);
  }
  size = limitCountList->fields._size;
  v7 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0LL);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v4; // x0

  if ( (byte_4BB5969 & 1) == 0 )
  {
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_4BB5969 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v4);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  ServantProfileLimitCountManager_c *v10; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v12; // x21
  Il2CppObject *v13; // x0

  if ( (byte_4BB596D & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      method);
    sub_1C13D24(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v3);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v4);
    sub_1C13D24(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v5);
    sub_1C13D24(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v6);
    byte_4BB596D = 1;
  }
  v7 = sub_1C13F70(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = servantId;
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v10->static_fields->limitCountList;
  v12 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
LABEL_10:
    sub_1C13F80(v8, v9);
  v13 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v13 )
    LODWORD(v13) = HIDWORD(v13[1].klass);
  return (int)v13;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BB5968 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, v1);
    sub_1C13D24(&DatFileName_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v3);
    byte_4BB5968 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_62979204(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0

  if ( (byte_4BB596A & 1) == 0 )
  {
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_4BB596A = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileLimitCountManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  ServantProfileLimitCountManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v12; // x0
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  ServantProfileLimitCountManager_c *v18; // x0
  int v19; // w22
  char v20; // w21
  ServantProfileLimitCountManager_c *v21; // x0
  int v22; // w21
  int v23; // w23
  int v24; // w24
  int64_t v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  ServantProfileLimitCountManager_c *v34; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  System_IO_Stream_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  ServantProfileLimitCountManager_c *v48; // x0

  if ( (byte_4BB596E & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_1C13D24(&ManagerConfig_TypeInfo, v4);
    sub_1C13D24(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v5);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_4BB596E = 1;
  }
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v48 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v48);
    return 0;
  }
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v14 = (System_IO_BinaryReader_o *)sub_1C13F70(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_1C13F80(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v18 = ServantProfileLimitCountManager_TypeInfo;
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
    v21 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v21 = ServantProfileLimitCountManager_TypeInfo;
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
        v25 = sub_1C13F70(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1C13F80(v26, v27);
        *(_DWORD *)(v25 + 16) = v23;
        *(_DWORD *)(v25 + 20) = v24;
        v34 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v34 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v34->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1C13F80(0LL, v27);
        items = limitCountList->fields._items;
        v37 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1C13F80(limitCountList, v27);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v25,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v25;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v39 + 4), v25, v28, v29, v30, v31, v32, v33);
        }
        --v22;
      }
      while ( v22 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._6_Close.method)(
      v14,
      v14->klass->vtable._7_Dispose.methodPtr);
    v19 = 8;
  }
  klass = v14->klass;
  v41 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_36;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v43 = sub_1C65D04(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v14, *(_QWORD *)(v43 + 8));
  if ( (v19 | 8) == 8 )
  {
    v19 = 9;
    if ( !v13 )
      return v19 == 9;
  }
  else if ( !v13 )
  {
    return v19 == 9;
  }
  v44 = v13->klass;
  v45 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_46;
    }
    v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
  }
  else
  {
LABEL_46:
    v47 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v47)(v13, *(_QWORD *)(v47 + 8));
  return v19 == 9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_Collections_Generic_List_object__o *v12; // x0
  __int64 v13; // x1
  ServantProfileLimitCountManager_c *v14; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v16; // x22
  Il2CppObject *v17; // x0
  ServantProfileLimitCountManager_c *v18; // x0
  int64_t v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ServantProfileLimitCountManager_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8

  if ( (byte_4BB596C & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v5);
    sub_1C13D24(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v6);
    sub_1C13D24(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v7);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v8);
    sub_1C13D24(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v9);
    sub_1C13D24(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v10);
    byte_4BB596C = 1;
  }
  v11 = sub_1C13F70(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_DWORD *)(v11 + 16) = servantId;
  v14 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v14 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v14->static_fields->limitCountList;
  v16 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
    goto LABEL_22;
  v17 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v17 )
  {
    v19 = sub_1C13F70(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v19 + 20) = limitCount;
      v26 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v26 = ServantProfileLimitCountManager_TypeInfo;
      }
      v12 = (System_Collections_Generic_List_object__o *)v26->static_fields->limitCountList;
      if ( v12 )
      {
        items = v12->fields._items;
        v28 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v12->fields._version;
        if ( items )
        {
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v19,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v19;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), v19, v20, v21, v22, v23, v24, v25);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1C13F80(v12, v13);
  }
  if ( SHIDWORD(v17[1].klass) >= limitCount )
    return;
  HIDWORD(v17[1].klass) = limitCount;
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v18 = ServantProfileLimitCountManager_TypeInfo;
  }
  v18->static_fields->isModfiy = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
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
  __int64 v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  __int64 v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x22
  System_Collections_Generic_List_object__o *v20; // x21
  System_Predicate_object__o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w20
  const MethodInfo *v24; // x0

  if ( (byte_4BB5971 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantProfileMaster___, *(_QWORD *)&limitCount);
    sub_1C13D24(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___,
      v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77426240, v7);
    sub_1C13D24(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_1C13D24(&System_Predicate_ServantProfileEntity__TypeInfo, v9);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__, v12);
    sub_1C13D24(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v13);
    byte_4BB5971 = 1;
  }
  v14 = sub_1C13F70(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_DWORD *)(v14 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance
    || (v17 = Instance,
        v18 = sub_1C13E58(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___
                                                  + 40)
                                                + 1].methodPtr),
        v19 = (System_Collections_Generic_IEnumerable_T__o *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v18 + 8))(
                                                               v17,
                                                               v18),
        v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_56806080(
          v20,
          v19,
          (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77426240),
        v21 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v14,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0LL),
        !v20) )
  {
LABEL_12:
    sub_1C13F80(Instance, v16);
  }
  if ( System_Collections_Generic_List_object___Find(
         v20,
         (System_Predicate_T__o *)v21,
         (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v23 = *(_DWORD *)(v14 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__SetLimitCount(v23, limitCount, v22);
    ServantProfileLimitCountManager__WriteData(v24);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x19
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Collections_Generic_List_object__o *v21; // x19
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  int32_t v23; // w21
  __int64 v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v31; // x22
  System_Predicate_object__o *v32; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  __int64 v34; // x23
  __int64 v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  int32_t v37; // w22
  const MethodInfo *v38; // x2
  int32_t v39; // w23
  ServantProfileLimitCountManager_c *v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4BB5970 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, v1);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v2);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantProfileMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__getEntityList__, v5);
    sub_1C13D24(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___,
      v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77426240, v8);
    sub_1C13D24(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C13D24(&System_Predicate_ServantProfileEntity__TypeInfo, v11);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C13D24(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v14);
    sub_1C13D24(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v15);
    byte_4BB5970 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_24;
  v18 = Instance;
  v19 = sub_1C13E58(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___
                                            + 40)
                                          + 1].methodPtr);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v19 + 8))(
                                                         v18,
                                                         v19);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56806080(
    v21,
    v20,
    (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77426240);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor;
  if ( !monitor )
    goto LABEL_24;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor,
         (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = sub_1C13F70(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   monitor,
                   v23,
                   (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v24 )
        break;
      *(_QWORD *)(v24 + 16) = Instance;
      v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v24 + 16);
      sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)Instance, v25, v26, v27, v28, v29, v30);
      v32 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_object____ctor(
        v32,
        (Il2CppObject *)v24,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0LL);
      if ( !v21 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v21,
                   (System_Predicate_T__o *)v32,
                   (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v33 = *v31;
        if ( !*v31 )
          break;
        v35 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
        v34 = *(_QWORD *)&v33[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = v35;
        *(_QWORD *)&v41.fields.fakeValue = v34;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v41, 0LL);
        v36 = *v31;
        if ( !*v31 )
          break;
        v37 = (int)Instance;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v36[6], 0LL);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        ServantProfileLimitCountManager__SetLimitCount(v37, v39, v38);
      }
      if ( ++v23 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      monitor,
                      (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_24:
    sub_1C13F80(Instance, v17);
  }
LABEL_21:
  v40 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v40);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileLimitCountManager_c *v7; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  ServantProfileLimitCountManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryWriter_o *v14; // x20
  __int64 v15; // x1
  ServantProfileLimitCountManager_c *v16; // x0
  struct ServantProfileLimitCountManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v20; // x1
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_IO_Stream_c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4BB596F & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_4BB596F = 1;
  }
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
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
  v11 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1C13F70(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63206436(v14, v13, 0LL);
  v16 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v16 = ServantProfileLimitCountManager_TypeInfo;
  }
  v17 = v16->static_fields;
  limitCountList = v17->limitCountList;
  if ( !limitCountList )
    sub_1C13F80(v16, v15);
  if ( !v14 )
    sub_1C13F80(v16, v15);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v17->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v22 = ServantProfileLimitCountManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->limitCountList;
      if ( !v23 )
        sub_1C13F80(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1C13F80(0LL, v25);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v26[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v14->klass->vtable._5_Close.method)(
    v14,
    v14->klass->vtable._6_Dispose.methodPtr);
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
    v30 = sub_1C65D04(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  if ( v13 )
  {
    v31 = v13->klass;
    v32 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_36;
      }
      v34 = (__int64)(&v31->vtable._0_Equals.method + 2 * *v33);
    }
    else
    {
LABEL_36:
      v34 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v34)(v13, *(_QWORD *)(v34 + 8));
  }
  return 1;
}


void __fastcall ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass10_0___GetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass13_0___UpdateProfileServantLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  ServantProfileLimitCountManager___c__DisplayClass13_0_o *v4; // x20
  struct UserServantEntity_o *ent; // x8
  int32_t svtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4BB5973 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1C13D24(
                                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                        x);
    byte_4BB5973 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_1C13F80(this, x);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass14_0___SetLimitCountExistProfile_b__0(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass9_0___SetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}