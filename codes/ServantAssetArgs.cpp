void __fastcall ServantAssetArgs___ctor(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct System_Int32_array *CommandCodeIds; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleDeckServantData_o *deckSvt; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeIds_k__BackingField,
    (System_Int32_array **)CommandCodeIds,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)skillInfoList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._deckSvt_k__BackingField,
    (System_Int32_array **)deckSvt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall ServantAssetArgs___ctor_23787768(
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
  if ( (byte_40F93F8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15842, para);
    byte_40F93F8 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_15842, para, 0LL);
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
  __int64 v4; // x2
  __int64 v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x22
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x22
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  ServantAssetArgs_o *v45; // x0
  const MethodInfo *v46; // x2
  System_Int32_array **UniqueKey; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F93F7 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    byte_40F93F7 = 1;
  }
  SvtId_k__BackingField = 0;
  p_uniqueKey = (BattleServantConfConponent_o *)&this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v5 = sub_B17014(string___TypeInfo, 6LL, v4);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v5 )
      sub_B170D4();
    v14 = (System_Int32_array **)v6;
    if ( !v6 || (v6 = (System_String_o *)sub_B170BC(v6, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_25;
      *(_QWORD *)(v5 + 32) = v14;
      sub_B16F98((BattleServantConfConponent_o *)(v5 + 32), v14, v8, v9, v10, v11, v12, v13);
      SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
      v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
      v20 = (System_Int32_array **)v6;
      if ( !v6 || (v6 = (System_String_o *)sub_B170BC(v6, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v5 + 24) <= 1u )
          goto LABEL_25;
        *(_QWORD *)(v5 + 40) = v20;
        sub_B16F98((BattleServantConfConponent_o *)(v5 + 40), v20, v8, v15, v16, v17, v18, v19);
        SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
        v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
        v26 = (System_Int32_array **)v6;
        if ( !v6 || (v6 = (System_String_o *)sub_B170BC(v6, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v5 + 24) <= 2u )
            goto LABEL_25;
          *(_QWORD *)(v5 + 48) = v26;
          sub_B16F98((BattleServantConfConponent_o *)(v5 + 48), v26, v8, v21, v22, v23, v24, v25);
          SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
          v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
          v32 = (System_Int32_array **)v6;
          if ( !v6 || (v6 = (System_String_o *)sub_B170BC(v6, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v5 + 24) <= 3u )
              goto LABEL_25;
            *(_QWORD *)(v5 + 56) = v32;
            sub_B16F98((BattleServantConfConponent_o *)(v5 + 56), v32, v8, v27, v28, v29, v30, v31);
            SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
            v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
            v38 = (System_Int32_array **)v6;
            if ( !v6 || (v6 = (System_String_o *)sub_B170BC(v6, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v5 + 24) <= 4u )
                goto LABEL_25;
              *(_QWORD *)(v5 + 64) = v38;
              sub_B16F98((BattleServantConfConponent_o *)(v5 + 64), v38, v8, v33, v34, v35, v36, v37);
              SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField;
              v6 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
              v44 = (System_Int32_array **)v6;
              if ( !v6 || (v6 = (System_String_o *)sub_B170BC(v6, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v5 + 24) > 5u )
                {
                  *(_QWORD *)(v5 + 72) = v44;
                  sub_B16F98((BattleServantConfConponent_o *)(v5 + 72), v44, v8, v39, v40, v41, v42, v43);
                  UniqueKey = (System_Int32_array **)ServantAssetArgs__GenerateUniqueKey(
                                                       v45,
                                                       (System_String_array *)v5,
                                                       v46);
                  p_uniqueKey->klass = (BattleServantConfConponent_c *)UniqueKey;
                  sub_B16F98(p_uniqueKey, UniqueKey, v48, v49, v50, v51, v52, v53);
                  return (System_String_o *)p_uniqueKey->klass;
                }
LABEL_25:
                sub_B17100(v6, v7, v8);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
    sub_B170F4(v6);
    sub_B170A0();
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}