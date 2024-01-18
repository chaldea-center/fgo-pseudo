void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_20184392(
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
  __int64 v14; // x1

  if ( (byte_4185202 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&waveCount);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4185202 = 1;
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
    Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v14);
  }
LABEL_10:
  this->fields._BgmName_k__BackingField = bgmName;
  sub_B2C2F8(&this->fields._BgmName_k__BackingField, bgmName);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  OverwriteBattleBgmData_SaveData_o *v3; // x20

  if ( (byte_4185204 & 1) == 0 )
  {
    sub_B2C35C(&OverwriteBattleBgmData_SaveData_TypeInfo, method);
    byte_4185204 = 1;
  }
  if ( !bgmData )
    return 0LL;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_B2C42C(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_20237756(v3, bgmData, 0LL);
  return v3;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v11; // x0
  System_String_o *BgmFileName; // x0

  if ( (byte_4185203 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, method);
    sub_B2C35C(&Method_BasicHelper_IndexValue_string___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&OverwriteBattleBgmData_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4185203 = 1;
  }
  if ( !sv )
    return 0LL;
  v8 = sub_B2C42C(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BasicHelper__IndexValue_int_(
                                                                  sv->fields.intParamArray,
                                                                  0,
                                                                  0,
                                                                  (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  if ( !v8 )
    goto LABEL_14;
  *(_DWORD *)(v8 + 16) = (_DWORD)Master_WarQuestSelectionMaster;
  *(_DWORD *)(v8 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  *(_DWORD *)(v8 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v11 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)sv->fields.strParamArray,
          0,
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
          (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v8 + 24) = v11;
  sub_B2C2F8(v8 + 24, v11);
  if ( *(int *)(v8 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 24), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_WarQuestSelectionMaster,
                      *(_DWORD *)(v8 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v8 + 24) = BgmFileName;
      sub_B2C2F8(v8 + 24, BgmFileName);
      return (OverwriteBattleBgmData_o *)v8;
    }
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  }
  return (OverwriteBattleBgmData_o *)v8;
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
  sub_B2C2F8(&this->fields._BgmName_k__BackingField, value);
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_20237756(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Int32_array *v6; // x0
  struct System_Int32_array *v7; // x1
  unsigned int max_length; // w8
  struct System_String_o *BgmName_k__BackingField; // x20
  struct System_String_array *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_418527B & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, bgmData);
    sub_B2C35C(&string___TypeInfo, v5);
    byte_418527B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_14;
  v7 = v6;
  if ( !v6 )
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
  sub_B2C2F8(&this->fields, v6);
  v6 = (struct System_Int32_array *)sub_B2C374(string___TypeInfo, 1LL);
  if ( !v6 )
LABEL_14:
    sub_B2C434(v6, v7);
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  v10 = (struct System_String_array *)v6;
  if ( BgmName_k__BackingField )
  {
    v6 = (struct System_Int32_array *)sub_B2C41C(BgmName_k__BackingField, v6->obj.klass->_1.element_class);
    if ( !v6 )
    {
      v12 = sub_B2C454();
      sub_B2C400(v12, 0LL);
    }
  }
  if ( !v10->max_length )
  {
LABEL_13:
    v11 = sub_B2C460(v6);
    sub_B2C400(v11, 0LL);
  }
  v10->m_Items[0] = BgmName_k__BackingField;
  sub_B2C2F8(v10->m_Items, BgmName_k__BackingField);
  this->fields.strParamArray = v10;
  sub_B2C2F8(&this->fields.strParamArray, v10);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_20238064(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int32_array *overrideBgmData; // x1
  OverwriteBattleBgmData_SaveData_Fields *p_fields; // x19
  struct System_String_array *overrideStrBgmData; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_B2C434(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  p_fields = &this->fields;
  sub_B2C2F8(p_fields, overrideBgmData);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  p_fields->strParamArray = overrideStrBgmData;
  sub_B2C2F8(&p_fields->strParamArray, overrideStrBgmData);
}