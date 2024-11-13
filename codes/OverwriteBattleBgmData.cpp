void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OverwriteBattleBgmData___ctor_44087824(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1

  if ( (byte_4B18CFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&waveCount, *(_QWORD *)&bgmId);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B18CFE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_1BCAA3C(0LL, v23);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BgmName_k__BackingField,
    (int64_t)bgmName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  OverwriteBattleBgmData_SaveData_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B18D00 & 1) == 0 )
  {
    sub_1BCA7E0(&OverwriteBattleBgmData_SaveData_TypeInfo, method, v2);
    byte_4B18D00 = 1;
  }
  if ( !bgmData )
    return 0LL;
  v5 = (OverwriteBattleBgmData_SaveData_o *)sub_1BCAA2C(OverwriteBattleBgmData_SaveData_TypeInfo, method, v2, v3);
  OverwriteBattleBgmData_SaveData___ctor_44088580(v5, bgmData, v6);
  return v5;
}


OverwriteBattleBgmData_o *__fastcall OverwriteBattleBgmData__CreateInstanceFromSaveData(
        OverwriteBattleBgmData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  System_String_o *BgmFileName; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B18CFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_string___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&OverwriteBattleBgmData_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B18CFF = 1;
  }
  if ( !sv )
    return 0LL;
  v15 = sub_1BCAA2C(OverwriteBattleBgmData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  if ( !v15 )
    goto LABEL_13;
  *(_DWORD *)(v15 + 16) = (_DWORD)Master_object;
  *(_DWORD *)(v15 + 20) = BasicHelper__IndexValue_int_(
                            sv->fields.intParamArray,
                            1,
                            0,
                            (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  *(_DWORD *)(v15 + 32) = BasicHelper__IndexValue_int_(
                            sv->fields.intParamArray,
                            2,
                            0,
                            (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v18 = BasicHelper__IndexValue_object_(
          (System_Object_array *)sv->fields.strParamArray,
          0,
          (Il2CppObject *)StringLiteral_1/*""*/,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v15 + 24) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  if ( *(int *)(v15 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v15 + 24), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v15 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v15 + 24) = BgmFileName;
      sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)BgmFileName, v27, v28, v29, v30, v31, v32);
      return (OverwriteBattleBgmData_o *)v15;
    }
LABEL_13:
    sub_1BCAA3C(Master_object, v17);
  }
  return (OverwriteBattleBgmData_o *)v15;
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
  sub_1BCA784(
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_44088580(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x0
  int64_t v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  unsigned int v15; // w8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_array *v22; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B18D01 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, bgmData, method);
    sub_1BCA7E0(&string___TypeInfo, v5, v6);
    byte_4B18D01 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = sub_1BCA888(int___TypeInfo, 3LL);
  if ( !bgmData )
    goto LABEL_12;
  v8 = v7;
  if ( !v7 )
    goto LABEL_12;
  v15 = *(_DWORD *)(v7 + 24);
  if ( !v15
    || (*(_DWORD *)(v7 + 32) = bgmData->fields._WaveCount_k__BackingField, v15 == 1)
    || (*(_DWORD *)(v7 + 36) = bgmData->fields._BgmId_k__BackingField, v15 <= 2) )
  {
LABEL_11:
    sub_1BCAA44(v7, v8);
  }
  *(_DWORD *)(v7 + 40) = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v7, v9, v10, v11, v12, v13, v14);
  v7 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !v7 )
LABEL_12:
    sub_1BCAA3C(v7, v8);
  v22 = (struct System_String_array *)v7;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v7 + 32) = BgmName_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)BgmName_k__BackingField, v16, v17, v18, v19, v20, v21);
  this->fields.strParamArray = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.strParamArray, (int64_t)v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_44088844(
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
    sub_1BCAA3C(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)overrideBgmData, v7, v8, v9, v10, v11, v12);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.strParamArray,
    (int64_t)overrideStrBgmData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}