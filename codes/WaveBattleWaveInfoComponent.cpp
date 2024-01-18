void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187406 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveInfoComponent_TypeInfo, v1);
    byte_4187406 = 1;
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
  __int64 v22; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *enemyInfoList; // x0
  __int64 v24; // x8
  __int64 v25; // x25
  int32_t v26; // w22
  ViewWaveEnemyEntity_o *v27; // x23
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x23
  __int64 v33; // x0

  if ( (byte_4187404 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v12);
    sub_B2C35C(&WaveBattleWaveInfoComponent_TypeInfo, v13);
    byte_4187404 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v14;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_B2C2F8(
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
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
    if ( !enemyInfoList )
      goto LABEL_30;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)enemyInfoList,
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    v24 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      v26 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v25 >= (unsigned int)v24 )
        {
          v33 = sub_B2C460(enemyInfoList);
          sub_B2C400(v33, 0LL);
        }
        v27 = viewEnemyEntities->m_Items[v25];
        if ( !v27 )
          break;
        if ( v27->fields.wave == this->fields.wave )
        {
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
          if ( !enemyInfoList )
            break;
          if ( !System_Collections_Generic_List_int___Contains(
                  (System_Collections_Generic_List_int__o *)enemyInfoList,
                  v27->fields.classId,
                  (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
            if ( !enemyInfoList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)enemyInfoList,
              v27->fields.classId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
                                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
          if ( !enemyInfoList )
            break;
          enemyInfoGrid = this->fields.enemyInfoGrid;
          v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)enemyInfoList;
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
            v31,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          ++v26;
          if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          }
          if ( v26 >= *(_DWORD *)(*(_QWORD *)&enemyInfoList[4].fields._size + 4LL) )
            return v26;
          v24 = *(_QWORD *)&viewEnemyEntities->max_length;
        }
        if ( (int)++v25 >= (int)v24 )
          return v26;
      }
LABEL_30:
      sub_B2C434(enemyInfoList, v22);
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
  if ( (byte_4187405 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__, viewEnemyEntities);
    this = (WaveBattleWaveInfoComponent_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5);
    byte_4187405 = 1;
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
            v12 = sub_B2C460(this);
            sub_B2C400(v12, 0LL);
          }
          v9 = viewEnemyEntities->m_Items[v7];
          if ( !v9 )
LABEL_18:
            sub_B2C434(this, viewEnemyEntities);
          if ( v9->fields.wave == v4->fields.wave )
          {
            enemyInfoList = v4->fields.enemyInfoList;
            if ( !enemyInfoList )
              goto LABEL_18;
            size = enemyInfoList->fields._size;
            if ( size <= (int)v8 )
              return;
            if ( size <= v8 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v37; // x1
  UISprite_o *waveLineSprite; // x24
  UIWidget_o *v39; // x23
  UISprite_o *enemyTextSprite; // x23
  System_Collections_Generic_List_int__o *v41; // x24
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x3
  UISprite_o *servantTextStartingSprite; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t v59; // w19
  BalanceConfig_c *v60; // x0
  int32_t v61; // w24
  int v62; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v67; // x25
  DeckServantData_o *v68; // x26
  System_Int32_array *v69; // x27
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v70; // x28
  const MethodInfo *v71; // x6
  UIGrid_o *servantInfoGrid; // x26
  __int64 v73; // x0
  int32_t v75; // [xsp+8h] [xbp-58h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4187402 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, deckEntity);
    sub_B2C35C(&BalanceConfig_TypeInfo, v14);
    sub_B2C35C(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v16);
    sub_B2C35C(&int_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v21);
    sub_B2C35C(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v22);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_B2C35C(&LocalizationManager_TypeInfo, v24);
    sub_B2C35C(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v25);
    sub_B2C35C(&WaveBattleWaveInfoComponent_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_20234/*"line_whiteAlpha"*/, v27);
    sub_B2C35C(&StringLiteral_15360/*"WAVE_BATTLE_WAVE_INFO"*/, v28);
    sub_B2C35C(&StringLiteral_19656/*"img_txt_Member"*/, v29);
    sub_B2C35C(&StringLiteral_19657/*"img_txt_Starting"*/, v30);
    sub_B2C35C(&StringLiteral_19655/*"img_txt_Enemy"*/, v31);
    byte_4187402 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = wave;
  sub_B2C2F8(
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
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15360/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v76 = wave;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
  v75 = maxWave;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  servantTextMemberSprite = System_String__Format_44301068(v33, v34, v35, 0LL);
  if ( !waveNumLabel )
    goto LABEL_52;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_20234/*"line_whiteAlpha"*/, 0LL);
  if ( wave >= 10 )
  {
    v39 = (UIWidget_o *)this->fields.waveLineSprite;
    servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
    if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    }
    if ( !v39 )
      goto LABEL_52;
    UIWidget__set_width(v39, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_19655/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_52;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v41 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v41;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enemyClassIdList,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v37, viewEnemyEntities, v49);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_19657/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || ((*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
          servantTextMemberSprite,
          *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL)),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_19656/*"img_txt_Member"*/,
          0LL),
        (servantTextMemberSprite = this->fields.servantTextMemberSprite) == 0LL) )
  {
LABEL_52:
    sub_B2C434(servantTextMemberSprite, v37);
  }
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v51;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantInfoList,
    (System_Int32_array **)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = this->fields.wave;
  v60 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  v61 = 0;
  v62 = v60->static_fields->DeckMainMemberMax * (v59 - 1);
  while ( 1 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = BalanceConfig_TypeInfo;
    }
    if ( v61 >= v60->static_fields->DeckMainMemberMax )
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
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_52;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_52;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_52;
    if ( v62 + v61 >= svts->max_length )
    {
      v73 = sub_B2C460(servantTextMemberSprite);
      sub_B2C400(v73, 0LL);
    }
    v67 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = *p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_52;
    v68 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v62] + v61);
    v69 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    v70 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B2C42C(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v70,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v67 )
      goto LABEL_52;
    WaveBattleWaveServantInfoItem__SetItem(v67, v61, v68, questRestrictionInfo, v69, v70, v71);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v67, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_52;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = *p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_52;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantTextMemberSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    ++v61;
    v60 = BalanceConfig_TypeInfo;
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
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v22; // x26
  const MethodInfo *v23; // x6
  __int64 v24; // x0

  if ( (byte_4187403 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, deckEntity);
    sub_B2C35C(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v9);
    sub_B2C35C(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v10);
    byte_4187403 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      v24 = sub_B2C460(enemyClassIdList);
      sub_B2C400(v24, 0LL);
    }
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList
      || (items = servantInfoList->fields._items,
          v19 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v14] + v13),
          v20 = items->m_Items[v13],
          v21 = System_Collections_Generic_List_int___ToArray(
                  enemyClassIdList,
                  (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
          v22 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B2C42C(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            0LL),
          !v20) )
    {
LABEL_22:
      sub_B2C434(enemyClassIdList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v20, v13, v19, questRestrictionInfo, v21, v22, v23);
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

  if ( (byte_4187400 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4187400 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B2C728(v8);
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

  if ( (byte_4187401 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4187401 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185563 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4185563 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&wave, *(_QWORD *)&idx);
      if ( (sub_B2C38C(v25) & 1) == 0 )
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
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
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
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
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
            v19 = sub_AC5258(v24, class_0, v12, v14);
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