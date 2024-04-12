void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  struct CombineResultFormManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AF566 & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
    sub_B52984(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
    sub_B52984(&StringLiteral_6665/*"Fgo_20201104"*/);
    byte_42AF566 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CombineResultFormManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6665/*"Fgo_20201104"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6665/*"Fgo_20201104"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  v10 = CombineResultFormManager_TypeInfo->static_fields;
  v10->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v9;
  sub_B52920((BattleServantConfConponent_o *)&v10->lotteryList, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *lotteryList; // x8

  if ( (byte_42AF560 & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    byte_42AF560 = 1;
  }
  v2 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v2 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_13;
  if ( lotteryList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (lotteryList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        lotteryList,
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
      return;
    }
LABEL_13:
    sub_B52A5C(v2, v1);
  }
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  CombineResultFormManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42AF55F & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    byte_42AF55F = 1;
  }
  v1 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42AF55E & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AF55E = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


bool __fastcall CombineResultFormManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  bool v2; // w20
  CombineResultFormManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  CombineResultFormManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  CombineResultFormManager_c *v11; // x0
  __int64 v12; // x3
  int v13; // w20
  int i; // w25
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  int v27; // w23
  int j; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x1
  CombineResultFormManager_c *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lotteryList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  CombineResultFormManager_c *v36; // x0

  if ( (byte_42AF562 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_42AF562 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v5 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v7 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0LL);
    if ( !v7 )
      sub_B52A5C(v8, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                               v7,
                               v7->klass->vtable._23_ReadChars.methodPtr);
    v11 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v11 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0LL) )
    {
      v2 = 0;
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
              v7,
              v7->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v13 >= 1 )
      {
        for ( i = 0; i < v13; ++i )
        {
          v15 = sub_B52A54(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          CombineResultFormManager_svtUnplayedVoiceList___ctor(
            (CombineResultFormManager_svtUnplayedVoiceList_o *)v15,
            0LL);
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                  v7,
                  v7->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v15 )
            sub_B52A5C(v16, v17);
          *(_DWORD *)(v15 + 16) = v16;
          v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v18,
            (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v15 + 24) = v18;
          v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v15 + 24);
          sub_B52920(
            (BattleServantConfConponent_o *)(v15 + 24),
            (System_Int32_array **)v18,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                  v7,
                  v7->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v27 >= 1 )
          {
            for ( j = 0; j < v27; ++j )
            {
              v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                                                                             v7,
                                                                             v7->klass->vtable._23_ReadChars.methodPtr);
              if ( !*v19 )
                sub_B52A5C(0LL, v29);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                *v19,
                v29,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
            }
          }
          v30 = CombineResultFormManager_TypeInfo;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v30 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->lotteryList;
          if ( !lotteryList )
            sub_B52A5C(0LL, v26);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lotteryList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    if ( *(_WORD *)&v7->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_38:
      v35 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v12);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v7, *(_QWORD *)(v35 + 8));
  }
  else
  {
    v36 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v36);
    return 0;
  }
  return v2;
}


void __fastcall CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  CombineResultFormManager_c *voiceIdList; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t i; // w23
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v6; // x20
  CombineResultFormManager_svtUnplayedVoiceList_o *v7; // x8
  int32_t svtId; // w25
  __int64 v9; // x20
  __int64 v10; // x21
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v11; // x19
  CombineResultFormManager_svtUnplayedVoiceList_o *v12; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AF561 & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AF561 = 1;
  }
  voiceIdList = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    voiceIdList = CombineResultFormManager_TypeInfo;
  }
  lotteryList = voiceIdList->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_40;
  if ( !lotteryList->fields._size )
  {
    if ( (BYTE3(voiceIdList->vtable._0_Equals.methodPtr) & 4) != 0 && !voiceIdList->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(voiceIdList);
    CombineResultFormManager__ReadData((const MethodInfo *)voiceIdList);
  }
  for ( i = 0; ; ++i )
  {
    voiceIdList = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      voiceIdList = CombineResultFormManager_TypeInfo;
    }
    v6 = voiceIdList->static_fields->lotteryList;
    if ( !v6 )
      goto LABEL_40;
    if ( i >= v6->fields._size )
      return;
    if ( (BYTE3(voiceIdList->vtable._0_Equals.methodPtr) & 4) != 0 && !voiceIdList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(voiceIdList);
      v6 = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !v6 )
        goto LABEL_40;
    }
    if ( v6->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v7 = v6->fields._items->m_Items[i];
    if ( !v7 || !baseUsrSvtData )
      goto LABEL_40;
    svtId = v7->fields.svtId;
    v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL) )
      break;
  }
  voiceIdList = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    voiceIdList = CombineResultFormManager_TypeInfo;
  }
  v11 = voiceIdList->static_fields->lotteryList;
  if ( !v11 )
    goto LABEL_40;
  if ( v11->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v12 = v11->fields._items->m_Items[i];
  if ( !v12 || (voiceIdList = (CombineResultFormManager_c *)v12->fields.voiceIdList) == 0LL )
LABEL_40:
    sub_B52A5C(voiceIdList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceIdList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_string__Clear__);
}


bool __fastcall CombineResultFormManager__WriteData(const MethodInfo *method)
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
  __int64 v13; // x3
  int i; // w23
  CombineResultFormManager_c *v15; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v16; // x21
  CombineResultFormManager_svtUnplayedVoiceList_o *v17; // x24
  struct System_Collections_Generic_List_string__o *voiceIdList; // x8
  signed __int64 v19; // x21
  __int64 v20; // x0
  unsigned __int64 j; // x25
  struct System_Collections_Generic_List_string__o *v22; // x26
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0

  if ( (byte_42AF563 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42AF563 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 0;
  v3 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v3);
  v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v6 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40252128(v6, v5, 0LL);
  v8 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v8 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_B52A5C(v8, v7);
  if ( !v6 )
    sub_B52A5C(v8, v7);
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v6->klass->vtable._22_Write.method)(
    v6,
    static_fields->SAVE_DATA_VERSION,
    v6->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
    v6,
    (unsigned int)size,
    v6->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      v15 = CombineResultFormManager_TypeInfo;
      if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v15 = CombineResultFormManager_TypeInfo;
      }
      v16 = v15->static_fields->lotteryList;
      if ( !v16 )
        sub_B52A5C(v15, v12);
      if ( v16->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v17 = v16->fields._items->m_Items[i];
      if ( !v17 )
        sub_B52A5C(v15, v12);
      voiceIdList = v17->fields.voiceIdList;
      if ( !voiceIdList )
        sub_B52A5C(v15, v12);
      v19 = voiceIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)v17->fields.svtId,
        v6->klass->vtable._18_Write.methodPtr);
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
              v6,
              (unsigned int)v19,
              v6->klass->vtable._18_Write.methodPtr);
      if ( (int)v19 >= 1 )
      {
        for ( j = 0LL; (__int64)j < v19; ++j )
        {
          v22 = v17->fields.voiceIdList;
          if ( !v22 )
            sub_B52A5C(v20, v12);
          if ( j >= (unsigned int)v22->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v6->klass->vtable._22_Write.method)(
                  v6,
                  v22->fields._items->m_Items[j],
                  v6->klass[1]._1.image);
        }
      }
    }
  }
  klass = v6->klass;
  if ( *(_WORD *)&v6->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v26 = sub_AEB880(v6, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v26)(v6, *(_QWORD *)(v26 + 8));
  return 1;
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResult(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
  System_Collections_Generic_List_SvtVoiceInfo__o *v5; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v11; // x8
  int32_t i; // w26
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v14; // x8
  int32_t svtId; // w28
  __int64 v16; // x22
  __int64 v17; // x23
  __int64 v18; // x22
  __int64 v19; // x8
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int v22; // w22
  int32_t size; // w1
  int32_t v24; // w22
  System_String_o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x8
  const MethodInfo *v28; // x0
  __int64 v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-B8h] BYREF
  int v32[2]; // [xsp+20h] [xbp-A0h]
  int v33; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_42AF565 & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AF565 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  memset(&j, 0, sizeof(j));
  v33 = 0;
  if ( !v4 )
    goto LABEL_72;
  v5 = ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v5 )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v35 = v31;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v35,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v35.fields.current )
      sub_B52A5C(v7, v8);
    klass = v35.fields.current[4].klass;
    if ( !klass )
      sub_B52A5C(v7, v8);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v30 = sub_B52A88(v7);
      sub_B52A28(v30, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B52A5C(v7, v8);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v6 )
        sub_B52A5C(v7, v8);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        data[2],
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v32[0] = 90;
  v33 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  v33 = 0;
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v11 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v11 )
    goto LABEL_72;
  if ( !*(_DWORD *)(v11 + 24) )
  {
    if ( (svtVoiceEntity[7].fields.type & 0x4000000) != 0 && !svtVoiceEntity[5].fields.type )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
  }
  for ( i = 0; ; ++i )
  {
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
    }
    lotteryList = *(struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
    if ( !lotteryList )
      goto LABEL_72;
    if ( i >= lotteryList->fields._size )
      goto LABEL_70;
    if ( (svtVoiceEntity[7].fields.type & 0x4000000) != 0 && !svtVoiceEntity[5].fields.type )
    {
      j_il2cpp_runtime_class_init_0(svtVoiceEntity);
      lotteryList = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !lotteryList )
        goto LABEL_72;
    }
    if ( lotteryList->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v14 = lotteryList->fields._items->m_Items[i];
    if ( !v14 || !baseUsrSvtData )
      goto LABEL_72;
    svtId = v14->fields.svtId;
    v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v17;
    *(_QWORD *)&v36.fields.fakeValue = v16;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL) )
      break;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v18 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v18 )
    goto LABEL_72;
  if ( *(_DWORD *)(v18 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 8LL * i + 32);
  if ( !v19 )
    goto LABEL_72;
  svtVoiceEntity = *(ServantVoiceEntity_o **)(v19 + 24);
  if ( !svtVoiceEntity )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtVoiceEntity,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v31;
        ;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6,
          (WarBoardManager_TaskList_o *)j.fields.current,
          (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &j,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v20 )
      break;
    if ( !v6 )
      sub_B52A5C(v20, v21);
  }
  v32[0] = 218;
  v22 = ++v33;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &j,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v22 && v32[v22 - 1] == 218 )
    v33 = v22 - 1;
  if ( !v6 )
    goto LABEL_72;
  size = v6->fields._size;
  if ( size < 1 )
  {
LABEL_70:
    v25 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_30980840(v4, baseUsrSvtData, v25, 0LL);
  }
  v24 = UnityEngine_Random__Range_35650740(0, size, 0LL);
  if ( v6->fields._size <= (unsigned int)v24 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  v25 = (System_String_o *)v6->fields._items->m_Items[v24];
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v26 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v26 )
    goto LABEL_72;
  if ( *(_DWORD *)(v26 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 8LL * i + 32);
  if ( !v27 || (svtVoiceEntity = *(ServantVoiceEntity_o **)(v27 + 24)) == 0LL )
LABEL_72:
    sub_B52A5C(svtVoiceEntity, baseUsrSvtData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtVoiceEntity,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  CombineResultFormManager__WriteData(v28);
  return ServantVoiceEntity__lotteryLevelUpVoice_30980840(v4, baseUsrSvtData, v25, 0LL);
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResultInit(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v4; // x20
  System_Collections_Generic_List_SvtVoiceInfo__o *v5; // x23
  __int64 v6; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  __int64 v15; // x24
  __int64 v16; // x25
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v21; // x8
  const MethodInfo *v22; // x0
  int32_t size; // w1
  int32_t v24; // w21
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_42AF564 & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B52984(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
    byte_42AF564 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !v4 )
    goto LABEL_44;
  v5 = ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0LL);
  v6 = sub_B52A54(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  CombineResultFormManager_svtUnplayedVoiceList___ctor((CombineResultFormManager_svtUnplayedVoiceList_o *)v6, 0LL);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_44;
  *(_QWORD *)(v6 + 24) = v7;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 24), (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_44;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v16;
  *(_QWORD *)&v29.fields.fakeValue = v15;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v29, 0LL);
  *(_DWORD *)(v6 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v5 )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v28.fields.current )
      sub_B52A5C(v17, v18);
    klass = v28.fields.current[4].klass;
    if ( !klass )
      sub_B52A5C(v17, v18);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v26 = sub_B52A88(v17);
      sub_B52A28(v26, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B52A5C(v17, v18);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v14 )
        sub_B52A5C(v17, v18);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        data[2],
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v21 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v21 )
    goto LABEL_44;
  if ( !*(_DWORD *)(v21 + 24) )
  {
    if ( (svtVoiceEntity[7].fields.type & 0x4000000) != 0 && !svtVoiceEntity[5].fields.type )
      j_il2cpp_runtime_class_init_0(svtVoiceEntity);
    CombineResultFormManager__ReadData((const MethodInfo *)svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  if ( (svtVoiceEntity[7].fields.type & 0x4000000) != 0 && !svtVoiceEntity[5].fields.type )
  {
    j_il2cpp_runtime_class_init_0(svtVoiceEntity);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  svtVoiceEntity = *(ServantVoiceEntity_o **)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !svtVoiceEntity
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtVoiceEntity,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__),
        svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v22),
        !v14) )
  {
LABEL_44:
    sub_B52A5C(svtVoiceEntity, baseUsrSvtData);
  }
  size = v14->fields._size;
  if ( !size )
    return 0LL;
  v24 = UnityEngine_Random__Range_35650740(0, size, 0LL);
  if ( v14->fields._size <= (unsigned int)v24 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return ServantVoiceEntity__lotteryLevelUpVoice_30980840(
           v4,
           baseUsrSvtData,
           (System_String_o *)v14->fields._items->m_Items[v24],
           0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}