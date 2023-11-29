void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F6768 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveInfoComponent_TypeInfo, v1);
    byte_40F6768 = 1;
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_enemyInfoList; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_int__o *enemyClassIdList; // x0
  WaveBattleWaveInfoComponent_c *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x8
  __int64 v28; // x25
  int32_t v29; // w22
  ViewWaveEnemyEntity_o *v30; // x23
  System_Collections_Generic_List_int__o *v31; // x0
  System_Collections_Generic_List_int__o *v32; // x0
  UnityEngine_GameObject_o *enemyInfoListParent; // x0
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UIGrid_o *enemyInfoGrid; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x23
  UnityEngine_Transform_o *v40; // x0

  if ( (byte_40F6766 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v13);
    sub_B16FFC(&WaveBattleWaveInfoComponent_TypeInfo, v14);
    byte_40F6766 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  viewEnemyEntities,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v15;
  p_enemyInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.enemyInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enemyInfoList,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !this->fields.enemyInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInfoList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList )
      goto LABEL_30;
    System_Collections_Generic_List_int___Clear(
      enemyClassIdList,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    v27 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( (int)v27 >= 1 )
    {
      v28 = 0LL;
      v29 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v28 >= (unsigned int)v27 )
        {
          sub_B17100(v24, v25, v26);
          sub_B170A0();
        }
        v30 = viewEnemyEntities->m_Items[v28];
        if ( !v30 )
          break;
        if ( v30->fields.wave == this->fields.wave )
        {
          v31 = this->fields.enemyClassIdList;
          if ( !v31 )
            break;
          if ( !System_Collections_Generic_List_int___Contains(
                  v31,
                  v30->fields.classId,
                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v32 = this->fields.enemyClassIdList;
            if ( !v32 )
              break;
            System_Collections_Generic_List_int___Add(
              v32,
              v30->fields.classId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          enemyInfoListParent = this->fields.enemyInfoListParent;
          if ( !enemyInfoListParent )
            break;
          enemyInfoPrefab = this->fields.enemyInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(enemyInfoListParent, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, enemyInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            break;
          Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 Object,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
          if ( !Component_srcLineSprite )
            break;
          enemyInfoGrid = this->fields.enemyInfoGrid;
          v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
          v40 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
          if ( !enemyInfoGrid )
            break;
          UIGrid__AddChild(enemyInfoGrid, v40, 0LL);
          if ( !*p_enemyInfoList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_enemyInfoList,
            v39,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
          v24 = WaveBattleWaveInfoComponent_TypeInfo;
          ++v29;
          if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
            v24 = WaveBattleWaveInfoComponent_TypeInfo;
          }
          if ( v29 >= v24->static_fields->MAX_ENEMY_INFO )
            return v29;
          v27 = *(_QWORD *)&viewEnemyEntities->max_length;
        }
        if ( (int)++v28 >= (int)v27 )
          return v29;
      }
LABEL_30:
      sub_B170D4();
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
  WaveBattleWaveEnemyInfoItem_o *v12; // x0

  v4 = this;
  if ( (byte_40F6767 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__, viewEnemyEntities);
    this = (WaveBattleWaveInfoComponent_o *)sub_B16FFC(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5);
    byte_40F6767 = 1;
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
            sub_B17100(this, viewEnemyEntities, method);
            sub_B170A0();
          }
          v9 = viewEnemyEntities->m_Items[v7];
          if ( !v9 )
LABEL_18:
            sub_B170D4();
          if ( v9->fields.wave == v4->fields.wave )
          {
            enemyInfoList = v4->fields.enemyInfoList;
            if ( !enemyInfoList )
              goto LABEL_18;
            size = enemyInfoList->fields._size;
            if ( size <= (int)v8 )
              return;
            if ( size <= v8 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v12 = enemyInfoList->fields._items->m_Items[v8];
            if ( !v12 )
              goto LABEL_18;
            WaveBattleWaveEnemyInfoItem__SetItem(v12, viewEnemyEntities->m_Items[v7], method);
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
  System_String_o *v36; // x0
  UISprite_o *waveLineSprite; // x24
  UIWidget_o *v38; // x23
  UISprite_o *enemyTextSprite; // x23
  struct UISprite_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_int__o *v45; // x24
  System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w1
  const MethodInfo *v54; // x3
  WaveBattleWaveInfoComponent_c *v55; // x0
  UISprite_o *servantTextStartingSprite; // x22
  struct UISprite_o *v57; // x0
  struct UISprite_o *servantTextMemberSprite; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_servantInfoList; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int32_t v71; // w19
  BalanceConfig_c *v72; // x0
  int32_t v73; // w24
  int v74; // w19
  UnityEngine_GameObject_o *servantInfoListParent; // x0
  UnityEngine_GameObject_o *servantInfoPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v84; // x25
  DeckServantData_o *v85; // x26
  System_Int32_array *v86; // x27
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v91; // x28
  const MethodInfo *v92; // x6
  UIGrid_o *servantInfoGrid; // x26
  UnityEngine_Transform_o *v94; // x0
  int32_t v96; // [xsp+8h] [xbp-58h] BYREF
  int32_t v97; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F6764 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, deckEntity);
    sub_B16FFC(&BalanceConfig_TypeInfo, v14);
    sub_B16FFC(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v21);
    sub_B16FFC(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v22);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_B16FFC(&LocalizationManager_TypeInfo, v24);
    sub_B16FFC(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v25);
    sub_B16FFC(&WaveBattleWaveInfoComponent_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_20151, v27);
    sub_B16FFC(&StringLiteral_15298, v28);
    sub_B16FFC(&StringLiteral_19582, v29);
    sub_B16FFC(&StringLiteral_19583, v30);
    sub_B16FFC(&StringLiteral_19581, v31);
    byte_40F6764 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = wave;
  sub_B16F98(
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
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15298, 0LL);
  v97 = wave;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
  v96 = maxWave;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
  v36 = System_String__Format_43739268(v33, v34, v35, 0LL);
  if ( !waveNumLabel )
    goto LABEL_52;
  UILabel__set_text(waveNumLabel, v36, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_20151, 0LL);
  if ( wave >= 10 )
  {
    v38 = (UIWidget_o *)this->fields.waveLineSprite;
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
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_19581, 0LL);
  v40 = this->fields.enemyTextSprite;
  if ( !v40 )
    goto LABEL_52;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v40->klass->vtable._33_MakePixelPerfect.method)(
    v40,
    v40->klass->vtable._34_get_minWidth.methodPtr);
  v45 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v41,
                                                    v42,
                                                    v43,
                                                    v44);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v45;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enemyClassIdList,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v55 = WaveBattleWaveInfoComponent_TypeInfo;
  if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    v55 = WaveBattleWaveInfoComponent_TypeInfo;
  }
  this->fields.height = v55->static_fields->BASE_HEIGHT;
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_52;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v53, viewEnemyEntities, v54);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_19583, 0LL);
  v57 = this->fields.servantTextStartingSprite;
  if ( !v57
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v57->klass->vtable._33_MakePixelPerfect.method)(
          v57,
          v57->klass->vtable._34_get_minWidth.methodPtr),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_19582,
          0LL),
        (servantTextMemberSprite = this->fields.servantTextMemberSprite) == 0LL) )
  {
LABEL_52:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))servantTextMemberSprite->klass->vtable._33_MakePixelPerfect.method)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass->vtable._34_get_minWidth.methodPtr);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61,
                                                                                                  v62);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v63;
  p_servantInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.servantInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantInfoList,
    (System_Int32_array **)v63,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = this->fields.wave;
  v72 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
  }
  v73 = 0;
  v74 = v72->static_fields->DeckMainMemberMax * (v71 - 1);
  while ( 1 )
  {
    if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = BalanceConfig_TypeInfo;
    }
    if ( v73 >= v72->static_fields->DeckMainMemberMax )
      break;
    servantInfoListParent = this->fields.servantInfoListParent;
    if ( !servantInfoListParent )
      goto LABEL_52;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform(servantInfoListParent, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, servantInfoPrefab, transform, 0LL, 0LL);
    if ( !Object )
      goto LABEL_52;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                Object,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_52;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_52;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_52;
    if ( v74 + v73 >= svts->max_length )
    {
      sub_B17100(Component_srcLineSprite, v80, v81);
      sub_B170A0();
    }
    v84 = (WaveBattleWaveServantInfoItem_o *)Component_srcLineSprite;
    if ( !*p_enemyClassIdList )
      goto LABEL_52;
    v85 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v74] + v73);
    v86 = System_Collections_Generic_List_int___ToArray(
            *p_enemyClassIdList,
            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    v91 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B170CC(
                                                            WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo,
                                                            v87,
                                                            v88,
                                                            v89,
                                                            v90);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v91,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v84 )
      goto LABEL_52;
    WaveBattleWaveServantInfoItem__SetItem(v84, v73, v85, questRestrictionInfo, v86, v91, v92);
    servantInfoGrid = this->fields.servantInfoGrid;
    v94 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v84, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_52;
    UIGrid__AddChild(servantInfoGrid, v94, 0LL);
    if ( !*p_servantInfoList )
      goto LABEL_52;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_servantInfoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    ++v73;
    v72 = BalanceConfig_TypeInfo;
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
  BalanceConfig_c *v12; // x0
  int32_t v13; // w22
  int v14; // w28
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *servantInfoList; // x23
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  System_Collections_Generic_List_int__o *enemyClassIdList; // x0
  struct WaveBattleWaveServantInfoItem_array *items; // x10
  DeckServantData_o *v20; // x23
  WaveBattleWaveServantInfoItem_o *v21; // x24
  System_Int32_array *v22; // x25
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v27; // x26
  const MethodInfo *v28; // x6

  if ( (byte_40F6765 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, deckEntity);
    sub_B16FFC(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v9);
    sub_B16FFC(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v10);
    byte_40F6765 = 1;
  }
  wave = this->fields.wave;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = 0;
  v14 = v12->static_fields->DeckMainMemberMax * (wave - 1);
  while ( 1 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( v13 >= v12->static_fields->DeckMainMemberMax )
      break;
    servantInfoList = this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_22;
    if ( servantInfoList->fields._size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      sub_B17100(v12, deckEntity, questRestrictionInfo);
      sub_B170A0();
    }
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList
      || (items = servantInfoList->fields._items,
          v20 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v14] + v13),
          v21 = items->m_Items[v13],
          v22 = System_Collections_Generic_List_int___ToArray(
                  enemyClassIdList,
                  (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
          v27 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B170CC(
                                                                  WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo,
                                                                  v23,
                                                                  v24,
                                                                  v25,
                                                                  v26),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v27,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            0LL),
          !v21) )
    {
LABEL_22:
      sub_B170D4();
    }
    WaveBattleWaveServantInfoItem__SetItem(v21, v13, v20, questRestrictionInfo, v22, v27, v28);
    v12 = BalanceConfig_TypeInfo;
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

  if ( (byte_40F6762 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_40F6762 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40F6763 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_40F6763 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B173C8(v8);
  WaveBattleWaveInfoComponent__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F789D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_40F789D = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&wave);
      if ( (sub_B1702C(v24) & 1) == 0 )
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
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
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
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
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
            v18 = sub_AAFEF8(v23, class_0, v12);
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