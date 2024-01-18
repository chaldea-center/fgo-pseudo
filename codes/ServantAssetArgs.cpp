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
    sub_B2C434(v5, v6);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._deckSvt_k__BackingField,
    (System_Int32_array **)deckSvt,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall ServantAssetArgs___ctor_25318216(
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
  if ( (byte_4187B67 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15905/*"_"*/, para);
    byte_4187B67 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_15905/*"_"*/, para, 0LL);
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  ServantAssetArgs_o *v49; // x0
  const MethodInfo *v50; // x2
  System_Int32_array **UniqueKey; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187B66 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    byte_4187B66 = 1;
  }
  SvtId_k__BackingField = 0;
  p_uniqueKey = (BattleServantConfConponent_o *)&this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v4 = sub_B2C374(string___TypeInfo, 6LL);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v4 )
      sub_B2C434(v5, v6);
    v13 = (System_Int32_array **)v5;
    if ( !v5 || (v5 = (System_String_o *)sub_B2C41C(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_25;
      *(_QWORD *)(v4 + 32) = v13;
      sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 32), v13, v7, v8, v9, v10, v11, v12);
      SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
      v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
      v20 = (System_Int32_array **)v5;
      if ( !v5 || (v5 = (System_String_o *)sub_B2C41C(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v4 + 24) <= 1u )
          goto LABEL_25;
        *(_QWORD *)(v4 + 40) = v20;
        sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 40), v20, v14, v15, v16, v17, v18, v19);
        SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
        v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
        v27 = (System_Int32_array **)v5;
        if ( !v5 || (v5 = (System_String_o *)sub_B2C41C(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v4 + 24) <= 2u )
            goto LABEL_25;
          *(_QWORD *)(v4 + 48) = v27;
          sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 48), v27, v21, v22, v23, v24, v25, v26);
          SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
          v34 = (System_Int32_array **)v5;
          if ( !v5 || (v5 = (System_String_o *)sub_B2C41C(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v4 + 24) <= 3u )
              goto LABEL_25;
            *(_QWORD *)(v4 + 56) = v34;
            sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 56), v34, v28, v29, v30, v31, v32, v33);
            SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
            v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
            v41 = (System_Int32_array **)v5;
            if ( !v5 || (v5 = (System_String_o *)sub_B2C41C(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v4 + 24) <= 4u )
                goto LABEL_25;
              *(_QWORD *)(v4 + 64) = v41;
              sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 64), v41, v35, v36, v37, v38, v39, v40);
              SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField;
              v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
              v48 = (System_Int32_array **)v5;
              if ( !v5 || (v5 = (System_String_o *)sub_B2C41C(v5, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v4 + 24) > 5u )
                {
                  *(_QWORD *)(v4 + 72) = v48;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 72), v48, v42, v43, v44, v45, v46, v47);
                  UniqueKey = (System_Int32_array **)ServantAssetArgs__GenerateUniqueKey(
                                                       v49,
                                                       (System_String_array *)v4,
                                                       v50);
                  p_uniqueKey->klass = (BattleServantConfConponent_c *)UniqueKey;
                  sub_B2C2F8(p_uniqueKey, UniqueKey, v52, v53, v54, v55, v56, v57);
                  return (System_String_o *)p_uniqueKey->klass;
                }
LABEL_25:
                v59 = sub_B2C460(v5);
                sub_B2C400(v59, 0LL);
              }
            }
          }
        }
      }
    }
    v60 = sub_B2C454(v5);
    sub_B2C400(v60, 0LL);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._skillList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}