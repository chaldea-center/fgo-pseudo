void CombineResultFormManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C47032 & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
    sub_1C37058(&StringLiteral_6679/*"Fgo_20201104"*/);
    byte_4C47032 = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6679/*"Fgo_20201104"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)CombineResultFormManager_TypeInfo->static_fields, StringLiteral_6679/*"Fgo_20201104"*/, v1, v2);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->lotteryList, (int32_t)v3, v5, v6);
}


void CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  CombineResultFormManager_c *v1; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C4702C & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    byte_4C4702C = 1;
  }
  v1 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v1 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v1->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_12;
  if ( lotteryList->fields._size < 1 )
    return;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
    if ( !lotteryList )
LABEL_12:
      sub_1C372B4(v1);
  }
  size = lotteryList->fields._size;
  v4 = lotteryList->fields._version + 1;
  lotteryList->fields._size = 0;
  lotteryList->fields._version = v4;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lotteryList->fields._items, 0, size, 0);
}


void CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  CombineResultFormManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C4702B & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    byte_4C4702B = 1;
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

  if ( (byte_4C4702A & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C4702A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
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
  System_String_o *v9; // x20
  CombineResultFormManager_c *v10; // x0
  int v11; // w20
  int i; // w25
  __int64 v13; // x21
  __int64 v14; // x0
  System_Collections_Generic_List_object__o *v15; // x23
  System_Collections_Generic_List_object__o **v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int v21; // w23
  Il2CppObject *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  CombineResultFormManager_c *v30; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  CombineResultFormManager_c *v40; // x0

  if ( (byte_4C4702E & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_4C4702E = 1;
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
    v7 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    if ( !v7 )
      sub_1C372B4(v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                              v7,
                              v7->klass->vtable._22_ReadString.method);
    v10 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v10 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
    {
      v2 = 0;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
              v7,
              v7->klass->vtable._15_ReadInt32.method);
      if ( v11 >= 1 )
      {
        for ( i = 0; i != v11; ++i )
        {
          v13 = sub_1C372A4(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v13, 0);
          v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          if ( !v13 )
            sub_1C372B4(v14);
          *(_DWORD *)(v13 + 16) = v14;
          v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v15,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v13 + 24) = v15;
          v16 = (System_Collections_Generic_List_object__o **)(v13 + 24);
          sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v15, v17, v18);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          if ( v21 >= 1 )
          {
            do
            {
              v22 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                                      v7,
                                      v7->klass->vtable._22_ReadString.method);
              v25 = *v16;
              if ( !*v16 )
                sub_1C372B4(0);
              items = v25->fields._items;
              v27 = Method_System_Collections_Generic_List_string__Add__;
              ++v25->fields._version;
              if ( !items )
                sub_1C372B4(v25);
              size = v25->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v25,
                  v22,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v25->fields._size = size + 1;
                v29[4] = (Il2CppClass *)v22;
                sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v23, v24);
              }
              --v21;
            }
            while ( v21 );
          }
          v30 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v30 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v30->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1C372B4(0);
          v32 = lotteryList->fields._items;
          v33 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v32 )
            sub_1C372B4(lotteryList);
          v34 = lotteryList->fields._size;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v13,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->obj.klass + v34;
            lotteryList->fields._size = v34 + 1;
            v35[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v35 + 4), v13, v19, v20);
          }
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    v37 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_40;
      }
      v39 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_40:
      v39 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v7, *(_QWORD *)(v39 + 8));
  }
  else
  {
    v40 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v40);
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

  if ( (byte_4C4702D & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4702D = 1;
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
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0) )
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
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (name = Item->name) == 0 )
  {
LABEL_31:
    sub_1C372B4(Item);
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
  CombineResultFormManager_c *v7; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  int32_t i; // w21
  CombineResultFormManager_c *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x22
  _DWORD *monitor; // x8
  int v17; // w23
  int32_t j; // w24
  System_Collections_Generic_List_object__o *v19; // x0
  Il2CppObject *v20; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4C4702F & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C4702F = 1;
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
  v6 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v6, v5, 0);
  v7 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v7 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1C372B4(v7);
  if ( !v6 )
    sub_1C372B4(v7);
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
      v12 = CombineResultFormManager_TypeInfo;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v12 = CombineResultFormManager_TypeInfo;
      }
      v13 = (System_Collections_Generic_List_object__o *)v12->static_fields->lotteryList;
      if ( !v13 )
        sub_1C372B4(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v13,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v15 = Item;
      if ( !Item )
        sub_1C372B4(0);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C372B4(Item);
      v17 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        LODWORD(Item[1].klass),
        v6->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)v17,
        v6->klass->vtable._17_Write.method);
      if ( v17 >= 1 )
      {
        for ( j = 0; j != v17; ++j )
        {
          v19 = (System_Collections_Generic_List_object__o *)v15[1].monitor;
          if ( !v19 )
            sub_1C372B4(0);
          v20 = System_Collections_Generic_List_object___get_Item(
                  v19,
                  j,
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
            v6,
            v20,
            v6->klass->vtable._22_Write.method);
        }
      }
    }
  }
  klass = v6->klass;
  v22 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
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
    v24 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v6, *(_QWORD *)(v24 + 8));
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  __int64 v17; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v21; // x23
  __int64 v22; // x24
  CombineResultFormManager_c *v23; // x0
  _BOOL8 v24; // x0
  int32_t v25; // w1
  int32_t v26; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v28; // x8
  System_String_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 type; // x10
  __int64 v35; // x8
  const MethodInfo *v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4C47031 & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C47031 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v40 = v38;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v40,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v40.fields._current )
      sub_1C372B4(v7);
    klass = v40.fields._current[4].klass;
    if ( !klass )
      sub_1C372B4(v7);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C372BC(v7);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C372B4(v7);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v6 )
        sub_1C372B4(v7);
      v12 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v6->fields._items;
      v14 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C372B4(v7);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v12,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v17 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v17 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v17 + 24) )
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
                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v22;
    *(_QWORD *)&v41.fields.fakeValue = v21;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0) )
      break;
  }
  v23 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v23 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v23->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v38;
        ;
        System_Collections_Generic_List_object___Remove(
          v6,
          j.fields._current,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v24 )
      break;
    if ( !v6 )
      sub_1C372B4(v24);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v6 )
    goto LABEL_60;
  v25 = v6->fields._size;
  if ( v25 < 1 )
  {
LABEL_56:
    v29 = 0;
    return ServantVoiceEntity__lotteryLevelUpVoice_42804216(v4, baseUsrSvtData, v29, 0);
  }
  v26 = UnityEngine_Random__Range_71226972(0, v25, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v6,
           v26,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  v28 = CombineResultFormManager_TypeInfo;
  v29 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v28 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v28->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0
    || (v32 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v33 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v32) )
  {
LABEL_60:
    sub_1C372B4(svtVoiceEntity);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v32 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v29,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = v32 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v35 + 32) = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)(v35 + 32), (int32_t)v29, v30, v31);
  }
  CombineResultFormManager__WriteData(v36);
  return ServantVoiceEntity__lotteryLevelUpVoice_42804216(v4, baseUsrSvtData, v29, 0);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 type; // x10
  __int64 v29; // x8
  const MethodInfo *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4C47030 & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C37058(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_4C47030 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !v4 )
    goto LABEL_46;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = sub_1C372A4(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_46;
  *(_QWORD *)(v6 + 24) = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v12;
  *(_QWORD *)&v37.fields.fakeValue = v11;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v37, 0);
  *(_DWORD *)(v6 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v5 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v36.fields._current )
      sub_1C372B4(v13);
    klass = v36.fields._current[4].klass;
    if ( !klass )
      sub_1C372B4(v13);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C372BC(v13);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C372B4(v13);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v10 )
        sub_1C372B4(v13);
      v18 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v10->fields._items;
      v20 = Method_System_Collections_Generic_List_string__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C372B4(v13);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v18,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v25 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v25 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v25 + 24) )
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
  v26 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v27 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v26 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v6,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v29 + 32) = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 32), v6, v23, v24);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v30);
  if ( !v10 )
LABEL_46:
    sub_1C372B4(svtVoiceEntity);
  v31 = v10->fields._size;
  if ( !v31 )
    return 0;
  v32 = UnityEngine_Random__Range_71226972(0, v31, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v10,
           v32,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_42804216(v4, baseUsrSvtData, (System_String_o *)Item, 0);
}


void CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}