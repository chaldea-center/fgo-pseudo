void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDD7F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6811/*"Fgo_20191029"*/);
    byte_4BDD7F4 = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6811/*"Fgo_20191029"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6811/*"Fgo_20191029"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->limitCountList, (int64_t)v7, v9, v10, v11, v12, v13, v14);
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
  ServantProfileLimitCountManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4BDD7ED & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    byte_4BDD7ED = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1C22094(v2, v1);
  }
  size = limitCountList->fields._size;
  v5 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0LL);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v3; // x0

  if ( (byte_4BDD7EB & 1) == 0 )
  {
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    byte_4BDD7EB = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v3 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v3);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  ServantProfileLimitCountManager_c *v6; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v8; // x21
  Il2CppObject *v9; // x0

  if ( (byte_4BDD7EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_1C21E38(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__);
    sub_1C21E38(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_4BDD7EF = 1;
  }
  v3 = sub_1C22084(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = servantId;
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v6 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v6->static_fields->limitCountList;
  v8 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
LABEL_10:
    sub_1C22094(v4, v5);
  v9 = System_Collections_Generic_List_object___Find(
         limitCountList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v9 )
    LODWORD(v9) = HIDWORD(v9[1].klass);
  return (int)v9;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDD7EA & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDD7EA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0

  if ( (byte_4BDD7EC & 1) == 0 )
  {
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    byte_4BDD7EC = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  ServantProfileLimitCountManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v6; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryReader_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  ServantProfileLimitCountManager_c *v12; // x0
  int v13; // w22
  char v14; // w21
  ServantProfileLimitCountManager_c *v15; // x0
  int v16; // w21
  int v17; // w23
  int v18; // w24
  int64_t v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ServantProfileLimitCountManager_c *v28; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0
  System_IO_Stream_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  ServantProfileLimitCountManager_c *v42; // x0

  if ( (byte_4BDD7F0 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    byte_4BDD7F0 = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v42 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v42);
    return 0;
  }
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_1C22094(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v13 = 5;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v15 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v15 = ServantProfileLimitCountManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v16 >= 1 )
    {
      do
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v19 = sub_1C22084(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0LL);
        if ( !v19 )
          sub_1C22094(v20, v21);
        *(_DWORD *)(v19 + 16) = v17;
        *(_DWORD *)(v19 + 20) = v18;
        v28 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v28 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v28->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1C22094(0LL, v21);
        items = limitCountList->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1C22094(limitCountList, v21);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v19,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
        --v16;
      }
      while ( v16 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._6_Close.method)(
      v8,
      v8->klass->vtable._7_Dispose.methodPtr);
    v13 = 8;
  }
  klass = v8->klass;
  v35 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_36;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v37 = sub_1C73E18(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v8, *(_QWORD *)(v37 + 8));
  if ( (v13 | 8) == 8 )
  {
    v13 = 9;
    if ( !v7 )
      return v13 == 9;
  }
  else if ( !v7 )
  {
    return v13 == 9;
  }
  v38 = v7->klass;
  v39 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_46;
    }
    v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
  }
  else
  {
LABEL_46:
    v41 = sub_1C73E18(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v41)(v7, *(_QWORD *)(v41 + 8));
  return v13 == 9;
}


void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  ServantProfileLimitCountManager_c *v8; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v10; // x22
  Il2CppObject *v11; // x0
  ServantProfileLimitCountManager_c *v12; // x0
  int64_t v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  ServantProfileLimitCountManager_c *v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4BDD7EE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_1C21E38(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__);
    sub_1C21E38(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
    byte_4BDD7EE = 1;
  }
  v5 = sub_1C22084(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = servantId;
  v8 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v8 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v8->static_fields->limitCountList;
  v10 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
    goto LABEL_22;
  v11 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v10,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v11 )
  {
    v13 = sub_1C22084(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(v13 + 20) = limitCount;
      v20 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v20 = ServantProfileLimitCountManager_TypeInfo;
      }
      v6 = (System_Collections_Generic_List_object__o *)v20->static_fields->limitCountList;
      if ( v6 )
      {
        items = v6->fields._items;
        v22 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v6->fields._version;
        if ( items )
        {
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v13;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v13, v14, v15, v16, v17, v18, v19);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1C22094(v6, v7);
  }
  if ( SHIDWORD(v11[1].klass) >= limitCount )
    return;
  HIDWORD(v11[1].klass) = limitCount;
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  v12->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x22
  System_Collections_Generic_List_object__o *v11; // x21
  System_Predicate_object__o *v12; // x22
  const MethodInfo *v13; // x2
  int32_t v14; // w20
  const MethodInfo *v15; // x0

  if ( (byte_4BDD7F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77585616);
    sub_1C21E38(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1C21E38(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__);
    sub_1C21E38(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
    byte_4BDD7F3 = 1;
  }
  v5 = sub_1C22084(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance
    || (v8 = Instance,
        v9 = sub_1C21F6C(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___
                                                 + 40)
                                               + 1].methodPtr),
        v10 = (System_Collections_Generic_IEnumerable_T__o *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v9 + 8))(
                                                               v8,
                                                               v9),
        v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_56945064(
          v11,
          v10,
          (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77585616),
        v12 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v5,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0LL),
        !v11) )
  {
LABEL_12:
    sub_1C22094(Instance, v7);
  }
  if ( System_Collections_Generic_List_object___Find(
         v11,
         (System_Predicate_T__o *)v12,
         (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v14 = *(_DWORD *)(v5 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__SetLimitCount(v14, limitCount, v13);
    ServantProfileLimitCountManager__WriteData(v15);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *v3; // x19
  __int64 v4; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  int32_t v8; // w21
  __int64 v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x22
  System_Predicate_object__o *v17; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  __int64 v19; // x23
  __int64 v20; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v21; // x8
  int32_t v22; // w22
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  ServantProfileLimitCountManager_c *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4BDD7F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__getEntityList__);
    sub_1C21E38(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77585616);
    sub_1C21E38(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__);
    sub_1C21E38(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
    byte_4BDD7F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_24;
  v3 = Instance;
  v4 = sub_1C21F6C(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys_ServantProfileEntity___
                                           + 40)
                                         + 1].methodPtr);
  v5 = (System_Collections_Generic_IEnumerable_T__o *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v4 + 8))(
                                                        v3,
                                                        v4);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v6,
    v5,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___77585616);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor;
  if ( !monitor )
    goto LABEL_24;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor,
         (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = sub_1C22084(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0LL);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   monitor,
                   v8,
                   (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v9 )
        break;
      *(_QWORD *)(v9 + 16) = Instance;
      v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)Instance, v10, v11, v12, v13, v14, v15);
      v17 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v9,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0LL);
      if ( !v6 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v6,
                   (System_Predicate_T__o *)v17,
                   (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v18 = *v16;
        if ( !*v16 )
          break;
        v20 = *(_QWORD *)&v18[5].fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v20;
        *(_QWORD *)&v26.fields.fakeValue = v19;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v26, 0LL);
        v21 = *v16;
        if ( !*v16 )
          break;
        v22 = (int)Instance;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v21[6], 0LL);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        ServantProfileLimitCountManager__SetLimitCount(v22, v24, v23);
      }
      if ( ++v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                     monitor,
                     (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_24:
    sub_1C22094(Instance, v2);
  }
LABEL_21:
  v25 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v25);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  ServantProfileLimitCountManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryWriter_o *v8; // x20
  __int64 v9; // x1
  ServantProfileLimitCountManager_c *v10; // x0
  struct ServantProfileLimitCountManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v14; // x1
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_IO_Stream_c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4BDD7F1 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    byte_4BDD7F1 = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
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
  v5 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63353968(v8, v7, 0LL);
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  v11 = v10->static_fields;
  limitCountList = v11->limitCountList;
  if ( !limitCountList )
    sub_1C22094(v10, v9);
  if ( !v8 )
    sub_1C22094(v10, v9);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v8->klass->vtable._22_Write.method)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v8->klass->vtable._8_Write.method)(
    v8,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v16 = ServantProfileLimitCountManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->limitCountList;
      if ( !v17 )
        sub_1C22094(0LL, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C22094(0LL, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v8->klass->vtable._5_Close.method)(
    v8,
    v8->klass->vtable._6_Dispose.methodPtr);
  klass = v8->klass;
  v22 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v24 = sub_1C73E18(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  if ( v7 )
  {
    v25 = v7->klass;
    v26 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = (__int64)(&v25->vtable._0_Equals.method + 2 * *v27);
    }
    else
    {
LABEL_36:
      v28 = sub_1C73E18(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v28)(v7, *(_QWORD *)(v28 + 8));
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
    sub_1C22094(this, 0LL);
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
  if ( (byte_4BDD7F5 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD7F5 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_1C22094(this, x);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v10, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}