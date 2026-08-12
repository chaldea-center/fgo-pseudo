void ServantAssetArgs___ctor(ServantAssetArgs_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t CameraActionId; // w0
  int32_t uniqueId; // w8
  int32_t overwriteSvtVoiceId; // w9
  struct System_Int32_array *CommandCodeIds; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct BattleDeckServantData_o *deckSvt; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct BattleDeckServantData_o *OriginalDeckSvt_k__BackingField; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x2

  if ( (byte_59738C4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_59738C4 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._BattlePointIdList_k__BackingField = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BattlePointIdList_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    sub_2213CDC(v12, v13);
  this->fields._SvtId_k__BackingField = BattleServantData__getSvtId(svtData, 0);
  this->fields._CommandImageSvtId_k__BackingField = BattleServantData__GetCommandImageSvtId(svtData, 0);
  this->fields._DispImageSvtId_k__BackingField = BattleServantData__GetDispImageSvtId(svtData, 0);
  this->fields._DispLimitCount_k__BackingField = BattleServantData__getDispLimitCount(svtData, 1, 0);
  this->fields._Weapon_k__BackingField = BattleServantData__getWeaponGroup(svtData, 0, 0);
  this->fields._WeaponEffectId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 1, 0);
  this->fields._EffectFolder_k__BackingField = BattleServantData__getEffectFolder(svtData, 0);
  CameraActionId = BattleServantData__getCameraActionId(svtData, 0);
  uniqueId = svtData->fields.uniqueId;
  overwriteSvtVoiceId = svtData->fields.overwriteSvtVoiceId;
  this->fields._CameraId_k__BackingField = CameraActionId;
  this->fields._UniqueId_k__BackingField = uniqueId;
  this->fields._OverwriteSvtVoiceId_k__BackingField = overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = BattleServantData__getAppearanceId(svtData, 0);
  CommandCodeIds = BattleServantData__GetCommandCodeIds(svtData, 0);
  this->fields._CommandCodeIds_k__BackingField = CommandCodeIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int32_t)CommandCodeIds,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  skillInfoList = svtData->fields.skillInfoList;
  this->fields._skillList_k__BackingField = skillInfoList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._skillList_k__BackingField,
    (int32_t)skillInfoList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  deckSvt = svtData->fields.deckSvt;
  this->fields._deckSvt_k__BackingField = deckSvt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._deckSvt_k__BackingField,
    (int32_t)deckSvt,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  OriginalDeckSvt_k__BackingField = svtData->fields._OriginalDeckSvt_k__BackingField;
  this->fields._OriginalDeckSvt_k__BackingField = OriginalDeckSvt_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OriginalDeckSvt_k__BackingField,
    (int32_t)OriginalDeckSvt_k__BackingField,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields._DisplayType_k__BackingField = svtData->fields.displayType;
  this->fields._LoadActorLimitCount_k__BackingField = BattleServantData__GetLoadActorLimitCount(svtData, 0);
  ServantAssetArgs__SetBattlePointId(this, svtData, v45);
}


void ServantAssetArgs___ctor_53671584(
        ServantAssetArgs_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t appearanceId,
        int32_t weapon,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v13; // x25
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2

  if ( (byte_59738C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_59738C5 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._BattlePointIdList_k__BackingField = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BattlePointIdList_k__BackingField,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._CommandImageSvtId_k__BackingField = svtId;
  this->fields._DispImageSvtId_k__BackingField = svtId;
  this->fields._DispLimitCount_k__BackingField = limitCount;
  this->fields._OverwriteSvtVoiceId_k__BackingField = overwriteSvtVoiceId;
  this->fields._AppearanceId_k__BackingField = appearanceId;
  this->fields._Weapon_k__BackingField = weapon;
  this->fields._LoadActorLimitCount_k__BackingField = limitCount;
  ServantAssetArgs__SetBattlePointId(this, 0, v20);
}


System_String_o *ServantAssetArgs__GenerateUniqueKey(System_String_array *para, const MethodInfo *method)
{
  if ( (byte_59738C7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59738C7 = 1;
  }
  return System_String__Join((System_String_o *)StringLiteral_16746/*"_"*/, para, 0);
}


void ServantAssetArgs__SetBattlePointId(
        ServantAssetArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *BattlePointList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *Enumerator; // x0
  __int64 klass_low; // x1
  System_Collections_Generic_List_int__o *v10; // x22
  System_Collections_Generic_List_int__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x22
  System_Collections_Generic_List_int__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v27; // x20
  System_Collections_Generic_List_int__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *v33; // [xsp+28h] [xbp-48h]

  if ( (byte_59738C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
    byte_59738C6 = 1;
  }
  v33 = 0;
  entity = 0;
  if ( svtData && !svtData->fields.isEnemy )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtData);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattlePointMaster___);
    BattlePointList = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)BattleServantData__get_BattlePointList(
                                                                                  svtData,
                                                                                  0);
    if ( !BattlePointList )
      sub_2213CDC(0, v7);
    Enumerator = (System_Collections_Generic_List_int__o *)System_Collections_ObjectModel_ReadOnlyCollection_object___GetEnumerator(
                                                             BattlePointList,
                                                             (const MethodInfo_472CF68 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
    v33 = Enumerator;
    if ( !Enumerator )
LABEL_36:
      sub_2213CDC(Enumerator, klass_low);
    v10 = Enumerator;
    while ( 1 )
    {
      klass = v10->klass;
      v12 = *(unsigned __int16 *)&v10->klass->_2.rank;
      if ( *(_WORD *)&v10->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_14;
        }
        v14 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_14:
        v14 = sub_224BC3C(v10, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_int__o *, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8));
      if ( (v15 & 1) == 0 )
        break;
      v17 = v33;
      if ( !v33 )
        sub_2213CDC(v15, v16);
      v18 = v33->klass;
      v19 = *(unsigned __int16 *)&v33->klass->_2.rank;
      if ( *(_WORD *)&v33->klass->_2.rank )
      {
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_BattlePointData__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable + 16 * *v20;
      }
      else
      {
LABEL_22:
        v21 = sub_224BC3C(v33, System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_int__o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
      if ( !v22 )
        sub_2213CDC(0, v23);
      if ( !Master_object )
        sub_2213CDC(v22, v23);
      Enumerator = (System_Collections_Generic_List_int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                               &entity,
                                                               *(_DWORD *)(v22 + 16),
                                                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !entity )
          sub_2213CDC(0, klass_low);
        Enumerator = (System_Collections_Generic_List_int__o *)BattlePointEntity__IsHideBattlePointGauge(
                                                                 (BattlePointEntity_o *)entity,
                                                                 svtData,
                                                                 0);
        if ( ((unsigned __int8)Enumerator & 1) == 0 )
        {
          if ( !entity )
            sub_2213CDC(Enumerator, klass_low);
          Enumerator = this->fields._BattlePointIdList_k__BackingField;
          if ( !Enumerator
            || (items = Enumerator->fields._items,
                klass_low = LODWORD(entity[1].klass),
                v25 = Method_System_Collections_Generic_List_int__Add__,
                ++Enumerator->fields._version,
                !items) )
          {
            sub_2213CDC(Enumerator, klass_low);
          }
          size = Enumerator->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              Enumerator,
              klass_low,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            Enumerator->fields._size = size + 1;
            items->m_Items[size] = klass_low;
          }
        }
      }
      v10 = v33;
      if ( !v33 )
        goto LABEL_36;
    }
    v27 = v33;
    if ( v33 )
    {
      v28 = v33->klass;
      v29 = *(unsigned __int16 *)&v33->klass->_2.rank;
      if ( *(_WORD *)&v33->klass->_2.rank )
      {
        v30 = &v28->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_42;
        }
        v31 = (__int64)&v28->vtable + 16 * *v30;
      }
      else
      {
LABEL_42:
        v31 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_Collections_Generic_List_int__o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
    }
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


System_Collections_Generic_List_int__o *ServantAssetArgs__get_BattlePointIdList(
        ServantAssetArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BattlePointIdList_k__BackingField;
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


BattleDeckServantData_o *ServantAssetArgs__get_OriginalDeckSvt(ServantAssetArgs_o *this, const MethodInfo *method)
{
  return this->fields._OriginalDeckSvt_k__BackingField;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  const MethodInfo *v43; // x1
  System_String_o *UniqueKey; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t SvtId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59738C3 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    byte_59738C3 = 1;
  }
  SvtId_k__BackingField = 0;
  p_uniqueKey = &this->fields.uniqueKey;
  if ( System_String__IsNullOrEmpty(this->fields.uniqueKey, 0) )
  {
    v4 = sub_2213B20(string___TypeInfo, 6);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( !v4 )
      sub_2213CDC(v5, v6);
    if ( !*(_DWORD *)(v4 + 24) )
      goto LABEL_13;
    *(_QWORD *)(v4 + 32) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)v5, v7, v8, v9, v10, v11, v12);
    SvtId_k__BackingField = this->fields._CommandImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_13;
    *(_QWORD *)(v4 + 40) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)v5, v13, v14, v15, v16, v17, v18);
    SvtId_k__BackingField = this->fields._DispImageSvtId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 2u )
      goto LABEL_13;
    *(_QWORD *)(v4 + 48) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 48), (int32_t)v5, v19, v20, v21, v22, v23, v24);
    SvtId_k__BackingField = this->fields._DispLimitCount_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFC) == 0 )
      goto LABEL_13;
    *(_QWORD *)(v4 + 56) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 56), (int32_t)v5, v25, v26, v27, v28, v29, v30);
    SvtId_k__BackingField = this->fields._OverwriteSvtVoiceId_k__BackingField;
    v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0);
    if ( *(_DWORD *)(v4 + 24) <= 4u
      || (*(_QWORD *)(v4 + 64) = v5,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 64), (int32_t)v5, v31, v32, v33, v34, v35, v36),
          SvtId_k__BackingField = this->fields._AppearanceId_k__BackingField,
          v5 = System_Int32__ToString((int32_t)&SvtId_k__BackingField, 0),
          *(_DWORD *)(v4 + 24) <= 5u) )
    {
LABEL_13:
      sub_2213CE4(v5);
    }
    *(_QWORD *)(v4 + 72) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 72), (int32_t)v5, v37, v38, v39, v40, v41, v42);
    UniqueKey = ServantAssetArgs__GenerateUniqueKey((System_String_array *)v4, v43);
    *p_uniqueKey = UniqueKey;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.uniqueKey,
      (int32_t)UniqueKey,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
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


void ServantAssetArgs__set_BattlePointIdList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BattlePointIdList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BattlePointIdList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CommandCodeIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommandCodeIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void ServantAssetArgs__set_OriginalDeckSvt(
        ServantAssetArgs_o *this,
        BattleDeckServantData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OriginalDeckSvt_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OriginalDeckSvt_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._deckSvt_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._deckSvt_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantAssetArgs__set_skillList(
        ServantAssetArgs_o *this,
        System_Collections_Generic_List_BattleSkillInfoData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._skillList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._skillList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}