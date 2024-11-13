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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B19BB7 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6763/*"Fgo_20201104"*/, v12, v13);
    byte_4B19BB7 = 1;
  }
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6763/*"Fgo_20201104"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineResultFormManager_TypeInfo->static_fields,
    StringLiteral_6763/*"Fgo_20201104"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->lotteryList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  CombineResultFormManager_c *v7; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B19BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v5,
      v6);
    byte_4B19BB1 = 1;
  }
  v7 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
    v7 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v7->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_12;
  if ( lotteryList->fields._size < 1 )
    return;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
    if ( !lotteryList )
LABEL_12:
      sub_1BCAA3C(v7, v1);
  }
  size = lotteryList->fields._size;
  v10 = lotteryList->fields._version + 1;
  lotteryList->fields._size = 0;
  lotteryList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lotteryList->fields._items, 0, size, 0LL);
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineResultFormManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B19BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v1, v2);
    byte_4B19BB0 = 1;
  }
  v3 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_4B19BAF & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B19BAF = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


bool __fastcall CombineResultFormManager__ReadData(const MethodInfo *method)
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
  ManagerConfig_c *v19; // x0
  bool v20; // w21
  CombineResultFormManager_c *v21; // x0
  System_String_o *SaveFileName; // x19
  __int64 v23; // x1
  CombineResultFormManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_IO_BinaryReader_o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  System_String_o *v33; // x20
  CombineResultFormManager_c *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  int v38; // w20
  int i; // w25
  int64_t v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x23
  System_Collections_Generic_List_object__o **v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int v60; // w23
  Il2CppObject *v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_List_object__o *v68; // x0
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x8
  CombineResultFormManager_c *v73; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v80; // x9
  int32_t *p_offset; // x10
  __int64 v82; // x0
  CombineResultFormManager_c *v83; // x0

  if ( (byte_4B19BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17, v18);
    byte_4B19BB3 = 1;
  }
  v19 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( v19->static_fields->UseMock )
    return 1;
  v21 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v21);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v24 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v23);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v24);
    v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v29 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v26, v27, v28);
    System_IO_BinaryReader___ctor(v29, v25, 0LL);
    if ( !v29 )
      sub_1BCAA3C(v30, v31);
    v33 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v29->klass->vtable._22_ReadString.method)(
                               v29,
                               v29->klass->vtable._23_ReadChars.methodPtr);
    v34 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v32);
      v34 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v34->static_fields->SAVE_DATA_VERSION, v33, 0LL) )
    {
      v20 = 0;
    }
    else
    {
      v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v29->klass->vtable._15_ReadInt32.method)(
              v29,
              v29->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v38 >= 1 )
      {
        for ( i = 0; i != v38; ++i )
        {
          v40 = sub_1BCAA2C(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v35, v36, v37);
          System_Object___ctor((Il2CppObject *)v40, 0LL);
          v41 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v29->klass->vtable._15_ReadInt32.method)(
                  v29,
                  v29->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v40 )
            sub_1BCAA3C(v41, v42);
          *(_DWORD *)(v40 + 16) = v41;
          v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_string__TypeInfo,
                                                               v42,
                                                               v43,
                                                               v44);
          System_Collections_Generic_List_object____ctor(
            v45,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v40 + 24) = v45;
          v46 = (System_Collections_Generic_List_object__o **)(v40 + 24);
          sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)v45, v47, v48, v49, v50, v51, v52);
          v60 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v29->klass->vtable._15_ReadInt32.method)(
                  v29,
                  v29->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v60 >= 1 )
          {
            do
            {
              v61 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v29->klass->vtable._22_ReadString.method)(
                                      v29,
                                      v29->klass->vtable._23_ReadChars.methodPtr);
              v68 = *v46;
              if ( !*v46 )
                sub_1BCAA3C(0LL, v61);
              items = v68->fields._items;
              v70 = Method_System_Collections_Generic_List_string__Add__;
              ++v68->fields._version;
              if ( !items )
                sub_1BCAA3C(v68, v61);
              size = v68->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v68,
                  v61,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v72 = &items->obj.klass + size;
                v68->fields._size = size + 1;
                v72[4] = (Il2CppClass *)v61;
                sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v61, v62, v63, v64, v65, v66, v67);
              }
              --v60;
            }
            while ( v60 );
          }
          v73 = CombineResultFormManager_TypeInfo;
          if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v53);
            v73 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v73->static_fields->lotteryList;
          if ( !lotteryList )
            sub_1BCAA3C(0LL, v53);
          v75 = lotteryList->fields._items;
          v76 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
          ++lotteryList->fields._version;
          if ( !v75 )
            sub_1BCAA3C(lotteryList, v53);
          v77 = lotteryList->fields._size;
          if ( (unsigned int)v77 >= v75->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v40,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
          }
          else
          {
            v78 = &v75->obj.klass + v77;
            lotteryList->fields._size = v77 + 1;
            v78[4] = (Il2CppClass *)v40;
            sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), v40, v54, v55, v56, v57, v58, v59);
          }
        }
      }
      v20 = 1;
    }
    klass = v29->klass;
    v80 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v80;
        p_offset += 4;
        if ( !v80 )
          goto LABEL_40;
      }
      v82 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v82 = sub_1C1C7C0(v29, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v82)(v29, *(_QWORD *)(v82 + 8));
  }
  else
  {
    v83 = CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v23);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v83);
    return 0;
  }
  return v20;
}


void __fastcall CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  MethodInfo *Item; // x0
  __int64 v13; // x8
  int32_t i; // w20
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int invoker_method; // w26
  __int64 v17; // x21
  __int64 v18; // x22
  CombineResultFormManager_c *v19; // x0
  const char *name; // x8
  int32_t v21; // w2
  int v22; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B19BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__,
      v8,
      v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    byte_4B19BB2 = 1;
  }
  Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method);
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  }
  v13 = *((_QWORD *)Item[2].virtualMethodPointer + 1);
  if ( !v13 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v13 + 24) )
  {
    if ( !LODWORD(Item[2].parameters) )
      j_il2cpp_runtime_class_init_0(Item, method);
    CombineResultFormManager__ReadData(Item);
  }
  for ( i = 0; ; ++i )
  {
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method);
      Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = (System_Collections_Generic_List_object__o *)*((_QWORD *)Item[2].virtualMethodPointer + 1);
    if ( !lotteryList )
      goto LABEL_31;
    if ( i >= lotteryList->fields._size )
      return;
    if ( !LODWORD(Item[2].parameters) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_31;
    }
    Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                           lotteryList,
                           i,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    invoker_method = (int)Item->invoker_method;
    v18 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v17;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL) )
      break;
  }
  v19 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method);
    v19 = CombineResultFormManager_TypeInfo;
  }
  Item = (MethodInfo *)v19->static_fields->lotteryList;
  if ( !Item
    || (Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Item,
                               i,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (name = Item->name) == 0LL )
  {
LABEL_31:
    sub_1BCAA3C(Item, method);
  }
  v21 = *((_DWORD *)name + 6);
  v22 = *((_DWORD *)name + 7) + 1;
  *((_DWORD *)name + 6) = 0;
  *((_DWORD *)name + 7) = v22;
  if ( v21 >= 1 )
    System_Array__Clear(*((System_Array_o **)name + 2), 0, v21, 0LL);
}


bool __fastcall CombineResultFormManager__WriteData(const MethodInfo *method)
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
  ManagerConfig_c *v17; // x0
  CombineResultFormManager_c *v19; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_IO_BinaryWriter_o *v25; // x19
  __int64 v26; // x1
  CombineResultFormManager_c *v27; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  __int64 v31; // x1
  int32_t i; // w21
  CombineResultFormManager_c *v33; // x0
  System_Collections_Generic_List_object__o *v34; // x0
  Il2CppObject *Item; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x22
  _DWORD *monitor; // x8
  int v39; // w23
  int32_t j; // w24
  System_Collections_Generic_List_object__o *v41; // x0
  Il2CppObject *v42; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 v46; // x0

  if ( (byte_4B19BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__,
      v13,
      v14);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v15, v16);
    byte_4B19BB4 = 1;
  }
  v17 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v17 = ManagerConfig_TypeInfo;
  }
  if ( v17->static_fields->UseMock )
    return 0;
  v19 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v19);
  v21 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v25 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v22, v23, v24);
  System_IO_BinaryWriter___ctor_62639712(v25, v21, 0LL);
  v27 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v26);
    v27 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v27->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_1BCAA3C(v27, v26);
  if ( !v25 )
    sub_1BCAA3C(v27, v26);
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v25->klass->vtable._22_Write.method)(
    v25,
    static_fields->SAVE_DATA_VERSION,
    v25->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
    v25,
    (unsigned int)size,
    v25->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v33 = CombineResultFormManager_TypeInfo;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v31);
        v33 = CombineResultFormManager_TypeInfo;
      }
      v34 = (System_Collections_Generic_List_object__o *)v33->static_fields->lotteryList;
      if ( !v34 )
        sub_1BCAA3C(0LL, v31);
      Item = System_Collections_Generic_List_object___get_Item(
               v34,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v37 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v36);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_1BCAA3C(Item, v36);
      v39 = monitor[6];
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
        v25,
        LODWORD(Item[1].klass),
        v25->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
        v25,
        (unsigned int)v39,
        v25->klass->vtable._18_Write.methodPtr);
      if ( v39 >= 1 )
      {
        for ( j = 0; j != v39; ++j )
        {
          v41 = (System_Collections_Generic_List_object__o *)v37[1].monitor;
          if ( !v41 )
            sub_1BCAA3C(0LL, v31);
          v42 = System_Collections_Generic_List_object___get_Item(
                  v41,
                  j,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v25->klass->vtable._22_Write.method)(
            v25,
            v42,
            v25->klass[1]._1.image);
        }
      }
    }
  }
  klass = v25->klass;
  v44 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      p_offset += 4;
      if ( !v44 )
        goto LABEL_29;
    }
    v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v46 = sub_1C1C7C0(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v46)(v25, *(_QWORD *)(v46 + 8));
  return 1;
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResult(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x21
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  int32_t id; // w29
  __int64 v63; // x23
  __int64 v64; // x24
  CombineResultFormManager_c *v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w1
  int32_t v69; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v71; // x8
  System_String_o *v72; // x21
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 type; // x10
  __int64 v82; // x8
  const MethodInfo *v83; // x0
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4B19BB6 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, baseUsrSvtData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v27,
      v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v31, v32);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__,
      v33,
      v34);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v35, v36);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1BCA7E0(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               v37,
                                               v38);
    byte_4B19BB6 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  memset(&j, 0, sizeof(j));
  if ( !v4 )
    goto LABEL_60;
  v39 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v40,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v39 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    v39,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v87 = v85;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v44 )
      break;
    if ( !v87.fields._current )
      sub_1BCAA3C(v44, v45);
    klass = v87.fields._current[4].klass;
    if ( !klass )
      sub_1BCAA3C(v44, v45);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1BCAA44(v44, v45);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1BCAA3C(v44, v45);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v43 )
        sub_1BCAA3C(v44, v45);
      v54 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v43->fields._items;
      v56 = Method_System_Collections_Generic_List_string__Add__;
      ++v43->fields._version;
      if ( !items )
        sub_1BCAA3C(v44, v54);
      size = v43->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          v54,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v43->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v54;
        sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v54, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v59 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v59 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v59 + 24) )
  {
    if ( !svtVoiceEntity[5].fields.type )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
  }
  for ( i = 0; ; ++i )
  {
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
      svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
    if ( !lotteryList )
      goto LABEL_60;
    if ( i >= lotteryList->fields._size )
      goto LABEL_56;
    if ( !svtVoiceEntity[5].fields.type )
    {
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_60;
    }
    svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               lotteryList,
                                               i,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    id = svtVoiceEntity->fields.id;
    v64 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v63 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseUsrSvtData);
    *(_QWORD *)&v88.fields.currentCryptoKey = v64;
    *(_QWORD *)&v88.fields.fakeValue = v63;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v88, 0LL) )
      break;
  }
  v65 = CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    v65 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v65->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v85;
        ;
        System_Collections_Generic_List_object___Remove(
          v43,
          j.fields._current,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &j,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v66 )
      break;
    if ( !v43 )
      sub_1BCAA3C(v66, v67);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &j,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v43 )
    goto LABEL_60;
  v68 = v43->fields._size;
  if ( v68 < 1 )
  {
LABEL_56:
    v72 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_40589396(v4, baseUsrSvtData, v72, 0LL);
  }
  v69 = UnityEngine_Random__Range_70113984(0, v68, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v43,
           v69,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  v71 = CombineResultFormManager_TypeInfo;
  v72 = (System_String_o *)Item;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    v71 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v71->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0LL
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0LL
    || (v79 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v80 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v79) )
  {
LABEL_60:
    sub_1BCAA3C(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v79 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v72,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
  }
  else
  {
    v82 = v79 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v82 + 32) = v72;
    sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 32), (int64_t)v72, v73, v74, v75, v76, v77, v78);
  }
  CombineResultFormManager__WriteData(v83);
  return ServantVoiceEntity__lotteryLevelUpVoice_40589396(v4, baseUsrSvtData, v72, 0LL);
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResultInit(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
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
  System_Collections_Generic_List_object__o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  int64_t v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x22
  __int64 v50; // x24
  __int64 v51; // x25
  _BOOL8 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppClass *klass; // x8
  void *data; // x8
  Il2CppObject *v62; // x1
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 type; // x10
  __int64 v77; // x8
  const MethodInfo *v78; // x0
  int32_t v79; // w1
  int32_t v80; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4B19BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, baseUsrSvtData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_1BCA7E0(
                                               &CombineResultFormManager_svtUnplayedVoiceList_TypeInfo,
                                               v29,
                                               v30);
    byte_4B19BB5 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  if ( !v4 )
    goto LABEL_46;
  v31 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(
                                                       v4,
                                                       baseUsrSvtData,
                                                       0LL);
  v35 = sub_1BCAA2C(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v32, v33, v34);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v35 )
    goto LABEL_46;
  *(_QWORD *)(v35 + 24) = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  v51 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseUsrSvtData);
  *(_QWORD *)&v85.fields.currentCryptoKey = v51;
  *(_QWORD *)&v85.fields.fakeValue = v50;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v85, 0LL);
  *(_DWORD *)(v35 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v31 )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    v31,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v84 = v83;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v84,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v52 )
      break;
    if ( !v84.fields._current )
      sub_1BCAA3C(v52, v53);
    klass = v84.fields._current[4].klass;
    if ( !klass )
      sub_1BCAA3C(v52, v53);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_1BCAA44(v52, v53);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_1BCAA3C(v52, v53);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v49 )
        sub_1BCAA3C(v52, v53);
      v62 = (Il2CppObject *)*((_QWORD *)data + 2);
      items = v49->fields._items;
      v64 = Method_System_Collections_Generic_List_string__Add__;
      ++v49->fields._version;
      if ( !items )
        sub_1BCAA3C(v52, v62);
      size = v49->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          v62,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &items->obj.klass + size;
        v49->fields._size = size + 1;
        v66[4] = (Il2CppClass *)v62;
        sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), (int64_t)v62, v54, v55, v56, v57, v58, v59);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v84,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v73 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v73 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v73 + 24) )
  {
    if ( !svtVoiceEntity[5].fields.type )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  if ( !svtVoiceEntity[5].fields.type )
  {
    j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = *(ServantVoiceEntity_o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !svtVoiceEntity )
    goto LABEL_46;
  v74 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v75 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v74 )
    goto LABEL_46;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v74 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v35,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = v74 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v77 + 32) = v35;
    sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 32), v35, v67, v68, v69, v70, v71, v72);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v78);
  if ( !v49 )
LABEL_46:
    sub_1BCAA3C(svtVoiceEntity, baseUsrSvtData);
  v79 = v49->fields._size;
  if ( !v79 )
    return 0LL;
  v80 = UnityEngine_Random__Range_70113984(0, v79, 0LL);
  Item = System_Collections_Generic_List_object___get_Item(
           v49,
           v80,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice_40589396(v4, baseUsrSvtData, (System_String_o *)Item, 0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}