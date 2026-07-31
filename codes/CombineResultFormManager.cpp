void CombineResultFormManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_object__o *v8; // x19
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5932042 & 1) == 0 )
  {
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
    sub_21FFC50(&StringLiteral_6950/*"Fgo_20201104"*/);
    byte_5932042 = 1;
  }
  v7 = StringLiteral_6950/*"Fgo_20201104"*/;
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6950/*"Fgo_20201104"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CombineResultFormManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->lotteryList,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineResultFormManager_c *v3; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_593203C & 1) == 0 )
  {
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    byte_593203C = 1;
  }
  v3 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1, v2);
    v3 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v3->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_12;
  if ( lotteryList->fields._size < 1 )
    return;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
    if ( !lotteryList )
LABEL_12:
      sub_21FFECC(v3, v1);
  }
  size = lotteryList->fields._size;
  v6 = lotteryList->fields._version + 1;
  lotteryList->fields._size = 0;
  lotteryList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)lotteryList->fields._items, 0, size, 0);
}


void CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CombineResultFormManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_593203B & 1) == 0 )
  {
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    byte_593203B = 1;
  }
  v3 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1, v2);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_String_o *CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_593203A & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593203A = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1, v2);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v3, v4);
  FileName = DatFileName__getFileName(4, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


bool CombineResultFormManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  bool v4; // w19
  CombineResultFormManager_c *v5; // x0
  System_String_o *SaveFileName; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  CombineResultFormManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x19
  CombineResultFormManager_c *v17; // x0
  __int64 v18; // x1
  int v19; // w19
  int i; // w29
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_string__c *v24; // x8
  System_Collections_Generic_List_object__o *v25; // x22
  System_Collections_Generic_List_object__o **v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int v40; // w22
  Il2CppObject *v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  CombineResultFormManager_c *v53; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v60; // x9
  int *p_offset; // x10
  __int64 v62; // x0
  CombineResultFormManager_c *v63; // x0
  System_IO_BinaryReader_o *v65; // [xsp+28h] [xbp-68h]

  if ( (byte_593203E & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_593203E = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1, v2);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v5);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v7, v8);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v65 = v11;
    if ( !v11 )
      sub_21FFECC(v12, v13);
    v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v17 = CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v14, v15);
      v17 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0) )
    {
      v4 = 0;
    }
    else
    {
      if ( !v65 )
        sub_21FFECC(0, v18);
      v19 = ((__int64 (*)(void))v65->klass->vtable._15_ReadInt32.methodPtr)();
      if ( v19 >= 1 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = sub_21FFEBC(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v21, 0);
          v22 = ((__int64 (*)(void))v65->klass->vtable._15_ReadInt32.methodPtr)();
          if ( !v21 )
            sub_21FFECC(v22, v23);
          v24 = System_Collections_Generic_List_string__TypeInfo;
          *(_DWORD *)(v21 + 16) = v22;
          v25 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v24);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v21 + 24) = v25;
          v26 = (System_Collections_Generic_List_object__o **)(v21 + 24);
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 24), (int32_t)v25, v27, v28, v29, v30, v31, v32);
          v40 = ((__int64 (*)(void))v65->klass->vtable._15_ReadInt32.methodPtr)();
          if ( v40 >= 1 )
          {
            do
            {
              v41 = (Il2CppObject *)((__int64 (*)(void))v65->klass->vtable._22_ReadString.methodPtr)();
              v48 = *v26;
              if ( !*v26
                || (items = v48->fields._items,
                    v50 = Method_System_Collections_Generic_List_string__Add__,
                    ++v48->fields._version,
                    !items) )
              {
                sub_21FFECC(v48, v41);
              }
              size = v48->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v48,
                  v41,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = &items->obj.klass + size;
                v48->fields._size = size + 1;
                v52[4] = (Il2CppClass *)v41;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v41, v42, v43, v44, v45, v46, v47);
              }
              --v40;
            }
            while ( v40 );
          }
          v53 = CombineResultFormManager_TypeInfo;
          if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v33, v34);
            v53 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v53->static_fields->lotteryList;
          if ( !lotteryList
            || (v55 = lotteryList->fields._items,
                v56 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__,
                ++lotteryList->fields._version,
                !v55) )
          {
            sub_21FFECC(lotteryList, v33);
          }
          v57 = lotteryList->fields._size;
          if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v21,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &v55->obj.klass + v57;
            lotteryList->fields._size = v57 + 1;
            v58[4] = (Il2CppClass *)v21;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v58 + 4), v21, v34, v35, v36, v37, v38, v39);
          }
        }
      }
      v4 = 1;
    }
    if ( v65 )
    {
      klass = v65->klass;
      v60 = *(unsigned __int16 *)&v65->klass->_2.rank;
      if ( *(_WORD *)&v65->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v60;
          p_offset += 4;
          if ( !v60 )
            goto LABEL_42;
        }
        v62 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_42:
        v62 = sub_2237E2C(v65, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v62)(v65, *(_QWORD *)(v62 + 8));
    }
  }
  else
  {
    v63 = CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v7, v8);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v63);
    return 0;
  }
  return v4;
}


void CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  __int64 v2; // x2
  MethodInfo *Item; // x0
  __int64 v5; // x8
  int32_t i; // w20
  System_Collections_Generic_List_object__o *lotteryList; // x8
  __int64 v8; // x2
  __int64 v9; // x21
  __int64 v10; // x22
  int invoker_method; // w26
  CombineResultFormManager_c *v12; // x0
  const char *name; // x8
  int32_t v14; // w2
  int v15; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_593203D & 1) == 0 )
  {
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593203D = 1;
  }
  Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method, v2);
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  }
  v5 = *((_QWORD *)Item[2].virtualMethodPointer + 1);
  if ( !v5 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v5 + 24) )
  {
    if ( !HIDWORD(Item[2].parameters) )
      j_il2cpp_runtime_class_init_0(Item, method, v2);
    CombineResultFormManager__ReadData(Item);
  }
  for ( i = 0; ; ++i )
  {
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method, v2);
      Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = (System_Collections_Generic_List_object__o *)*((_QWORD *)Item[2].virtualMethodPointer + 1);
    if ( !lotteryList )
      goto LABEL_31;
    if ( i >= lotteryList->fields._size )
      return;
    if ( !HIDWORD(Item[2].parameters) )
    {
      j_il2cpp_runtime_class_init_0(Item, method, v2);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_31;
    }
    Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                           lotteryList,
                           i,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    invoker_method = (int)Item->invoker_method;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v8);
    *(_QWORD *)&v16.fields.currentCryptoKey = v9;
    *(_QWORD *)&v16.fields.fakeValue = v10;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0) )
      break;
  }
  v12 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method, v2);
    v12 = CombineResultFormManager_TypeInfo;
  }
  Item = (MethodInfo *)v12->static_fields->lotteryList;
  if ( !Item
    || (Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Item,
                               i,
                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (name = Item->name) == 0 )
  {
LABEL_31:
    sub_21FFECC(Item, method);
  }
  v14 = *((_DWORD *)name + 6);
  v15 = *((_DWORD *)name + 7) + 1;
  *((_DWORD *)name + 6) = 0;
  *((_DWORD *)name + 7) = v15;
  if ( v14 >= 1 )
    System_Array__Clear(*((System_Array_o **)name + 2), 0, v14, 0);
}


bool CombineResultFormManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  CombineResultFormManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  CombineResultFormManager_c *v11; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w19
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t i; // w20
  CombineResultFormManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  Il2CppObject *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  _DWORD *monitor; // x8
  int v23; // w22
  int32_t j; // w23
  System_Collections_Generic_List_object__o *v25; // x0
  Il2CppObject *v26; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 v30; // x0
  System_IO_BinaryWriter_o *v31; // [xsp+28h] [xbp-58h]

  if ( (byte_593203F & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_593203F = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1, v2);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v8, v7, 0);
  v11 = CombineResultFormManager_TypeInfo;
  v31 = v8;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v9, v10);
    v11 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v11->static_fields->lotteryList;
  if ( !lotteryList )
    sub_21FFECC(v11, v9);
  if ( !v8 )
    sub_21FFECC(0, v9);
  size = lotteryList->fields._size;
  v31->klass->vtable._22_Write.methodPtr();
  v31->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v17 = CombineResultFormManager_TypeInfo;
      if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v14, v15);
        v17 = CombineResultFormManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->lotteryList;
      if ( !v18 )
        sub_21FFECC(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               i,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v21 = Item;
      if ( !Item )
        sub_21FFECC(0, v20);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_21FFECC(Item, v20);
      if ( !v31 )
        sub_21FFECC(0, v20);
      v23 = monitor[6];
      v31->klass->vtable._17_Write.methodPtr();
      v31->klass->vtable._17_Write.methodPtr();
      if ( v23 >= 1 )
      {
        for ( j = 0; j != v23; ++j )
        {
          v25 = (System_Collections_Generic_List_object__o *)v21[1].monitor;
          if ( !v25 )
            sub_21FFECC(0, v14);
          v26 = System_Collections_Generic_List_object___get_Item(
                  v25,
                  j,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v31->klass->vtable._22_Write.methodPtr)(
            v31,
            v26,
            v31->klass->vtable._22_Write.method);
        }
      }
    }
  }
  if ( v31 )
  {
    klass = v31->klass;
    v28 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_31;
      }
      v30 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_31:
      v30 = sub_2237E2C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
  }
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
  Il2CppObject *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppClass *klass; // x8
  void *data; // x9
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  __int64 v21; // x2
  __int64 v22; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  __int64 v25; // x2
  __int64 v26; // x23
  __int64 v27; // x24
  int32_t id; // w29
  CombineResultFormManager_c *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w1
  int32_t v33; // w0
  Il2CppObject *Item; // x0
  __int64 v35; // x2
  CombineResultFormManager_c *v36; // x8
  System_String_o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 type; // x10
  __int64 v47; // x8
  const MethodInfo *v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_5932041 & 1) == 0 )
  {
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5932041 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  if ( !v4 )
    goto LABEL_60;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v52 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v52;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v52,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v52.fields._current )
      sub_21FFECC(v7, v8);
    klass = v52.fields._current[4].klass;
    if ( !klass )
      sub_21FFECC(v7, v8);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_21FFED4(v7);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_21FFECC(v7, v8);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v6
        || (items = v6->fields._items,
            v8 = (Il2CppObject *)*((_QWORD *)data + 2),
            v18 = Method_System_Collections_Generic_List_string__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_21FFECC(v7, v8);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v8,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v8;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData, v21);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v22 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v22 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v22 + 24) )
  {
    if ( !*(&svtVoiceEntity[5].fields.type + 1) )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData, v21);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
  }
  for ( i = 0; ; ++i )
  {
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData, v21);
      svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
    if ( !lotteryList )
      goto LABEL_60;
    if ( i >= lotteryList->fields._size )
      goto LABEL_56;
    if ( !*(&svtVoiceEntity[5].fields.type + 1) )
    {
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData, v21);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_60;
    }
    svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               lotteryList,
                                               i,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    id = svtVoiceEntity->fields.id;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseUsrSvtData, v25);
    *(_QWORD *)&v53.fields.currentCryptoKey = v26;
    *(_QWORD *)&v53.fields.fakeValue = v27;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v53, 0) )
      break;
  }
  v29 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData, v21);
    v29 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v29->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v30 )
      break;
    if ( !v6 )
      sub_21FFECC(v30, v31);
    System_Collections_Generic_List_object___Remove(
      v6,
      v51.fields._current,
      (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v6 )
    goto LABEL_60;
  v32 = v6->fields._size;
  if ( v32 < 1 )
  {
LABEL_56:
    v37 = 0;
    return ServantVoiceEntity__lotteryLevelUpVoice(v4, baseUsrSvtData, v37, 0);
  }
  v33 = UnityEngine_Random__Range_83187376(0, v32, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v6,
           v33,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  v36 = CombineResultFormManager_TypeInfo;
  v37 = (System_String_o *)Item;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData, v35);
    v36 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v36->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0
    || (v44 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v45 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v44) )
  {
LABEL_60:
    sub_21FFECC(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v37,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v47 + 32) = v37;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v47 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
  }
  CombineResultFormManager__WriteData(v48);
  return ServantVoiceEntity__lotteryLevelUpVoice(v4, baseUsrSvtData, v37, 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x24
  __int64 v17; // x25
  _BOOL8 v18; // x0
  Il2CppObject *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppClass *klass; // x8
  void *data; // x9
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
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
  if ( (byte_5932040 & 1) == 0 )
  {
    sub_21FFC50(&CombineResultFormManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_21FFC50(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_5932040 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !v4 )
    goto LABEL_45;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = sub_21FFEBC(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_45;
  *(_QWORD *)(v6 + 24) = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_45;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseUsrSvtData, v15);
  *(_QWORD *)&v50.fields.currentCryptoKey = v16;
  *(_QWORD *)&v50.fields.fakeValue = v17;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v50, 0);
  *(_DWORD *)(v6 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v5 )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v49 = v48;
  v48.fields._list = 0;
  *(_QWORD *)&v48.fields._index = &v49;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v18 )
      break;
    if ( !v49.fields._current )
      sub_21FFECC(v18, v19);
    klass = v49.fields._current[4].klass;
    if ( !klass )
      sub_21FFECC(v18, v19);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_21FFED4(v18);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_21FFECC(v18, v19);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v14
        || (items = v14->fields._items,
            v19 = (Il2CppObject *)*((_QWORD *)data + 2),
            v29 = Method_System_Collections_Generic_List_string__Add__,
            ++v14->fields._version,
            !items) )
      {
        sub_21FFECC(v18, v19);
      }
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData, v32);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v38 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v38 )
    goto LABEL_45;
  if ( !*(_DWORD *)(v38 + 24) )
  {
    if ( !*(&svtVoiceEntity[5].fields.type + 1) )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData, v32);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  if ( !*(&svtVoiceEntity[5].fields.type + 1) )
  {
    j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData, v32);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = *(ServantVoiceEntity_o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !svtVoiceEntity )
    goto LABEL_45;
  v39 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v40 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v39 )
    goto LABEL_45;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v6,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v42 + 32) = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 32), v6, v32, v33, v34, v35, v36, v37);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v43);
  if ( !v14 )
LABEL_45:
    sub_21FFECC(svtVoiceEntity, baseUsrSvtData);
  v44 = v14->fields._size;
  if ( !v44 )
    return 0;
  v45 = UnityEngine_Random__Range_83187376(0, v44, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v14,
           v45,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice(v4, baseUsrSvtData, (System_String_o *)Item, 0);
}


void CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}