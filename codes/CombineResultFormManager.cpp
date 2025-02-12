void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
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
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BCB555 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v1);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_6803/*"Fgo_20201104"*/, v10);
    byte_4BCB555 = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6803/*"Fgo_20201104"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CombineResultFormManager_TypeInfo->static_fields,
    StringLiteral_6803/*"Fgo_20201104"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->lotteryList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BCB54F & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v1);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v2);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v3);
    byte_4BCB54F = 1;
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
      sub_1C1AE30(v4, v1);
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

  if ( (byte_4BCB54E & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v1);
    byte_4BCB54E = 1;
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

  if ( (byte_4BCB54D & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, v1);
    sub_1C1ABD4(&DatFileName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BCB54D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_63051628(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
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
  int64_t v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_object__o **v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int v41; // w23
  Il2CppObject *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_List_object__o *v49; // x0
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x8
  CombineResultFormManager_c *v54; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 v63; // x0
  CombineResultFormManager_c *v64; // x0

  if ( (byte_4BCB551 & 1) == 0 )
  {
    sub_1C1ABD4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v2);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v8);
    sub_1C1ABD4(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v9);
    byte_4BCB551 = 1;
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
    v16 = (System_IO_BinaryReader_o *)sub_1C1AE20(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v16, v15, 0LL);
    if ( !v16 )
      sub_1C1AE30(v17, v18);
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
          v23 = sub_1C1AE20(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0LL);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v23 )
            sub_1C1AE30(v24, v25);
          *(_DWORD *)(v23 + 16) = v24;
          v26 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v26,
            (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v23 + 24) = v26;
          v27 = (System_Collections_Generic_List_object__o **)(v23 + 24);
          sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)v26, v28, v29, v30, v31, v32, v33);
          v41 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v41 >= 1 )
          {
            do
            {
              v42 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                      v16,
                                      v16->klass->vtable._23_ReadChars.methodPtr);
              v49 = *v27;
              if ( !*v27 )
                sub_1C1AE30(0LL, v42);
              items = v49->fields._items;
              v51 = Method_System_Collections_Generic_List_string__Add__;
              ++v49->fields._version;
              if ( !items )
                sub_1C1AE30(v49, v42);
              size = v49->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v49,
                  v42,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v53 = &items->obj.klass + size;
                v49->fields._size = size + 1;
                v53[4] = (Il2CppClass *)v42;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v42, v43, v44, v45, v46, v47, v48);
              }
              --v41;
            }
            while ( v41 );
          }
          v54 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v54 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v54->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1C1AE30(0LL, v34);
          v56 = lotteryList->fields._items;
          v57 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v56 )
            sub_1C1AE30(lotteryList, v34);
          v58 = lotteryList->fields._size;
          if ( (unsigned int)v58 >= v56->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v23,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &v56->obj.klass + v58;
            lotteryList->fields._size = v58 + 1;
            v59[4] = (Il2CppClass *)v23;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v59 + 4), v23, v35, v36, v37, v38, v39, v40);
          }
        }
      }
      v11 = 1;
    }
    klass = v16->klass;
    v61 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v61;
        p_offset += 4;
        if ( !v61 )
          goto LABEL_40;
      }
      v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v63 = sub_1C6CBB4(v16, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v63)(v16, *(_QWORD *)(v63 + 8));
  }
  else
  {
    v64 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v64);
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

  if ( (byte_4BCB550 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4BCB550 = 1;
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
                           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v18, 0LL) )
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
                               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (name = Item->name) == 0LL )
  {
LABEL_31:
    sub_1C1AE30(Item, method);
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

  if ( (byte_4BCB552 & 1) == 0 )
  {
    sub_1C1ABD4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v2);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v7);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v8);
    byte_4BCB552 = 1;
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
  v14 = (System_IO_BinaryWriter_o *)sub_1C1AE20(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63278860(v14, v13, 0LL);
  v16 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v16 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1C1AE30(v16, v15);
  if ( !v14 )
    sub_1C1AE30(v16, v15);
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
        sub_1C1AE30(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1C1AE30(0LL, v25);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1C1AE30(Item, v25);
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
            sub_1C1AE30(0LL, v20);
          v31 = System_Collections_Generic_List_object___get_Item(
                  v30,
                  j,
                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
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
    v35 = sub_1C6CBB4(v14, System_IDisposable_TypeInfo, 0LL);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v43; // x23
  __int64 v44; // x24
  CombineResultFormManager_c *v45; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w1
  int32_t v49; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v51; // x8
  System_String_o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 type; // x10
  __int64 v62; // x8
  const MethodInfo *v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4BCB554 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v20);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4BCB554 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v22 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v22 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    v22,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v67 = v65;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v24 )
      break;
    if ( !v67.fields._current )
      sub_1C1AE30(v24, v25);
    klass = v67.fields._current[4].klass;
    if ( !klass )
      sub_1C1AE30(v24, v25);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C1AE38(v24, v25);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C1AE30(v24, v25);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v23 )
        sub_1C1AE30(v24, v25);
      v34 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v23->fields._items;
      v36 = Method_System_Collections_Generic_List_string__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1C1AE30(v24, v34);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v34,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v34;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v34, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v39 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v39 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v39 + 24) )
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
                                               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v44 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = v44;
    *(_QWORD *)&v68.fields.fakeValue = v43;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v68, 0LL) )
      break;
  }
  v45 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v45 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v45->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v65;
        ;
        System_Collections_Generic_List_object___Remove(
          v23,
          j.fields._current,
          (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v46 )
      break;
    if ( !v23 )
      sub_1C1AE30(v46, v47);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v23 )
    goto LABEL_60;
  v48 = v23->fields._size;
  if ( v48 < 1 )
  {
LABEL_56:
    v52 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_41080608(v4, baseUsrSvtData, v52, 0LL);
  }
  v49 = UnityEngine_Random__Range_70754152(0, v48, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v23,
           v49,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  v51 = CombineResultFormManager_TypeInfo;
  v52 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v51 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v51->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0LL
    || (v59 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v60 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v59) )
  {
LABEL_60:
    sub_1C1AE30(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v59 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v52,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v62 + 32) = v52;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)v52, v53, v54, v55, v56, v57, v58);
  }
  CombineResultFormManager__WriteData(v63);
  return ServantVoiceEntity__lotteryLevelUpVoice_41080608(v4, baseUsrSvtData, v52, 0LL);
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
  int64_t v19; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x8
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 type; // x10
  __int64 v55; // x8
  const MethodInfo *v56; // x0
  int32_t v57; // w1
  int32_t v58; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4BCB553 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1C1ABD4(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17);
    byte_4BCB553 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  if ( !v4 )
    goto LABEL_46;
  v18 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v19 = sub_1C1AE20(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v19 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 24) = v20;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v29;
  *(_QWORD *)&v63.fields.fakeValue = v28;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v63, 0LL);
  *(_DWORD *)(v19 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v18 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    v18,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v30 )
      break;
    if ( !v62.fields._current )
      sub_1C1AE30(v30, v31);
    klass = v62.fields._current[4].klass;
    if ( !klass )
      sub_1C1AE30(v30, v31);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1C1AE38(v30, v31);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1C1AE30(v30, v31);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v27 )
        sub_1C1AE30(v30, v31);
      v40 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v27->fields._items;
      v42 = Method_System_Collections_Generic_List_string__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1C1AE30(v30, v40);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v40,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v40;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v40, v32, v33, v34, v35, v36, v37);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v51 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v51 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v51 + 24) )
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
  v52 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v53 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v52 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v19,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v55 + 32) = v19;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v55 + 32), v19, v45, v46, v47, v48, v49, v50);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v56);
  if ( !v27 )
LABEL_46:
    sub_1C1AE30(svtVoiceEntity, baseUsrSvtData);
  v57 = v27->fields._size;
  if ( !v57 )
    return 0LL;
  v58 = UnityEngine_Random__Range_70754152(0, v57, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v27,
           v58,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_41080608(v4, baseUsrSvtData, (System_String_o *)Item, 0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}