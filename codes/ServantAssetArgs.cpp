void __fastcall ServantAssetArgs___ctor(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_Int32_array *CommandCodeIds; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BattleDeckServantData_o *deckSvt; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B0D97C(v5);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeIds_k__BackingField,
    (System_Int32_array **)CommandCodeIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)skillInfoList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._deckSvt_k__BackingField,
    (System_Int32_array **)deckSvt,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall ServantAssetArgs___ctor_26474492(
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
  if ( (byte_4215859 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, para);
    byte_4215859 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_15952/*"_"*/, para, 0LL);
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
  BattleServantConfConponent_o *p_uniqueKey; // x19
  __int64 v4; // x20
  System_String_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  ServantAssetArgs_o *v48; // x0
  const MethodInfo *v49; // x2
  System_Int32_array **UniqueKey; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215858 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    byte_4215858 = 1;
  }
  SvtId_k__BackingField = 0;
  p_uniqueKey = (BattleServantConfConponent_o *)&this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v4 = sub_B0D8BC(string___TypeInfo, 6LL);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v4 )
      sub_B0D97C(v5);
    v12 = (System_Int32_array **)v5;
    if ( !v5 || (v5 = (System_String_o *)sub_B0D964(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_25;
      *(_QWORD *)(v4 + 32) = v12;
      sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), v12, v6, v7, v8, v9, v10, v11);
      SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
      v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
      v19 = (System_Int32_array **)v5;
      if ( !v5 || (v5 = (System_String_o *)sub_B0D964(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v4 + 24) <= 1u )
          goto LABEL_25;
        *(_QWORD *)(v4 + 40) = v19;
        sub_B0D840((BattleServantConfConponent_o *)(v4 + 40), v19, v13, v14, v15, v16, v17, v18);
        SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
        v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
        v26 = (System_Int32_array **)v5;
        if ( !v5 || (v5 = (System_String_o *)sub_B0D964(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_25;
          *(_QWORD *)(v4 + 48) = v26;
          sub_B0D840((BattleServantConfConponent_o *)(v4 + 48), v26, v20, v21, v22, v23, v24, v25);
          SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
          v33 = (System_Int32_array **)v5;
          if ( !v5 || (v5 = (System_String_o *)sub_B0D964(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v4 + 24) <= 3u )
              goto LABEL_25;
            *(_QWORD *)(v4 + 56) = v33;
            sub_B0D840((BattleServantConfConponent_o *)(v4 + 56), v33, v27, v28, v29, v30, v31, v32);
            SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
            v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
            v40 = (System_Int32_array **)v5;
            if ( !v5 || (v5 = (System_String_o *)sub_B0D964(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v4 + 24) <= 4u )
                goto LABEL_25;
              *(_QWORD *)(v4 + 64) = v40;
              sub_B0D840((BattleServantConfConponent_o *)(v4 + 64), v40, v34, v35, v36, v37, v38, v39);
              SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField;
              v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
              v47 = (System_Int32_array **)v5;
              if ( !v5 || (v5 = (System_String_o *)sub_B0D964(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v4 + 24) > 5u )
                {
                  *(_QWORD *)(v4 + 72) = v47;
                  sub_B0D840((BattleServantConfConponent_o *)(v4 + 72), v47, v41, v42, v43, v44, v45, v46);
                  UniqueKey = (System_Int32_array **)ServantAssetArgs__GenerateUniqueKey(
                                                       v48,
                                                       (System_String_array *)v4,
                                                       v49);
                  p_uniqueKey->klass = (BattleServantConfConponent_c *)UniqueKey;
                  sub_B0D840(p_uniqueKey, UniqueKey, v51, v52, v53, v54, v55, v56);
                  return (System_String_o *)p_uniqueKey->klass;
                }
LABEL_25:
                v58 = sub_B0D9A8(v5);
                sub_B0D948(v58, 0LL);
              }
            }
          }
        }
      }
    }
    v59 = sub_B0D99C(v5);
    sub_B0D948(v59, 0LL);
  }
  return (System_String_o *)p_uniqueKey->klass;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CommandCodeIds_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._deckSvt_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._deckSvt_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._skillList_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}