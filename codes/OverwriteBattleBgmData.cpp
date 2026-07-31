void OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OverwriteBattleBgmData___ctor_53572568(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1

  if ( (byte_593B6B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B6B1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_21FFECC(0, v19);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgmName_k__BackingField,
    (int32_t)bgmName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


OverwriteBattleBgmData_SaveData_o *OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  OverwriteBattleBgmData_SaveData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593B6B3 & 1) == 0 )
  {
    sub_21FFC50(&OverwriteBattleBgmData_SaveData_TypeInfo);
    byte_593B6B3 = 1;
  }
  if ( !bgmData )
    return 0;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_21FFEBC(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_53573336(v3, bgmData, v4);
  return v3;
}


OverwriteBattleBgmData_o *OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Int32_array *intParamArray; // x8
  const MethodInfo_37E1834 *v7; // x3
  int32_t v8; // w0
  System_Int32_array *v9; // x8
  const MethodInfo_37E1834 *v10; // x3
  int32_t v11; // w0
  struct System_String_array *strParamArray; // x8
  Il2CppObject *v13; // x2
  const MethodInfo_37E18F8 *v14; // x3
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_String_o *BgmFileName; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_593B6B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_int____91487608);
    sub_21FFC50(&Method_BasicHelper_IndexValue_string___);
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&OverwriteBattleBgmData_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B6B2 = 1;
  }
  if ( !sv )
    return 0;
  v3 = sub_21FFEBC(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608);
  if ( !v3 )
    goto LABEL_13;
  intParamArray = sv->fields.intParamArray;
  v7 = (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608;
  *(_DWORD *)(v3 + 16) = (_DWORD)Master_object;
  v8 = BasicHelper__IndexValue_int_(intParamArray, 1, 0, v7);
  v9 = sv->fields.intParamArray;
  v10 = (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608;
  *(_DWORD *)(v3 + 20) = v8;
  v11 = BasicHelper__IndexValue_int_(v9, 2, 0, v10);
  strParamArray = sv->fields.strParamArray;
  v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  v14 = (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_string___;
  *(_DWORD *)(v3 + 32) = v11;
  v15 = BasicHelper__IndexValue_object_((System_Object_array *)strParamArray, 0, v13, v14);
  *(_QWORD *)(v3 + 24) = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( *(int *)(v3 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v3 + 24), 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v3 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
      *(_QWORD *)(v3 + 24) = BgmFileName;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)BgmFileName, v24, v25, v26, v27, v28, v29);
      return (OverwriteBattleBgmData_o *)v3;
    }
LABEL_13:
    sub_21FFECC(Master_object, v5);
  }
  return (OverwriteBattleBgmData_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void OverwriteBattleBgmData__ForceUpdateBgmId(OverwriteBattleBgmData_o *this, int32_t bgmId, const MethodInfo *method)
{
  DataManager_c *v5; // x0
  int v6; // w8
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct System_String_o *BgmFileName; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593B6B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B6B4 = 1;
  }
  v5 = DataManager_TypeInfo;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields._BgmId_k__BackingField = bgmId;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&bgmId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v8);
  BgmFileName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields._BgmName_k__BackingField = BgmFileName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgmName_k__BackingField,
    (int32_t)BgmFileName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


int32_t OverwriteBattleBgmData__get_BgmId(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  return this->fields._BgmId_k__BackingField;
}


System_String_o *OverwriteBattleBgmData__get_BgmName(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  return this->fields._BgmName_k__BackingField;
}


int32_t OverwriteBattleBgmData__get_WaveCount(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  return this->fields._WaveCount_k__BackingField;
}


bool OverwriteBattleBgmData__get_allowSubBgmPlaying(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  return this->fields.allowSubBgmPlayingRawValue > 0;
}


void OverwriteBattleBgmData__set_BgmId(OverwriteBattleBgmData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BgmId_k__BackingField = value;
}


void OverwriteBattleBgmData__set_BgmName(
        OverwriteBattleBgmData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BgmName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgmName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void OverwriteBattleBgmData__set_WaveCount(OverwriteBattleBgmData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._WaveCount_k__BackingField = value;
}


void OverwriteBattleBgmData_SaveData___ctor(OverwriteBattleBgmData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OverwriteBattleBgmData_SaveData___ctor_53573336(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  unsigned int v13; // w8
  int32_t allowSubBgmPlayingRawValue; // w8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_array *v21; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_593B6B5 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    byte_593B6B5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = sub_21FFD10(int___TypeInfo, 3);
  if ( !bgmData )
    goto LABEL_12;
  v6 = v5;
  if ( !v5 )
    goto LABEL_12;
  v13 = *(_DWORD *)(v5 + 24);
  if ( !v13
    || (*(_DWORD *)(v5 + 32) = bgmData->fields._WaveCount_k__BackingField, v13 == 1)
    || (*(_DWORD *)(v5 + 36) = bgmData->fields._BgmId_k__BackingField, v13 <= 2) )
  {
LABEL_11:
    sub_21FFED4(v5);
  }
  allowSubBgmPlayingRawValue = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v5;
  *(_DWORD *)(v5 + 40) = allowSubBgmPlayingRawValue;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, v5, v7, v8, v9, v10, v11, v12);
  v5 = sub_21FFD10(string___TypeInfo, 1);
  if ( !v5 )
LABEL_12:
    sub_21FFECC(v5, v6);
  v21 = (struct System_String_array *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v5 + 32) = BgmName_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 32),
    (int32_t)BgmName_k__BackingField,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.strParamArray = v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.strParamArray,
    (int32_t)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void OverwriteBattleBgmData_SaveData___ctor_53573780(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int32_array *overrideBgmData; // x1
  struct System_String_array *overrideStrBgmData; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !sv )
    sub_21FFECC(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)overrideBgmData, v7, v8, v9, v10, v11, v12);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.strParamArray,
    (int32_t)overrideStrBgmData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}