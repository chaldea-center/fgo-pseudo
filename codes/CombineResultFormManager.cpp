void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FFC7D & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6617/*"Fgo_20201104"*/, v6);
    byte_49FFC7D = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6617/*"Fgo_20201104"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CombineResultFormManager_TypeInfo->static_fields,
    StringLiteral_6617/*"Fgo_20201104"*/,
    v2,
    v3);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->lotteryList, (int32_t)v9, v11, v12);
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

  if ( (byte_49FFC77 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v3);
    byte_49FFC77 = 1;
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
      sub_1B64324(v4);
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

  if ( (byte_49FFC76 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v1);
    byte_49FFC76 = 1;
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

  if ( (byte_49FFC75 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FFC75 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryReader_o *v18; // x19
  __int64 v19; // x0
  System_String_o *v20; // x20
  CombineResultFormManager_c *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int v24; // w20
  int i; // w25
  __int64 v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x23
  System_Collections_Generic_List_object__o **v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int v36; // w23
  Il2CppObject *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
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

  if ( (byte_49FFC79 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v2);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v9);
    byte_49FFC79 = 1;
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
    v18 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v16, v17);
    System_IO_BinaryReader___ctor(v18, v15, 0LL);
    if ( !v18 )
      sub_1B64324(v19);
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                               v18,
                               v18->klass->vtable._23_ReadChars.methodPtr);
    v21 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v21 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v21->static_fields->SAVE_DATA_VERSION, v20, 0LL) )
    {
      v11 = 0;
    }
    else
    {
      v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
              v18,
              v18->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v24 >= 1 )
      {
        for ( i = 0; i != v24; ++i )
        {
          v26 = sub_1B64314(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v22, v23);
          System_Object___ctor((Il2CppObject *)v26, 0LL);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v26 )
            sub_1B64324(v27);
          *(_DWORD *)(v26 + 16) = v27;
          v30 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_string__TypeInfo,
                                                               v28,
                                                               v29);
          System_Collections_Generic_List_object____ctor(
            v30,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v26 + 24) = v30;
          v31 = (System_Collections_Generic_List_object__o **)(v26 + 24);
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 24), (int32_t)v30, v32, v33);
          v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v36 >= 1 )
          {
            do
            {
              v37 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                                      v18,
                                      v18->klass->vtable._23_ReadChars.methodPtr);
              v40 = *v31;
              if ( !*v31 )
                sub_1B64324(0LL);
              items = v40->fields._items;
              v42 = Method_System_Collections_Generic_List_string__Add__;
              ++v40->fields._version;
              if ( !items )
                sub_1B64324(v40);
              size = v40->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v40,
                  v37,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v40->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v37;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v37, v38, v39);
              }
              --v36;
            }
            while ( v36 );
          }
          v45 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v45 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v45->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1B64324(0LL);
          v47 = lotteryList->fields._items;
          v48 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v47 )
            sub_1B64324(lotteryList);
          v49 = lotteryList->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v26,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            lotteryList->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v26;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), v26, v34, v35);
          }
        }
      }
      v11 = 1;
    }
    klass = v18->klass;
    v52 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        p_offset += 4;
        if ( !v52 )
          goto LABEL_40;
      }
      v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v54 = sub_1BB60A8(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v54)(v18, *(_QWORD *)(v54 + 8));
  }
  else
  {
    v55 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v55);
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

  if ( (byte_49FFC78 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_49FFC78 = 1;
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
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL) )
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
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (name = Item->name) == 0LL )
  {
LABEL_31:
    sub_1B64324(Item);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryWriter_o *v16; // x19
  CombineResultFormManager_c *v17; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  int32_t i; // w21
  CombineResultFormManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x22
  _DWORD *monitor; // x8
  int v27; // w23
  int32_t j; // w24
  System_Collections_Generic_List_object__o *v29; // x0
  Il2CppObject *v30; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0

  if ( (byte_49FFC7A & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v2);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    byte_49FFC7A = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_61613552(v16, v13, 0LL);
  v17 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v17 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1B64324(v17);
  if ( !v16 )
    sub_1B64324(v17);
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    static_fields->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
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
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1B64324(Item);
      v27 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27,
        v16->klass->vtable._18_Write.methodPtr);
      if ( v27 >= 1 )
      {
        for ( j = 0; j != v27; ++j )
        {
          v29 = (System_Collections_Generic_List_object__o *)v25[1].monitor;
          if ( !v29 )
            sub_1B64324(0LL);
          v30 = System_Collections_Generic_List_object___get_Item(
                  v29,
                  j,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v16->klass->vtable._22_Write.method)(
            v16,
            v30,
            v16->klass[1]._1.image);
        }
      }
    }
  }
  klass = v16->klass;
  v32 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v34 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v16, *(_QWORD *)(v34 + 8));
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v41; // x23
  __int64 v42; // x24
  CombineResultFormManager_c *v43; // x0
  _BOOL8 v44; // x0
  int32_t v45; // w1
  int32_t v46; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v48; // x8
  System_String_o *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 type; // x10
  __int64 v55; // x8
  const MethodInfo *v56; // x0
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_49FFC7C & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v20);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_49FFC7C = 1;
  }
  memset(&v60, 0, sizeof(v60));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v22 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v22 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v22,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v60 = v58;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v60.fields._current )
      sub_1B64324(v26);
    klass = v60.fields._current[4].klass;
    if ( !klass )
      sub_1B64324(v26);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1B6432C(v26, v27);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1B64324(v26);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v25 )
        sub_1B64324(v26);
      v32 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v25->fields._items;
      v34 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( !items )
        sub_1B64324(v26);
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          v32,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v28, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v37 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v37 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v37 + 24) )
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
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v42 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v42;
    *(_QWORD *)&v61.fields.fakeValue = v41;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v61, 0LL) )
      break;
  }
  v43 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v43 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v43->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v58;
        ;
        System_Collections_Generic_List_object___Remove(
          v25,
          j.fields._current,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v44 )
      break;
    if ( !v25 )
      sub_1B64324(v44);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v25 )
    goto LABEL_60;
  v45 = v25->fields._size;
  if ( v45 < 1 )
  {
LABEL_56:
    v49 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_39445224(v4, baseUsrSvtData, v49, 0LL);
  }
  v46 = UnityEngine_Random__Range_69087476(0, v45, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v25,
           v46,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  v48 = CombineResultFormManager_TypeInfo;
  v49 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v48 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v48->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0LL
    || (v52 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v53 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v52) )
  {
LABEL_60:
    sub_1B64324(svtVoiceEntity);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v49,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v55 + 32) = v49;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)v49, v50, v51);
  }
  CombineResultFormManager__WriteData(v56);
  return ServantVoiceEntity__lotteryLevelUpVoice_39445224(v4, baseUsrSvtData, v49, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x24
  __int64 v31; // x25
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 type; // x10
  __int64 v49; // x8
  const MethodInfo *v50; // x0
  int32_t v51; // w1
  int32_t v52; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_49FFC7B & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1B640C8(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17);
    byte_49FFC7B = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !v4 )
    goto LABEL_46;
  v18 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v21 = sub_1B64314(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v19, v20);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v21 )
    goto LABEL_46;
  *(_QWORD *)(v21 + 24) = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)v24, v25, v26);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v31;
  *(_QWORD *)&v57.fields.fakeValue = v30;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
  *(_DWORD *)(v21 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v18 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v18,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v32 )
      break;
    if ( !v56.fields._current )
      sub_1B64324(v32);
    klass = v56.fields._current[4].klass;
    if ( !klass )
      sub_1B64324(v32);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1B6432C(v32, v33);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1B64324(v32);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v29 )
        sub_1B64324(v32);
      v38 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v29->fields._items;
      v40 = Method_System_Collections_Generic_List_string__Add__;
      ++v29->fields._version;
      if ( !items )
        sub_1B64324(v32);
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          v38,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v38, v34, v35);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v45 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v45 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v45 + 24) )
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
  v46 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v47 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v46 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v21,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v49 + 32) = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 32), v21, v43, v44);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v50);
  if ( !v29 )
LABEL_46:
    sub_1B64324(svtVoiceEntity);
  v51 = v29->fields._size;
  if ( !v51 )
    return 0LL;
  v52 = UnityEngine_Random__Range_69087476(0, v51, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v29,
           v52,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_39445224(v4, baseUsrSvtData, (System_String_o *)Item, 0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}