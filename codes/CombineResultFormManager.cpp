void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B05EAC & 1) == 0 )
  {
    sub_1BC3008(&CombineResultFormManager_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v5);
    sub_1BC3008(&StringLiteral_6622/*"Fgo_20201104"*/, v6);
    byte_4B05EAC = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6622/*"Fgo_20201104"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)CombineResultFormManager_TypeInfo->static_fields, StringLiteral_6622/*"Fgo_20201104"*/, v2, v3);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->lotteryList, (int32_t)v7, v9, v10);
}


void __fastcall CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  CombineResultFormManager_c *v4; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4B05EA6 & 1) == 0 )
  {
    sub_1BC3008(&CombineResultFormManager_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v3);
    byte_4B05EA6 = 1;
  }
  v4 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v4 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v4->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_12;
  if ( lotteryList->fields._size < 1 )
    return;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
    if ( !lotteryList )
LABEL_12:
      sub_1BC3264(v4, v1);
  }
  size = lotteryList->fields._size;
  v7 = lotteryList->fields._version + 1;
  lotteryList->fields._size = 0;
  lotteryList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lotteryList->fields._items, 0, size, 0LL);
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B05EA5 & 1) == 0 )
  {
    sub_1BC3008(&CombineResultFormManager_TypeInfo, v1);
    byte_4B05EA5 = 1;
  }
  v2 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B05EA4 & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, v1);
    sub_1BC3008(&DatFileName_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v3);
    byte_4B05EA4 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_62386896(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


bool __fastcall CombineResultFormManager__ReadData(const MethodInfo *method)
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
  ManagerConfig_c *v10; // x0
  bool v11; // w21
  CombineResultFormManager_c *v12; // x0
  System_String_o *SaveFileName; // x19
  CombineResultFormManager_c *v14; // x0
  System_IO_Stream_o *v15; // x20
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20
  CombineResultFormManager_c *v20; // x0
  int v21; // w20
  int i; // w25
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_object__o **v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // w23
  Il2CppObject *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_object__o *v37; // x0
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  CombineResultFormManager_c *v42; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  CombineResultFormManager_c *v52; // x0

  if ( (byte_4B05EA8 & 1) == 0 )
  {
    sub_1BC3008(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BC3008(&CombineResultFormManager_TypeInfo, v2);
    sub_1BC3008(&System_IDisposable_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1BC3008(&ManagerConfig_TypeInfo, v8);
    sub_1BC3008(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v9);
    byte_4B05EA8 = 1;
  }
  v10 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v10 = ManagerConfig_TypeInfo;
  }
  if ( v10->static_fields->UseMock )
    return 1;
  v12 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v12);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v14 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v14);
    v15 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v16 = (System_IO_BinaryReader_o *)sub_1BC3254(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v16, v15, 0LL);
    if ( !v16 )
      sub_1BC3264(v17, v18);
    v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                               v16,
                               v16->klass->vtable._23_ReadChars.methodPtr);
    v20 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v20 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
    {
      v11 = 0;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
              v16,
              v16->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v21 >= 1 )
      {
        for ( i = 0; i != v21; ++i )
        {
          v23 = sub_1BC3254(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0LL);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v23 )
            sub_1BC3264(v24, v25);
          *(_DWORD *)(v23 + 16) = v24;
          v26 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v26,
            (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v23 + 24) = v26;
          v27 = (System_Collections_Generic_List_object__o **)(v23 + 24);
          sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 24), (int32_t)v26, v28, v29);
          v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v33 >= 1 )
          {
            do
            {
              v34 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                      v16,
                                      v16->klass->vtable._23_ReadChars.methodPtr);
              v37 = *v27;
              if ( !*v27 )
                sub_1BC3264(0LL, v34);
              items = v37->fields._items;
              v39 = Method_System_Collections_Generic_List_string__Add__;
              ++v37->fields._version;
              if ( !items )
                sub_1BC3264(v37, v34);
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  v34,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                v41 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v41[4] = (Il2CppClass *)v34;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v35, v36);
              }
              --v33;
            }
            while ( v33 );
          }
          v42 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v42 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v42->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1BC3264(0LL, v30);
          v44 = lotteryList->fields._items;
          v45 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v44 )
            sub_1BC3264(lotteryList, v30);
          v46 = lotteryList->fields._size;
          if ( (unsigned int)v46 >= v44->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v23,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &v44->obj.klass + v46;
            lotteryList->fields._size = v46 + 1;
            v47[4] = (Il2CppClass *)v23;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), v23, v31, v32);
          }
        }
      }
      v11 = 1;
    }
    klass = v16->klass;
    v49 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_40;
      }
      v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v51 = sub_1C13570(v16, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v51)(v16, *(_QWORD *)(v51 + 8));
  }
  else
  {
    v52 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v52);
    return 0;
  }
  return v11;
}


void __fastcall CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MethodInfo *Item; // x0
  __int64 v8; // x8
  int32_t i; // w20
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int invoker_method; // w26
  __int64 v12; // x21
  __int64 v13; // x22
  CombineResultFormManager_c *v14; // x0
  const char *name; // x8
  int32_t v16; // w2
  int v17; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B05EA7 & 1) == 0 )
  {
    sub_1BC3008(&CombineResultFormManager_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B05EA7 = 1;
  }
  Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  }
  v8 = *((_QWORD *)Item[2].virtualMethodPointer + 1);
  if ( !v8 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v8 + 24) )
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
                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL) )
      break;
  }
  v14 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v14 = CombineResultFormManager_TypeInfo;
  }
  Item = (MethodInfo *)v14->static_fields->lotteryList;
  if ( !Item
    || (Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Item,
                               i,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (name = Item->name) == 0LL )
  {
LABEL_31:
    sub_1BC3264(Item, method);
  }
  v16 = *((_DWORD *)name + 6);
  v17 = *((_DWORD *)name + 7) + 1;
  *((_DWORD *)name + 6) = 0;
  *((_DWORD *)name + 7) = v17;
  if ( v16 >= 1 )
    System_Array__Clear(*((System_Array_o **)name + 2), 0, v16, 0LL);
}


bool __fastcall CombineResultFormManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ManagerConfig_c *v9; // x0
  CombineResultFormManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x1
  CombineResultFormManager_c *v16; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  __int64 v20; // x1
  int32_t i; // w21
  CombineResultFormManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  _DWORD *monitor; // x8
  int v28; // w23
  int32_t j; // w24
  System_Collections_Generic_List_object__o *v30; // x0
  Il2CppObject *v31; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0

  if ( (byte_4B05EA9 & 1) == 0 )
  {
    sub_1BC3008(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BC3008(&CombineResultFormManager_TypeInfo, v2);
    sub_1BC3008(&System_IDisposable_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v7);
    sub_1BC3008(&ManagerConfig_TypeInfo, v8);
    byte_4B05EA9 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1BC3254(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63258572(v14, v13, 0LL);
  v16 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v16 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1BC3264(v16, v15);
  if ( !v14 )
    sub_1BC3264(v16, v15);
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    static_fields->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = CombineResultFormManager_TypeInfo;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v22 = CombineResultFormManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->lotteryList;
      if ( !v23 )
        sub_1BC3264(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1BC3264(0LL, v25);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1BC3264(Item, v25);
      v28 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        (unsigned int)v28,
        v14->klass->vtable._18_Write.methodPtr);
      if ( v28 >= 1 )
      {
        for ( j = 0; j != v28; ++j )
        {
          v30 = (System_Collections_Generic_List_object__o *)v26[1].monitor;
          if ( !v30 )
            sub_1BC3264(0LL, v20);
          v31 = System_Collections_Generic_List_object___get_Item(
                  v30,
                  j,
                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v14->klass->vtable._22_Write.method)(
            v14,
            v31,
            v14->klass[1]._1.image);
        }
      }
    }
  }
  klass = v14->klass;
  v33 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_29;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v35 = sub_1C13570(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v35)(v14, *(_QWORD *)(v35 + 8));
  return 1;
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResult(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x22
  System_Collections_Generic_List_object__o *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v39; // x23
  __int64 v40; // x24
  CombineResultFormManager_c *v41; // x0
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w1
  int32_t v45; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v47; // x8
  System_String_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 type; // x10
  __int64 v54; // x8
  const MethodInfo *v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4B05EAB & 1) == 0 )
  {
    sub_1BC3008(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v19);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v20);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4B05EAB = 1;
  }
  memset(&v59, 0, sizeof(v59));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v22 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v22 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v22,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v59 = v57;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v24 )
      break;
    if ( !v59.fields._current )
      sub_1BC3264(v24, v25);
    klass = v59.fields._current[4].klass;
    if ( !klass )
      sub_1BC3264(v24, v25);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1BC326C(v24, v25, v26);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1BC3264(v24, v25);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v23 )
        sub_1BC3264(v24, v25);
      v30 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v23->fields._items;
      v32 = Method_System_Collections_Generic_List_string__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BC3264(v24, v30);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v30,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v30, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v35 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v35 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v35 + 24) )
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
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v40 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v60.fields.currentCryptoKey = v40;
    *(_QWORD *)&v60.fields.fakeValue = v39;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v60, 0LL) )
      break;
  }
  v41 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v41 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v41->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v57;
        ;
        System_Collections_Generic_List_object___Remove(
          v23,
          j.fields._current,
          (const MethodInfo_36A2368 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v42 )
      break;
    if ( !v23 )
      sub_1BC3264(v42, v43);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v23 )
    goto LABEL_60;
  v44 = v23->fields._size;
  if ( v44 < 1 )
  {
LABEL_56:
    v48 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_41784780(v4, baseUsrSvtData, v48, 0LL);
  }
  v45 = UnityEngine_Random__Range_69994520(0, v44, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v23,
           v45,
           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
  v47 = CombineResultFormManager_TypeInfo;
  v48 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v47 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v47->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0LL
    || (v51 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v52 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v51) )
  {
LABEL_60:
    sub_1BC3264(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v51 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v48,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = v51 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v54 + 32) = v48;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 32), (int32_t)v48, v49, v50);
  }
  CombineResultFormManager__WriteData(v55);
  return ServantVoiceEntity__lotteryLevelUpVoice_41784780(v4, baseUsrSvtData, v48, 0LL);
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResultInit(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
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
  System_Collections_Generic_List_object__o *v18; // x23
  __int64 v19; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x22
  __int64 v24; // x24
  __int64 v25; // x25
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 type; // x10
  __int64 v43; // x8
  const MethodInfo *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4B05EAA & 1) == 0 )
  {
    sub_1BC3008(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1BC3008(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17);
    byte_4B05EAA = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !v4 )
    goto LABEL_46;
  v18 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v19 = sub_1BC3254(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v19 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 24) = v20;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v25 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v25;
  *(_QWORD *)&v51.fields.fakeValue = v24;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v51, 0LL);
  *(_DWORD *)(v19 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v18 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v18,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v50.fields._current )
      sub_1BC3264(v26, v27);
    klass = v50.fields._current[4].klass;
    if ( !klass )
      sub_1BC3264(v26, v27);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1BC326C(v26, v27, v28);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1BC3264(v26, v27);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v23 )
        sub_1BC3264(v26, v27);
      v32 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v23->fields._items;
      v34 = Method_System_Collections_Generic_List_string__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BC3264(v26, v32);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v32,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v32, v28, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v39 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v39 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v39 + 24) )
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
  v40 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v41 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v40 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v19,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v43 + 32) = v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 32), v19, v37, v38);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v44);
  if ( !v23 )
LABEL_46:
    sub_1BC3264(svtVoiceEntity, baseUsrSvtData);
  v45 = v23->fields._size;
  if ( !v45 )
    return 0LL;
  v46 = UnityEngine_Random__Range_69994520(0, v45, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v23,
           v46,
           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_41784780(v4, baseUsrSvtData, (System_String_o *)Item, 0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}