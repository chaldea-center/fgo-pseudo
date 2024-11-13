void __fastcall LastUsedDeckNumberManager___cctor(const MethodInfo *method)
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
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B15DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6765/*"Fgo_20210906"*/, v12, v13);
    byte_4B15DE2 = 1;
  }
  LastUsedDeckNumberManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6765/*"Fgo_20210906"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)LastUsedDeckNumberManager_TypeInfo->static_fields,
    StringLiteral_6765/*"Fgo_20210906"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
  static_fields->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->lastUsedInfoList,
    (int64_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  LastUsedDeckNumberManager_c *v7; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B15DDC & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v5, v6);
    byte_4B15DDC = 1;
  }
  v7 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    v7 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = v7->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_14;
  if ( lastUsedInfoList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = LastUsedDeckNumberManager_TypeInfo;
    lastUsedInfoList = LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList;
    if ( !lastUsedInfoList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = lastUsedInfoList->fields._size;
  v10 = lastUsedInfoList->fields._version + 1;
  lastUsedInfoList->fields._size = 0;
  lastUsedInfoList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)lastUsedInfoList->fields._items, 0, size, 0LL);
    v7 = LastUsedDeckNumberManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = LastUsedDeckNumberManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  System_Collections_Generic_List_object__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  LastUsedDeckNumberManager_c *v20; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v22; // x21
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x19
  LastUsedDeckNumberManager_c *v25; // x0

  if ( (byte_4B15DDF & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v7, v8);
    sub_1BCA7E0(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v11, v12);
    sub_1BCA7E0(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v13, v14);
    byte_4B15DDF = 1;
  }
  v15 = sub_1BCAA2C(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_DWORD *)(v15 + 16) = questId;
  v20 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v17);
    v20 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v20->static_fields->lastUsedInfoList;
  v22 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                        v17,
                                        v18,
                                        v19);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    0LL);
  if ( !lastUsedInfoList )
    goto LABEL_13;
  v23 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v23 )
    return;
  v24 = v23;
  v25 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v17);
    v25 = LastUsedDeckNumberManager_TypeInfo;
  }
  v16 = (System_Collections_Generic_List_object__o *)v25->static_fields->lastUsedInfoList;
  if ( !v16 )
LABEL_13:
    sub_1BCAA3C(v16, v17);
  System_Collections_Generic_List_object___Remove(
    v16,
    v24,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  LastUsedDeckNumberManager_c *v3; // x0
  const MethodInfo *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B15DDA & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v1, v2);
    byte_4B15DDA = 1;
  }
  v3 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v3);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v18; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x19
  System_Predicate_object__o *v20; // x21
  Il2CppObject *v21; // x0

  if ( (byte_4B15DDE & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v5, v6);
    sub_1BCA7E0(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v9, v10);
    sub_1BCA7E0(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v11, v12);
    byte_4B15DDE = 1;
  }
  v13 = sub_1BCAA2C(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = questId;
  v18 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v15);
    v18 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v18->static_fields->lastUsedInfoList;
  v20 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                        v15,
                                        v16,
                                        v17);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    0LL);
  if ( !lastUsedInfoList )
LABEL_10:
    sub_1BCAA3C(v14, v15);
  v21 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v21 )
    LODWORD(v21) = HIDWORD(v21[1].klass);
  return (int)v21;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_4B15DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15DD9 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  LastUsedDeckNumberManager_c *v3; // x0

  if ( (byte_4B15DDB & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v1, v2);
    byte_4B15DDB = 1;
  }
  v3 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  LastUsedDeckNumberManager_c *v16; // x0
  System_String_o *SaveFileName; // x19
  __int64 v18; // x1
  LastUsedDeckNumberManager_c *v19; // x0
  System_IO_Stream_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o *v28; // x20
  LastUsedDeckNumberManager_c *v29; // x0
  int v30; // w21
  __int64 v31; // x1
  char v32; // w20
  LastUsedDeckNumberManager_c *v33; // x0
  int v34; // w20
  int v35; // w22
  int v36; // w23
  __int64 v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  int64_t v41; // x21
  __int64 v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  LastUsedDeckNumberManager_c *v50; // x0
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v57; // x9
  int32_t *p_offset; // x10
  __int64 v59; // x0
  LastUsedDeckNumberManager_c *v60; // x0

  if ( (byte_4B15DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v9, v10);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v11, v12);
    byte_4B15DE0 = 1;
  }
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    v13 = LastUsedDeckNumberManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v16 = LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v16);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v19 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v18);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v19);
      v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
      System_IO_BinaryReader___ctor(v24, v20, 0LL);
      if ( !v24 )
        sub_1BCAA3C(v25, v26);
      v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                                 v24,
                                 v24->klass->vtable._23_ReadChars.methodPtr);
      v29 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v27);
        v29 = LastUsedDeckNumberManager_TypeInfo;
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
        v33 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v31);
          v33 = LastUsedDeckNumberManager_TypeInfo;
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
            v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._17_ReadInt64.method)(
                    v24,
                    v24->klass->vtable._18_ReadUInt64.methodPtr);
            v41 = sub_1BCAA2C(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v38, v39, v40);
            System_Object___ctor((Il2CppObject *)v41, 0LL);
            if ( !v41 )
              sub_1BCAA3C(v42, v43);
            *(_DWORD *)(v41 + 16) = v35;
            *(_DWORD *)(v41 + 20) = v36;
            *(_QWORD *)(v41 + 24) = v37;
            v50 = LastUsedDeckNumberManager_TypeInfo;
            if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v43);
              v50 = LastUsedDeckNumberManager_TypeInfo;
            }
            lastUsedInfoList = (System_Collections_Generic_List_object__o *)v50->static_fields->lastUsedInfoList;
            if ( !lastUsedInfoList )
              sub_1BCAA3C(0LL, v43);
            items = lastUsedInfoList->fields._items;
            v53 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
            ++lastUsedInfoList->fields._version;
            if ( !items )
              sub_1BCAA3C(lastUsedInfoList, v43);
            size = lastUsedInfoList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                lastUsedInfoList,
                (Il2CppObject *)v41,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = &items->obj.klass + size;
              lastUsedInfoList->fields._size = size + 1;
              v55[4] = (Il2CppClass *)v41;
              sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v41, v44, v45, v46, v47, v48, v49);
            }
            --v34;
          }
          while ( v34 );
        }
        v30 = 8;
      }
      klass = v24->klass;
      v57 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v57;
          p_offset += 4;
          if ( !v57 )
            goto LABEL_36;
        }
        v59 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v59 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v59)(v24, *(_QWORD *)(v59 + 8));
      if ( (v30 | 8) == 8 )
        return 1;
    }
    else
    {
      v60 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v18);
      LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v60);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x20
  System_Collections_Generic_List_object__o *v33; // x0
  const MethodInfo *v34; // x1
  int64_t Time; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  LastUsedDeckNumberManager_c *v39; // x8
  void *v40; // x21
  System_Collections_Generic_List_object__o *lastUsedInfoList; // x22
  System_Predicate_object__o *v42; // x23
  Il2CppObject *v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  LastUsedDeckNumberManager_c *v46; // x0
  __int64 v47; // x8
  int32_t v48; // w22
  BalanceConfig_c *v49; // x0
  LastUsedDeckNumberManager_c *v50; // x8
  LastUsedDeckNumberManager___c_c *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  System_Func_T1__T2__TResult__o *_9__9_1; // x23
  Il2CppObject *v54; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int32_t items; // w22
  int64_t v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int v70; // w8
  LastUsedDeckNumberManager_c *v71; // x0
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  __int64 v75; // x8

  if ( (byte_4B15DDD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNumber, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v6, v7);
    sub_1BCA7E0(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v8,
      v9);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v24, v25);
    sub_1BCA7E0(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v26, v27);
    sub_1BCA7E0(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&LastUsedDeckNumberManager___c_TypeInfo, v30, v31);
    byte_4B15DDD = 1;
  }
  v32 = sub_1BCAA2C(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&deckNumber, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_40;
  *(_DWORD *)(v32 + 16) = questId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34);
  Time = NetworkManager__getTime(0LL);
  v39 = LastUsedDeckNumberManager_TypeInfo;
  v40 = (void *)Time;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v36);
    v39 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_object__o *)v39->static_fields->lastUsedInfoList;
  v42 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                        v36,
                                        v37,
                                        v38);
  System_Predicate_object____ctor(
    v42,
    (Il2CppObject *)v32,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    0LL);
  if ( !lastUsedInfoList )
    goto LABEL_40;
  v43 = System_Collections_Generic_List_object___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v43 )
  {
    v33 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v34);
      v33 = (System_Collections_Generic_List_object__o *)LastUsedDeckNumberManager_TypeInfo;
    }
    v47 = *(_QWORD *)(*(_QWORD *)&v33[4].fields._size + 16LL);
    if ( v47 )
    {
      v48 = *(_DWORD *)(v47 + 24);
      v49 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v34);
        v49 = BalanceConfig_TypeInfo;
      }
      if ( v48 >= v49->static_fields->MemoryDeckLimitByQuest )
      {
        v50 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v34);
          v50 = LastUsedDeckNumberManager_TypeInfo;
        }
        v51 = LastUsedDeckNumberManager___c_TypeInfo;
        v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v50->static_fields->lastUsedInfoList;
        if ( !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo, v34);
          v51 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        _9__9_1 = (System_Func_T1__T2__TResult__o *)v51->static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51, v34);
            v51 = LastUsedDeckNumberManager___c_TypeInfo;
          }
          v54 = (Il2CppObject *)v51->static_fields->__9;
          _9__9_1 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                        System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                        v34,
                                                        v44,
                                                        v45);
          System_Func_object__object__object____ctor(
            _9__9_1,
            v54,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            0LL);
          static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          static_fields->__9__9_1 = (struct System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)_9__9_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__9_1,
            (int64_t)_9__9_1,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
        }
        v33 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Aggregate_object_(
                                                             v52,
                                                             (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                                             (const MethodInfo_2F1ABD4 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !v33 )
          goto LABEL_40;
        items = (int32_t)v33->fields._items;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v34);
        LastUsedDeckNumberManager__DeleteData(items, v34);
      }
      v63 = sub_1BCAA2C(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v34, v44, v45);
      System_Object___ctor((Il2CppObject *)v63, 0LL);
      if ( v63 )
      {
        v70 = *(_DWORD *)(v32 + 16);
        *(_QWORD *)(v63 + 24) = v40;
        *(_DWORD *)(v63 + 16) = v70;
        *(_DWORD *)(v63 + 20) = deckNumber;
        v71 = LastUsedDeckNumberManager_TypeInfo;
        if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v34);
          v71 = LastUsedDeckNumberManager_TypeInfo;
        }
        v33 = (System_Collections_Generic_List_object__o *)v71->static_fields->lastUsedInfoList;
        if ( v33 )
        {
          v72 = v33->fields._items;
          v73 = Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__;
          ++v33->fields._version;
          if ( v72 )
          {
            size = v33->fields._size;
            if ( (unsigned int)size >= v72->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                (Il2CppObject *)v63,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = (__int64)v72 + 8 * size;
              v33->fields._size = size + 1;
              *(_QWORD *)(v75 + 32) = v63;
              sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 32), v63, v64, v65, v66, v67, v68, v69);
            }
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    sub_1BCAA3C(v33, v34);
  }
  HIDWORD(v43[1].klass) = deckNumber;
  v43[1].monitor = v40;
  v46 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v34);
LABEL_38:
    v46 = LastUsedDeckNumberManager_TypeInfo;
  }
  v46->static_fields->isModfiy = 1;
}


bool __fastcall LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v13; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  LastUsedDeckNumberManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x19
  __int64 v24; // x1
  LastUsedDeckNumberManager_c *v25; // x0
  struct LastUsedDeckNumberManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v29; // x1
  int32_t i; // w21
  LastUsedDeckNumberManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B15DE1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__, v9, v10);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v11, v12);
    byte_4B15DE1 = 1;
  }
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
    v13 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = LastUsedDeckNumberManager_TypeInfo->static_fields;
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
  v17 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v1);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = LastUsedDeckNumberManager_TypeInfo;
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v24);
    v25 = LastUsedDeckNumberManager_TypeInfo;
  }
  v26 = v25->static_fields;
  lastUsedInfoList = v26->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v29);
        v31 = LastUsedDeckNumberManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->lastUsedInfoList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v23->klass->vtable._19_Write.method)(
        v23,
        v35[1].monitor,
        v23->klass->vtable._20_Write.methodPtr);
    }
  }
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&LastUsedDeckNumberManager___c_TypeInfo, v1, v2);
    byte_4B15DE3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(LastUsedDeckNumberManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  LastUsedDeckNumberManager___c_TypeInfo->static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}