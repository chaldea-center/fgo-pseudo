void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42AF970 & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_42AF970 = 1;
  }
  WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT = 175;
  WaveBattleWaveInfoComponent_TypeInfo->static_fields->MAX_ENEMY_INFO = 6;
  WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT = 841;
}


void __fastcall WaveBattleWaveInfoComponent___ctor(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__Awake(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall WaveBattleWaveInfoComponent__CreateEnemyList(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *enemyInfoList; // x0
  __int64 v16; // x8
  __int64 v17; // x25
  int32_t v18; // w22
  ViewWaveEnemyEntity_o *v19; // x23
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x23
  __int64 v25; // x0

  if ( (byte_42AF96E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
    sub_B52984(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_42AF96E = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v6;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.enemyInfoList,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    enemyInfoList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
    if ( !enemyInfoList )
      goto LABEL_30;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)enemyInfoList,
      (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
    v16 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      v18 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= (unsigned int)v16 )
        {
          v25 = sub_B52A88(enemyInfoList);
          sub_B52A28(v25, 0LL);
        }
        v19 = viewEnemyEntities->m_Items[v17];
        if ( !v19 )
          break;
        if ( v19->fields.wave == this->fields.wave )
        {
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
          if ( !enemyInfoList )
            break;
          if ( !System_Collections_Generic_List_int___Contains(
                  (System_Collections_Generic_List_int__o *)enemyInfoList,
                  v19->fields.classId,
                  (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
            if ( !enemyInfoList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)enemyInfoList,
              v19->fields.classId,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInfoListParent;
          if ( !enemyInfoList )
            break;
          enemyInfoPrefab = this->fields.enemyInfoPrefab;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)enemyInfoList, 0LL);
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BaseMonoBehaviour__createObject(
                                                                                       (BaseMonoBehaviour_o *)this,
                                                                                       enemyInfoPrefab,
                                                                                       transform,
                                                                                       0LL,
                                                                                       0LL);
          if ( !enemyInfoList )
            break;
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                       (UnityEngine_GameObject_o *)enemyInfoList,
                                                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
          if ( !enemyInfoList )
            break;
          enemyInfoGrid = this->fields.enemyInfoGrid;
          v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)enemyInfoList;
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                       (UnityEngine_Component_o *)enemyInfoList,
                                                                                       0LL);
          if ( !enemyInfoGrid )
            break;
          UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoList, 0LL);
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_enemyInfoList;
          if ( !*p_enemyInfoList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)enemyInfoList,
            v23,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          ++v18;
          if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          }
          if ( v18 >= *(_DWORD *)(*(_QWORD *)&enemyInfoList[4].fields._size + 4LL) )
            return v18;
          v16 = *(_QWORD *)&viewEnemyEntities->max_length;
        }
        if ( (int)++v17 >= (int)v16 )
          return v18;
      }
LABEL_30:
      sub_B52A5C(enemyInfoList, v14);
    }
  }
  return 0;
}


int32_t __fastcall WaveBattleWaveInfoComponent__GetHeight(
        WaveBattleWaveInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.height;
}


void __fastcall WaveBattleWaveInfoComponent__OnSelectWavePartyList(
        WaveBattleWaveInfoComponent_o *this,
        int32_t result,
        int32_t idx,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveInfoComponent_CallbackFunc__Invoke(callbackFunc, result, this->fields.wave, idx, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_o *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x22
  unsigned int v7; // w23
  ViewWaveEnemyEntity_o *v8; // x21
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x25
  int32_t size; // w8
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42AF96F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__);
    this = (WaveBattleWaveInfoComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
    byte_42AF96F = 1;
  }
  if ( viewEnemyEntities )
  {
    v5 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v5 )
    {
      if ( (int)v5 >= 1 )
      {
        v6 = 0LL;
        v7 = 0;
        do
        {
          if ( (unsigned int)v6 >= (unsigned int)v5 )
          {
            v11 = sub_B52A88(this);
            sub_B52A28(v11, 0LL);
          }
          v8 = viewEnemyEntities->m_Items[v6];
          if ( !v8 )
LABEL_18:
            sub_B52A5C(this, viewEnemyEntities);
          if ( v8->fields.wave == v4->fields.wave )
          {
            enemyInfoList = v4->fields.enemyInfoList;
            if ( !enemyInfoList )
              goto LABEL_18;
            size = enemyInfoList->fields._size;
            if ( size <= (int)v7 )
              return;
            if ( size <= v7 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            this = (WaveBattleWaveInfoComponent_o *)enemyInfoList->fields._items->m_Items[v7];
            if ( !this )
              goto LABEL_18;
            WaveBattleWaveEnemyInfoItem__SetItem(
              (WaveBattleWaveEnemyInfoItem_o *)this,
              viewEnemyEntities->m_Items[v6],
              method);
            v5 = *(_QWORD *)&viewEnemyEntities->max_length;
            ++v7;
          }
          ++v6;
        }
        while ( (int)v6 < (int)v5 );
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__SetWaveInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t wave,
        int32_t maxWave,
        WaveBattleWaveInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *waveNumLabel; // x25
  System_String_o *v15; // x26
  Il2CppObject *v16; // x27
  Il2CppObject *v17; // x0
  void *servantTextMemberSprite; // x0
  __int64 v19; // x1
  UISprite_o *waveLineSprite; // x24
  UIWidget_o *v21; // x23
  UISprite_o *enemyTextSprite; // x23
  System_Collections_Generic_List_int__o *v23; // x24
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  UISprite_o *servantTextStartingSprite; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t v41; // w19
  BalanceConfig_c *v42; // x0
  int32_t v43; // w24
  int v44; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v49; // x25
  DeckServantData_o *v50; // x26
  System_Int32_array *v51; // x27
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v52; // x28
  const MethodInfo *v53; // x6
  UIGrid_o *servantInfoGrid; // x26
  __int64 v55; // x0
  int32_t v57; // [xsp+8h] [xbp-58h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AF96C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_B52984(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_B52984(&StringLiteral_20387/*"line_whiteAlpha"*/);
    sub_B52984(&StringLiteral_15465/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_B52984(&StringLiteral_19803/*"img_txt_Member"*/);
    sub_B52984(&StringLiteral_19804/*"img_txt_Starting"*/);
    sub_B52984(&StringLiteral_19802/*"img_txt_Enemy"*/);
    byte_42AF96C = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = wave;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)viewEnemyEntities,
    (System_String_array **)questRestrictionInfo,
    *(System_Boolean_array ***)&wave,
    *(System_Int32_array ***)&maxWave,
    (System_Int32_array *)callback,
    (System_Int32_array *)method);
  waveNumLabel = this->fields.waveNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15465/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v58 = wave;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v57 = maxWave;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  servantTextMemberSprite = System_String__Format_44563852(v15, v16, v17, 0LL);
  if ( !waveNumLabel )
    goto LABEL_52;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_20387/*"line_whiteAlpha"*/, 0LL);
  if ( wave >= 10 )
  {
    v21 = (UIWidget_o *)this->fields.waveLineSprite;
    servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
    if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    }
    if ( !v21 )
      goto LABEL_52;
    UIWidget__set_width(v21, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_19802/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_52;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v23 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v23;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.enemyClassIdList,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
  if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
  }
  this->fields.height = **((_DWORD **)servantTextMemberSprite + 23);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_52;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v19, viewEnemyEntities, v31);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_19804/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || ((*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
          servantTextMemberSprite,
          *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL)),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_19803/*"img_txt_Member"*/,
          0LL),
        (servantTextMemberSprite = this->fields.servantTextMemberSprite) == 0LL) )
  {
LABEL_52:
    sub_B52A5C(servantTextMemberSprite, v19);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v33;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantInfoList,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.wave;
  v42 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  v43 = 0;
  v44 = v42->static_fields->DeckMainMemberMax * (v41 - 1);
  while ( 1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = BalanceConfig_TypeInfo;
    }
    if ( v43 >= v42->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_52;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                servantInfoPrefab,
                                transform,
                                0LL,
                                0LL);
    if ( !servantTextMemberSprite )
      goto LABEL_52;
    servantTextMemberSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_52;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_52;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_52;
    if ( v44 + v43 >= svts->max_length )
    {
      v55 = sub_B52A88(servantTextMemberSprite);
      sub_B52A28(v55, 0LL);
    }
    v49 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = *p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_52;
    v50 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v44] + v43);
    v51 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    v52 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B52A54(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v52,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v49 )
      goto LABEL_52;
    WaveBattleWaveServantInfoItem__SetItem(v49, v43, v50, questRestrictionInfo, v51, v52, v53);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v49, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_52;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = *p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_52;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantTextMemberSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    ++v43;
    v42 = BalanceConfig_TypeInfo;
  }
}


void __fastcall WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t wave; // w23
  System_Collections_Generic_List_int__o *enemyClassIdList; // x0
  int32_t v9; // w22
  int v10; // w28
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *servantInfoList; // x23
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  struct WaveBattleWaveServantInfoItem_array *items; // x10
  DeckServantData_o *v15; // x23
  WaveBattleWaveServantInfoItem_o *v16; // x24
  System_Int32_array *v17; // x25
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v18; // x26
  const MethodInfo *v19; // x6
  __int64 v20; // x0

  if ( (byte_42AF96D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    sub_B52984(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    byte_42AF96D = 1;
  }
  wave = this->fields.wave;
  enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  }
  v9 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) * (wave - 1);
  while ( 1 )
  {
    if ( (enemyClassIdList[7].fields._size & 0x4000000) != 0 && !enemyClassIdList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(enemyClassIdList);
      enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
    }
    if ( v9 >= *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) )
      break;
    servantInfoList = this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_22;
    if ( servantInfoList->fields._size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( !deckEntity )
      goto LABEL_22;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_22;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_22;
    if ( v10 + v9 >= svts->max_length )
    {
      v20 = sub_B52A88(enemyClassIdList);
      sub_B52A28(v20, 0LL);
    }
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList
      || (items = servantInfoList->fields._items,
          v15 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v10] + v9),
          v16 = items->m_Items[v9],
          v17 = System_Collections_Generic_List_int___ToArray(
                  enemyClassIdList,
                  (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
          v18 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B52A54(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v18,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            0LL),
          !v16) )
    {
LABEL_22:
      sub_B52A5C(enemyClassIdList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v16, v9, v15, questRestrictionInfo, v17, v18, v19);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
    ++v9;
  }
}


void __fastcall WaveBattleWaveInfoComponent__add_callbackFunc(
        WaveBattleWaveInfoComponent_o *this,
        WaveBattleWaveInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoComponent_o *v11; // x0
  WaveBattleWaveInfoComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42AF96A & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_42AF96A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoComponent_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B52D50(v8);
  WaveBattleWaveInfoComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WaveBattleWaveInfoComponent__remove_callbackFunc(
        WaveBattleWaveInfoComponent_o *this,
        WaveBattleWaveInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42AF96B & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_42AF96B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoComponent_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B52D50(v8);
  WaveBattleWaveInfoComponent__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattleWaveInfoComponent_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v12; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = result;
  v12 = idx;
  v13 = wave;
  if ( (byte_42AD780 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_42AD780 = 1;
  }
  v11[3] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v14);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11[2] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__Invoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  WaveBattleWaveInfoComponent_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleWaveInfoComponent_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattleWaveInfoComponent_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (WaveBattleWaveInfoComponent_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&wave, *(_QWORD *)&idx);
      if ( (sub_B529B4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)wave, (unsigned int)idx, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)wave, (unsigned int)idx, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AEB880(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B52A34(v20, v25);
        (*v22)(v24, v30, (unsigned int)wave, (unsigned int)idx, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AEB880(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)wave,
            (unsigned int)idx,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)wave,
            (unsigned int)idx,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)wave,
      (unsigned int)idx,
      v25);
    goto LABEL_38;
  }
}