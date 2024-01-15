void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F94D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v8);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6599/*"Fgo_20210622"*/, v10);
    byte_40F94D5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6599/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6599/*"Fgo_20210622"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                   v13,
                                                                                                   v14,
                                                                                                   v15,
                                                                                                   v16);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v18 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v18->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->svtCharaGraphEXOpenDict,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_40F94D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v1);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v2);
    byte_40F94D0 = 1;
  }
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v3->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40F94CE & 1) == 0 )
  {
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_40F94CE = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40F94CD & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40F94CD = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0

  if ( (byte_40F94CF & 1) == 0 )
  {
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_40F94CF = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantCharaGraphEXOpenManager_c *v8; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v10; // x0
  ServantCharaGraphEXOpenManager_c *v11; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v12; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F94D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v7);
    byte_40F94D3 = 1;
  }
  value = 0LL;
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          svtCharaGraphEXOpenDict,
          (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v10);
  }
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  v12 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v11->static_fields->svtCharaGraphEXOpenDict;
  if ( !v12 )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          v12,
          svtId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  if ( !value )
LABEL_21:
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
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
  bool v10; // w20
  ServantCharaGraphEXOpenManager_c *v11; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v13; // x0
  System_IO_Stream_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_IO_BinaryReader_o *v19; // x19
  System_String_o *v20; // x20
  ServantCharaGraphEXOpenManager_c *v21; // x0
  int v22; // w20
  int i; // w25
  int32_t v24; // w21
  int v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_int__o *v30; // x22
  int j; // w26
  int32_t v32; // w1
  ServantCharaGraphEXOpenManager_c *v33; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  ServantCharaGraphEXOpenManager_c *v39; // x0

  if ( (byte_40F94D1 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v2);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&ManagerConfig_TypeInfo, v7);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v8);
    byte_40F94D1 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 1;
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v11);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v13 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v13);
    v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v19 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v15, v16, v17, v18);
    System_IO_BinaryReader___ctor(v19, v14, 0LL);
    if ( !v19 )
      sub_B170D4();
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._22_ReadString.method)(
                               v19,
                               v19->klass->vtable._23_ReadChars.methodPtr);
    v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v21->static_fields->SAVE_DATA_VERSION, v20, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
              v19,
              v19->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v22 >= 1 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                  v19,
                  v19->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                  v19,
                  v19->klass->vtable._16_ReadUInt32.methodPtr);
          v30 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v26,
                                                            v27,
                                                            v28,
                                                            v29);
          System_Collections_Generic_List_int____ctor(
            v30,
            (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v25 >= 1 )
          {
            for ( j = 0; j < v25; ++j )
            {
              v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v19->klass->vtable._15_ReadInt32.method)(
                      v19,
                      v19->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v30 )
                sub_B170D4();
              System_Collections_Generic_List_int___Add(
                v30,
                v32,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v33 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v33 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v33->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_B170D4();
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            svtCharaGraphEXOpenDict,
            v24,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v30,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v10 = 1;
    }
    klass = v19->klass;
    if ( *(_WORD *)&v19->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v38 = sub_AAFEF8(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v19, *(_QWORD *)(v38 + 8));
  }
  else
  {
    v39 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v39);
    return 0;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantCharaGraphEXOpenManager_c *v12; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v15; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_int__o *v21; // x21
  ServantCharaGraphEXOpenManager_c *v22; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v23; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F94D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v11);
    byte_40F94D4 = 1;
  }
  value = 0LL;
  v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v12->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          svtCharaGraphEXOpenDict,
          (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v14 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v14);
  }
  v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v15->static_fields->svtCharaGraphEXOpenDict;
  if ( !v16 )
    goto LABEL_28;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         v16,
         svtId,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    if ( !value )
      goto LABEL_28;
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)value,
            limitCount,
            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      if ( value )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)value,
          limitCount,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_28:
      sub_B170D4();
    }
  }
  else
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v17,
                                                      v18,
                                                      v19,
                                                      v20);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v21 )
      goto LABEL_28;
    System_Collections_Generic_List_int___Add(
      v21,
      limitCount,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v22 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v22 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    v23 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v22->static_fields->svtCharaGraphEXOpenDict;
    if ( !v23 )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v23,
      svtId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v21,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
  }
}


bool __fastcall ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v16; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_IO_BinaryWriter_o *v23; // x19
  ServantCharaGraphEXOpenManager_c *v24; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  int32_t Count; // w0
  unsigned int v27; // w20
  struct System_Collections_Generic_Dictionary_int__List_int___o *v28; // x0
  Il2CppObject *value; // x22
  signed __int64 monitor_low; // x20
  unsigned __int64 i; // x23
  char v32; // w8
  int v33; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+0h] [xbp-A0h] BYREF
  int v39[4]; // [xsp+28h] [xbp-78h] BYREF
  int v40; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_40F94D2 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v11);
    sub_B16FFC(&ManagerConfig_TypeInfo, v12);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v13);
    byte_40F94D2 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v16 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v16);
    v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v23 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v19, v20, v21, v22);
    System_IO_BinaryWriter___ctor_39195976(v23, v18, 0LL);
    v24 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v24 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v24->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_B170D4();
    Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v23 )
      sub_B170D4();
    v27 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
      v23,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v23->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
      v23,
      v27,
      v23->klass->vtable._18_Write.methodPtr);
    v28 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v28 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v38,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v28,
      (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v41 = v38;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v41,
              (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
    {
      value = v41.fields.current.fields.value;
      if ( !v41.fields.current.fields.value )
        sub_B170D4();
      monitor_low = SLODWORD(v41.fields.current.fields.value[1].monitor);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(v41.fields.current.fields.key),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        (unsigned int)monitor_low,
        v23->klass->vtable._18_Write.methodPtr);
      if ( (int)monitor_low >= 1 )
      {
        for ( i = 0LL; (__int64)i < monitor_low; ++i )
        {
          if ( i >= LODWORD(value[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
            v23,
            *((unsigned int *)&value[1].klass->_1.byval_arg.data + i),
            v23->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    v39[0] = 178;
    v40 = 1;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v41,
      (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    if ( v39[0] == 178 )
    {
      v32 = 0;
      v40 = 0;
    }
    else
    {
      v32 = 1;
    }
    *(_DWORD *)((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v32 & 1))) = 190;
    v33 = ++v40;
    klass = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_32;
      }
      v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_32:
      v37 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v37)(v23, *(_QWORD *)(v37 + 8));
    if ( v33 && v39[v33 - 1] == 190 )
      v40 = v33 - 1;
  }
  return 1;
}