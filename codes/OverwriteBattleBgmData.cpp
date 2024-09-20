void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OverwriteBattleBgmData___ctor_43225900(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1

  if ( (byte_4A5DB26 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DB26 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_1B8880C(0LL, v14);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BgmName_k__BackingField, (int32_t)bgmName, v11, v12);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  OverwriteBattleBgmData_SaveData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5DB28 & 1) == 0 )
  {
    sub_1B885B0(&OverwriteBattleBgmData_SaveData_TypeInfo);
    byte_4A5DB28 = 1;
  }
  if ( !bgmData )
    return 0LL;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_1B887FC(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_43226656(v3, bgmData, v4);
  return v3;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *BgmFileName; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5DB27 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&Method_BasicHelper_IndexValue_string___);
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&OverwriteBattleBgmData_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DB27 = 1;
  }
  if ( !sv )
    return 0LL;
  v3 = sub_1B887FC(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  if ( !v3 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 16) = (_DWORD)Master_object;
  *(_DWORD *)(v3 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  *(_DWORD *)(v3 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v6 = BasicHelper__IndexValue_object_(
         (System_Object_array *)sv->fields.strParamArray,
         0,
         (Il2CppObject *)StringLiteral_1/*""*/,
         (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v3 + 24) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v6, v7, v8);
  if ( *(int *)(v3 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v3 + 24), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v3 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v3 + 24) = BgmFileName;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)BgmFileName, v10, v11);
      return (OverwriteBattleBgmData_o *)v3;
    }
LABEL_13:
    sub_1B8880C(Master_object, v5);
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
  int32_t v3; // w3

  this->fields._BgmName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BgmName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_43226656(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  unsigned int v9; // w8
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_array *v12; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5DB29 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5DB29 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = sub_1B88658(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_12;
  v6 = v5;
  if ( !v5 )
    goto LABEL_12;
  v9 = *(_DWORD *)(v5 + 24);
  if ( !v9
    || (*(_DWORD *)(v5 + 32) = bgmData->fields._WaveCount_k__BackingField, v9 == 1)
    || (*(_DWORD *)(v5 + 36) = bgmData->fields._BgmId_k__BackingField, v9 <= 2) )
  {
LABEL_11:
    sub_1B88814(v5, v6);
  }
  *(_DWORD *)(v5 + 40) = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v5, v7, v8);
  v5 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v5 )
LABEL_12:
    sub_1B8880C(v5, v6);
  v12 = (struct System_String_array *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v5 + 32) = BgmName_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)BgmName_k__BackingField, v10, v11);
  this->fields.strParamArray = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.strParamArray, (int32_t)v12, v14, v15);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_43226920(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *overrideBgmData; // x1
  struct System_String_array *overrideStrBgmData; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_1B8880C(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)overrideBgmData, v7, v8);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.strParamArray, (int32_t)overrideStrBgmData, v11, v12);
}