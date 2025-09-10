void ServantAssetArgs___ctor(ServantAssetArgs_o *this, BattleServantData_o *svtData, const MethodInfo *method)
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

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    sub_1C2D6EC(v5, v6);
  this->fields._SvtId_k__BackingField = BattleServantData__getSvtId(svtData, 0);
  this->fields._CommandImageSvtId_k__BackingField = BattleServantData__GetCommandImageSvtId(svtData, 0);
  this->fields._DispImageSvtId_k__BackingField = BattleServantData__GetDispImageSvtId(svtData, 0);
  this->fields._DispLimitCount_k__BackingField = BattleServantData__getDispLimitCount(svtData, 1, 0);
  this->fields._Weapon_k__BackingField = BattleServantData__getWeaponGroup(svtData, 0, 0);
  this->fields._WeaponEffectId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 1, 0);
  this->fields._EffectFolder_k__BackingField = BattleServantData__getEffectFolder(svtData, 0);
  this->fields._CameraId_k__BackingField = BattleServantData__getCameraActionId(svtData, 0);
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  this->fields._OverwriteSvtVoiceId_k__BackingField = svtData->fields.overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = BattleServantData__getAppearanceId(svtData, 0);
  CommandCodeIds = BattleServantData__GetCommandCodeIds(svtData, 0);
  this->fields._CommandCodeIds_k__BackingField = CommandCodeIds;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._CommandCodeIds_k__BackingField, (int32_t)CommandCodeIds, v8, v9);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._skillList_k__BackingField, (int32_t)skillInfoList, v11, v12);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)deckSvt, v14, v15);
  this->fields._DisplayType_k__BackingField = svtData->fields.displayType;
  this->fields._LoadActorLimitCount_k__BackingField = BattleServantData__GetLoadActorLimitCount(svtData, 0);
  ServantAssetArgs__SetBattlePointId(this, svtData, v16);
}


void ServantAssetArgs___ctor_46362464(
        ServantAssetArgs_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t appearanceId,
        int32_t weapon,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._CommandImageSvtId_k__BackingField = svtId;
  this->fields._DispImageSvtId_k__BackingField = svtId;
  this->fields._DispLimitCount_k__BackingField = limitCount;
  this->fields._OverwriteSvtVoiceId_k__BackingField = overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = appearanceId;
  this->fields._Weapon_k__BackingField = weapon;
  this->fields._LoadActorLimitCount_k__BackingField = limitCount;
  ServantAssetArgs__SetBattlePointId(this, 0, v13);
}


System_String_o *ServantAssetArgs__GenerateUniqueKey(System_String_array *para, const MethodInfo *method)
{
  if ( (byte_4C2A1EA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C2A1EA = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_16105/*"_"*/, para, 0);
}


void ServantAssetArgs__SetBattlePointId(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  ServantBattlePointMaster_o *BattlePointEntities; // x0
  __int64 v7; // x1
  ServantBattlePointMaster_c *klass; // x8
  ServantBattlePointMaster_o *v9; // x19
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  _BOOL8 IsHideBattlePointGauge; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A1E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantBattlePointMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C2A1E9 = 1;
  }
  entity = 0;
  if ( svtData && !svtData->fields.isEnemy )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattlePointMaster___);
    BattlePointEntities = (ServantBattlePointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
    if ( !BattlePointEntities
      || (BattlePointEntities = (ServantBattlePointMaster_o *)ServantBattlePointMaster__GetBattlePointEntities(
                                                                BattlePointEntities,
                                                                this->fields._SvtId_k__BackingField,
                                                                0)) == 0 )
    {
      sub_1C2D6EC(BattlePointEntities, v7);
    }
    klass = BattlePointEntities->klass;
    v9 = BattlePointEntities;
    v10 = *(unsigned __int16 *)&BattlePointEntities->klass->_2.rank;
    if ( *(_WORD *)&BattlePointEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_13:
      v12 = sub_1C7DCA8(
              BattlePointEntities,
              System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo,
              0);
    }
    v14 = (*(__int64 (__fastcall **)(ServantBattlePointMaster_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
    if ( !v14 )
      sub_1C2D6EC(0, v13);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_20;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_20:
        v18 = sub_1C7DCA8(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_27;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_27:
        v22 = sub_1C7DCA8(v14, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1C2D6EC(0, v24);
      if ( !Master_object )
        sub_1C2D6EC(v23, v24);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             *(_DWORD *)(v23 + 20),
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C2D6EC(0, v25);
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge((BattlePointEntity_o *)entity, svtData, 0);
        if ( !IsHideBattlePointGauge )
        {
          if ( !entity )
            sub_1C2D6EC(IsHideBattlePointGauge, v27);
          this->fields._BattlePointId_k__BackingField = (int32_t)entity[1].klass;
          break;
        }
      }
    }
    v28 = *(_QWORD *)v14;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_40;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_40:
      v31 = sub_1C7DCA8(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v14, *(_QWORD *)(v31 + 8));
  }
}


int32_t ServantAssetArgs__get_AppearanceId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._AppearanceId_k__BackingField;
}


int32_t ServantAssetArgs__get_BattlePointId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._BattlePointId_k__BackingField;
}


int32_t ServantAssetArgs__get_CameraId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._CameraId_k__BackingField;
}


System_Int32_array *ServantAssetArgs__get_CommandCodeIds(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._CommandCodeIds_k__BackingField;
}


int32_t ServantAssetArgs__get_CommandImageSvtId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._CommandImageSvtId_k__BackingField;
}


int32_t ServantAssetArgs__get_DispImageSvtId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._DispImageSvtId_k__BackingField;
}


int32_t ServantAssetArgs__get_DispLimitCount(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._DispLimitCount_k__BackingField;
}


int32_t ServantAssetArgs__get_DisplayType(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._DisplayType_k__BackingField;
}


int32_t ServantAssetArgs__get_EffectFolder(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._EffectFolder_k__BackingField;
}


int32_t ServantAssetArgs__get_LoadActorLimitCount(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._LoadActorLimitCount_k__BackingField;
}


int32_t ServantAssetArgs__get_OverwriteSvtVoiceId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteSvtVoiceId_k__BackingField;
}


int32_t ServantAssetArgs__get_SvtId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


int32_t ServantAssetArgs__get_UniqueId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._UniqueId_k__BackingField;
}


System_String_o *ServantAssetArgs__get_UniqueKey(ServantAssetArgs_o *this, const MethodInfo *method)
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

  if ( (byte_4C2A1E8 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    byte_4C2A1E8 = 1;
  }
  p_uniqueKey = &this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0) )
  {
    v4 = sub_1C2D538(string___TypeInfo, 6);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( !v4 )
      sub_1C2D6EC(v5, v6);
    if ( !*(_DWORD *)(v4 + 24) )
      goto LABEL_13;
    *(_QWORD *)(v4 + 32) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v7, v8);
    SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 1u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 40) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), (int32_t)v5, v7, v9);
    SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 2u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 48) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v7, v10);
    SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 3u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 56) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 56), (int32_t)v5, v7, v11);
    SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 4u
      || (*(_QWORD *)(v4 + 64) = v5,
          sub_1C2D434((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v7, v12),
          SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField,
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0),
          *(_DWORD *)(v4 + 24) <= 5u) )
    {
LABEL_13:
      sub_1C2D6F4(v5, v6, v7);
    }
    *(_QWORD *)(v4 + 72) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 72), (int32_t)v5, v7, v13);
    UniqueKey = ServantAssetArgs__GenerateUniqueKey((System_String_array *)v4, v14);
    *p_uniqueKey = UniqueKey;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.uniqueKey, (int32_t)UniqueKey, v16, v17);
  }
  return *p_uniqueKey;
}


int32_t ServantAssetArgs__get_UnloadCount(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._UnloadCount_k__BackingField;
}


int32_t ServantAssetArgs__get_Weapon(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._Weapon_k__BackingField;
}


int32_t ServantAssetArgs__get_WeaponEffectId(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._WeaponEffectId_k__BackingField;
}


BattleDeckServantData_o *ServantAssetArgs__get_deckSvt(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._deckSvt_k__BackingField;
}


System_Collections_Generic_List_BattleSkillInfoData__o *ServantAssetArgs__get_skillList(
        ServantAssetArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._skillList_k__BackingField;
}


void ServantAssetArgs__set_AppearanceId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AppearanceId_k__BackingField = value;
}


void ServantAssetArgs__set_BattlePointId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BattlePointId_k__BackingField = value;
}


void ServantAssetArgs__set_CameraId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CameraId_k__BackingField = value;
}


void ServantAssetArgs__set_CommandCodeIds(
        ServantAssetArgs_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CommandCodeIds_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ServantAssetArgs__set_CommandImageSvtId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CommandImageSvtId_k__BackingField = value;
}


void ServantAssetArgs__set_DispImageSvtId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DispImageSvtId_k__BackingField = value;
}


void ServantAssetArgs__set_DispLimitCount(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DispLimitCount_k__BackingField = value;
}


void ServantAssetArgs__set_DisplayType(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._DisplayType_k__BackingField = value;
}


void ServantAssetArgs__set_EffectFolder(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._EffectFolder_k__BackingField = value;
}


void ServantAssetArgs__set_LoadActorLimitCount(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._LoadActorLimitCount_k__BackingField = value;
}


void ServantAssetArgs__set_OverwriteSvtVoiceId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._OverwriteSvtVoiceId_k__BackingField = value;
}


void ServantAssetArgs__set_SvtId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void ServantAssetArgs__set_UniqueId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UniqueId_k__BackingField = value;
}


void ServantAssetArgs__set_UnloadCount(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UnloadCount_k__BackingField = value;
}


void ServantAssetArgs__set_Weapon(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Weapon_k__BackingField = value;
}


void ServantAssetArgs__set_WeaponEffectId(ServantAssetArgs_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._WeaponEffectId_k__BackingField = value;
}


void ServantAssetArgs__set_deckSvt(ServantAssetArgs_o *this, BattleDeckServantData_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._deckSvt_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ServantAssetArgs__set_skillList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_BattleSkillInfoData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._skillList_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._skillList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}