void __fastcall ServantAssetArgs___ctor(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int32_array *CommandCodeIds; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleDeckServantData_o *deckSvt; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B5D69C(v5, v6);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeIds_k__BackingField,
    (System_Int32_array **)CommandCodeIds,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)skillInfoList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._deckSvt_k__BackingField,
    (System_Int32_array **)deckSvt,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall ServantAssetArgs___ctor_26885940(
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
  __int64 v3; // x3

  if ( (byte_42E9885 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, (_DWORD)para, (_DWORD)method, v3);
    byte_42E9885 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_16096/*"_"*/, para, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_uniqueKey; // x19
  __int64 v6; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x21
  ServantAssetArgs_o *v51; // x0
  const MethodInfo *v52; // x2
  System_Int32_array **UniqueKey; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v61; // x0
  __int64 v62; // x0
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9884 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9884 = 1;
  }
  SvtId_k__BackingField = 0;
  p_uniqueKey = (BattleServantConfConponent_o *)&this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v6 = sub_B5D5DC(string___TypeInfo, 6LL);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v7 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v6 )
      sub_B5D69C(v7, v8);
    v15 = (System_Int32_array **)v7;
    if ( !v7 || (v7 = (System_String_o *)sub_B5D684(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v6 + 24) )
        goto LABEL_25;
      *(_QWORD *)(v6 + 32) = v15;
      sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), v15, v9, v10, v11, v12, v13, v14);
      SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
      v7 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
      v22 = (System_Int32_array **)v7;
      if ( !v7 || (v7 = (System_String_o *)sub_B5D684(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v6 + 24) <= 1u )
          goto LABEL_25;
        *(_QWORD *)(v6 + 40) = v22;
        sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), v22, v16, v17, v18, v19, v20, v21);
        SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
        v7 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
        v29 = (System_Int32_array **)v7;
        if ( !v7 || (v7 = (System_String_o *)sub_B5D684(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v6 + 24) <= 2u )
            goto LABEL_25;
          *(_QWORD *)(v6 + 48) = v29;
          sub_B5D560((BattleServantConfConponent_o *)(v6 + 48), v29, v23, v24, v25, v26, v27, v28);
          SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
          v7 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
          v36 = (System_Int32_array **)v7;
          if ( !v7 || (v7 = (System_String_o *)sub_B5D684(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v6 + 24) <= 3u )
              goto LABEL_25;
            *(_QWORD *)(v6 + 56) = v36;
            sub_B5D560((BattleServantConfConponent_o *)(v6 + 56), v36, v30, v31, v32, v33, v34, v35);
            SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
            v7 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
            v43 = (System_Int32_array **)v7;
            if ( !v7 || (v7 = (System_String_o *)sub_B5D684(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v6 + 24) <= 4u )
                goto LABEL_25;
              *(_QWORD *)(v6 + 64) = v43;
              sub_B5D560((BattleServantConfConponent_o *)(v6 + 64), v43, v37, v38, v39, v40, v41, v42);
              SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField;
              v7 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
              v50 = (System_Int32_array **)v7;
              if ( !v7 || (v7 = (System_String_o *)sub_B5D684(v7, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v6 + 24) > 5u )
                {
                  *(_QWORD *)(v6 + 72) = v50;
                  sub_B5D560((BattleServantConfConponent_o *)(v6 + 72), v50, v44, v45, v46, v47, v48, v49);
                  UniqueKey = (System_Int32_array **)ServantAssetArgs__GenerateUniqueKey(
                                                       v51,
                                                       (System_String_array *)v6,
                                                       v52);
                  p_uniqueKey->klass = (BattleServantConfConponent_c *)UniqueKey;
                  sub_B5D560(p_uniqueKey, UniqueKey, v54, v55, v56, v57, v58, v59);
                  return (System_String_o *)p_uniqueKey->klass;
                }
LABEL_25:
                v61 = sub_B5D6C8(v7);
                sub_B5D668(v61, 0LL);
              }
            }
          }
        }
      }
    }
    v62 = sub_B5D6BC(v7);
    sub_B5D668(v62, 0LL);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}