void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_44346140(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1

  if ( (byte_4B6974A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&waveCount);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    byte_4B6974A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_1BE4D28(0LL, v20);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._BgmName_k__BackingField,
    (int64_t)bgmName,
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
  const MethodInfo *v4; // x2

  if ( (byte_4B6974C & 1) == 0 )
  {
    sub_1BE4ACC(&OverwriteBattleBgmData_SaveData_TypeInfo, method);
    byte_4B6974C = 1;
  }
  if ( !bgmData )
    return 0LL;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_1BE4D18(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_44346896(v3, bgmData, v4);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o *BgmFileName; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B6974B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_int____77163864, method);
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_string___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BgmMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&OverwriteBattleBgmData_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B6974B = 1;
  }
  if ( !sv )
    return 0LL;
  v8 = sub_1BE4D18(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
  if ( !v8 )
    goto LABEL_13;
  *(_DWORD *)(v8 + 16) = (_DWORD)Master_object;
  *(_DWORD *)(v8 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
  *(_DWORD *)(v8 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
  v11 = BasicHelper__IndexValue_object_(
          (System_Object_array *)sv->fields.strParamArray,
          0,
          (Il2CppObject *)StringLiteral_1/*""*/,
          (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v8 + 24) = v11;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)v11, v12, v13, v14, v15, v16, v17);
  if ( *(int *)(v8 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 24), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v8 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v8 + 24) = BgmFileName;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)BgmFileName, v19, v20, v21, v22, v23, v24);
      return (OverwriteBattleBgmData_o *)v8;
    }
LABEL_13:
    sub_1BE4D28(Master_object, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BgmName_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._BgmName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_44346896(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x0
  int64_t v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  unsigned int v14; // w8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_array *v21; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B6974D & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, bgmData);
    sub_1BE4ACC(&string___TypeInfo, v5);
    byte_4B6974D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = sub_1BE4B74(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_12;
  v7 = v6;
  if ( !v6 )
    goto LABEL_12;
  v14 = *(_DWORD *)(v6 + 24);
  if ( !v14
    || (*(_DWORD *)(v6 + 32) = bgmData->fields._WaveCount_k__BackingField, v14 == 1)
    || (*(_DWORD *)(v6 + 36) = bgmData->fields._BgmId_k__BackingField, v14 <= 2) )
  {
LABEL_11:
    sub_1BE4D30(v6, v7);
  }
  *(_DWORD *)(v6 + 40) = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, v6, v8, v9, v10, v11, v12, v13);
  v6 = sub_1BE4B74(string___TypeInfo, 1LL);
  if ( !v6 )
LABEL_12:
    sub_1BE4D28(v6, v7);
  v21 = (struct System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v6 + 32) = BgmName_k__BackingField;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)BgmName_k__BackingField, v15, v16, v17, v18, v19, v20);
  this->fields.strParamArray = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.strParamArray, (int64_t)v21, v23, v24, v25, v26, v27, v28);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_44347160(
        OverwriteBattleBgmData_SaveData_o *this,
        BattleData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int32_array *overrideBgmData; // x1
  struct System_String_array *overrideStrBgmData; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !sv )
    sub_1BE4D28(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)overrideBgmData, v7, v8, v9, v10, v11, v12);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.strParamArray,
    (int64_t)overrideStrBgmData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}