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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17434 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
      v8,
      v9);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6761/*"Fgo_20191029"*/, v12, v13);
    byte_4B17434 = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6761/*"Fgo_20191029"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6761/*"Fgo_20191029"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->limitCountList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ServantProfileLimitCountManager_c *v7; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B1742D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3,
      v4);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v5, v6);
    byte_4B1742D = 1;
  }
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v7->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = limitCountList->fields._size;
  v10 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0LL);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantProfileLimitCountManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  __int64 v5; // x1
  ServantProfileLimitCountManager_c *v6; // x0

  if ( (byte_4B1742B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v1, v2);
    byte_4B1742B = 1;
  }
  v3 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v5);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantProfileLimitCountManager_c *v18; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v20; // x21
  Il2CppObject *v21; // x0

  if ( (byte_4B1742F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      method,
      v2);
    sub_1BCA7E0(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v9, v10);
    sub_1BCA7E0(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v11, v12);
    byte_4B1742F = 1;
  }
  v13 = sub_1BCAA2C(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = servantId;
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v15);
    v18 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v18->static_fields->limitCountList;
  v20 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                        v15,
                                        v16,
                                        v17);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
LABEL_10:
    sub_1BCAA3C(v14, v15);
  v21 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v21 )
    LODWORD(v21) = HIDWORD(v21[1].klass);
  return (int)v21;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B1742A & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B1742A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantProfileLimitCountManager_c *v3; // x0

  if ( (byte_4B1742C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v1, v2);
    byte_4B1742C = 1;
  }
  v3 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantProfileLimitCountManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  ServantProfileLimitCountManager_c *v16; // x0
  System_String_o *SaveFileName; // x19
  __int64 v18; // x1
  ServantProfileLimitCountManager_c *v19; // x0
  System_IO_Stream_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o *v28; // x21
  ServantProfileLimitCountManager_c *v29; // x0
  int v30; // w22
  __int64 v31; // x1
  char v32; // w21
  ServantProfileLimitCountManager_c *v33; // x0
  int v34; // w21
  int v35; // w23
  int v36; // w24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  ServantProfileLimitCountManager_c *v49; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  System_IO_Stream_c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  ServantProfileLimitCountManager_c *v63; // x0

  if ( (byte_4B17430 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      v5,
      v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v11, v12);
    byte_4B17430 = 1;
  }
  v13 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    v13 = ServantProfileLimitCountManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 1;
  v16 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v16);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v63 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v18);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v63);
    return 0;
  }
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v18);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v19);
  v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
  System_IO_BinaryReader___ctor(v24, v20, 0LL);
  if ( !v24 )
    sub_1BCAA3C(v25, v26);
  v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                             v24,
                             v24->klass->vtable._23_ReadChars.methodPtr);
  v29 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v27);
    v29 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v29->static_fields->SAVE_DATA_VERSION, v28, 0LL) )
  {
    v30 = 5;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._9_ReadBoolean.method)(
            v24,
            v24->klass->vtable._10_ReadByte.methodPtr);
    v33 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v31);
      v33 = ServantProfileLimitCountManager_TypeInfo;
    }
    v33->static_fields->isContinueDevice = v32 & 1;
    v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
            v24,
            v24->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v34 >= 1 )
    {
      do
      {
        v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                v24,
                v24->klass->vtable._16_ReadUInt32.methodPtr);
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                v24,
                v24->klass->vtable._16_ReadUInt32.methodPtr);
        v40 = sub_1BCAA2C(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v37, v38, v39);
        System_Object___ctor((Il2CppObject *)v40, 0LL);
        if ( !v40 )
          sub_1BCAA3C(v41, v42);
        *(_DWORD *)(v40 + 16) = v35;
        *(_DWORD *)(v40 + 20) = v36;
        v49 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v42);
          v49 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v49->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1BCAA3C(0LL, v42);
        items = limitCountList->fields._items;
        v52 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1BCAA3C(limitCountList, v42);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v40,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v40, v43, v44, v45, v46, v47, v48);
        }
        --v34;
      }
      while ( v34 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._6_Close.method)(
      v24,
      v24->klass->vtable._7_Dispose.methodPtr);
    v30 = 8;
  }
  klass = v24->klass;
  v56 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_36;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v58 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v58)(v24, *(_QWORD *)(v58 + 8));
  if ( (v30 | 8) == 8 )
  {
    v30 = 9;
    if ( !v20 )
      return v30 == 9;
  }
  else if ( !v20 )
  {
    return v30 == 9;
  }
  v59 = v20->klass;
  v60 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_46;
    }
    v62 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v61);
  }
  else
  {
LABEL_46:
    v62 = sub_1C1C7C0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v62)(v20, *(_QWORD *)(v62 + 8));
  return v30 == 9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantProfileLimitCountManager_c *v23; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v25; // x22
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  ServantProfileLimitCountManager_c *v30; // x0
  int64_t v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  ServantProfileLimitCountManager_c *v38; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8

  if ( (byte_4B1742E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v6,
      v7);
    sub_1BCA7E0(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v14, v15);
    sub_1BCA7E0(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v16, v17);
    byte_4B1742E = 1;
  }
  v18 = sub_1BCAA2C(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&limitCount, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_22;
  *(_DWORD *)(v18 + 16) = servantId;
  v23 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v20);
    v23 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v23->static_fields->limitCountList;
  v25 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                        v20,
                                        v21,
                                        v22);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v18,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
    goto LABEL_22;
  v26 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v26 )
  {
    v31 = sub_1BCAA2C(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v27, v28, v29);
    System_Object___ctor((Il2CppObject *)v31, 0LL);
    if ( v31 )
    {
      *(_DWORD *)(v31 + 16) = *(_DWORD *)(v18 + 16);
      *(_DWORD *)(v31 + 20) = limitCount;
      v38 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v20);
        v38 = ServantProfileLimitCountManager_TypeInfo;
      }
      v19 = (System_Collections_Generic_List_object__o *)v38->static_fields->limitCountList;
      if ( v19 )
      {
        items = v19->fields._items;
        v40 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v31,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v31;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v31, v32, v33, v34, v35, v36, v37);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(v19, v20);
  }
  if ( SHIDWORD(v26[1].klass) >= limitCount )
    return;
  HIDWORD(v26[1].klass) = limitCount;
  v30 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v27);
LABEL_19:
    v30 = ServantProfileLimitCountManager_TypeInfo;
  }
  v30->static_fields->isModfiy = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x20
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_object; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Predicate_object__o *v35; // x22
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int32_t v38; // w20
  const MethodInfo *v39; // x0

  if ( (byte_4B17433 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantProfileMaster___, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___76796312, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Predicate_ServantProfileEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(
      &Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
      v20,
      v21);
    sub_1BCA7E0(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v22, v23);
    byte_4B17433 = 1;
  }
  v24 = sub_1BCAA2C(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&limitCount, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_12;
  *(_DWORD *)(v24 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_object = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)Instance,
                                                                          (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                             v28,
                                                             v29,
                                                             v30),
        System_Collections_Generic_List_object____ctor_56235344(
          v31,
          Entitys_object,
          (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___76796312),
        v35 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ServantProfileEntity__TypeInfo, v32, v33, v34),
        System_Predicate_object____ctor(
          v35,
          (Il2CppObject *)v24,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0LL),
        !v31) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v26);
  }
  if ( System_Collections_Generic_List_object___Find(
         v31,
         (System_Predicate_T__o *)v35,
         (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v38 = *(_DWORD *)(v24 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v36);
    ServantProfileLimitCountManager__SetLimitCount(v38, limitCount, v37);
    ServantProfileLimitCountManager__WriteData(v39);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_object; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x19
  System_Collections_ObjectModel_Collection_T__o *klass; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  int32_t v42; // w21
  Il2CppObject *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UserServantEntity_c *v50; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v52; // x10
  int64_t v53; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Predicate_object__o *v58; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v59; // x8
  __int64 v60; // x22
  __int64 v61; // x24
  int32_t v62; // w22
  __int64 v63; // x1
  const MethodInfo *v64; // x2
  int32_t v65; // w23
  ServantProfileLimitCountManager_c *v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B17432 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantProfileMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___76796312, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Predicate_ServantProfileEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v25,
      v26);
    sub_1BCA7E0(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v29, v30);
    byte_4B17432 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entitys_object = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_object_(
                                                                    (DataMasterBase_o *)Instance,
                                                                    (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor_56235344(
    v37,
    Entitys_object,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___76796312);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  klass = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].klass;
  if ( !klass )
    goto LABEL_36;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].klass,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      v43 = (Il2CppObject *)sub_1BCAA2C(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v39, v40, v41);
      System_Object___ctor(v43, 0LL);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   klass,
                   v42,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v43 )
        break;
      if ( Instance )
      {
        v50 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
          v52 = (UserServantEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v52 = 0LL;
        v43[1].klass = v52;
        v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v43[1];
        if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
          v53 = (UserServantEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == v50
              ? (int64_t)Instance
              : 0LL;
        else
          v53 = 0LL;
      }
      else
      {
        v53 = 0LL;
        v43[1].klass = 0LL;
        v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v43[1];
      }
      sub_1BCA784((PartyOrganizationUtility_o *)v54, v53, v44, v45, v46, v47, v48, v49);
      v58 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ServantProfileEntity__TypeInfo, v55, v56, v57);
      System_Predicate_object____ctor(
        v58,
        v43,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0LL);
      if ( !v37 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v37,
                   (System_Predicate_T__o *)v58,
                   (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v59 = *v54;
        if ( !*v54 )
          break;
        v61 = *(_QWORD *)&v59[5].fields.currentCryptoKey;
        v60 = *(_QWORD *)&v59[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
        *(_QWORD *)&v67.fields.currentCryptoKey = v61;
        *(_QWORD *)&v67.fields.fakeValue = v60;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
        if ( !*v54 )
          break;
        v62 = (int)Instance;
        v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*v54)[6], 0LL);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v63);
        ServantProfileLimitCountManager__SetLimitCount(v62, v65, v64);
      }
      if ( ++v42 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      klass,
                      (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_33;
    }
LABEL_36:
    sub_1BCAA3C(Instance, v32);
  }
LABEL_33:
  v66 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v39);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v66);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantProfileLimitCountManager_c *v13; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  ServantProfileLimitCountManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x20
  __int64 v24; // x1
  ServantProfileLimitCountManager_c *v25; // x0
  struct ServantProfileLimitCountManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v29; // x1
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  System_IO_Stream_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B17431 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v7,
      v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v11, v12);
    byte_4B17431 = 1;
  }
  v13 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    v13 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 0;
  v17 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v24);
    v25 = ServantProfileLimitCountManager_TypeInfo;
  }
  v26 = v25->static_fields;
  limitCountList = v26->limitCountList;
  if ( !limitCountList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v29);
        v31 = ServantProfileLimitCountManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->limitCountList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v35 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(Item[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        HIDWORD(v35[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v23->klass->vtable._5_Close.method)(
    v23,
    v23->klass->vtable._6_Dispose.methodPtr);
  klass = v23->klass;
  v37 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v39 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  if ( v19 )
  {
    v40 = v19->klass;
    v41 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_36;
      }
      v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
    }
    else
    {
LABEL_36:
      v43 = sub_1C1C7C0(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v19, *(_QWORD *)(v43 + 8));
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B17435 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1BCA7E0(
                                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                        x,
                                                                        method);
    byte_4B17435 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_1BCAA3C(this, x);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}