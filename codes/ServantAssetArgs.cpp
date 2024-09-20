void __fastcall ServantAssetArgs___ctor(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int32_array *CommandCodeIds; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleDeckServantData_o *deckSvt; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1B8880C(v5, v6);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int32_t)CommandCodeIds,
    v8,
    v9);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._skillList_k__BackingField,
    (int32_t)skillInfoList,
    v11,
    v12);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)deckSvt, v14, v15);
}


void __fastcall ServantAssetArgs___ctor_43231400(
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
  if ( (byte_4A5DB39 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5DB39 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_16123/*"_"*/, para, 0LL);
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
  System_String_o **p_uniqueKey; // x19
  __int64 v4; // x21
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  ServantAssetArgs_o *v19; // x0
  const MethodInfo *v20; // x2
  System_String_o *UniqueKey; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5DB38 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    byte_4A5DB38 = 1;
  }
  p_uniqueKey = &this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v4 = sub_1B88658(string___TypeInfo, 6LL);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v4 )
      sub_1B8880C(v5, v6);
    if ( !*(_DWORD *)(v4 + 24) )
      goto LABEL_13;
    *(_QWORD *)(v4 + 32) = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)v5, v7, v8);
    SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 1u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 40) = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)v5, v9, v10);
    SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 2u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 48) = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 48), (int32_t)v5, v11, v12);
    SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 3u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 56) = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 56), (int32_t)v5, v13, v14);
    SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 4u
      || (*(_QWORD *)(v4 + 64) = v5,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)v5, v15, v16),
          SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField,
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL),
          *(_DWORD *)(v4 + 24) <= 5u) )
    {
LABEL_13:
      sub_1B88814(v5, v6);
    }
    *(_QWORD *)(v4 + 72) = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 72), (int32_t)v5, v17, v18);
    UniqueKey = ServantAssetArgs__GenerateUniqueKey(v19, (System_String_array *)v4, v20);
    *p_uniqueKey = UniqueKey;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.uniqueKey, (int32_t)UniqueKey, v22, v23);
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

  this->fields._CommandCodeIds_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._deckSvt_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._deckSvt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ServantAssetArgs__set_skillList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_BattleSkillInfoData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._skillList_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._skillList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}