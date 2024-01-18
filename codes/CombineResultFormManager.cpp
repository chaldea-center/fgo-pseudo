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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  struct CombineResultFormManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4187929 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6622/*"Fgo_20201104"*/, v10);
    byte_4187929 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CombineResultFormManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6622/*"Fgo_20201104"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6622/*"Fgo_20201104"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  v14 = CombineResultFormManager_TypeInfo->static_fields;
  v14->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->lotteryList,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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

  if ( (byte_4187923 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v3);
    byte_4187923 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
      return;
    }
LABEL_13:
    sub_B2C434(v4, v1);
  }
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineResultFormManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4187922 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v1);
    byte_4187922 = 1;
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

  if ( (byte_4187921 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4187921 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
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
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20
  CombineResultFormManager_c *v20; // x0
  __int64 v21; // x3
  int v22; // w20
  int i; // w25
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  int v36; // w23
  int j; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x1
  CombineResultFormManager_c *v39; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lotteryList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 v44; // x0
  CombineResultFormManager_c *v45; // x0

  if ( (byte_4187925 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v2);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B2C35C(&ManagerConfig_TypeInfo, v8);
    sub_B2C35C(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v9);
    byte_4187925 = 1;
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
    v16 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v16, v15, 0LL);
    if ( !v16 )
      sub_B2C434(v17, v18);
    v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                               v16,
                               v16->klass->vtable._23_ReadChars.methodPtr);
    v20 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
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
      v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
              v16,
              v16->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v22 >= 1 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v24 = sub_B2C42C(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          CombineResultFormManager_svtUnplayedVoiceList___ctor(
            (CombineResultFormManager_svtUnplayedVoiceList_o *)v24,
            0LL);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v24 )
            sub_B2C434(v25, v26);
          *(_DWORD *)(v24 + 16) = v25;
          v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v27,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
          *(_QWORD *)(v24 + 24) = v27;
          v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v24 + 24);
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v24 + 24),
            (System_Int32_array **)v27,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v36 >= 1 )
          {
            for ( j = 0; j < v36; ++j )
            {
              v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                                                             v16,
                                                                             v16->klass->vtable._23_ReadChars.methodPtr);
              if ( !*v28 )
                sub_B2C434(0LL, v38);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                *v28,
                v38,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            }
          }
          v39 = CombineResultFormManager_TypeInfo;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v39 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v39->static_fields->lotteryList;
          if ( !lotteryList )
            sub_B2C434(0LL, v35);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lotteryList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
        }
      }
      v11 = 1;
    }
    klass = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v42;
        p_offset += 4;
        if ( v42 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v44 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_38:
      v44 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v21);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v44)(v16, *(_QWORD *)(v44 + 8));
  }
  else
  {
    v45 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v45);
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

  if ( (byte_4187924 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4187924 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL) )
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v16 = v15->fields._items->m_Items[i];
  if ( !v16 || (voiceIdList = (CombineResultFormManager_c *)v16->fields.voiceIdList) == 0LL )
LABEL_40:
    sub_B2C434(voiceIdList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceIdList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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
  __int64 v21; // x3
  int i; // w23
  CombineResultFormManager_c *v23; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v24; // x21
  CombineResultFormManager_svtUnplayedVoiceList_o *v25; // x24
  struct System_Collections_Generic_List_string__o *voiceIdList; // x8
  signed __int64 v27; // x21
  __int64 v28; // x0
  unsigned __int64 j; // x25
  struct System_Collections_Generic_List_string__o *v30; // x26
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0

  if ( (byte_4187926 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v2);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_B2C35C(&ManagerConfig_TypeInfo, v8);
    byte_4187926 = 1;
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
  v14 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v14, v13, 0LL);
  v16 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v16 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_B2C434(v16, v15);
  if ( !v14 )
    sub_B2C434(v16, v15);
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
    for ( i = 0; i < size; ++i )
    {
      v23 = CombineResultFormManager_TypeInfo;
      if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v23 = CombineResultFormManager_TypeInfo;
      }
      v24 = v23->static_fields->lotteryList;
      if ( !v24 )
        sub_B2C434(v23, v20);
      if ( v24->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v25 = v24->fields._items->m_Items[i];
      if ( !v25 )
        sub_B2C434(v23, v20);
      voiceIdList = v25->fields.voiceIdList;
      if ( !voiceIdList )
        sub_B2C434(v23, v20);
      v27 = voiceIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        (unsigned int)v25->fields.svtId,
        v14->klass->vtable._18_Write.methodPtr);
      v28 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
              v14,
              (unsigned int)v27,
              v14->klass->vtable._18_Write.methodPtr);
      if ( (int)v27 >= 1 )
      {
        for ( j = 0LL; (__int64)j < v27; ++j )
        {
          v30 = v25->fields.voiceIdList;
          if ( !v30 )
            sub_B2C434(v28, v20);
          if ( j >= (unsigned int)v30->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v28 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v14->klass->vtable._22_Write.method)(
                  v14,
                  v30->fields._items->m_Items[j],
                  v14->klass[1]._1.image);
        }
      }
    }
  }
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v34 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v14, *(_QWORD *)(v34 + 8));
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v28; // x8
  int32_t i; // w26
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v31; // x8
  int32_t svtId; // w28
  __int64 v33; // x22
  __int64 v34; // x23
  __int64 v35; // x22
  __int64 v36; // x8
  _BOOL8 v37; // x0
  __int64 v38; // x1
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
  if ( (byte_4187928 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v20);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4187928 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&j, 0, sizeof(j));
  v50 = 0;
  if ( !v4 )
    goto LABEL_72;
  v22 = ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0LL);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !v22 )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v52 = v48;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v24 )
      break;
    if ( !v52.fields.current )
      sub_B2C434(v24, v25);
    klass = v52.fields.current[4].klass;
    if ( !klass )
      sub_B2C434(v24, v25);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v47 = sub_B2C460(v24);
      sub_B2C400(v47, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B2C434(v24, v25);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v23 )
        sub_B2C434(v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        data[2],
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v49[0] = 90;
  v50 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  v50 = 0;
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v28 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v28 )
    goto LABEL_72;
  if ( !*(_DWORD *)(v28 + 24) )
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v31 = lotteryList->fields._items->m_Items[i];
    if ( !v31 || !baseUsrSvtData )
      goto LABEL_72;
    svtId = v31->fields.svtId;
    v34 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v34;
    *(_QWORD *)&v53.fields.fakeValue = v33;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL) )
      break;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v35 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v35 )
    goto LABEL_72;
  if ( *(_DWORD *)(v35 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 8LL * i + 32);
  if ( !v36 )
    goto LABEL_72;
  svtVoiceEntity = *(ServantVoiceEntity_o **)(v36 + 24);
  if ( !svtVoiceEntity )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtVoiceEntity,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v48;
        ;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
          (WarBoardManager_TaskList_o *)j.fields.current,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &j,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v37 )
      break;
    if ( !v23 )
      sub_B2C434(v37, v38);
  }
  v49[0] = 218;
  v39 = ++v50;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &j,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v39 && v49[v39 - 1] == 218 )
    v50 = v39 - 1;
  if ( !v23 )
    goto LABEL_72;
  size = v23->fields._size;
  if ( size < 1 )
  {
LABEL_70:
    v42 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_31413028(v4, baseUsrSvtData, v42, 0LL);
  }
  v41 = UnityEngine_Random__Range_35348680(0, size, 0LL);
  if ( v23->fields._size <= (unsigned int)v41 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  v42 = (System_String_o *)v23->fields._items->m_Items[v41];
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v44 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 8LL * i + 32);
  if ( !v44 || (svtVoiceEntity = *(ServantVoiceEntity_o **)(v44 + 24)) == 0LL )
LABEL_72:
    sub_B2C434(svtVoiceEntity, baseUsrSvtData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtVoiceEntity,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  CombineResultFormManager__WriteData(v45);
  return ServantVoiceEntity__lotteryLevelUpVoice_31413028(v4, baseUsrSvtData, v42, 0LL);
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
  __int64 v19; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  __int64 v28; // x24
  __int64 v29; // x25
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v34; // x8
  const MethodInfo *v35; // x0
  int32_t size; // w1
  int32_t v37; // w21
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v4 = svtVoiceEntity;
  if ( (byte_4187927 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, baseUsrSvtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B2C35C(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v17);
    byte_4187927 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !v4 )
    goto LABEL_44;
  v18 = ServantVoiceEntity__randomChangeSvtVoiceCount(v4, baseUsrSvtData, 0LL);
  v19 = sub_B2C42C(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  CombineResultFormManager_svtUnplayedVoiceList___ctor((CombineResultFormManager_svtUnplayedVoiceList_o *)v19, 0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !v19 )
    goto LABEL_44;
  *(_QWORD *)(v19 + 24) = v20;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !baseUsrSvtData )
    goto LABEL_44;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v29;
  *(_QWORD *)&v42.fields.fakeValue = v28;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
  *(_DWORD *)(v19 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v18 )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v30 )
      break;
    if ( !v41.fields.current )
      sub_B2C434(v30, v31);
    klass = v41.fields.current[4].klass;
    if ( !klass )
      sub_B2C434(v30, v31);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v39 = sub_B2C460(v30);
      sub_B2C400(v39, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B2C434(v30, v31);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v27 )
        sub_B2C434(v30, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        data[2],
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v34 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v34 )
    goto LABEL_44;
  if ( !*(_DWORD *)(v34 + 24) )
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
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__),
        svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v35),
        !v27) )
  {
LABEL_44:
    sub_B2C434(svtVoiceEntity, baseUsrSvtData);
  }
  size = v27->fields._size;
  if ( !size )
    return 0LL;
  v37 = UnityEngine_Random__Range_35348680(0, size, 0LL);
  if ( v27->fields._size <= (unsigned int)v37 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return ServantVoiceEntity__lotteryLevelUpVoice_31413028(
           v4,
           baseUsrSvtData,
           (System_String_o *)v27->fields._items->m_Items[v37],
           0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}