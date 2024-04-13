void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_20760608(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1

  if ( (byte_42E6389 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, waveCount, bgmId, allowSubBgmPlaying);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E6389 = 1;
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
    Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v18);
  }
LABEL_10:
  this->fields._BgmName_k__BackingField = bgmName;
  sub_B5D560(&this->fields._BgmName_k__BackingField);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  OverwriteBattleBgmData_SaveData_o *v5; // x20

  if ( (byte_42E638B & 1) == 0 )
  {
    sub_B5D5C4(&OverwriteBattleBgmData_SaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E638B = 1;
  }
  if ( !bgmData )
    return 0LL;
  v5 = (OverwriteBattleBgmData_SaveData_o *)sub_B5D694(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_19813896(v5, bgmData, 0LL);
  return v5;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x1

  if ( (byte_42E638A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_string___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&OverwriteBattleBgmData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42E638A = 1;
  }
  if ( !sv )
    return 0LL;
  v20 = sub_B5D694(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BasicHelper__IndexValue_int_(
                                                                  sv->fields.intParamArray,
                                                                  0,
                                                                  0,
                                                                  (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  if ( !v20 )
    goto LABEL_14;
  *(_DWORD *)(v20 + 16) = (_DWORD)Master_WarQuestSelectionMaster;
  *(_DWORD *)(v20 + 20) = BasicHelper__IndexValue_int_(
                            sv->fields.intParamArray,
                            1,
                            0,
                            (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  *(_DWORD *)(v20 + 32) = BasicHelper__IndexValue_int_(
                            sv->fields.intParamArray,
                            2,
                            0,
                            (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  *(_QWORD *)(v20 + 24) = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)sv->fields.strParamArray,
                            0,
                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                            (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_string___);
  sub_B5D560(v20 + 24);
  if ( *(int *)(v20 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v20 + 24), 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      *(_QWORD *)(v20 + 24) = BgmMaster__GetBgmFileName(
                                (BgmMaster_o *)Master_WarQuestSelectionMaster,
                                *(_DWORD *)(v20 + 20),
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
      sub_B5D560(v20 + 24);
      return (OverwriteBattleBgmData_o *)v20;
    }
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v22);
  }
  return (OverwriteBattleBgmData_o *)v20;
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
  sub_B5D560(&this->fields._BgmName_k__BackingField);
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_19813896(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Int32_array *v9; // x0
  struct System_Int32_array *v10; // x1
  unsigned int max_length; // w8
  struct System_String_o *BgmName_k__BackingField; // x20
  struct System_String_array *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_42E5A6E & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)bgmData, (_DWORD)method, v3);
    sub_B5D5C4(&string___TypeInfo, v6, v7, v8);
    byte_42E5A6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_14;
  v10 = v9;
  if ( !v9 )
    goto LABEL_14;
  max_length = v9->max_length;
  if ( !max_length )
    goto LABEL_13;
  v9->m_Items[1] = bgmData->fields._WaveCount_k__BackingField;
  if ( max_length == 1 )
    goto LABEL_13;
  v9->m_Items[2] = bgmData->fields._BgmId_k__BackingField;
  if ( max_length <= 2 )
    goto LABEL_13;
  v9->m_Items[3] = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = v9;
  sub_B5D560(&this->fields);
  v9 = (struct System_Int32_array *)sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v9 )
LABEL_14:
    sub_B5D69C(v9, v10);
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  v13 = (struct System_String_array *)v9;
  if ( BgmName_k__BackingField )
  {
    v9 = (struct System_Int32_array *)sub_B5D684(BgmName_k__BackingField, v9->obj.klass->_1.element_class);
    if ( !v9 )
    {
      v15 = sub_B5D6BC();
      sub_B5D668(v15, 0LL);
    }
  }
  if ( !v13->max_length )
  {
LABEL_13:
    v14 = sub_B5D6C8(v9);
    sub_B5D668(v14, 0LL);
  }
  v13->m_Items[0] = BgmName_k__BackingField;
  sub_B5D560(v13->m_Items);
  this->fields.strParamArray = v13;
  sub_B5D560(&this->fields.strParamArray);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_19814204(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  OverwriteBattleBgmData_SaveData_Fields *p_fields; // x19

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_B5D69C(v5, v6);
  this->fields.intParamArray = sv->fields.overrideBgmData;
  p_fields = &this->fields;
  sub_B5D560(p_fields);
  p_fields->strParamArray = sv->fields.overrideStrBgmData;
  sub_B5D560(&p_fields->strParamArray);
}