void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_45470488(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1

  if ( (byte_4B04E0D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&waveCount);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    byte_4B04E0D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_1BC3264(0LL, v16);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._BgmName_k__BackingField, (int32_t)bgmName, v13, v14);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  OverwriteBattleBgmData_SaveData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4B04E0F & 1) == 0 )
  {
    sub_1BC3008(&OverwriteBattleBgmData_SaveData_TypeInfo, method);
    byte_4B04E0F = 1;
  }
  if ( !bgmData )
    return 0LL;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_1BC3254(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_45471244(v3, bgmData, v4);
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
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *BgmFileName; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B04E0E & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_IndexValue_int____76814760, method);
    sub_1BC3008(&Method_BasicHelper_IndexValue_string___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_BgmMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&OverwriteBattleBgmData_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4B04E0E = 1;
  }
  if ( !sv )
    return 0LL;
  v8 = sub_1BC3254(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_2FF03F8 *)Method_BasicHelper_IndexValue_int____76814760);
  if ( !v8 )
    goto LABEL_13;
  *(_DWORD *)(v8 + 16) = (_DWORD)Master_object;
  *(_DWORD *)(v8 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_2FF03F8 *)Method_BasicHelper_IndexValue_int____76814760);
  *(_DWORD *)(v8 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_2FF03F8 *)Method_BasicHelper_IndexValue_int____76814760);
  v11 = BasicHelper__IndexValue_object_(
          (System_Object_array *)sv->fields.strParamArray,
          0,
          (Il2CppObject *)StringLiteral_1/*""*/,
          (const MethodInfo_2FF04DC *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v8 + 24) = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)v11, v12, v13);
  if ( *(int *)(v8 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 24), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v8 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v8 + 24) = BgmFileName;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)BgmFileName, v15, v16);
      return (OverwriteBattleBgmData_o *)v8;
    }
LABEL_13:
    sub_1BC3264(Master_object, v10);
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
  const MethodInfo *v3; // x3

  this->fields._BgmName_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._BgmName_k__BackingField, (int32_t)value, (int32_t)method, v3);
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_45471244(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  unsigned int v10; // w8
  const MethodInfo *v11; // x3
  struct System_String_array *v12; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B04E10 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, bgmData);
    sub_1BC3008(&string___TypeInfo, v5);
    byte_4B04E10 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = sub_1BC30B0(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_12;
  v7 = v6;
  if ( !v6 )
    goto LABEL_12;
  v10 = *(_DWORD *)(v6 + 24);
  if ( !v10
    || (*(_DWORD *)(v6 + 32) = bgmData->fields._WaveCount_k__BackingField, v10 == 1)
    || (*(_DWORD *)(v6 + 36) = bgmData->fields._BgmId_k__BackingField, v10 <= 2) )
  {
LABEL_11:
    sub_1BC326C(v6, v7, v8);
  }
  *(_DWORD *)(v6 + 40) = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, v6, v8, v9);
  v6 = sub_1BC30B0(string___TypeInfo, 1LL);
  if ( !v6 )
LABEL_12:
    sub_1BC3264(v6, v7);
  v12 = (struct System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v6 + 32) = BgmName_k__BackingField;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)BgmName_k__BackingField, v8, v11);
  this->fields.strParamArray = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.strParamArray, (int32_t)v12, v14, v15);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_45471508(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *overrideBgmData; // x1
  struct System_String_array *overrideStrBgmData; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_1BC3264(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)overrideBgmData, v7, v8);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.strParamArray, (int32_t)overrideStrBgmData, v11, v12);
}