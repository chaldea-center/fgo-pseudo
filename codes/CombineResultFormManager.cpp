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

  if ( (byte_5974C1D & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
    sub_2213A60(&StringLiteral_6962/*"Fgo_20201104"*/);
    byte_5974C1D = 1;
  }
  v7 = StringLiteral_6962/*"Fgo_20201104"*/;
  CombineResultFormManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6962/*"Fgo_20201104"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CombineResultFormManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  static_fields->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v8;
  sub_2213A04(
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
  CombineResultFormManager_c *v2; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5974C17 & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    byte_5974C17 = 1;
  }
  v2 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
    v2 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v2->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_12;
  if ( lotteryList->fields._size < 1 )
    return;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
    if ( !lotteryList )
LABEL_12:
      sub_2213CDC(v2, v1);
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
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5974C16 & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    byte_5974C16 = 1;
  }
  v2 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_String_o *CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5974C15 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5974C15 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(4, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


bool CombineResultFormManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  bool v3; // w19
  CombineResultFormManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  __int64 v6; // x1
  CombineResultFormManager_c *v7; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x19
  CombineResultFormManager_c *v14; // x0
  __int64 v15; // x1
  int v16; // w19
  int i; // w29
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_string__c *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x22
  System_Collections_Generic_List_object__o **v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int v37; // w22
  Il2CppObject *v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x0
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x8
  CombineResultFormManager_c *v50; // x0
  System_Collections_Generic_List_object__o *lotteryList; // x0
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v57; // x9
  int *p_offset; // x10
  __int64 v59; // x0
  CombineResultFormManager_c *v60; // x0
  System_IO_BinaryReader_o *v62; // [xsp+28h] [xbp-68h]

  if ( (byte_5974C19 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_5974C19 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v7 = CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v6);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v7);
    v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v9 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0);
    v62 = v9;
    if ( !v9 )
      sub_2213CDC(v10, v11);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                               v9,
                               v9->klass->vtable._22_ReadString.method);
    v14 = CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v12);
      v14 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0) )
    {
      v3 = 0;
    }
    else
    {
      if ( !v62 )
        sub_2213CDC(0, v15);
      v16 = ((__int64 (*)(void))v62->klass->vtable._15_ReadInt32.methodPtr)();
      if ( v16 >= 1 )
      {
        for ( i = 0; i != v16; ++i )
        {
          v18 = sub_2213CCC(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0);
          v19 = ((__int64 (*)(void))v62->klass->vtable._15_ReadInt32.methodPtr)();
          if ( !v18 )
            sub_2213CDC(v19, v20);
          v21 = System_Collections_Generic_List_string__TypeInfo;
          *(_DWORD *)(v18 + 16) = v19;
          v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v21);
          System_Collections_Generic_List_object____ctor(
            v22,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v18 + 24) = v22;
          v23 = (System_Collections_Generic_List_object__o **)(v18 + 24);
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 24), (int32_t)v22, v24, v25, v26, v27, v28, v29);
          v37 = ((__int64 (*)(void))v62->klass->vtable._15_ReadInt32.methodPtr)();
          if ( v37 >= 1 )
          {
            do
            {
              v38 = (Il2CppObject *)((__int64 (*)(void))v62->klass->vtable._22_ReadString.methodPtr)();
              v45 = *v23;
              if ( !*v23
                || (items = v45->fields._items,
                    v47 = Method_System_Collections_Generic_List_string__Add__,
                    ++v45->fields._version,
                    !items) )
              {
                sub_2213CDC(v45, v38);
              }
              size = v45->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v45,
                  v38,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                v49 = &items->obj.klass + size;
                v45->fields._size = size + 1;
                v49[4] = (Il2CppClass *)v38;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v38, v39, v40, v41, v42, v43, v44);
              }
              --v37;
            }
            while ( v37 );
          }
          v50 = CombineResultFormManager_TypeInfo;
          if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v30);
            v50 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_object__o *)v50->static_fields->lotteryList;
          if ( !lotteryList
            || (v52 = lotteryList->fields._items,
                v53 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__,
                ++lotteryList->fields._version,
                !v52) )
          {
            sub_2213CDC(lotteryList, v30);
          }
          v54 = lotteryList->fields._size;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              lotteryList,
              (Il2CppObject *)v18,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            lotteryList->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)v18;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), v18, v31, v32, v33, v34, v35, v36);
          }
        }
      }
      v3 = 1;
    }
    if ( v62 )
    {
      klass = v62->klass;
      v57 = *(unsigned __int16 *)&v62->klass->_2.rank;
      if ( *(_WORD *)&v62->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v57;
          p_offset += 4;
          if ( !v57 )
            goto LABEL_42;
        }
        v59 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_42:
        v59 = sub_224BC3C(v62, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v59)(v62, *(_QWORD *)(v59 + 8));
    }
  }
  else
  {
    v60 = CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v6);
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v60);
    return 0;
  }
  return v3;
}


void CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  MethodInfo *Item; // x0
  __int64 v4; // x8
  int32_t i; // w20
  System_Collections_Generic_List_object__o *lotteryList; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int invoker_method; // w26
  CombineResultFormManager_c *v10; // x0
  const char *name; // x8
  int32_t v12; // w2
  int v13; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5974C18 & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974C18 = 1;
  }
  Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method);
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
  }
  v4 = *((_QWORD *)Item[2].virtualMethodPointer + 1);
  if ( !v4 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v4 + 24) )
  {
    if ( !HIDWORD(Item[2].parameters) )
      j_il2cpp_runtime_class_init_0(Item, method);
    CombineResultFormManager__ReadData(Item);
  }
  for ( i = 0; ; ++i )
  {
    Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method);
      Item = (MethodInfo *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = (System_Collections_Generic_List_object__o *)*((_QWORD *)Item[2].virtualMethodPointer + 1);
    if ( !lotteryList )
      goto LABEL_31;
    if ( i >= lotteryList->fields._size )
      return;
    if ( !HIDWORD(Item[2].parameters) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_31;
    }
    Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                           lotteryList,
                           i,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !Item || !baseUsrSvtData )
      goto LABEL_31;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    invoker_method = (int)Item->invoker_method;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v14.fields.currentCryptoKey = v7;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    if ( invoker_method == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0) )
      break;
  }
  v10 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, method);
    v10 = CombineResultFormManager_TypeInfo;
  }
  Item = (MethodInfo *)v10->static_fields->lotteryList;
  if ( !Item
    || (Item = (MethodInfo *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Item,
                               i,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (name = Item->name) == 0 )
  {
LABEL_31:
    sub_2213CDC(Item, method);
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
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  CombineResultFormManager_c *v4; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  CombineResultFormManager_c *v9; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w19
  __int64 v12; // x1
  int32_t i; // w20
  CombineResultFormManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x21
  _DWORD *monitor; // x8
  int v20; // w22
  int32_t j; // w23
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *v23; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int *p_offset; // x10
  __int64 v27; // x0
  System_IO_BinaryWriter_o *v28; // [xsp+28h] [xbp-58h]

  if ( (byte_5974C1A & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_5974C1A = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v4 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v1);
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v7, v6, 0);
  v9 = CombineResultFormManager_TypeInfo;
  v28 = v7;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v8);
    v9 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v9->static_fields->lotteryList;
  if ( !lotteryList )
    sub_2213CDC(v9, v8);
  if ( !v7 )
    sub_2213CDC(0, v8);
  size = lotteryList->fields._size;
  v28->klass->vtable._22_Write.methodPtr();
  v28->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = CombineResultFormManager_TypeInfo;
      if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v12);
        v14 = CombineResultFormManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->lotteryList;
      if ( !v15 )
        sub_2213CDC(0, v12);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
      v18 = Item;
      if ( !Item )
        sub_2213CDC(0, v17);
      monitor = Item[1].monitor;
      if ( !monitor )
        sub_2213CDC(Item, v17);
      if ( !v28 )
        sub_2213CDC(0, v17);
      v20 = monitor[6];
      v28->klass->vtable._17_Write.methodPtr();
      v28->klass->vtable._17_Write.methodPtr();
      if ( v20 >= 1 )
      {
        for ( j = 0; j != v20; ++j )
        {
          v22 = (System_Collections_Generic_List_object__o *)v18[1].monitor;
          if ( !v22 )
            sub_2213CDC(0, v12);
          v23 = System_Collections_Generic_List_object___get_Item(
                  v22,
                  j,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v28->klass->vtable._22_Write.methodPtr)(
            v28,
            v23,
            v28->klass->vtable._22_Write.method);
        }
      }
    }
  }
  if ( v28 )
  {
    klass = v28->klass;
    v25 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_31:
      v27 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v28, *(_QWORD *)(v27 + 8));
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
  __int64 v21; // x8
  int32_t i; // w22
  System_Collections_Generic_List_object__o *lotteryList; // x8
  __int64 v24; // x23
  __int64 v25; // x24
  int32_t id; // w29
  CombineResultFormManager_c *v27; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w1
  int32_t v31; // w0
  Il2CppObject *Item; // x0
  CombineResultFormManager_c *v33; // x8
  System_String_o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 type; // x10
  __int64 v44; // x8
  const MethodInfo *v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_5974C1C & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974C1C = 1;
  }
  memset(&v49, 0, sizeof(v49));
  memset(&v48, 0, sizeof(v48));
  if ( !v4 )
    goto LABEL_60;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v49 = v47;
  v47.fields._list = 0;
  *(_QWORD *)&v47.fields._index = &v49;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v49,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v49.fields._current )
      sub_2213CDC(v7, v8);
    klass = v49.fields._current[4].klass;
    if ( !klass )
      sub_2213CDC(v7, v8);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_2213CE4(v7);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_2213CDC(v7, v8);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v6
        || (items = v6->fields._items,
            v8 = (Il2CppObject *)*((_QWORD *)data + 2),
            v18 = Method_System_Collections_Generic_List_string__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(v7, v8);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v8,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v8;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v21 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v21 )
    goto LABEL_60;
  if ( !*(_DWORD *)(v21 + 24) )
  {
    if ( !*(&svtVoiceEntity[5].fields.type + 1) )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
  }
  for ( i = 0; ; ++i )
  {
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
      svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
    if ( !lotteryList )
      goto LABEL_60;
    if ( i >= lotteryList->fields._size )
      goto LABEL_56;
    if ( !*(&svtVoiceEntity[5].fields.type + 1) )
    {
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
      lotteryList = (System_Collections_Generic_List_object__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_60;
    }
    svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                               lotteryList,
                                               i,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    if ( !svtVoiceEntity || !baseUsrSvtData )
      goto LABEL_60;
    v24 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    id = svtVoiceEntity->fields.id;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseUsrSvtData);
    *(_QWORD *)&v50.fields.currentCryptoKey = v24;
    *(_QWORD *)&v50.fields.fakeValue = v25;
    if ( id == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0) )
      break;
  }
  v27 = CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    v27 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v27->static_fields->lotteryList;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                             i,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
  if ( !svtVoiceEntity )
    goto LABEL_60;
  svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type;
  if ( !svtVoiceEntity )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)svtVoiceEntity,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v48 = v47;
  v47.fields._list = 0;
  *(_QWORD *)&v47.fields._index = &v48;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v28 )
      break;
    if ( !v6 )
      sub_2213CDC(v28, v29);
    System_Collections_Generic_List_object___Remove(
      v6,
      v48.fields._current,
      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( !v6 )
    goto LABEL_60;
  v30 = v6->fields._size;
  if ( v30 < 1 )
  {
LABEL_56:
    v34 = 0;
    return ServantVoiceEntity__lotteryLevelUpVoice(v4, baseUsrSvtData, v34, 0);
  }
  v31 = UnityEngine_Random__Range_83400680(0, v30, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v6,
           v31,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  v33 = CombineResultFormManager_TypeInfo;
  v34 = (System_String_o *)Item;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    v33 = CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)v33->static_fields->lotteryList;
  if ( !svtVoiceEntity
    || (svtVoiceEntity = (ServantVoiceEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)svtVoiceEntity,
                                                   i,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__)) == 0
    || (svtVoiceEntity = *(ServantVoiceEntity_o **)&svtVoiceEntity->fields.type) == 0
    || (v41 = *(_QWORD *)&svtVoiceEntity->fields.id,
        v42 = Method_System_Collections_Generic_List_string__Add__,
        ++*(&svtVoiceEntity->fields.type + 1),
        !v41) )
  {
LABEL_60:
    sub_2213CDC(svtVoiceEntity, baseUsrSvtData);
  }
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v41 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v34,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = v41 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v44 + 32) = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 32), (int32_t)v34, v35, v36, v37, v38, v39, v40);
  }
  CombineResultFormManager__WriteData(v45);
  return ServantVoiceEntity__lotteryLevelUpVoice(v4, baseUsrSvtData, v34, 0);
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
  __int64 v15; // x24
  __int64 v16; // x25
  _BOOL8 v17; // x0
  Il2CppObject *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppClass *klass; // x8
  void *data; // x9
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 type; // x10
  __int64 v41; // x8
  const MethodInfo *v42; // x0
  int32_t v43; // w1
  int32_t v44; // w0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_5974C1B & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_2213A60(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_5974C1B = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !v4 )
    goto LABEL_45;
  v5 = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0);
  v6 = sub_2213CCC(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_45;
  *(_QWORD *)(v6 + 24) = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_45;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseUsrSvtData);
  *(_QWORD *)&v49.fields.currentCryptoKey = v15;
  *(_QWORD *)&v49.fields.fakeValue = v16;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v49, 0);
  *(_DWORD *)(v6 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v5 )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v48 = v47;
  v47.fields._list = 0;
  *(_QWORD *)&v47.fields._index = &v48;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v48.fields._current )
      sub_2213CDC(v17, v18);
    klass = v48.fields._current[4].klass;
    if ( !klass )
      sub_2213CDC(v17, v18);
    if ( !LODWORD(klass->_1.namespaze) )
      sub_2213CE4(v17);
    data = klass->_1.byval_arg.data;
    if ( !data )
      sub_2213CDC(v17, v18);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v14
        || (items = v14->fields._items,
            v18 = (Il2CppObject *)*((_QWORD *)data + 2),
            v28 = Method_System_Collections_Generic_List_string__Add__,
            ++v14->fields._version,
            !items) )
      {
        sub_2213CDC(v17, v18);
      }
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, baseUsrSvtData);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v37 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v37 )
    goto LABEL_45;
  if ( !*(_DWORD *)(v37 + 24) )
  {
    if ( !*(&svtVoiceEntity[5].fields.type + 1) )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  if ( !*(&svtVoiceEntity[5].fields.type + 1) )
  {
    j_il2cpp_runtime_class_init_0(svtVoiceEntity, baseUsrSvtData);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = *(ServantVoiceEntity_o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !svtVoiceEntity )
    goto LABEL_45;
  v38 = *(_QWORD *)&svtVoiceEntity->fields.id;
  v39 = Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__;
  ++*(&svtVoiceEntity->fields.type + 1);
  if ( !v38 )
    goto LABEL_45;
  type = svtVoiceEntity->fields.type;
  if ( (unsigned int)type >= *(_DWORD *)(v38 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)svtVoiceEntity,
      (Il2CppObject *)v6,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v38 + 8 * type;
    svtVoiceEntity->fields.type = type + 1;
    *(_QWORD *)(v41 + 32) = v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 32), v6, v31, v32, v33, v34, v35, v36);
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v42);
  if ( !v14 )
LABEL_45:
    sub_2213CDC(svtVoiceEntity, baseUsrSvtData);
  v43 = v14->fields._size;
  if ( !v43 )
    return 0;
  v44 = UnityEngine_Random__Range_83400680(0, v43, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v14,
           v44,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  return ServantVoiceEntity__lotteryLevelUpVoice(v4, baseUsrSvtData, (System_String_o *)Item, 0);
}


void CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}