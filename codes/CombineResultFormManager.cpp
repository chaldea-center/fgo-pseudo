void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct CombineResultFormManager_StaticFields *static_fields; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  struct CombineResultFormManager_StaticFields *v10; // x0

  if ( (byte_421106D & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v2);
    sub_B0D8A4(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_6639/*"Fgo_20201104"*/, v4);
    byte_421106D = 1;
  }
  static_fields = CombineResultFormManager_TypeInfo->static_fields;
  v6 = StringLiteral_6639/*"Fgo_20201104"*/;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6639/*"Fgo_20201104"*/;
  sub_B0D840(static_fields, v6);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo,
                                                                                                 v7,
                                                                                                 v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  v10 = CombineResultFormManager_TypeInfo->static_fields;
  v10->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v9;
  sub_B0D840(&v10->lotteryList, v9);
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

  if ( (byte_4211067 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v3);
    byte_4211067 = 1;
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
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
      return;
    }
LABEL_13:
    sub_B0D97C(v4);
  }
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4211066 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v1);
    byte_4211066 = 1;
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

  if ( (byte_4211065 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4211065 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
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
  System_IO_BinaryReader_o *v18; // x19
  __int64 v19; // x0
  System_String_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w20
  int i; // w25
  CombineResultFormManager_svtUnplayedVoiceList_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_voiceIdList; // x22
  long double v31; // q0
  int v32; // w23
  int j; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x1
  CombineResultFormManager_c *v35; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lotteryList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0
  CombineResultFormManager_c *v41; // x0
  CombineResultFormManager_c *v43; // x0

  if ( (byte_4211069 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v2);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    sub_B0D8A4(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v9);
    byte_4211069 = 1;
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
    v18 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v16, v17);
    System_IO_BinaryReader___ctor(v18, v15, 0LL);
    if ( !v18 )
      sub_B0D97C(v19);
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                               v18,
                               v18->klass->vtable._23_ReadChars.methodPtr);
    v43 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v43 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v43->static_fields->SAVE_DATA_VERSION, v20, 0LL) )
    {
      v11 = 0;
    }
    else
    {
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
              v18,
              v18->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v23 >= 1 )
      {
        for ( i = 0; i < v23; ++i )
        {
          v25 = (CombineResultFormManager_svtUnplayedVoiceList_o *)sub_B0D974(
                                                                     CombineResultFormManager_svtUnplayedVoiceList_TypeInfo,
                                                                     v21,
                                                                     v22);
          CombineResultFormManager_svtUnplayedVoiceList___ctor(v25, 0LL);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v25 )
            sub_B0D97C(v26);
          v25->fields.svtId = v26;
          v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_string__TypeInfo, v27, v28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v29,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
          v25->fields.voiceIdList = (struct System_Collections_Generic_List_string__o *)v29;
          p_voiceIdList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v25->fields.voiceIdList;
          *(__n128 *)&v31 = sub_B0D840(&v25->fields.voiceIdList, v29);
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer, long double))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr,
                  v31);
          if ( v32 >= 1 )
          {
            for ( j = 0; j < v32; ++j )
            {
              v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                                                                             v18,
                                                                             v18->klass->vtable._23_ReadChars.methodPtr);
              if ( !*p_voiceIdList )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                *p_voiceIdList,
                v34,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
            }
          }
          v35 = CombineResultFormManager_TypeInfo;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v35 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35->static_fields->lotteryList;
          if ( !lotteryList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lotteryList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
        }
      }
      v11 = 1;
    }
    klass = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_38:
      v40 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v18, *(_QWORD *)(v40 + 8));
  }
  else
  {
    v41 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v41);
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
  CombineResultFormManager_c *voiceIdList; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t i; // w23
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v10; // x20
  CombineResultFormManager_svtUnplayedVoiceList_o *v11; // x8
  int32_t svtId; // w25
  __int64 v13; // x20
  __int64 v14; // x21
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v15; // x19
  CombineResultFormManager_svtUnplayedVoiceList_o *v16; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4211068 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4211068 = 1;
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
    v10 = voiceIdList->static_fields->lotteryList;
    if ( !v10 )
      goto LABEL_40;
    if ( i >= v10->fields._size )
      return;
    if ( (BYTE3(voiceIdList->vtable._0_Equals.methodPtr) & 4) != 0 && !voiceIdList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(voiceIdList);
      v10 = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !v10 )
        goto LABEL_40;
    }
    if ( v10->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    *(_QWORD *)&v17.fields.currentCryptoKey = v14;
    *(_QWORD *)&v17.fields.fakeValue = v13;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL) )
      break;
  }
  voiceIdList = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    voiceIdList = CombineResultFormManager_TypeInfo;
  }
  v15 = voiceIdList->static_fields->lotteryList;
  if ( !v15 )
    goto LABEL_40;
  if ( v15->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v16 = v15->fields._items->m_Items[i];
  if ( !v16 || (voiceIdList = (CombineResultFormManager_c *)v16->fields.voiceIdList) == 0LL )
LABEL_40:
    sub_B0D97C(voiceIdList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceIdList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
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
  int i; // w23
  CombineResultFormManager_c *v22; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v23; // x21
  CombineResultFormManager_svtUnplayedVoiceList_o *v24; // x24
  struct System_Collections_Generic_List_string__o *voiceIdList; // x8
  signed __int64 v26; // x21
  __int64 v27; // x0
  unsigned __int64 j; // x25
  struct System_Collections_Generic_List_string__o *v29; // x26
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0

  if ( (byte_421106A & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v2);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    byte_421106A = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_39036700(v16, v13, 0LL);
  v17 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v17 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_B0D97C(v17);
  if ( !v16 )
    sub_B0D97C(v17);
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
    for ( i = 0; i < size; ++i )
    {
      v22 = CombineResultFormManager_TypeInfo;
      if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v22 = CombineResultFormManager_TypeInfo;
      }
      v23 = v22->static_fields->lotteryList;
      if ( !v23 )
        sub_B0D97C(v22);
      if ( v23->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v24 = v23->fields._items->m_Items[i];
      if ( !v24 )
        sub_B0D97C(v22);
      voiceIdList = v24->fields.voiceIdList;
      if ( !voiceIdList )
        sub_B0D97C(v22);
      v26 = voiceIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v24->fields.svtId,
        v16->klass->vtable._18_Write.methodPtr);
      v27 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
              v16,
              (unsigned int)v26,
              v16->klass->vtable._18_Write.methodPtr);
      if ( (int)v26 >= 1 )
      {
        for ( j = 0LL; (__int64)j < v26; ++j )
        {
          v29 = v24->fields.voiceIdList;
          if ( !v29 )
            sub_B0D97C(v27);
          if ( j >= (unsigned int)v29->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v16->klass->vtable._22_Write.method)(
                  v16,
                  v29->fields._items->m_Items[j],
                  v16->klass[1]._1.image);
        }
      }
    }
  }
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v33 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v33)(v16, *(_QWORD *)(v33 + 8));
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
  System_Collections_Generic_List_SvtVoiceInfo__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  _BOOL8 v26; // x0
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v29; // x8
  int32_t i; // w26
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v32; // x8
  int32_t svtId; // w28
  __int64 v34; // x22
  __int64 v35; // x23
  __int64 v36; // x22
  __int64 v37; // x8
  _BOOL8 v38; // x0
  int v39; // w22
  int32_t size; // w1
  int32_t v41; // w22
  System_String_o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x8
  const MethodInfo *v45; // x0
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-B8h] BYREF
  int v49[2]; // [xsp+20h] [xbp-A0h]
  int v50; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_421106C & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v20);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_421106C = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&j, 0, sizeof(j));
  v50 = 0;
  if ( !v4 )
    goto LABEL_72;
  v22 = ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0LL);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v22 )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v52 = v48;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v52.fields.current )
      sub_B0D97C(v26);
    klass = v52.fields.current[4].klass;
    if ( !klass )
      sub_B0D97C(v26);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v47 = sub_B0D9A8(v26);
      sub_B0D948(v47, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B0D97C(v26);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v25 )
        sub_B0D97C(v26);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        data[2],
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v49[0] = 90;
  v50 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  v50 = 0;
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v29 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v29 )
    goto LABEL_72;
  if ( !*(_DWORD *)(v29 + 24) )
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v32 = lotteryList->fields._items->m_Items[i];
    if ( !v32 || !baseUsrSvtData )
      goto LABEL_72;
    svtId = v32->fields.svtId;
    v35 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v34 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v35;
    *(_QWORD *)&v53.fields.fakeValue = v34;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53, 0LL) )
      break;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v36 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v36 )
    goto LABEL_72;
  if ( *(_DWORD *)(v36 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 8LL * i + 32);
  if ( !v37 )
    goto LABEL_72;
  svtVoiceEntity = *(ServantVoiceEntity_o **)(v37 + 24);
  if ( !svtVoiceEntity )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtVoiceEntity,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v48;
        ;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v25,
          (WarBoardManager_TaskList_o *)j.fields.current,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &j,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v38 )
      break;
    if ( !v25 )
      sub_B0D97C(v38);
  }
  v49[0] = 218;
  v39 = ++v50;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &j,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v39 && v49[v39 - 1] == 218 )
    v50 = v39 - 1;
  if ( !v25 )
    goto LABEL_72;
  size = v25->fields._size;
  if ( size < 1 )
  {
LABEL_70:
    v42 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_29949808(v4, baseUsrSvtData, v42, 0LL);
  }
  v41 = UnityEngine_Random__Range_34969060(0, size, 0LL);
  if ( v25->fields._size <= (unsigned int)v41 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  v42 = (System_String_o *)v25->fields._items->m_Items[v41];
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v43 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v43 )
    goto LABEL_72;
  if ( *(_DWORD *)(v43 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v44 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 8LL * i + 32);
  if ( !v44 || (svtVoiceEntity = *(ServantVoiceEntity_o **)(v44 + 24)) == 0LL )
LABEL_72:
    sub_B0D97C(svtVoiceEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtVoiceEntity,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  CombineResultFormManager__WriteData(v45);
  return ServantVoiceEntity__lotteryLevelUpVoice_29949808(v4, baseUsrSvtData, v42, 0LL);
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
  System_Collections_Generic_List_SvtVoiceInfo__o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  CombineResultFormManager_svtUnplayedVoiceList_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  _BOOL8 v30; // x0
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v33; // x8
  const MethodInfo *v34; // x0
  int32_t size; // w1
  int32_t v36; // w21
  __int64 v38; // x0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_421106B & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B0D8A4(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17);
    byte_421106B = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !v4 )
    goto LABEL_44;
  v18 = ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0LL);
  v21 = (CombineResultFormManager_svtUnplayedVoiceList_o *)sub_B0D974(
                                                             CombineResultFormManager_svtUnplayedVoiceList_TypeInfo,
                                                             v19,
                                                             v20);
  CombineResultFormManager_svtUnplayedVoiceList___ctor(v21, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v21 )
    goto LABEL_44;
  v21->fields.voiceIdList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B0D840(&v21->fields.voiceIdList, v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_44;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v29;
  *(_QWORD *)&v41.fields.fakeValue = v28;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
  v21->fields.svtId = (int)svtVoiceEntity;
  if ( !v18 )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v30 )
      break;
    if ( !v40.fields.current )
      sub_B0D97C(v30);
    klass = v40.fields.current[4].klass;
    if ( !klass )
      sub_B0D97C(v30);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v38 = sub_B0D9A8(v30);
      sub_B0D948(v38, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B0D97C(v30);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v27 )
        sub_B0D97C(v30);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        data[2],
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v33 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v33 )
    goto LABEL_44;
  if ( !*(_DWORD *)(v33 + 24) )
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
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__),
        svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v34),
        !v27) )
  {
LABEL_44:
    sub_B0D97C(svtVoiceEntity);
  }
  size = v27->fields._size;
  if ( !size )
    return 0LL;
  v36 = UnityEngine_Random__Range_34969060(0, size, 0LL);
  if ( v27->fields._size <= (unsigned int)v36 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return ServantVoiceEntity__lotteryLevelUpVoice_29949808(
           v4,
           baseUsrSvtData,
           (System_String_o *)v27->fields._items->m_Items[v36],
           0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}