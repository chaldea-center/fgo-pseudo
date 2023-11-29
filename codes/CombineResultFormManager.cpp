void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  struct CombineResultFormManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F9E28 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6598, v10);
    byte_40F9E28 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CombineResultFormManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6598;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6598;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  v18 = CombineResultFormManager_TypeInfo->static_fields;
  v18->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->lotteryList,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *lotteryList; // x8

  if ( (byte_40F9E22 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v3);
    byte_40F9E22 = 1;
  }
  v4 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v4 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_13;
  if ( lotteryList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (lotteryList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        lotteryList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40F9E21 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v1);
    byte_40F9E21 = 1;
  }
  v2 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
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

  if ( (byte_40F9E20 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F9E20 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
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
  bool v11; // w20
  CombineResultFormManager_c *v12; // x0
  System_String_o *SaveFileName; // x19
  CombineResultFormManager_c *v14; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryReader_o *v20; // x19
  System_String_o *v21; // x20
  CombineResultFormManager_c *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int v27; // w20
  int i; // w25
  __int64 v29; // x21
  int v30; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int v43; // w23
  int j; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x1
  CombineResultFormManager_c *v46; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lotteryList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 v51; // x0
  CombineResultFormManager_c *v52; // x0

  if ( (byte_40F9E24 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v2);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B16FFC(&ManagerConfig_TypeInfo, v8);
    sub_B16FFC(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v9);
    byte_40F9E24 = 1;
  }
  v10 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v10 = ManagerConfig_TypeInfo;
  }
  if ( v10->static_fields->UseMock )
    return 1;
  v12 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v12);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v14 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v14);
    v15 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v20 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v16, v17, v18, v19);
    System_IO_BinaryReader___ctor(v20, v15, 0LL);
    if ( !v20 )
      sub_B170D4();
    v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                               v20,
                               v20->klass->vtable._23_ReadChars.methodPtr);
    v22 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v22 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v22->static_fields->SAVE_DATA_VERSION, v21, 0LL) )
    {
      v11 = 0;
    }
    else
    {
      v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
              v20,
              v20->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v27 >= 1 )
      {
        for ( i = 0; i < v27; ++i )
        {
          v29 = sub_B170CC(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v23, v24, v25, v26);
          CombineResultFormManager_svtUnplayedVoiceList___ctor(
            (CombineResultFormManager_svtUnplayedVoiceList_o *)v29,
            0LL);
          v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v29 )
            sub_B170D4();
          *(_DWORD *)(v29 + 16) = v30;
          v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_string__TypeInfo, v31, v32, v33, v34);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v35,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v29 + 24) = v35;
          v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v29 + 24);
          sub_B16F98(
            (BattleServantConfConponent_o *)(v29 + 24),
            (System_Int32_array **)v35,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          v43 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v43 >= 1 )
          {
            for ( j = 0; j < v43; ++j )
            {
              v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                                                                             v20,
                                                                             v20->klass->vtable._23_ReadChars.methodPtr);
              if ( !*v36 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                *v36,
                v45,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
            }
          }
          v46 = CombineResultFormManager_TypeInfo;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v46 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46->static_fields->lotteryList;
          if ( !lotteryList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lotteryList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
        }
      }
      v11 = 1;
    }
    klass = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_38:
      v51 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v51)(v20, *(_QWORD *)(v51 + 8));
  }
  else
  {
    v52 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
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
  CombineResultFormManager_c *v7; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t i; // w23
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v10; // x20
  CombineResultFormManager_svtUnplayedVoiceList_o *v11; // x8
  int32_t svtId; // w25
  __int64 v13; // x20
  __int64 v14; // x21
  CombineResultFormManager_c *v15; // x0
  CombineResultFormManager_c *v16; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v17; // x19
  CombineResultFormManager_svtUnplayedVoiceList_o *v18; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *voiceIdList; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F9E23 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_40F9E23 = 1;
  }
  v7 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v7 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v7->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_40;
  if ( !lotteryList->fields._size )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v7);
    CombineResultFormManager__ReadData((const MethodInfo *)v7);
  }
  for ( i = 0; ; ++i )
  {
    v15 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v15 = CombineResultFormManager_TypeInfo;
    }
    v10 = v15->static_fields->lotteryList;
    if ( !v10 )
      goto LABEL_40;
    if ( i >= v10->fields._size )
      return;
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v10 = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !v10 )
        goto LABEL_40;
    }
    if ( v10->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = v10->fields._items->m_Items[i];
    if ( !v11 || !baseUsrSvtData )
      goto LABEL_40;
    svtId = v11->fields.svtId;
    v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v14;
    *(_QWORD *)&v20.fields.fakeValue = v13;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) )
      break;
  }
  v16 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v16 = CombineResultFormManager_TypeInfo;
  }
  v17 = v16->static_fields->lotteryList;
  if ( !v17 )
    goto LABEL_40;
  if ( v17->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v18 = v17->fields._items->m_Items[i];
  if ( !v18 || (voiceIdList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v18->fields.voiceIdList) == 0LL )
LABEL_40:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    voiceIdList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryWriter_o *v18; // x19
  CombineResultFormManager_c *v19; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  int i; // w23
  CombineResultFormManager_c *v24; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v25; // x21
  CombineResultFormManager_svtUnplayedVoiceList_o *v26; // x24
  struct System_Collections_Generic_List_string__o *voiceIdList; // x8
  signed __int64 v28; // x21
  unsigned __int64 j; // x25
  struct System_Collections_Generic_List_string__o *v30; // x26
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0

  if ( (byte_40F9E25 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v2);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_B16FFC(&ManagerConfig_TypeInfo, v8);
    byte_40F9E25 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v18 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryWriter___ctor_39195976(v18, v13, 0LL);
  v19 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v19 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_B170D4();
  if ( !v18 )
    sub_B170D4();
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    static_fields->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      v24 = CombineResultFormManager_TypeInfo;
      if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v24 = CombineResultFormManager_TypeInfo;
      }
      v25 = v24->static_fields->lotteryList;
      if ( !v25 )
        sub_B170D4();
      if ( v25->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v26 = v25->fields._items->m_Items[i];
      if ( !v26 )
        sub_B170D4();
      voiceIdList = v26->fields.voiceIdList;
      if ( !voiceIdList )
        sub_B170D4();
      v28 = voiceIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.svtId,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v28,
        v18->klass->vtable._18_Write.methodPtr);
      if ( (int)v28 >= 1 )
      {
        for ( j = 0LL; (__int64)j < v28; ++j )
        {
          v30 = v26->fields.voiceIdList;
          if ( !v30 )
            sub_B170D4();
          if ( j >= (unsigned int)v30->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v18->klass->vtable._22_Write.method)(
            v18,
            v30->fields._items->m_Items[j],
            v18->klass[1]._1.image);
        }
      }
    }
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v34 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v18, *(_QWORD *)(v34 + 8));
  return 1;
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResult(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_SvtVoiceInfo__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  CombineResultFormManager_c *v33; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t i; // w26
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v36; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v37; // x8
  int32_t svtId; // w28
  __int64 v39; // x22
  __int64 v40; // x23
  CombineResultFormManager_c *v41; // x0
  CombineResultFormManager_c *v42; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v43; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v44; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *voiceIdList; // x0
  int v46; // w22
  int32_t size; // w1
  int32_t v48; // w22
  CombineResultFormManager_c *v49; // x0
  System_String_o *v50; // x21
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v51; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v52; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x0
  const MethodInfo *v54; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-B8h] BYREF
  int v57[2]; // [xsp+20h] [xbp-A0h]
  int v58; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_40F9E27 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_40F9E27 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  memset(&j, 0, sizeof(j));
  v58 = 0;
  if ( !svtVoiceEntity )
    goto LABEL_72;
  v22 = ServantVoiceEntity__randomChangeSvtVoiceCount(svtVoiceEntity, baseUsrSvtData, 0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v22 )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v60 = v56;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v28 )
      break;
    if ( !v60.fields.current )
      sub_B170D4();
    klass = v60.fields.current[4].klass;
    if ( !klass )
      sub_B170D4();
    if ( !LODWORD(klass->_1.namespaze) )
    {
      sub_B17100(v28, v29, v30);
      sub_B170A0();
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B170D4();
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v27 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        data[2],
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v57[0] = 90;
  v58 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  v58 = 0;
  v33 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v33 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v33->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_72;
  if ( !lotteryList->fields._size )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v33);
    CombineResultFormManager__ReadData((const MethodInfo *)v33);
  }
  for ( i = 0; ; ++i )
  {
    v41 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v41 = CombineResultFormManager_TypeInfo;
    }
    v36 = v41->static_fields->lotteryList;
    if ( !v36 )
      goto LABEL_72;
    if ( i >= v36->fields._size )
      goto LABEL_70;
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v36 = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !v36 )
        goto LABEL_72;
    }
    if ( v36->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v37 = v36->fields._items->m_Items[i];
    if ( !v37 || !baseUsrSvtData )
      goto LABEL_72;
    svtId = v37->fields.svtId;
    v40 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = v40;
    *(_QWORD *)&v61.fields.fakeValue = v39;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL) )
      break;
  }
  v42 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v42 = CombineResultFormManager_TypeInfo;
  }
  v43 = v42->static_fields->lotteryList;
  if ( !v43 )
    goto LABEL_72;
  if ( v43->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v44 = v43->fields._items->m_Items[i];
  if ( !v44 )
    goto LABEL_72;
  voiceIdList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44->fields.voiceIdList;
  if ( !voiceIdList )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    voiceIdList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v56;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &j,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v27,
          (WarBoardManager_TaskList_o *)j.fields.current,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    if ( !v27 )
      sub_B170D4();
  }
  v57[0] = 218;
  v46 = ++v58;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &j,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v46 && v57[v46 - 1] == 218 )
    v58 = v46 - 1;
  if ( !v27 )
    goto LABEL_72;
  size = v27->fields._size;
  if ( size < 1 )
  {
LABEL_70:
    v50 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_30041000(svtVoiceEntity, baseUsrSvtData, v50, 0LL);
  }
  v48 = UnityEngine_Random__Range_34843248(0, size, 0LL);
  if ( v27->fields._size <= (unsigned int)v48 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v49 = CombineResultFormManager_TypeInfo;
  v50 = (System_String_o *)v27->fields._items->m_Items[v48];
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v49 = CombineResultFormManager_TypeInfo;
  }
  v51 = v49->static_fields->lotteryList;
  if ( !v51 )
    goto LABEL_72;
  if ( v51->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v52 = v51->fields._items->m_Items[i];
  if ( !v52
    || (v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52->fields.voiceIdList) == 0LL )
  {
LABEL_72:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v53,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  CombineResultFormManager__WriteData(v54);
  return ServantVoiceEntity__lotteryLevelUpVoice_30041000(svtVoiceEntity, baseUsrSvtData, v50, 0LL);
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResultInit(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_SvtVoiceInfo__o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x22
  __int64 v40; // x24
  __int64 v41; // x25
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  CombineResultFormManager_c *v47; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x0
  const MethodInfo *v50; // x0
  int32_t size; // w1
  int32_t v52; // w21
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40F9E26 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17);
    byte_40F9E26 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !svtVoiceEntity )
    goto LABEL_44;
  v18 = ServantVoiceEntity__randomChangeSvtVoiceCount(svtVoiceEntity, baseUsrSvtData, 0LL);
  v23 = sub_B170CC(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v19, v20, v21, v22);
  CombineResultFormManager_svtUnplayedVoiceList___ctor((CombineResultFormManager_svtUnplayedVoiceList_o *)v23, 0LL);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v23 )
    goto LABEL_44;
  *(_QWORD *)(v23 + 24) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_44;
  v41 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v41;
  *(_QWORD *)&v56.fields.fakeValue = v40;
  *(_DWORD *)(v23 + 16) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
  if ( !v18 )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v42 )
      break;
    if ( !v55.fields.current )
      sub_B170D4();
    klass = v55.fields.current[4].klass;
    if ( !klass )
      sub_B170D4();
    if ( !LODWORD(klass->_1.namespaze) )
    {
      sub_B17100(v42, v43, v44);
      sub_B170A0();
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B170D4();
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v39 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v39,
        data[2],
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  v47 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v47 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = v47->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_44;
  if ( !lotteryList->fields._size )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v47);
    CombineResultFormManager__ReadData((const MethodInfo *)v47);
    v47 = CombineResultFormManager_TypeInfo;
  }
  if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v47);
    v47 = CombineResultFormManager_TypeInfo;
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47->static_fields->lotteryList;
  if ( !v49
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v49,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__),
        CombineResultFormManager__WriteData(v50),
        !v39) )
  {
LABEL_44:
    sub_B170D4();
  }
  size = v39->fields._size;
  if ( !size )
    return 0LL;
  v52 = UnityEngine_Random__Range_34843248(0, size, 0LL);
  if ( v39->fields._size <= (unsigned int)v52 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return ServantVoiceEntity__lotteryLevelUpVoice_30041000(
           svtVoiceEntity,
           baseUsrSvtData,
           (System_String_o *)v39->fields._items->m_Items[v52],
           0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}