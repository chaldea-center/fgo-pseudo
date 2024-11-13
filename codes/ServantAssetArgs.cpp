void __fastcall ServantAssetArgs___ctor(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int32_array *CommandCodeIds; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleDeckServantData_o *deckSvt; // x1
  struct BattleDeckServantData_o **p_deckSvt_k__BackingField; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1BCAA3C(v5, v6);
  this->fields._SvtId_k__BackingField = BattleServantData__getSvtId(svtData, 0LL);
  this->fields._CommandImageSvtId_k__BackingField = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
  this->fields._DispImageSvtId_k__BackingField = BattleServantData__GetDispImageSvtId(svtData, 0LL);
  this->fields._DispLimitCount_k__BackingField = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields._Weapon_k__BackingField = BattleServantData__getWeaponGroup(svtData, 0, 0LL);
  this->fields._WeaponEffectId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 1, 0LL);
  this->fields._EffectFolder_k__BackingField = BattleServantData__getEffectFolder(svtData, 0LL);
  this->fields._CameraId_k__BackingField = BattleServantData__getCameraActionId(svtData, 0LL);
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  this->fields._OverwriteSvtVoiceId_k__BackingField = svtData->fields.overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = BattleServantData__getAppearanceId(svtData, 0LL);
  CommandCodeIds = BattleServantData__GetCommandCodeIds(svtData, 0LL);
  this->fields._CommandCodeIds_k__BackingField = CommandCodeIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int64_t)CommandCodeIds,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._skillList_k__BackingField,
    (int64_t)skillInfoList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  p_deckSvt_k__BackingField = &this->fields._deckSvt_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)p_deckSvt_k__BackingField, (int64_t)deckSvt, v23, v24, v25, v26, v27, v28);
  *((_DWORD *)p_deckSvt_k__BackingField + 2) = svtData->fields.displayType;
}


void __fastcall ServantAssetArgs___ctor_44093352(
        ServantAssetArgs_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t appearanceId,
        int32_t weapon,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._CommandImageSvtId_k__BackingField = svtId;
  this->fields._DispImageSvtId_k__BackingField = svtId;
  this->fields._DispLimitCount_k__BackingField = limitCount;
  this->fields._OverwriteSvtVoiceId_k__BackingField = overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = appearanceId;
  this->fields._Weapon_k__BackingField = weapon;
}


System_String_o *__fastcall ServantAssetArgs__GenerateUniqueKey(
        ServantAssetArgs_o *this,
        System_String_array *para,
        const MethodInfo *method)
{
  if ( (byte_4B18D11 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, para, method);
    byte_4B18D11 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_16290/*"_"*/, para, 0LL);
}


int32_t __fastcall ServantAssetArgs__get_AppearanceId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._AppearanceId_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_CameraId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._CameraId_k__BackingField;
}


System_Int32_array *__fastcall ServantAssetArgs__get_CommandCodeIds(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._CommandCodeIds_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_CommandImageSvtId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._CommandImageSvtId_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_DispImageSvtId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._DispImageSvtId_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_DispLimitCount(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._DispLimitCount_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_DisplayType(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._DisplayType_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_EffectFolder(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._EffectFolder_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_OverwriteSvtVoiceId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteSvtVoiceId_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_SvtId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_UniqueId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._UniqueId_k__BackingField;
}


System_String_o *__fastcall ServantAssetArgs__get_UniqueKey(ServantAssetArgs_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o **p_uniqueKey; // x19
  __int64 v5; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  ServantAssetArgs_o *v44; // x0
  const MethodInfo *v45; // x2
  System_String_o *UniqueKey; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B18D10 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    byte_4B18D10 = 1;
  }
  p_uniqueKey = &this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v5 = sub_1BCA888(string___TypeInfo, 6LL);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v5 )
      sub_1BCAA3C(v6, v7);
    if ( !*(_DWORD *)(v5 + 24) )
      goto LABEL_13;
    *(_QWORD *)(v5 + 32) = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v8, v9, v10, v11, v12, v13);
    SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
    v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v5 + 24) <= 1u )
      goto LABEL_13;
    *(_QWORD *)(v5 + 40) = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)v6, v14, v15, v16, v17, v18, v19);
    SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
    v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v5 + 24) <= 2u )
      goto LABEL_13;
    *(_QWORD *)(v5 + 48) = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)v6, v20, v21, v22, v23, v24, v25);
    SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v5 + 24) <= 3u )
      goto LABEL_13;
    *(_QWORD *)(v5 + 56) = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)v6, v26, v27, v28, v29, v30, v31);
    SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
    v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v5 + 24) <= 4u
      || (*(_QWORD *)(v5 + 64) = v6,
          sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)v6, v32, v33, v34, v35, v36, v37),
          SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField,
          v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL),
          *(_DWORD *)(v5 + 24) <= 5u) )
    {
LABEL_13:
      sub_1BCAA44(v6, v7);
    }
    *(_QWORD *)(v5 + 72) = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 72), (int64_t)v6, v38, v39, v40, v41, v42, v43);
    UniqueKey = ServantAssetArgs__GenerateUniqueKey(v44, (System_String_array *)v5, v45);
    *p_uniqueKey = UniqueKey;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.uniqueKey, (int64_t)UniqueKey, v47, v48, v49, v50, v51, v52);
  }
  return *p_uniqueKey;
}


int32_t __fastcall ServantAssetArgs__get_UnloadCount(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._UnloadCount_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_Weapon(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._Weapon_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_WeaponEffectId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._WeaponEffectId_k__BackingField;
}


BattleDeckServantData_o *__fastcall ServantAssetArgs__get_deckSvt(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._deckSvt_k__BackingField;
}


System_Collections_Generic_List_BattleSkillInfoData__o *__fastcall ServantAssetArgs__get_skillList(
        ServantAssetArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._skillList_k__BackingField;
}


void __fastcall ServantAssetArgs__set_AppearanceId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AppearanceId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_CameraId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CameraId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_CommandCodeIds(
        ServantAssetArgs_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CommandCodeIds_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantAssetArgs__set_CommandImageSvtId(
        ServantAssetArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandImageSvtId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_DispImageSvtId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DispImageSvtId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_DispLimitCount(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DispLimitCount_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_DisplayType(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DisplayType_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_EffectFolder(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EffectFolder_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_OverwriteSvtVoiceId(
        ServantAssetArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OverwriteSvtVoiceId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_SvtId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_UniqueId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UniqueId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_UnloadCount(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UnloadCount_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_Weapon(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Weapon_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_WeaponEffectId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._WeaponEffectId_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_deckSvt(
        ServantAssetArgs_o *this,
        BattleDeckServantData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._deckSvt_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._deckSvt_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantAssetArgs__set_skillList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_BattleSkillInfoData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._skillList_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._skillList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}