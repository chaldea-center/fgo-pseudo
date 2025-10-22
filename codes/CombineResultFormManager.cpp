void CombineResultFormManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5AE29 & 1) == 0 )
  {
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
    sub_1C3E564(&StringLiteral_6679/*"Fgo_20201104"*/);
    byte_4C5AE29 = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6679/*"Fgo_20201104"*/;
  sub_1C3E508((CGThumbnailListItem_o *)CombineResultFormManager_TypeInfo->static_fields, StringLiteral_6679/*"Fgo_20201104"*/, v1, v2);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->lotteryList, (int32_t)v3, v5, v6);
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

  if ( (byte_4C5AE23 & 1) == 0 )
  {
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    byte_4C5AE23 = 1;
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
      sub_1C3E7C0(v2, v1);
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

  if ( (byte_4C5AE22 & 1) == 0 )
  {
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    byte_4C5AE22 = 1;
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

  if ( (byte_4C5AE21 & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C5AE21 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0);
  return System_String__Concat_63674716(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
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
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w23
  Il2CppObject *v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x0
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  CombineResultFormManager_c *v33; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  CombineResultFormManager_c *v43; // x0

  if ( (byte_4C5AE25 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryReader_TypeInfo);
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_4C5AE25 = 1;
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
    v7 = (System_IO_BinaryReader_o *)sub_1C3E7B0(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    if ( !v7 )
      sub_1C3E7C0(v8, v9);
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
          v14 = sub_1C3E7B0(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v14, 0);
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          if ( !v14 )
            sub_1C3E7C0(v15, v16);
          *(_DWORD *)(v14 + 16) = v15;
          v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v17,
            (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v14 + 24) = v17;
          v18 = (System_Collections_Generic_List_object__o **)(v14 + 24);
          sub_1C3E508((CGThumbnailListItem_o *)(v14 + 24), (int32_t)v17, v19, v20);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          if ( v24 >= 1 )
          {
            do
            {
              v25 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                                      v7,
                                      v7->klass->vtable._22_ReadString.method);
              v28 = *v18;
              if ( !*v18 )
                sub_1C3E7C0(0, v25);
              items = v28->fields._items;
              v30 = Method_System_Collections_Generic_List_string__Add__;
              ++v28->fields._version;
              if ( !items )
                sub_1C3E7C0(v28, v25);
              size = v28->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v28,
                  v25,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = &items->obj.klass + size;
                v28->fields._size = size + 1;
                v32[4] = (Il2CppClass *)v25;
                sub_1C3E508((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v25, v26, v27);
              }
              --v24;
            }
            while ( v24 );
          }
          v33 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v33 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v33->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1C3E7C0(0, v21);
          v35 = lotteryList->fields._items;
          v36 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v35 )
            sub_1C3E7C0(lotteryList, v21);
          v37 = lotteryList->fields._size;
          if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v14,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            lotteryList->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)v14;
            sub_1C3E508((CGThumbnailListItem_o *)(v38 + 4), v14, v22, v23);
          }
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    v40 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        p_offset += 4;
        if ( !v40 )
          goto LABEL_40;
      }
      v42 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_40:
      v42 = sub_1C8ED7C(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v7, *(_QWORD *)(v42 + 8));
  }
  else
  {
    v43 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v43);
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

  if ( (byte_4C5AE24 & 1) == 0 )
  {
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5AE24 = 1;
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
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v14, 0) )
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
                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (name = Item->name) == 0 )
  {
LABEL_31:
    sub_1C3E7C0(Item, method);
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

  if ( (byte_4C5AE26 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryWriter_TypeInfo);
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    byte_4C5AE26 = 1;
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
  v6 = (System_IO_BinaryWriter_o *)sub_1C3E7B0(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64547772(v6, v5, 0);
  v8 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v8 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1C3E7C0(v8, v7);
  if ( !v6 )
    sub_1C3E7C0(v8, v7);
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
        sub_1C3E7C0(0, v12);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v18 = Item;
      if ( !Item )
        sub_1C3E7C0(0, v17);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C3E7C0(Item, v17);
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
            sub_1C3E7C0(0, v12);
          v23 = System_Collections_Generic_List_object___get_Item(
                  v22,
                  j,
                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
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
    v27 = sub_1C8ED7C(v6, System_IDisposable_TypeInfo, 0);
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
  const MethodInfo *v10; // x3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  __int64 v18; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v22; // x23
  __int64 v23; // x24
  CombineResultFormManager_c *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w1
  int32_t v28; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v30; // x8
  System_String_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 type; // x10
  __int64 v37; // x8
  const MethodInfo *v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4C5AE28 & 1) == 0 )
  {
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5AE28 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v42 = v40;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v42,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v42.fields._current )
      sub_1C3E7C0(v7, v8);
    klass = v42.fields._current[4].klass;
    if ( !klass )
      sub_1C3E7C0(v7, v8);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C3E7C8(v7, v8);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C3E7C0(v7, v8);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v6 )
        sub_1C3E7C0(v7, v8);
      v13 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v6->fields._items;
      v15 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C3E7C0(v7, v13);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v13,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v9, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v18 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v18 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v18 + 24) )
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
                                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v23 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v23;
    *(_QWORD *)&v43.fields.fakeValue = v22;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v43, 0) )
      break;
  }
  v24 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v24 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v24->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v40;
        ;
        System_Collections_Generic_List_object___Remove(
          v6,
          j.fields._current,
          (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v25 )
      break;
    if ( !v6 )
      sub_1C3E7C0(v25, v26);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v6 )
    goto LABEL_60;
  v27 = v6->fields._size;
  if ( v27 < 1 )
  {
LABEL_56:
    v31 = 0;
    return ServantVoiceEntity__lotteryLevelUpVoice_42856256(v4, baseUsrSvtData, v31, 0);
  }
  v28 = UnityEngine_Random__Range_71301784(0, v27, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v6,
           v28,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  v30 = CombineResultFormManager_TypeInfo;
  v31 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v30 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v30->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0
    || (v34 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v35 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v34) )
  {
LABEL_60:
    sub_1C3E7C0(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v31,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v37 + 32) = v31;
    sub_1C3E508((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v31, v32, v33);
  }
  CombineResultFormManager__WriteData(v38);
  return ServantVoiceEntity__lotteryLevelUpVoice_42856256(v4, baseUsrSvtData, v31, 0);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 type; // x10
  __int64 v30; // x8
  const MethodInfo *v31; // x0
  int32_t v32; // w1
  int32_t v33; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4C5AE27 & 1) == 0 )
  {
    sub_1C3E564(&CombineResultFormManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C3E564(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_4C5AE27 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !v4 )
    goto LABEL_46;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = sub_1C3E7B0(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_46;
  *(_QWORD *)(v6 + 24) = v7;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 24), (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v12;
  *(_QWORD *)&v38.fields.fakeValue = v11;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v38, 0);
  *(_DWORD *)(v6 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v5 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v37.fields._current )
      sub_1C3E7C0(v13, v14);
    klass = v37.fields._current[4].klass;
    if ( !klass )
      sub_1C3E7C0(v13, v14);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C3E7C8(v13, v14);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C3E7C0(v13, v14);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v10 )
        sub_1C3E7C0(v13, v14);
      v19 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C3E7C0(v13, v19);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v19,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v26 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v26 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v26 + 24) )
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
  v27 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v28 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v27 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v27 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v6,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = v27 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v30 + 32) = v6;
    sub_1C3E508((CGThumbnailListItem_o *)(v30 + 32), v6, v24, v25);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v31);
  if ( !v10 )
LABEL_46:
    sub_1C3E7C0(svtVoiceEntity, baseUsrSvtData);
  v32 = v10->fields._size;
  if ( !v32 )
    return 0;
  v33 = UnityEngine_Random__Range_71301784(0, v32, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v10,
           v33,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_42856256(v4, baseUsrSvtData, (System_String_o *)Item, 0);
}


void CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}