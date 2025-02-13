void __fastcall OverwriteBattleBgmData___ctor(OverwriteBattleBgmData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OverwriteBattleBgmData___ctor_44659204(
        OverwriteBattleBgmData_o *this,
        int32_t waveCount,
        int32_t bgmId,
        bool allowSubBgmPlaying,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1

  if ( (byte_4BDF10F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF10F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._WaveCount_k__BackingField = waveCount;
  this->fields._BgmId_k__BackingField = bgmId;
  this->fields.allowSubBgmPlayingRawValue = allowSubBgmPlaying;
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !Master_object )
      sub_1C22094(0LL, v18);
    bgmName = BgmMaster__GetBgmFileName((BgmMaster_o *)Master_object, bgmId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BgmName_k__BackingField,
    (int64_t)bgmName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


OverwriteBattleBgmData_SaveData_o *__fastcall OverwriteBattleBgmData__ConvertToSaveData(
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  OverwriteBattleBgmData_SaveData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BDF111 & 1) == 0 )
  {
    sub_1C21E38(&OverwriteBattleBgmData_SaveData_TypeInfo);
    byte_4BDF111 = 1;
  }
  if ( !bgmData )
    return 0LL;
  v3 = (OverwriteBattleBgmData_SaveData_o *)sub_1C22084(OverwriteBattleBgmData_SaveData_TypeInfo);
  OverwriteBattleBgmData_SaveData___ctor_44659960(v3, bgmData, v4);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_String_o *BgmFileName; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDF110 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_int____77631832);
    sub_1C21E38(&Method_BasicHelper_IndexValue_string___);
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&OverwriteBattleBgmData_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF110 = 1;
  }
  if ( !sv )
    return 0LL;
  v3 = sub_1C22084(OverwriteBattleBgmData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  Master_object = (Il2CppObject *)BasicHelper__IndexValue_int_(
                                    sv->fields.intParamArray,
                                    0,
                                    0,
                                    (const MethodInfo_2F9E8E8 *)Method_BasicHelper_IndexValue_int____77631832);
  if ( !v3 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 16) = (_DWORD)Master_object;
  *(_DWORD *)(v3 + 20) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           1,
                           0,
                           (const MethodInfo_2F9E8E8 *)Method_BasicHelper_IndexValue_int____77631832);
  *(_DWORD *)(v3 + 32) = BasicHelper__IndexValue_int_(
                           sv->fields.intParamArray,
                           2,
                           0,
                           (const MethodInfo_2F9E8E8 *)Method_BasicHelper_IndexValue_int____77631832);
  v6 = BasicHelper__IndexValue_object_(
         (System_Object_array *)sv->fields.strParamArray,
         0,
         (Il2CppObject *)StringLiteral_1/*""*/,
         (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_string___);
  *(_QWORD *)(v3 + 24) = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v6, v7, v8, v9, v10, v11, v12);
  if ( *(int *)(v3 + 20) >= 1 && System_String__IsNullOrEmpty(*(System_String_o **)(v3 + 24), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( Master_object )
    {
      BgmFileName = BgmMaster__GetBgmFileName(
                      (BgmMaster_o *)Master_object,
                      *(_DWORD *)(v3 + 20),
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
      *(_QWORD *)(v3 + 24) = BgmFileName;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)BgmFileName, v14, v15, v16, v17, v18, v19);
      return (OverwriteBattleBgmData_o *)v3;
    }
LABEL_13:
    sub_1C22094(Master_object, v5);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BgmName_k__BackingField = value;
  sub_1C21DDC(
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


void __fastcall OverwriteBattleBgmData_SaveData___ctor_44659960(
        OverwriteBattleBgmData_SaveData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int64_t v5; // x0
  int64_t v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int v13; // w8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_String_array *v20; // x21
  struct System_String_o *BgmName_k__BackingField; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDF112 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDF112 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = sub_1C21EE0(int___TypeInfo, 3LL);
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
    sub_1C2209C(v5, v6);
  }
  *(_DWORD *)(v5 + 40) = bgmData->fields.allowSubBgmPlayingRawValue;
  this->fields.intParamArray = (struct System_Int32_array *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v5, v7, v8, v9, v10, v11, v12);
  v5 = sub_1C21EE0(string___TypeInfo, 1LL);
  if ( !v5 )
LABEL_12:
    sub_1C22094(v5, v6);
  v20 = (struct System_String_array *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  BgmName_k__BackingField = bgmData->fields._BgmName_k__BackingField;
  *(_QWORD *)(v5 + 32) = BgmName_k__BackingField;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)BgmName_k__BackingField, v14, v15, v16, v17, v18, v19);
  this->fields.strParamArray = v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.strParamArray, (int64_t)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall OverwriteBattleBgmData_SaveData___ctor_44660224(
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
    sub_1C22094(v5, v6);
  overrideBgmData = sv->fields.overrideBgmData;
  this->fields.intParamArray = overrideBgmData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)overrideBgmData, v7, v8, v9, v10, v11, v12);
  overrideStrBgmData = sv->fields.overrideStrBgmData;
  this->fields.strParamArray = overrideStrBgmData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.strParamArray,
    (int64_t)overrideStrBgmData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}