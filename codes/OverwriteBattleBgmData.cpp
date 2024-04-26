void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OverwriteBattleBgmData___ctor_23359180(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4350CA0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350CA0 = 1;
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
    Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
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
    sub_B7076C(Master_WarQuestSelectionMaster, v12);
  }
LABEL_10:
  this->fields._BgmName_k__BackingField = bgmName;
  sub_B70630(
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
  OverwriteBattleBgmData_SaveData_o *v3; // x20

  if ( (byte_4350CA2 & 1) == 0 )
  {
    sub_B70694(&OverwriteBattleBgmData_SaveData_TypeInfo);
    byte_4350CA2 = 1;
  }
  if ( !bgmData )
    return 0LL;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_B70764(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_23628148(v3, bgmData, 0LL);
  return v3;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **BgmFileName; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4350CA1 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_int____69237232);
    sub_B70694(&Method_BasicHelper_IndexValue_string___);
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&OverwriteBattleBgmData_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350CA1 = 1;
  }
  if ( !sv )
    return 0LL;
  v3 = sub_B70764(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BasicHelper__IndexValue_int_(
                                                                  sv->fields.intParamArray,
                                                                  0,
                                                                  0,
                                                                  (const MethodInfo_1BDECF8 *)Method_BasicHelper_IndexValue_int____69237232);
  if ( !v3 )
    goto LABEL_14;
  *(_DWORD *)(v3 + 16) = (_DWORD)Master_WarQuestSelectionMaster;
  *(_DWORD *)(v3 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_1BDECF8 *)Method_BasicHelper_IndexValue_int____69237232);
  *(_DWORD *)(v3 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_1BDECF8 *)Method_BasicHelper_IndexValue_int____69237232);
  v6 = (System_Int32_array **)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)sv->fields.strParamArray,
                                0,
                                (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v3 + 24) = v6;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v6, v7, v8, v9, v10, v11, v12);
  if ( *(int *)(v3 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v3 + 24), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      BgmFileName = (System_Int32_array **)BgmMaster__GetBgmFileName(
                                             (BgmMaster_o *)Master_WarQuestSelectionMaster,
                                             *(_DWORD *)(v3 + 20),
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL);
      *(_QWORD *)(v3 + 24) = BgmFileName;
      sub_B70630((BattleServantConfConponent_o *)(v3 + 24), BgmFileName, v14, v15, v16, v17, v18, v19);
      return (OverwriteBattleBgmData_o *)v3;
    }
LABEL_14:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  }
  return (OverwriteBattleBgmData_o *)v3;
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
  sub_B70630(
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_23628148(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  struct System_Int32_array *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int max_length; // w8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **BgmName_k__BackingField; // x20
  struct System_Int32_array *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_4350F10 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&string___TypeInfo);
    byte_4350F10 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_14;
  v6 = v5;
  if ( !v5 )
    goto LABEL_14;
  max_length = v5->max_length;
  if ( !max_length )
    goto LABEL_13;
  v5->m_Items[1] = bgmData->fields._WaveCount_k__BackingField;
  if ( max_length == 1 )
    goto LABEL_13;
  v5->m_Items[2] = bgmData->fields._BgmId_k__BackingField;
  if ( max_length <= 2 )
    goto LABEL_13;
  v5->m_Items[3] = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = v5;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v5 = (struct System_Int32_array *)sub_B706AC(string___TypeInfo, 1LL);
  if ( !v5 )
LABEL_14:
    sub_B7076C(v5, v6);
  BgmName_k__BackingField = (System_Int32_array **)bgmData->fields._BgmName_k__BackingField;
  v21 = v5;
  if ( BgmName_k__BackingField )
  {
    v5 = (struct System_Int32_array *)sub_B70754(BgmName_k__BackingField, v5->obj.klass->_1.element_class);
    if ( !v5 )
    {
      v29 = sub_B7078C(0LL);
      sub_B70738(v29, 0LL);
    }
  }
  if ( !v21->max_length )
  {
LABEL_13:
    v28 = sub_B70798(v5);
    sub_B70738(v28, 0LL);
  }
  *(_QWORD *)&v21->m_Items[1] = BgmName_k__BackingField;
  sub_B70630((BattleServantConfConponent_o *)&v21->m_Items[1], BgmName_k__BackingField, v14, v15, v16, v17, v18, v19);
  this->fields.strParamArray = (struct System_String_array *)v21;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.strParamArray,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_23628456(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int32_array *overrideBgmData; // x1
  OverwriteBattleBgmData_SaveData_Fields *p_fields; // x19
  System_Int32_array **overrideStrBgmData; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_B7076C(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  p_fields = &this->fields;
  sub_B70630(
    (BattleServantConfConponent_o *)p_fields,
    (System_Int32_array **)overrideBgmData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  overrideStrBgmData = (System_Int32_array **)sv->fields.overrideStrBgmData;
  p_fields->strParamArray = (struct System_String_array *)overrideStrBgmData;
  sub_B70630((BattleServantConfConponent_o *)&p_fields->strParamArray, overrideStrBgmData, v16, v17, v18, v19, v20, v21);
}