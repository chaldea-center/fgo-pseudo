void OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OverwriteBattleBgmData___ctor_46610592(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Master_object; // x0

  if ( (byte_4C45EF5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45EF5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_1C372B4(0);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._BgmName_k__BackingField, (int32_t)bgmName, v11, v12);
}


OverwriteBattleBgmData_SaveData_o *OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  OverwriteBattleBgmData_SaveData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C45EF7 & 1) == 0 )
  {
    sub_1C37058(&OverwriteBattleBgmData_SaveData_TypeInfo);
    byte_4C45EF7 = 1;
  }
  if ( !bgmData )
    return 0;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_1C372A4(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_46611348(v3, bgmData, v4);
  return v3;
}


OverwriteBattleBgmData_o *OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Master_object; // x0
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *BgmFileName; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C45EF6 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_int____78110424);
    sub_1C37058(&Method_BasicHelper_IndexValue_string___);
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&OverwriteBattleBgmData_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45EF6 = 1;
  }
  if ( !sv )
    return 0;
  v3 = sub_1C372A4(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  if ( !v3 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 16) = (_DWORD)Master_object;
  *(_DWORD *)(v3 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  *(_DWORD *)(v3 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)sv->fields.strParamArray,
         0,
         (Il2CppObject *)StringLiteral_1/*""*/,
         (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v3 + 24) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v5, v6, v7);
  if ( *(int *)(v3 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v3 + 24), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v3 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
      *(_QWORD *)(v3 + 24) = BgmFileName;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)BgmFileName, v9, v10);
      return (OverwriteBattleBgmData_o *)v3;
    }
LABEL_13:
    sub_1C372B4(Master_object);
  }
  return (OverwriteBattleBgmData_o *)v3;
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
  const MethodInfo *v3; // x3

  this->fields._BgmName_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._BgmName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void OverwriteBattleBgmData__set_WaveCount(OverwriteBattleBgmData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._WaveCount_k__BackingField = value;
}


void OverwriteBattleBgmData_SaveData___ctor(OverwriteBattleBgmData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OverwriteBattleBgmData_SaveData___ctor_46611348(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  unsigned int v8; // w8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_array *v11; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C45EF8 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&string___TypeInfo);
    byte_4C45EF8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = sub_1C37100(int___TypeInfo, 3);
  if ( !bgmData || !v5 )
    goto LABEL_12;
  v8 = *(_DWORD *)(v5 + 24);
  if ( !v8
    || (*(_DWORD *)(v5 + 32) = bgmData->fields._WaveCount_k__BackingField, v8 == 1)
    || (*(_DWORD *)(v5 + 36) = bgmData->fields._BgmId_k__BackingField, v8 <= 2) )
  {
LABEL_11:
    sub_1C372BC(v5);
  }
  *(_DWORD *)(v5 + 40) = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, v5, v6, v7);
  v5 = sub_1C37100(string___TypeInfo, 1);
  if ( !v5 )
LABEL_12:
    sub_1C372B4(v5);
  v11 = (struct System_String_array *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v5 + 32) = BgmName_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)BgmName_k__BackingField, v9, v10);
  this->fields.strParamArray = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.strParamArray, (int32_t)v11, v13, v14);
}


void OverwriteBattleBgmData_SaveData___ctor_46611612(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *overrideBgmData; // x1
  struct System_String_array *overrideStrBgmData; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !sv )
    sub_1C372B4(v5);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)overrideBgmData, v6, v7);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.strParamArray, (int32_t)overrideStrBgmData, v10, v11);
}