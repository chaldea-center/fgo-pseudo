void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_21288700(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40F801D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&waveCount);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40F801D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  if ( !this )
    goto LABEL_11;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      bgmName = BgmMaster__GetBgmFileName(
                  Master_WarQuestSelectionMaster,
                  bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
  }
LABEL_10:
  this->fields._BgmName_k__BackingField = bgmName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BgmName_k__BackingField,
    (System_Int32_array **)bgmName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  OverwriteBattleBgmData_SaveData_o *v6; // x20

  if ( (byte_40F801F & 1) == 0 )
  {
    sub_B16FFC(&OverwriteBattleBgmData_SaveData_TypeInfo, method);
    byte_40F801F = 1;
  }
  if ( !bgmData )
    return 0LL;
  v6 = (OverwriteBattleBgmData_SaveData_o *)sub_B170CC(OverwriteBattleBgmData_SaveData_TypeInfo, method, v2, v3, v4);
  OverwriteBattleBgmData_SaveData___ctor_21866748(v6, bgmData, 0LL);
  return v6;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  int32_t v12; // w0
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array **BgmFileName; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F801E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, method);
    sub_B16FFC(&Method_BasicHelper_IndexValue_string___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&OverwriteBattleBgmData_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F801E = 1;
  }
  if ( !sv )
    return 0LL;
  v11 = sub_B170CC(OverwriteBattleBgmData_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  v12 = BasicHelper__IndexValue_int_(
          sv->fields.intParamArray,
          0,
          0,
          (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  if ( !v11 )
    goto LABEL_14;
  *(_DWORD *)(v11 + 16) = v12;
  *(_DWORD *)(v11 + 20) = BasicHelper__IndexValue_int_(
                            sv->fields.intParamArray,
                            1,
                            0,
                            (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  *(_DWORD *)(v11 + 32) = BasicHelper__IndexValue_int_(
                            sv->fields.intParamArray,
                            2,
                            0,
                            (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  v13 = (System_Int32_array **)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)sv->fields.strParamArray,
                                 0,
                                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                 (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v11 + 24) = v13;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), v13, v14, v15, v16, v17, v18, v19);
  if ( *(int *)(v11 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 24), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      BgmFileName = (System_Int32_array **)BgmMaster__GetBgmFileName(
                                             Master_WarQuestSelectionMaster,
                                             *(_DWORD *)(v11 + 20),
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL);
      *(_QWORD *)(v11 + 24) = BgmFileName;
      sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), BgmFileName, v22, v23, v24, v25, v26, v27);
      return (OverwriteBattleBgmData_o *)v11;
    }
LABEL_14:
    sub_B170D4();
  }
  return (OverwriteBattleBgmData_o *)v11;
}


int32_t __fastcall OverwriteBattleBgmData__get_BgmId(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  return this->fields._BgmId_k__BackingField;
}


System_String_o *__fastcall OverwriteBattleBgmData__get_BgmName(
        OverwriteBattleBgmData_o *this,
        const MethodInfo *method)
{
  return this->fields._BgmName_k__BackingField;
}


int32_t __fastcall OverwriteBattleBgmData__get_WaveCount(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  return this->fields._WaveCount_k__BackingField;
}


bool __fastcall OverwriteBattleBgmData__get_allowSubBgmPlaying(
        OverwriteBattleBgmData_o *this,
        const MethodInfo *method)
{
  return this->fields.allowSubBgmPlayingRawValue > 0;
}


void __fastcall OverwriteBattleBgmData__set_BgmId(
        OverwriteBattleBgmData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgmId_k__BackingField = value;
}


void __fastcall OverwriteBattleBgmData__set_BgmName(
        OverwriteBattleBgmData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BgmName_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BgmName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall OverwriteBattleBgmData__set_WaveCount(
        OverwriteBattleBgmData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._WaveCount_k__BackingField = value;
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor(
        OverwriteBattleBgmData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_21866748(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Int32_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *v14; // x1
  unsigned int max_length; // w8
  __int64 v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **BgmName_k__BackingField; // x20
  struct System_Int32_array *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40F8365 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, bgmData);
    sub_B16FFC(&string___TypeInfo, v5);
    byte_40F8365 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v6);
  if ( !bgmData )
    goto LABEL_14;
  v14 = v7;
  if ( !v7 )
    goto LABEL_14;
  max_length = v7->max_length;
  if ( !max_length )
    goto LABEL_13;
  v7->m_Items[1] = bgmData->fields._WaveCount_k__BackingField;
  if ( max_length == 1 )
    goto LABEL_13;
  v7->m_Items[2] = bgmData->fields._BgmId_k__BackingField;
  if ( max_length <= 2 )
    goto LABEL_13;
  v7->m_Items[3] = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v7 = (struct System_Int32_array *)sub_B17014(string___TypeInfo, 1LL, v16);
  if ( !v7 )
LABEL_14:
    sub_B170D4();
  BgmName_k__BackingField = (System_Int32_array **)bgmData->fields._BgmName_k__BackingField;
  v23 = v7;
  if ( BgmName_k__BackingField )
  {
    v7 = (struct System_Int32_array *)sub_B170BC(BgmName_k__BackingField, v7->obj.klass->_1.element_class);
    if ( !v7 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v23->max_length )
  {
LABEL_13:
    sub_B17100(v7, v14, v8);
    sub_B170A0();
  }
  *(_QWORD *)&v23->m_Items[1] = BgmName_k__BackingField;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[1], BgmName_k__BackingField, v8, v17, v18, v19, v20, v21);
  this->fields.strParamArray = (struct System_String_array *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.strParamArray,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_21867056(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *overrideBgmData; // x1
  OverwriteBattleBgmData_SaveData_Fields *p_fields; // x19
  System_Int32_array **overrideStrBgmData; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_B170D4();
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)overrideBgmData, v5, v6, v7, v8, v9, v10);
  overrideStrBgmData = (System_Int32_array **)sv->fields.overrideStrBgmData;
  p_fields->strParamArray = (struct System_String_array *)overrideStrBgmData;
  sub_B16F98((BattleServantConfConponent_o *)&p_fields->strParamArray, overrideStrBgmData, v14, v15, v16, v17, v18, v19);
}