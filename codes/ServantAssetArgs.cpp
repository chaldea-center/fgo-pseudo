void ServantAssetArgs___ctor(ServantAssetArgs_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_Int32_array *CommandCodeIds; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleDeckServantData_o *deckSvt; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    sub_1C372B4(v5);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._CommandCodeIds_k__BackingField, (int32_t)CommandCodeIds, v7, v8);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._skillList_k__BackingField, (int32_t)skillInfoList, v10, v11);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)deckSvt, v13, v14);
  this->fields._DisplayType_k__BackingField = svtData->fields.displayType;
  this->fields._LoadActorLimitCount_k__BackingField = BattleServantData__GetLoadActorLimitCount(svtData, 0);
  ServantAssetArgs__SetBattlePointId(this, svtData, v15);
}


void ServantAssetArgs___ctor_46617332(
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
  if ( (byte_4C45F0A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    byte_4C45F0A = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_16109/*"_"*/, para, 0);
}


void ServantAssetArgs__SetBattlePointId(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  ServantBattlePointMaster_o *BattlePointEntities; // x0
  ServantBattlePointMaster_c *klass; // x8
  ServantBattlePointMaster_o *v8; // x19
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  _BOOL8 IsHideBattlePointGauge; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C45F09 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantBattlePointMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C45F09 = 1;
  }
  entity = 0;
  if ( svtData && !svtData->fields.isEnemy )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattlePointMaster___);
    BattlePointEntities = (ServantBattlePointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
    if ( !BattlePointEntities
      || (BattlePointEntities = (ServantBattlePointMaster_o *)ServantBattlePointMaster__GetBattlePointEntities(
                                                                BattlePointEntities,
                                                                this->fields._SvtId_k__BackingField,
                                                                0)) == 0 )
    {
      sub_1C372B4(BattlePointEntities);
    }
    klass = BattlePointEntities->klass;
    v8 = BattlePointEntities;
    v9 = *(unsigned __int16 *)&BattlePointEntities->klass->_2.rank;
    if ( *(_WORD *)&BattlePointEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_13;
      }
      v11 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_13:
      v11 = sub_1C87870(
              BattlePointEntities,
              System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo,
              0);
    }
    v12 = (*(__int64 (__fastcall **)(ServantBattlePointMaster_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
    if ( !v12 )
      sub_1C372B4(0);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_20;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_20:
        v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      v17 = *(_QWORD *)v12;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_27;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_27:
        v20 = sub_1C87870(v12, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0);
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
      if ( !v21 )
        sub_1C372B4(0);
      if ( !Master_object )
        sub_1C372B4(v21);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             *(_DWORD *)(v21 + 20),
             (const MethodInfo_33A10EC *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C372B4(0);
        IsHideBattlePointGauge = BattlePointEntity__IsHideBattlePointGauge((BattlePointEntity_o *)entity, svtData, 0);
        if ( !IsHideBattlePointGauge )
        {
          if ( !entity )
            sub_1C372B4(IsHideBattlePointGauge);
          this->fields._BattlePointId_k__BackingField = (int32_t)entity[1].klass;
          break;
        }
      }
    }
    v23 = *(_QWORD *)v12;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_40;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_40:
      v26 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  System_String_o *UniqueKey; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C45F08 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    byte_4C45F08 = 1;
  }
  p_uniqueKey = &this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0) )
  {
    v4 = sub_1C37100(string___TypeInfo, 6);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( !v4 )
      sub_1C372B4(v5);
    if ( !*(_DWORD *)(v4 + 24) )
      goto LABEL_13;
    *(_QWORD *)(v4 + 32) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v6, v7);
    SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 1u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 40) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)v5, v8, v9);
    SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 2u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 48) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v10, v11);
    SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 3u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 56) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 56), (int32_t)v5, v12, v13);
    SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 4u
      || (*(_QWORD *)(v4 + 64) = v5,
          sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v14, v15),
          SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField,
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0),
          *(_DWORD *)(v4 + 24) <= 5u) )
    {
LABEL_13:
      sub_1C372BC(v5);
    }
    *(_QWORD *)(v4 + 72) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 72), (int32_t)v5, v16, v17);
    UniqueKey = ServantAssetArgs__GenerateUniqueKey((System_String_array *)v4, v18);
    *p_uniqueKey = UniqueKey;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.uniqueKey, (int32_t)UniqueKey, v20, v21);
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
  sub_1C36FFC(
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._deckSvt_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ServantAssetArgs__set_skillList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_BattleSkillInfoData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._skillList_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._skillList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}