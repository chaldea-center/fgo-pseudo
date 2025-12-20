void CombineResultFormManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D30A32 & 1) == 0 )
  {
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
    sub_1C94098(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
    sub_1C94098(&StringLiteral_6686/*"Fgo_20201104"*/);
    byte_4D30A32 = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6686/*"Fgo_20201104"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)CombineResultFormManager_TypeInfo->static_fields,
    StringLiteral_6686/*"Fgo_20201104"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->lotteryList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4D30A2C & 1) == 0 )
  {
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    byte_4D30A2C = 1;
  }
  v2 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v2 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v2->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_12;
  if ( lotteryList->fields._size < 1 )
    return;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
    if ( !lotteryList )
LABEL_12:
      sub_1C942F0(v2, v1);
  }
  size = lotteryList->fields._size;
  v5 = lotteryList->fields._version + 1;
  lotteryList->fields._size = 0;
  lotteryList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lotteryList->fields._items, 0, size, 0);
}


void CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  CombineResultFormManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4D30A2B & 1) == 0 )
  {
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    byte_4D30A2B = 1;
  }
  v1 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_String_o *CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D30A2A & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D30A2A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0);
  return System_String__Concat_64456008(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


bool CombineResultFormManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  bool v2; // w21
  CombineResultFormManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  CombineResultFormManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  CombineResultFormManager_c *v11; // x0
  int v12; // w20
  int i; // w25
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x23
  System_Collections_Generic_List_object__o **v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int v32; // w23
  Il2CppObject *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  CombineResultFormManager_c *v45; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v52; // x9
  int32_t *p_offset; // x10
  __int64 v54; // x0
  CombineResultFormManager_c *v55; // x0

  if ( (byte_4D30A2E & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryReader_TypeInfo);
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_4D30A2E = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v5 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v7 = (System_IO_BinaryReader_o *)sub_1C942E4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    if ( !v7 )
      sub_1C942F0(v8, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                               v7,
                               v7->klass->vtable._22_ReadString.method);
    v11 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v11 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
    {
      v2 = 0;
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
              v7,
              v7->klass->vtable._15_ReadInt32.method);
      if ( v12 >= 1 )
      {
        for ( i = 0; i != v12; ++i )
        {
          v14 = sub_1C942E4(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v14, 0);
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          if ( !v14 )
            sub_1C942F0(v15, v16);
          *(_DWORD *)(v14 + 16) = v15;
          v17 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v17,
            (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v14 + 24) = v17;
          v18 = (System_Collections_Generic_List_object__o **)(v14 + 24);
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v14 + 24), (int32_t)v17, v19, v20, v21, v22, v23, v24);
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          if ( v32 >= 1 )
          {
            do
            {
              v33 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                                      v7,
                                      v7->klass->vtable._22_ReadString.method);
              v40 = *v18;
              if ( !*v18 )
                sub_1C942F0(0, v33);
              items = v40->fields._items;
              v42 = Method_System_Collections_Generic_List_string__Add__;
              ++v40->fields._version;
              if ( !items )
                sub_1C942F0(v40, v33);
              size = v40->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v40,
                  v33,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v40->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v33;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v44 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
              }
              --v32;
            }
            while ( v32 );
          }
          v45 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v45 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v45->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1C942F0(0, v25);
          v47 = lotteryList->fields._items;
          v48 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v47 )
            sub_1C942F0(lotteryList, v25);
          v49 = lotteryList->fields._size;
          if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v14,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            lotteryList->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v14;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v50 + 4), v14, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    v52 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        p_offset += 4;
        if ( !v52 )
          goto LABEL_40;
      }
      v54 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_40:
      v54 = sub_1C6A420(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v54)(v7, *(_QWORD *)(v54 + 8));
  }
  else
  {
    v55 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v55);
    return 0;
  }
  return v2;
}


void CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  MethodInfo *Item; // x0
  __int64 v4; // x8
  int32_t i; // w20
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int invoker_method; // w26
  __int64 v8; // x21
  __int64 v9; // x22
  CombineResultFormManager_c *v10; // x0
  const char *name; // x8
  int32_t v12; // w2
  int v13; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D30A2D & 1) == 0 )
  {
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D30A2D = 1;
  }
  Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  }
  v4 = *((_QWORD *)Item[2].virtualMethodPointer + 1);
  if ( !v4 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v4 + 24) )
  {
    if ( !LODWORD(Item[2].parameters) )
      j_il2cpp_runtime_class_init_0(Item);
    CombineResultFormManager__ReadData(Item);
  }
  for ( i = 0; ; ++i )
  {
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = (System_Collections_Generic_List_object__o *)*((_QWORD *)Item[2].virtualMethodPointer + 1);
    if ( !lotteryList )
      goto LABEL_31;
    if ( i >= lotteryList->fields._size )
      return;
    if ( !LODWORD(Item[2].parameters) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_31;
    }
    Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                           lotteryList,
                           i,
                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v14, 0) )
      break;
  }
  v10 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v10 = CombineResultFormManager_TypeInfo;
  }
  Item = (MethodInfo *)v10->static_fields->lotteryList;
  if ( !Item
    || (Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Item,
                               i,
                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (name = Item->name) == 0 )
  {
LABEL_31:
    sub_1C942F0(Item, method);
  }
  v12 = *((_DWORD *)name + 6);
  v13 = *((_DWORD *)name + 7) + 1;
  *((_DWORD *)name + 6) = 0;
  *((_DWORD *)name + 7) = v13;
  if ( v12 >= 1 )
    System_Array__Clear(*((System_Array_o **)name + 2), 0, v12, 0);
}


bool CombineResultFormManager__WriteData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  CombineResultFormManager_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  CombineResultFormManager_c *v8; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  __int64 v12; // x1
  int32_t i; // w21
  CombineResultFormManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x22
  _DWORD *monitor; // x8
  int v20; // w23
  int32_t j; // w24
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *v23; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_4D30A2F & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryWriter_TypeInfo);
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D30A2F = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 0;
  v3 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v3);
  v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v6 = (System_IO_BinaryWriter_o *)sub_1C942E4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65327072(v6, v5, 0);
  v8 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v8 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1C942F0(v8, v7);
  if ( !v6 )
    sub_1C942F0(v8, v7);
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
    v6,
    static_fields->SAVE_DATA_VERSION,
    v6->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
    v6,
    (unsigned int)size,
    v6->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = CombineResultFormManager_TypeInfo;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v14 = CombineResultFormManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->lotteryList;
      if ( !v15 )
        sub_1C942F0(0, v12);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v18 = Item;
      if ( !Item )
        sub_1C942F0(0, v17);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C942F0(Item, v17);
      v20 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        LODWORD(Item[1].klass),
        v6->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)v20,
        v6->klass->vtable._17_Write.method);
      if ( v20 >= 1 )
      {
        for ( j = 0; j != v20; ++j )
        {
          v22 = (System_Collections_Generic_List_object__o *)v18[1].monitor;
          if ( !v22 )
            sub_1C942F0(0, v12);
          v23 = System_Collections_Generic_List_object___get_Item(
                  v22,
                  j,
                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
            v6,
            v23,
            v6->klass->vtable._22_Write.method);
        }
      }
    }
  }
  klass = v6->klass;
  v25 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v27 = sub_1C6A420(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v6, *(_QWORD *)(v27 + 8));
  return 1;
}


ServantVoiceData_array *CombineResultFormManager__lotteryCombineResult(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v22; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v26; // x23
  __int64 v27; // x24
  CombineResultFormManager_c *v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w1
  int32_t v32; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v34; // x8
  System_String_o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 type; // x10
  __int64 v45; // x8
  const MethodInfo *v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4D30A31 & 1) == 0 )
  {
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D30A31 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v5,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v50 = v48;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v50,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v50.fields._current )
      sub_1C942F0(v7, v8);
    klass = v50.fields._current[4].klass;
    if ( !klass )
      sub_1C942F0(v7, v8);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C942F8(v7);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C942F0(v7, v8);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v6 )
        sub_1C942F0(v7, v8);
      v17 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v6->fields._items;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C942F0(v7, v17);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v17,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v17, v9, v10, v11, v12, v13, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v22 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v22 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v22 + 24) )
  {
    if ( !svtVoiceEntity[5].fields.type )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
  }
  for ( i = 0; ; ++i )
  {
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
    if ( !lotteryList )
      goto LABEL_60;
    if ( i >= lotteryList->fields._size )
      goto LABEL_56;
    if ( !svtVoiceEntity[5].fields.type )
    {
      j_il2cpp_runtime_class_init_0(svtVoiceEntity);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_60;
    }
    svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               lotteryList,
                                               i,
                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v27;
    *(_QWORD *)&v51.fields.fakeValue = v26;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v51, 0) )
      break;
  }
  v28 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v28 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v28->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v48;
        ;
        System_Collections_Generic_List_object___Remove(
          v6,
          j.fields._current,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v29 )
      break;
    if ( !v6 )
      sub_1C942F0(v29, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v6 )
    goto LABEL_60;
  v31 = v6->fields._size;
  if ( v31 < 1 )
  {
LABEL_56:
    v35 = 0;
    return ServantVoiceEntity__lotteryLevelUpVoice_43584432(v4, baseUsrSvtData, v35, 0);
  }
  v32 = UnityEngine_Random__Range_72070684(0, v31, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v6,
           v32,
           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
  v34 = CombineResultFormManager_TypeInfo;
  v35 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v34 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v34->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0
    || (v42 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v43 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v42) )
  {
LABEL_60:
    sub_1C942F0(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v42 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v35,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = v42 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v45 + 32) = v35;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)v35, v36, v37, v38, v39, v40, v41);
  }
  CombineResultFormManager__WriteData(v46);
  return ServantVoiceEntity__lotteryLevelUpVoice_43584432(v4, baseUsrSvtData, v35, 0);
}


ServantVoiceData_array *CombineResultFormManager__lotteryCombineResultInit(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x23
  __int64 v6; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x24
  __int64 v16; // x25
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 type; // x10
  __int64 v42; // x8
  const MethodInfo *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4D30A30 & 1) == 0 )
  {
    sub_1C94098(&CombineResultFormManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C94098(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_4D30A30 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !v4 )
    goto LABEL_46;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = sub_1C942E4(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_46;
  *(_QWORD *)(v6 + 24) = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v16;
  *(_QWORD *)&v50.fields.fakeValue = v15;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v50, 0);
  *(_DWORD *)(v6 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v5 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v5,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v49.fields._current )
      sub_1C942F0(v17, v18);
    klass = v49.fields._current[4].klass;
    if ( !klass )
      sub_1C942F0(v17, v18);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C942F8(v17);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C942F0(v17, v18);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v14 )
        sub_1C942F0(v17, v18);
      v27 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v14->fields._items;
      v29 = Method_System_Collections_Generic_List_string__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1C942F0(v17, v27);
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v27,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v27;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v27, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v38 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v38 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v38 + 24) )
  {
    if ( !svtVoiceEntity[5].fields.type )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  if ( !svtVoiceEntity[5].fields.type )
  {
    j_il2cpp_runtime_class_init_0(svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = *(ServantVoiceEntity_o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !svtVoiceEntity )
    goto LABEL_46;
  v39 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v40 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v39 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v6,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v42 + 32) = v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v42 + 32), v6, v32, v33, v34, v35, v36, v37);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v43);
  if ( !v14 )
LABEL_46:
    sub_1C942F0(svtVoiceEntity, baseUsrSvtData);
  v44 = v14->fields._size;
  if ( !v44 )
    return 0;
  v45 = UnityEngine_Random__Range_72070684(0, v44, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v14,
           v45,
           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_43584432(v4, baseUsrSvtData, (System_String_o *)Item, 0);
}


void CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}