void __fastcall CombineResultFormManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  struct CombineResultFormManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E817C & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6701/*"Fgo_20201104"*/, v14, v15, v16);
    byte_42E817C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CombineResultFormManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6701/*"Fgo_20201104"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6701/*"Fgo_20201104"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList___ctor__);
  v20 = CombineResultFormManager_TypeInfo->static_fields;
  v20->lotteryList = (struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v20->lotteryList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall CombineResultFormManager___ctor(CombineResultFormManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultFormManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  CombineResultFormManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *lotteryList; // x8

  if ( (byte_42E8176 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__,
      v4,
      v5,
      v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v7,
      v8,
      v9);
    byte_42E8176 = 1;
  }
  v10 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v10 = CombineResultFormManager_TypeInfo;
  }
  lotteryList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->lotteryList;
  if ( !lotteryList )
    goto LABEL_13;
  if ( lotteryList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (lotteryList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CombineResultFormManager_TypeInfo->static_fields->lotteryList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        lotteryList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Clear__);
      return;
    }
LABEL_13:
    sub_B5D69C(v10, v1);
  }
}


void __fastcall CombineResultFormManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CombineResultFormManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E8175 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v1, v2, v3);
    byte_42E8175 = 1;
  }
  v4 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall CombineResultFormManager__GetSaveFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E8174 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E8174 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(4, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


bool __fastcall CombineResultFormManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  ManagerConfig_c *v28; // x0
  bool v29; // w20
  CombineResultFormManager_c *v30; // x0
  System_String_o *SaveFileName; // x19
  CombineResultFormManager_c *v32; // x0
  System_IO_Stream_o *v33; // x20
  System_IO_BinaryReader_o *v34; // x19
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x20
  CombineResultFormManager_c *v38; // x0
  __int64 v39; // x3
  int v40; // w20
  int i; // w25
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  int v54; // w23
  int j; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x1
  CombineResultFormManager_c *v57; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lotteryList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 v62; // x0
  CombineResultFormManager_c *v63; // x0

  if ( (byte_42E8178 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CombineResultFormManager_svtUnplayedVoiceList_TypeInfo, v25, v26, v27);
    byte_42E8178 = 1;
  }
  v28 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v28 = ManagerConfig_TypeInfo;
  }
  if ( v28->static_fields->UseMock )
    return 1;
  v30 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v30);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v32 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v32);
    v33 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v34 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v34, v33, 0LL);
    if ( !v34 )
      sub_B5D69C(v35, v36);
    v37 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v34->klass->vtable._22_ReadString.method)(
                               v34,
                               v34->klass->vtable._23_ReadChars.methodPtr);
    v38 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      v38 = CombineResultFormManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v38->static_fields->SAVE_DATA_VERSION, v37, 0LL) )
    {
      v29 = 0;
    }
    else
    {
      v40 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v34->klass->vtable._15_ReadInt32.method)(
              v34,
              v34->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v40 >= 1 )
      {
        for ( i = 0; i < v40; ++i )
        {
          v42 = sub_B5D694(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
          CombineResultFormManager_svtUnplayedVoiceList___ctor(
            (CombineResultFormManager_svtUnplayedVoiceList_o *)v42,
            0LL);
          v43 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v34->klass->vtable._15_ReadInt32.method)(
                  v34,
                  v34->klass->vtable._16_ReadUInt32.methodPtr);
          if ( !v42 )
            sub_B5D69C(v43, v44);
          *(_DWORD *)(v42 + 16) = v43;
          v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v45,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
          *(_QWORD *)(v42 + 24) = v45;
          v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v42 + 24);
          sub_B5D560(
            (BattleServantConfConponent_o *)(v42 + 24),
            (System_Int32_array **)v45,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          v54 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v34->klass->vtable._15_ReadInt32.method)(
                  v34,
                  v34->klass->vtable._16_ReadUInt32.methodPtr);
          if ( v54 >= 1 )
          {
            for ( j = 0; j < v54; ++j )
            {
              v56 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v34->klass->vtable._22_ReadString.method)(
                                                                             v34,
                                                                             v34->klass->vtable._23_ReadChars.methodPtr);
              if ( !*v46 )
                sub_B5D69C(0LL, v56);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                *v46,
                v56,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            }
          }
          v57 = CombineResultFormManager_TypeInfo;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            v57 = CombineResultFormManager_TypeInfo;
          }
          lotteryList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57->static_fields->lotteryList;
          if ( !lotteryList )
            sub_B5D69C(0LL, v53);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lotteryList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__);
        }
      }
      v29 = 1;
    }
    klass = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v60;
        p_offset += 4;
        if ( v60 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_38;
      }
      v62 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_38:
      v62 = sub_AF54C0(v34, System_IDisposable_TypeInfo, 0LL, v39);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v62)(v34, *(_QWORD *)(v62 + 8));
  }
  else
  {
    v63 = CombineResultFormManager_TypeInfo;
    if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    }
    CombineResultFormManager__ClearSaveDataList((const MethodInfo *)v63);
    return 0;
  }
  return v29;
}


void __fastcall CombineResultFormManager__ResetVoiceList(UserServantEntity_o *baseUsrSvtData, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CombineResultFormManager_c *voiceIdList; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x8
  int32_t i; // w23
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v20; // x20
  CombineResultFormManager_svtUnplayedVoiceList_o *v21; // x8
  int32_t svtId; // w25
  __int64 v23; // x20
  __int64 v24; // x21
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v25; // x19
  CombineResultFormManager_svtUnplayedVoiceList_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42E8177 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    byte_42E8177 = 1;
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
    v20 = voiceIdList->static_fields->lotteryList;
    if ( !v20 )
      goto LABEL_40;
    if ( i >= v20->fields._size )
      return;
    if ( (BYTE3(voiceIdList->vtable._0_Equals.methodPtr) & 4) != 0 && !voiceIdList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(voiceIdList);
      v20 = CombineResultFormManager_TypeInfo->static_fields->lotteryList;
      if ( !v20 )
        goto LABEL_40;
    }
    if ( v20->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v21 = v20->fields._items->m_Items[i];
    if ( !v21 || !baseUsrSvtData )
      goto LABEL_40;
    svtId = v21->fields.svtId;
    v24 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v24;
    *(_QWORD *)&v27.fields.fakeValue = v23;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL) )
      break;
  }
  voiceIdList = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    voiceIdList = CombineResultFormManager_TypeInfo;
  }
  v25 = voiceIdList->static_fields->lotteryList;
  if ( !v25 )
    goto LABEL_40;
  if ( v25->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v26 = v25->fields._items->m_Items[i];
  if ( !v26 || (voiceIdList = (CombineResultFormManager_c *)v26->fields.voiceIdList) == 0LL )
LABEL_40:
    sub_B5D69C(voiceIdList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceIdList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
}


bool __fastcall CombineResultFormManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  ManagerConfig_c *v25; // x0
  CombineResultFormManager_c *v27; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v29; // x20
  System_IO_BinaryWriter_o *v30; // x19
  __int64 v31; // x1
  CombineResultFormManager_c *v32; // x0
  struct CombineResultFormManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x9
  int size; // w20
  __int64 v36; // x1
  __int64 v37; // x3
  int i; // w23
  CombineResultFormManager_c *v39; // x0
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *v40; // x21
  CombineResultFormManager_svtUnplayedVoiceList_o *v41; // x24
  struct System_Collections_Generic_List_string__o *voiceIdList; // x8
  signed __int64 v43; // x21
  __int64 v44; // x0
  unsigned __int64 j; // x25
  struct System_Collections_Generic_List_string__o *v46; // x26
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 v50; // x0

  if ( (byte_42E8179 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v10, v11, v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__,
      v16,
      v17,
      v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v19, v20, v21);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v22, v23, v24);
    byte_42E8179 = 1;
  }
  v25 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v25 = ManagerConfig_TypeInfo;
  }
  if ( v25->static_fields->UseMock )
    return 0;
  v27 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
  }
  SaveFileName = CombineResultFormManager__GetSaveFileName((const MethodInfo *)v27);
  v29 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v30 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v30, v29, 0LL);
  v32 = CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    v32 = CombineResultFormManager_TypeInfo;
  }
  static_fields = v32->static_fields;
  lotteryList = static_fields->lotteryList;
  if ( !lotteryList )
    sub_B5D69C(v32, v31);
  if ( !v30 )
    sub_B5D69C(v32, v31);
  size = lotteryList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v30->klass->vtable._22_Write.method)(
    v30,
    static_fields->SAVE_DATA_VERSION,
    v30->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._17_Write.method)(
    v30,
    (unsigned int)size,
    v30->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      v39 = CombineResultFormManager_TypeInfo;
      if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        v39 = CombineResultFormManager_TypeInfo;
      }
      v40 = v39->static_fields->lotteryList;
      if ( !v40 )
        sub_B5D69C(v39, v36);
      if ( v40->fields._size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v41 = v40->fields._items->m_Items[i];
      if ( !v41 )
        sub_B5D69C(v39, v36);
      voiceIdList = v41->fields.voiceIdList;
      if ( !voiceIdList )
        sub_B5D69C(v39, v36);
      v43 = voiceIdList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._17_Write.method)(
        v30,
        (unsigned int)v41->fields.svtId,
        v30->klass->vtable._18_Write.methodPtr);
      v44 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v30->klass->vtable._17_Write.method)(
              v30,
              (unsigned int)v43,
              v30->klass->vtable._18_Write.methodPtr);
      if ( (int)v43 >= 1 )
      {
        for ( j = 0LL; (__int64)j < v43; ++j )
        {
          v46 = v41->fields.voiceIdList;
          if ( !v46 )
            sub_B5D69C(v44, v36);
          if ( j >= (unsigned int)v46->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v44 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, System_String_o *, void *))v30->klass->vtable._22_Write.method)(
                  v30,
                  v46->fields._items->m_Items[j],
                  v30->klass[1]._1.image);
        }
      }
    }
  }
  klass = v30->klass;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      p_offset += 4;
      if ( v48 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v50 = sub_AF54C0(v30, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v50)(v30, *(_QWORD *)(v50 + 8));
  return 1;
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResult(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantVoiceEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  System_Collections_Generic_List_SvtVoiceInfo__o *v57; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x21
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v63; // x8
  int32_t i; // w26
  struct System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__o *lotteryList; // x22
  CombineResultFormManager_svtUnplayedVoiceList_o *v66; // x8
  int32_t svtId; // w28
  __int64 v68; // x22
  __int64 v69; // x23
  __int64 v70; // x22
  __int64 v71; // x8
  _BOOL8 v72; // x0
  __int64 v73; // x1
  int v74; // w22
  int32_t size; // w1
  int32_t v76; // w22
  System_String_o *v77; // x21
  __int64 v78; // x22
  __int64 v79; // x8
  const MethodInfo *v80; // x0
  __int64 v82; // x0
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+8h] [xbp-B8h] BYREF
  int v84[2]; // [xsp+20h] [xbp-A0h]
  int v85; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v5 = svtVoiceEntity;
  if ( (byte_42E817B & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, (_DWORD)baseUsrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v39, v40, v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v42,
      v43,
      v44);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Item__,
      v45,
      v46,
      v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v51, v52, v53);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B5D5C4(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               v54,
                                               v55,
                                               v56);
    byte_42E817B = 1;
  }
  memset(&v87, 0, sizeof(v87));
  memset(&j, 0, sizeof(j));
  v85 = 0;
  if ( !v5 )
    goto LABEL_72;
  v57 = ServantVoiceEntity__randomChangeSvtVoiceCount(v5, baseUsrSvtData, 0LL);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v57 )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v83,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v57,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v87 = v83;
  while ( 1 )
  {
    v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v87,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v59 )
      break;
    if ( !v87.fields.current )
      sub_B5D69C(v59, v60);
    klass = v87.fields.current[4].klass;
    if ( !klass )
      sub_B5D69C(v59, v60);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v82 = sub_B5D6C8(v59);
      sub_B5D668(v82, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B5D69C(v59, v60);
    if ( *((_DWORD *)data + 14) )
    {
      if ( !v58 )
        sub_B5D69C(v59, v60);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v58,
        data[2],
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v84[0] = 90;
  v85 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v87,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  v85 = 0;
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v63 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v63 )
    goto LABEL_72;
  if ( !*(_DWORD *)(v63 + 24) )
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v66 = lotteryList->fields._items->m_Items[i];
    if ( !v66 || !baseUsrSvtData )
      goto LABEL_72;
    svtId = v66->fields.svtId;
    v69 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v68 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v88.fields.currentCryptoKey = v69;
    *(_QWORD *)&v88.fields.fakeValue = v68;
    if ( svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v88, 0LL) )
      break;
  }
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v70 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v70 )
    goto LABEL_72;
  if ( *(_DWORD *)(v70 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v71 = *(_QWORD *)(*(_QWORD *)(v70 + 16) + 8LL * i + 32);
  if ( !v71 )
    goto LABEL_72;
  svtVoiceEntity = *(ServantVoiceEntity_o **)(v71 + 24);
  if ( !svtVoiceEntity )
    goto LABEL_72;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v83,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)svtVoiceEntity,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( j = v83;
        ;
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v58,
          (WarBoardManager_TaskList_o *)j.fields.current,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__) )
  {
    v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &j,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v72 )
      break;
    if ( !v58 )
      sub_B5D69C(v72, v73);
  }
  v84[0] = 218;
  v74 = ++v85;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &j,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v74 && v84[v74 - 1] == 218 )
    v85 = v74 - 1;
  if ( !v58 )
    goto LABEL_72;
  size = v58->fields._size;
  if ( size < 1 )
  {
LABEL_70:
    v77 = 0LL;
    return ServantVoiceEntity__lotteryLevelUpVoice_31480304(v5, baseUsrSvtData, v77, 0LL);
  }
  v76 = UnityEngine_Random__Range_35654020(0, size, 0LL);
  if ( v58->fields._size <= (unsigned int)v76 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  v77 = (System_String_o *)v58->fields._items->m_Items[v76];
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v78 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v78 )
    goto LABEL_72;
  if ( *(_DWORD *)(v78 + 24) <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v79 = *(_QWORD *)(*(_QWORD *)(v78 + 16) + 8LL * i + 32);
  if ( !v79 || (svtVoiceEntity = *(ServantVoiceEntity_o **)(v79 + 24)) == 0LL )
LABEL_72:
    sub_B5D69C(svtVoiceEntity, baseUsrSvtData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)svtVoiceEntity,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  CombineResultFormManager__WriteData(v80);
  return ServantVoiceEntity__lotteryLevelUpVoice_31480304(v5, baseUsrSvtData, v77, 0LL);
}


ServantVoiceData_array *__fastcall CombineResultFormManager__lotteryCombineResultInit(
        ServantVoiceEntity_o *svtVoiceEntity,
        UserServantEntity_o *baseUsrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantVoiceEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_SvtVoiceInfo__o *v45; // x23
  __int64 v46; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x22
  __int64 v55; // x24
  __int64 v56; // x25
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppClass *klass; // x8
  EventMissionProgressRequest_Argument_ProgressData_o **data; // x8
  __int64 v61; // x8
  const MethodInfo *v62; // x0
  int32_t size; // w1
  int32_t v64; // w21
  __int64 v66; // x0
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v5 = svtVoiceEntity;
  if ( (byte_42E817A & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, (_DWORD)baseUsrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__get_Count__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    svtVoiceEntity = (ServantVoiceEntity_o *)sub_B5D5C4(
                                               &CombineResultFormManager_svtUnplayedVoiceList_TypeInfo,
                                               v42,
                                               v43,
                                               v44);
    byte_42E817A = 1;
  }
  memset(&v68, 0, sizeof(v68));
  if ( !v5 )
    goto LABEL_44;
  v45 = ServantVoiceEntity__randomChangeSvtVoiceCount(v5, baseUsrSvtData, 0LL);
  v46 = sub_B5D694(CombineResultFormManager_svtUnplayedVoiceList_TypeInfo);
  CombineResultFormManager_svtUnplayedVoiceList___ctor((CombineResultFormManager_svtUnplayedVoiceList_o *)v46, 0LL);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v46 )
    goto LABEL_44;
  *(_QWORD *)(v46 + 24) = v47;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 24), (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !baseUsrSvtData )
    goto LABEL_44;
  v56 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v56;
  *(_QWORD *)&v69.fields.fakeValue = v55;
  svtVoiceEntity = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
  *(_DWORD *)(v46 + 16) = (_DWORD)svtVoiceEntity;
  if ( !v45 )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v68 = v67;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v57 )
      break;
    if ( !v68.fields.current )
      sub_B5D69C(v57, v58);
    klass = v68.fields.current[4].klass;
    if ( !klass )
      sub_B5D69C(v57, v58);
    if ( !LODWORD(klass->_1.namespaze) )
    {
      v66 = sub_B5D6C8(v57);
      sub_B5D668(v66, 0LL);
    }
    data = (EventMissionProgressRequest_Argument_ProgressData_o **)klass->_1.byval_arg.data;
    if ( !data )
      sub_B5D69C(v57, v58);
    if ( !*((_DWORD *)data + 14) )
    {
      if ( !v54 )
        sub_B5D69C(v57, v58);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v54,
        data[2],
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
    svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager_TypeInfo;
  }
  v61 = *(_QWORD *)(*(_QWORD *)&svtVoiceEntity[4].fields.type + 8LL);
  if ( !v61 )
    goto LABEL_44;
  if ( !*(_DWORD *)(v61 + 24) )
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
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineResultFormManager_svtUnplayedVoiceList__Add__),
        svtVoiceEntity = (ServantVoiceEntity_o *)CombineResultFormManager__WriteData(v62),
        !v54) )
  {
LABEL_44:
    sub_B5D69C(svtVoiceEntity, baseUsrSvtData);
  }
  size = v54->fields._size;
  if ( !size )
    return 0LL;
  v64 = UnityEngine_Random__Range_35654020(0, size, 0LL);
  if ( v54->fields._size <= (unsigned int)v64 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return ServantVoiceEntity__lotteryLevelUpVoice_31480304(
           v5,
           baseUsrSvtData,
           (System_String_o *)v54->fields._items->m_Items[v64],
           0LL);
}


void __fastcall CombineResultFormManager_svtUnplayedVoiceList___ctor(
        CombineResultFormManager_svtUnplayedVoiceList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}