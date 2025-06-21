void __fastcall ServantAssetArgs___ctor(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int32_array *CommandCodeIds; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleDeckServantData_o *deckSvt; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1BCB254(v5, v6);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._CommandCodeIds_k__BackingField, (int32_t)CommandCodeIds, v8, v9);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._skillList_k__BackingField, (int32_t)skillInfoList, v11, v12);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)deckSvt, v14, v15);
  this->fields._DisplayType_k__BackingField = svtData->fields.displayType;
  this->fields._LoadActorLimitCount_k__BackingField = BattleServantData__GetLoadActorLimitCount(svtData, 0LL);
  ServantAssetArgs__SetBattlePointId(this, svtData, v16);
}


void __fastcall ServantAssetArgs___ctor_45659692(
        ServantAssetArgs_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t appearanceId,
        int32_t weapon,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._CommandImageSvtId_k__BackingField = svtId;
  this->fields._DispImageSvtId_k__BackingField = svtId;
  this->fields._DispLimitCount_k__BackingField = limitCount;
  this->fields._OverwriteSvtVoiceId_k__BackingField = overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = appearanceId;
  this->fields._Weapon_k__BackingField = weapon;
  this->fields._LoadActorLimitCount_k__BackingField = limitCount;
  ServantAssetArgs__SetBattlePointId(this, 0LL, v13);
}


System_String_o *__fastcall ServantAssetArgs__GenerateUniqueKey(System_String_array *para, const MethodInfo *method)
{
  if ( (byte_4B1F359 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, method);
    byte_4B1F359 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_15973/*"_"*/, para, 0LL);
}


void __fastcall ServantAssetArgs__SetBattlePointId(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x22
  ServantBattlePointMaster_o *BattlePointEntities; // x0
  __int64 v14; // x1
  ServantBattlePointMaster_c *klass; // x8
  ServantBattlePointMaster_o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  _BOOL8 IsHideBattlePointGauge; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1F358 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BattlePointMaster___, svtData);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantBattlePointMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    byte_4B1F358 = 1;
  }
  entity = 0LL;
  if ( svtData && !svtData->fields.isEnemy )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BattlePointMaster___);
    BattlePointEntities = (ServantBattlePointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
    if ( !BattlePointEntities
      || (BattlePointEntities = (ServantBattlePointMaster_o *)ServantBattlePointMaster__GetBattlePointEntities(
                                                                BattlePointEntities,
                                                                this->fields._SvtId_k__BackingField,
                                                                0LL)) == 0LL )
    {
      sub_1BCB254(BattlePointEntities, v14);
    }
    klass = BattlePointEntities->klass;
    v16 = BattlePointEntities;
    v17 = *(unsigned __int16 *)(&BattlePointEntities->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&BattlePointEntities->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_13;
      }
      v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_13:
      v19 = sub_1C1B560(
              BattlePointEntities,
              System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo,
              0LL);
    }
    v21 = (*(__int64 (__fastcall **)(ServantBattlePointMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
    if ( !v21 )
      sub_1BCB254(0LL, v20);
    while ( 1 )
    {
      v22 = *(_QWORD *)v21;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_20;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_20:
        v25 = sub_1C1B560(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v21;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_27;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_27:
        v29 = sub_1C1B560(v21, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
      if ( !v30 )
        sub_1BCB254(0LL, v31);
      if ( !Master_object )
        sub_1BCB254(v30, v31);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             *(_DWORD *)(v30 + 20),
             (const MethodInfo_32C7E4C *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1BCB254(0LL, v32);
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge((BattlePointEntity_o *)entity, svtData, 0LL);
        if ( !IsHideBattlePointGauge )
        {
          if ( !entity )
            sub_1BCB254(IsHideBattlePointGauge, v34);
          this->fields._BattlePointId_k__BackingField = (int32_t)entity[1].klass;
          break;
        }
      }
    }
    v35 = *(_QWORD *)v21;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_40;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_40:
      v38 = sub_1C1B560(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v21, *(_QWORD *)(v38 + 8));
  }
}


int32_t __fastcall ServantAssetArgs__get_AppearanceId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._AppearanceId_k__BackingField;
}


int32_t __fastcall ServantAssetArgs__get_BattlePointId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._BattlePointId_k__BackingField;
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


int32_t __fastcall ServantAssetArgs__get_LoadActorLimitCount(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._LoadActorLimitCount_k__BackingField;
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  System_String_o *UniqueKey; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1F357 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    byte_4B1F357 = 1;
  }
  p_uniqueKey = &this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0LL) )
  {
    v4 = sub_1BCB0A0(string___TypeInfo, 6LL);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( !v4 )
      sub_1BCB254(v5, v6);
    if ( !*(_DWORD *)(v4 + 24) )
      goto LABEL_13;
    *(_QWORD *)(v4 + 32) = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v7, v8);
    SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 1u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 40) = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 40), (int32_t)v5, v7, v9);
    SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 2u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 48) = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v7, v10);
    SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 3u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 56) = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 56), (int32_t)v5, v7, v11);
    SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL);
    if ( *(_DWORD *)(v4 + 24) <= 4u
      || (*(_QWORD *)(v4 + 64) = v5,
          sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v7, v12),
          SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField,
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0LL),
          *(_DWORD *)(v4 + 24) <= 5u) )
    {
LABEL_13:
      sub_1BCB25C(v5, v6, v7);
    }
    *(_QWORD *)(v4 + 72) = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 72), (int32_t)v5, v7, v13);
    UniqueKey = ServantAssetArgs__GenerateUniqueKey((System_String_array *)v4, v14);
    *p_uniqueKey = UniqueKey;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.uniqueKey, (int32_t)UniqueKey, v16, v17);
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


void __fastcall ServantAssetArgs__set_BattlePointId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BattlePointId_k__BackingField = value;
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
  const MethodInfo *v3; // x3

  this->fields._CommandCodeIds_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeIds_k__BackingField,
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


void __fastcall ServantAssetArgs__set_DisplayType(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DisplayType_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_EffectFolder(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EffectFolder_k__BackingField = value;
}


void __fastcall ServantAssetArgs__set_LoadActorLimitCount(
        ServantAssetArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LoadActorLimitCount_k__BackingField = value;
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
  const MethodInfo *v3; // x3

  this->fields._deckSvt_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ServantAssetArgs__set_skillList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_BattleSkillInfoData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._skillList_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._skillList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}