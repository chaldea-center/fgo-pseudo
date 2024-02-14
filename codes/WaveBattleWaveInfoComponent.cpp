void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4213F8A & 1) == 0 )
  {
    sub_B0D8A4(&WaveBattleWaveInfoComponent_TypeInfo, v1);
    byte_4213F8A = 1;
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WaveBattleWaveInfoComponent__CreateEnemyList(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_XWeaponTrail_Element__o *enemyInfoList; // x0
  __int64 v23; // x8
  __int64 v24; // x25
  int32_t v25; // w22
  ViewWaveEnemyEntity_o *v26; // x23
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x23
  __int64 v32; // x0

  if ( (byte_4213F88 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v12);
    sub_B0D8A4(&WaveBattleWaveInfoComponent_TypeInfo, v13);
    byte_4213F88 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  viewEnemyEntities);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v14;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enemyInfoList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    enemyInfoList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
    if ( !enemyInfoList )
      goto LABEL_30;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)enemyInfoList,
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    v23 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      v25 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v24 >= (unsigned int)v23 )
        {
          v32 = sub_B0D9A8(enemyInfoList);
          sub_B0D948(v32, 0LL);
        }
        v26 = viewEnemyEntities->m_Items[v24];
        if ( !v26 )
          break;
        if ( v26->fields.wave == this->fields.wave )
        {
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
          if ( !enemyInfoList )
            break;
          if ( !System_Collections_Generic_List_int___Contains(
                  (System_Collections_Generic_List_int__o *)enemyInfoList,
                  v26->fields.classId,
                  (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
            if ( !enemyInfoList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)enemyInfoList,
              v26->fields.classId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
                                                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
          if ( !enemyInfoList )
            break;
          enemyInfoGrid = this->fields.enemyInfoGrid;
          v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)enemyInfoList;
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
            v30,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          ++v25;
          if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          }
          if ( v25 >= *(_DWORD *)(*(_QWORD *)&enemyInfoList[4].fields._size + 4LL) )
            return v25;
          v23 = *(_QWORD *)&viewEnemyEntities->max_length;
        }
        if ( (int)++v24 >= (int)v23 )
          return v25;
      }
LABEL_30:
      sub_B0D97C(enemyInfoList);
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
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 v7; // x22
  unsigned int v8; // w23
  ViewWaveEnemyEntity_o *v9; // x21
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x25
  int32_t size; // w8
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4213F89 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__, viewEnemyEntities);
    this = (WaveBattleWaveInfoComponent_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5);
    byte_4213F89 = 1;
  }
  if ( viewEnemyEntities )
  {
    v6 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v6 )
    {
      if ( (int)v6 >= 1 )
      {
        v7 = 0LL;
        v8 = 0;
        do
        {
          if ( (unsigned int)v7 >= (unsigned int)v6 )
          {
            v12 = sub_B0D9A8(this);
            sub_B0D948(v12, 0LL);
          }
          v9 = viewEnemyEntities->m_Items[v7];
          if ( !v9 )
LABEL_18:
            sub_B0D97C(this);
          if ( v9->fields.wave == v4->fields.wave )
          {
            enemyInfoList = v4->fields.enemyInfoList;
            if ( !enemyInfoList )
              goto LABEL_18;
            size = enemyInfoList->fields._size;
            if ( size <= (int)v8 )
              return;
            if ( size <= v8 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            this = (WaveBattleWaveInfoComponent_o *)enemyInfoList->fields._items->m_Items[v8];
            if ( !this )
              goto LABEL_18;
            WaveBattleWaveEnemyInfoItem__SetItem(
              (WaveBattleWaveEnemyInfoItem_o *)this,
              viewEnemyEntities->m_Items[v7],
              method);
            v6 = *(_QWORD *)&viewEnemyEntities->max_length;
            ++v8;
          }
          ++v7;
        }
        while ( (int)v7 < (int)v6 );
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  UILabel_o *waveNumLabel; // x25
  System_String_o *v33; // x26
  Il2CppObject *v34; // x27
  Il2CppObject *v35; // x0
  void *servantTextMemberSprite; // x0
  UISprite_o *waveLineSprite; // x24
  UIWidget_o *v38; // x23
  UISprite_o *enemyTextSprite; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_int__o *v42; // x24
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w1
  const MethodInfo *v51; // x3
  UISprite_o *servantTextStartingSprite; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t v63; // w19
  BalanceConfig_c *v64; // x0
  int32_t v65; // w24
  int v66; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v71; // x25
  DeckServantData_o *v72; // x26
  System_Int32_array *v73; // x27
  __int64 v74; // x1
  __int64 v75; // x2
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v76; // x28
  const MethodInfo *v77; // x6
  UIGrid_o *servantInfoGrid; // x26
  __int64 v79; // x0
  int32_t v81; // [xsp+8h] [xbp-58h] BYREF
  int32_t v82; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4213F86 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, deckEntity);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v14);
    sub_B0D8A4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v16);
    sub_B0D8A4(&int_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v24);
    sub_B0D8A4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v25);
    sub_B0D8A4(&WaveBattleWaveInfoComponent_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_20297/*"line_whiteAlpha"*/, v27);
    sub_B0D8A4(&StringLiteral_15407/*"WAVE_BATTLE_WAVE_INFO"*/, v28);
    sub_B0D8A4(&StringLiteral_19718/*"img_txt_Member"*/, v29);
    sub_B0D8A4(&StringLiteral_19719/*"img_txt_Starting"*/, v30);
    sub_B0D8A4(&StringLiteral_19717/*"img_txt_Enemy"*/, v31);
    byte_4213F86 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = wave;
  sub_B0D840(
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
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v82 = wave;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v81 = maxWave;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  servantTextMemberSprite = System_String__Format_43845440(v33, v34, v35, 0LL);
  if ( !waveNumLabel )
    goto LABEL_52;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_20297/*"line_whiteAlpha"*/, 0LL);
  if ( wave >= 10 )
  {
    v38 = (UIWidget_o *)this->fields.waveLineSprite;
    servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
    if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    }
    if ( !v38 )
      goto LABEL_52;
    UIWidget__set_width(v38, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_19717/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_52;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v42 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v40, v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v42;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enemyClassIdList,
    (System_Int32_array **)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v50, viewEnemyEntities, v51);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_19719/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || ((*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
          servantTextMemberSprite,
          *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL)),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_19718/*"img_txt_Member"*/,
          0LL),
        (servantTextMemberSprite = this->fields.servantTextMemberSprite) == 0LL) )
  {
LABEL_52:
    sub_B0D97C(servantTextMemberSprite);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo,
                                                                                                  v53,
                                                                                                  v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v55;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantInfoList,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = this->fields.wave;
  v64 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v64 = BalanceConfig_TypeInfo;
  }
  v65 = 0;
  v66 = v64->static_fields->DeckMainMemberMax * (v63 - 1);
  while ( 1 )
  {
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = BalanceConfig_TypeInfo;
    }
    if ( v65 >= v64->static_fields->DeckMainMemberMax )
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
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_52;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_52;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_52;
    if ( v66 + v65 >= svts->max_length )
    {
      v79 = sub_B0D9A8(servantTextMemberSprite);
      sub_B0D948(v79, 0LL);
    }
    v71 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = *p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_52;
    v72 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v66] + v65);
    v73 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    v76 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B0D974(
                                                            WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo,
                                                            v74,
                                                            v75);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v76,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v71 )
      goto LABEL_52;
    WaveBattleWaveServantInfoItem__SetItem(v71, v65, v72, questRestrictionInfo, v73, v76, v77);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v71, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_52;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = *p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_52;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantTextMemberSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    ++v65;
    v64 = BalanceConfig_TypeInfo;
  }
}


void __fastcall WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t wave; // w23
  System_Collections_Generic_List_int__o *enemyClassIdList; // x0
  int32_t v13; // w22
  int v14; // w28
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *servantInfoList; // x23
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  struct WaveBattleWaveServantInfoItem_array *items; // x10
  DeckServantData_o *v19; // x23
  WaveBattleWaveServantInfoItem_o *v20; // x24
  System_Int32_array *v21; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v24; // x26
  const MethodInfo *v25; // x6
  __int64 v26; // x0

  if ( (byte_4213F87 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, deckEntity);
    sub_B0D8A4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v9);
    sub_B0D8A4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v10);
    byte_4213F87 = 1;
  }
  wave = this->fields.wave;
  enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  }
  v13 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) * (wave - 1);
  while ( 1 )
  {
    if ( (enemyClassIdList[7].fields._size & 0x4000000) != 0 && !enemyClassIdList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(enemyClassIdList);
      enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
    }
    if ( v13 >= *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) )
      break;
    servantInfoList = this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_22;
    if ( servantInfoList->fields._size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !deckEntity )
      goto LABEL_22;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_22;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_22;
    if ( v14 + v13 >= svts->max_length )
    {
      v26 = sub_B0D9A8(enemyClassIdList);
      sub_B0D948(v26, 0LL);
    }
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList
      || (items = servantInfoList->fields._items,
          v19 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v14] + v13),
          v20 = items->m_Items[v13],
          v21 = System_Collections_Generic_List_int___ToArray(
                  enemyClassIdList,
                  (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
          v24 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B0D974(
                                                                  WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo,
                                                                  v22,
                                                                  v23),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            0LL),
          !v20) )
    {
LABEL_22:
      sub_B0D97C(enemyClassIdList);
    }
    WaveBattleWaveServantInfoItem__SetItem(v20, v13, v19, questRestrictionInfo, v21, v24, v25);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
    ++v13;
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

  if ( (byte_4213F84 & 1) == 0 )
  {
    sub_B0D8A4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4213F84 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B0DC70(v8);
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

  if ( (byte_4213F85 & 1) == 0 )
  {
    sub_B0D8A4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4213F85 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B0DC70(v8);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleWaveInfoComponent_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v13 = idx;
  v14 = wave;
  if ( (byte_4211F3A & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4211F3A = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B0D848(this, v12, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleWaveInfoComponent_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattleWaveInfoComponent_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
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
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&wave, *(_QWORD *)&idx);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)wave, (unsigned int)idx, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)wave, (unsigned int)idx, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AA67A0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B0D954(v19, v24);
        (*v21)(v23, v28, (unsigned int)wave, (unsigned int)idx, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AA67A0(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)wave,
            (unsigned int)idx,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)wave,
            (unsigned int)idx,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)wave,
      (unsigned int)idx,
      v24);
    goto LABEL_38;
  }
}