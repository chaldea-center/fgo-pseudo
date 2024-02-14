void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_19866068(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_42120EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&waveCount);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_42120EC = 1;
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
    Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_10:
  this->fields._BgmName_k__BackingField = bgmName;
  sub_B0D840(&this->fields._BgmName_k__BackingField, bgmName);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  OverwriteBattleBgmData_SaveData_o *v4; // x20

  if ( (byte_42120EE & 1) == 0 )
  {
    sub_B0D8A4(&OverwriteBattleBgmData_SaveData_TypeInfo, method);
    byte_42120EE = 1;
  }
  if ( !bgmData )
    return 0LL;
  v4 = (OverwriteBattleBgmData_SaveData_o *)sub_B0D974(OverwriteBattleBgmData_SaveData_TypeInfo, method, v2);
  OverwriteBattleBgmData_SaveData___ctor_19923432(v4, bgmData, 0LL);
  return v4;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v11; // x0
  System_String_o *BgmFileName; // x0

  if ( (byte_42120ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, method);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_string___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&OverwriteBattleBgmData_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_42120ED = 1;
  }
  if ( !sv )
    return 0LL;
  v9 = sub_B0D974(OverwriteBattleBgmData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BasicHelper__IndexValue_int_(
                                                                  sv->fields.intParamArray,
                                                                  0,
                                                                  0,
                                                                  (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  if ( !v9 )
    goto LABEL_14;
  *(_DWORD *)(v9 + 16) = (_DWORD)Master_WarQuestSelectionMaster;
  *(_DWORD *)(v9 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  *(_DWORD *)(v9 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  v11 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)sv->fields.strParamArray,
          0,
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
          (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v9 + 24) = v11;
  sub_B0D840(v9 + 24, v11);
  if ( *(int *)(v9 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v9 + 24), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_WarQuestSelectionMaster,
                      *(_DWORD *)(v9 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v9 + 24) = BgmFileName;
      sub_B0D840(v9 + 24, BgmFileName);
      return (OverwriteBattleBgmData_o *)v9;
    }
LABEL_14:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  return (OverwriteBattleBgmData_o *)v9;
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
  this->fields._BgmName_k__BackingField = value;
  sub_B0D840(&this->fields._BgmName_k__BackingField, value);
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_19923432(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Int32_array *v6; // x0
  unsigned int max_length; // w8
  struct System_String_o *BgmName_k__BackingField; // x20
  struct System_String_array *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4212169 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, bgmData);
    sub_B0D8A4(&string___TypeInfo, v5);
    byte_4212169 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
  if ( !bgmData || !v6 )
    goto LABEL_14;
  max_length = v6->max_length;
  if ( !max_length )
    goto LABEL_13;
  v6->m_Items[1] = bgmData->fields._WaveCount_k__BackingField;
  if ( max_length == 1 )
    goto LABEL_13;
  v6->m_Items[2] = bgmData->fields._BgmId_k__BackingField;
  if ( max_length <= 2 )
    goto LABEL_13;
  v6->m_Items[3] = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = v6;
  sub_B0D840(&this->fields, v6);
  v6 = (struct System_Int32_array *)sub_B0D8BC(string___TypeInfo, 1LL);
  if ( !v6 )
LABEL_14:
    sub_B0D97C(v6);
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  v9 = (struct System_String_array *)v6;
  if ( BgmName_k__BackingField )
  {
    v6 = (struct System_Int32_array *)sub_B0D964(BgmName_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v6 )
    {
      v11 = sub_B0D99C();
      sub_B0D948(v11, 0LL);
    }
  }
  if ( !v9->max_length )
  {
LABEL_13:
    v10 = sub_B0D9A8(v6);
    sub_B0D948(v10, 0LL);
  }
  v9->m_Items[0] = BgmName_k__BackingField;
  sub_B0D840(v9->m_Items, BgmName_k__BackingField);
  this->fields.strParamArray = v9;
  sub_B0D840(&this->fields.strParamArray, v9);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_19923740(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_Int32_array *overrideBgmData; // x1
  OverwriteBattleBgmData_SaveData_Fields *p_fields; // x19
  struct System_String_array *overrideStrBgmData; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_B0D97C(v5);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  p_fields = &this->fields;
  sub_B0D840(p_fields, overrideBgmData);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  p_fields->strParamArray = overrideStrBgmData;
  sub_B0D840(&p_fields->strParamArray, overrideStrBgmData);
}