void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7387 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveInfoComponent_TypeInfo, v1, v2, v3);
    byte_42E7387 = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *enemyInfoList; // x0
  __int64 v40; // x8
  __int64 v41; // x25
  int32_t v42; // w22
  ViewWaveEnemyEntity_o *v43; // x23
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x23
  __int64 v49; // x0

  if ( (byte_42E7380 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___,
      questId,
      (_DWORD)viewEnemyEntities,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&WaveBattleWaveInfoComponent_TypeInfo, v27, v28, v29);
    byte_42E7380 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v30;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enemyInfoList,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    enemyInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
    if ( !enemyInfoList )
      goto LABEL_30;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)enemyInfoList,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    v40 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( (int)v40 >= 1 )
    {
      v41 = 0LL;
      v42 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v41 >= (unsigned int)v40 )
        {
          v49 = sub_B5D6C8(enemyInfoList);
          sub_B5D668(v49, 0LL);
        }
        v43 = viewEnemyEntities->m_Items[v41];
        if ( !v43 )
          break;
        if ( v43->fields.wave == this->fields.wave )
        {
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
          if ( !enemyInfoList )
            break;
          if ( !System_Collections_Generic_List_int___Contains(
                  (System_Collections_Generic_List_int__o *)enemyInfoList,
                  v43->fields.classId,
                  (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
            if ( !enemyInfoList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)enemyInfoList,
              v43->fields.classId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
                                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
          if ( !enemyInfoList )
            break;
          enemyInfoGrid = this->fields.enemyInfoGrid;
          v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)enemyInfoList;
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
            v47,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
          enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          ++v42;
          if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)WaveBattleWaveInfoComponent_TypeInfo;
          }
          if ( v42 >= *(_DWORD *)(*(_QWORD *)&enemyInfoList[4].fields._size + 4LL) )
            return v42;
          v40 = *(_QWORD *)&viewEnemyEntities->max_length;
        }
        if ( (int)++v41 >= (int)v40 )
          return v42;
      }
LABEL_30:
      sub_B5D69C(enemyInfoList, v38);
    }
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoComponent__EndRequestBattleInterruption(
        WaveBattleWaveInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E7385 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)result, (_DWORD)method, v3);
    byte_42E7385 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveInfoComponent_CallbackFunc__Invoke(callbackFunc, 0, this->fields.wave, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  AvalonSceneManager__pushScene(Instance, 35, 1, (Il2CppObject *)this->fields.battleSetupInfo, 0LL);
}


int32_t __fastcall WaveBattleWaveInfoComponent__GetHeight(
        WaveBattleWaveInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.height;
}


void __fastcall WaveBattleWaveInfoComponent__OnClickMask(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_42E7382 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent_OnClickMask__, (_DWORD)method, v2, v3);
    byte_42E7382 = 1;
  }
  v4 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B5D5CC(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v5 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__OnClickWave(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  __int64 v42; // x19
  CommonUI_o *Instance; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  System_String_o *v53; // x20
  Il2CppObject *v54; // x0
  System_String_o *v55; // x20
  System_String_o *v56; // x21
  Il2CppObject *v57; // x22
  Il2CppObject *v58; // x0
  System_String_o *v59; // x21
  CommonUI_o *v60; // x22
  System_String_o *v61; // x23
  System_String_o *v62; // x24
  CommonConfirmDialog_ClickDelegate_o *v63; // x25
  int32_t v64; // [xsp+2Ch] [xbp-34h] BYREF

  v64 = waveNumMax;
  if ( (byte_42E7383 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, questId, questPhase, *(_QWORD *)&warId);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass37_0__OnClickWave_b__0__, v18, v19, v20);
    sub_B5D5C4(&WaveBattleWaveInfoComponent___c__DisplayClass37_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent_OnClickWave__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2498/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2497/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2496/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_2499/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v39, v40, v41);
    byte_42E7383 = 1;
  }
  v42 = sub_B5D694(WaveBattleWaveInfoComponent___c__DisplayClass37_0_TypeInfo);
  WaveBattleWaveInfoComponent___c__DisplayClass37_0___ctor(
    (WaveBattleWaveInfoComponent___c__DisplayClass37_0_o *)v42,
    0LL);
  if ( !v42 )
    goto LABEL_12;
  *(_QWORD *)(v42 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 16), (System_Int32_array **)this, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)(v42 + 36) = waveNum;
  *(_DWORD *)(v42 + 24) = questId;
  *(_DWORD *)(v42 + 28) = questPhase;
  *(_DWORD *)(v42 + 32) = warId;
  v51 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 75) & 2) != 0 )
    v51 = (_QWORD *)sub_B5D5CC(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v52 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v51, v51[3]);
  OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2497/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
  v54 = (Il2CppObject *)System_Int32__ToString_39741776((int)v42 + 36, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  v55 = System_String__Format(v53, v54, 0LL);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  v57 = (Il2CppObject *)System_Int32__ToString_39741776((int)v42 + 36, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  v58 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v64, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  v59 = System_String__Format_44573324(v56, v57, v58, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL),
        v60 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2499/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL),
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_2496/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL),
        v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo),
        CommonConfirmDialog_ClickDelegate___ctor(
          v63,
          (Il2CppObject *)v42,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass37_0__OnClickWave_b__0__,
          0LL),
        !v60) )
  {
LABEL_12:
    sub_B5D69C(Instance, v44);
  }
  CommonUI__OpenConfirmDecideDialog(v60, v61, v59, v55, v62, v63, 26, 280, 13.0, 22, 1, 0LL);
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


void __fastcall WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoComponent_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x19
  UnityEngine_GameObject_o *MoveToPartyButton; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x20
  EventDelegate_Callback_o *v44; // x21
  EventDelegate_o *v45; // x19

  if ( (byte_42E7386 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(
      &Method_WaveBattleWaveInfoComponent___c__DisplayClass42_0__OverwriteMoveToPartyButton_b__0__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&WaveBattleWaveInfoComponent___c__DisplayClass42_0_TypeInfo, v24, v25, v26);
    byte_42E7386 = 1;
  }
  v27 = sub_B5D694(WaveBattleWaveInfoComponent___c__DisplayClass42_0_TypeInfo);
  WaveBattleWaveInfoComponent___c__DisplayClass42_0___ctor(
    (WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_13;
  *(_QWORD *)(v27 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_13;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      MoveToPartyButton,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MoveToPartyButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)MoveToPartyButton & 1) == 0 )
  {
    if ( Component_srcLineSprite )
    {
      MoveToPartyButton = (UnityEngine_GameObject_o *)Component_srcLineSprite[4].klass;
      if ( MoveToPartyButton )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)MoveToPartyButton,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite[4].klass;
        v44 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v44,
          (Il2CppObject *)v27,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass42_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v45 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
        EventDelegate___ctor_29822308(v45, v44, 0LL);
        if ( klass )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            klass,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
          return;
        }
      }
    }
LABEL_13:
    sub_B5D69C(MoveToPartyButton, v29);
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattleWaveInfoComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x8
  __int64 v10; // x22
  unsigned int v11; // w23
  ViewWaveEnemyEntity_o *v12; // x21
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x25
  int32_t size; // w8
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42E7381 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__,
      (_DWORD)viewEnemyEntities,
      (_DWORD)method,
      v3);
    this = (WaveBattleWaveInfoComponent_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v6,
                                              v7,
                                              v8);
    byte_42E7381 = 1;
  }
  if ( viewEnemyEntities )
  {
    v9 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v9 )
    {
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        v11 = 0;
        do
        {
          if ( (unsigned int)v10 >= (unsigned int)v9 )
          {
            v15 = sub_B5D6C8(this);
            sub_B5D668(v15, 0LL);
          }
          v12 = viewEnemyEntities->m_Items[v10];
          if ( !v12 )
LABEL_18:
            sub_B5D69C(this, viewEnemyEntities);
          if ( v12->fields.wave == v5->fields.wave )
          {
            enemyInfoList = v5->fields.enemyInfoList;
            if ( !enemyInfoList )
              goto LABEL_18;
            size = enemyInfoList->fields._size;
            if ( size <= (int)v11 )
              return;
            if ( size <= v11 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            this = (WaveBattleWaveInfoComponent_o *)enemyInfoList->fields._items->m_Items[v11];
            if ( !this )
              goto LABEL_18;
            WaveBattleWaveEnemyInfoItem__SetItem(
              (WaveBattleWaveEnemyInfoItem_o *)this,
              viewEnemyEntities->m_Items[v10],
              method);
            v9 = *(_QWORD *)&viewEnemyEntities->max_length;
            ++v11;
          }
          ++v10;
        }
        while ( (int)v10 < (int)v9 );
      }
    }
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetMaskObjActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObj; // x0

  maskObj = this->fields.maskObj;
  if ( !maskObj )
    sub_B5D69C(0LL, active);
  UnityEngine_GameObject__SetActive(maskObj, active, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__SetMoveToPartyButtonActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *MoveToPartyButton; // x0

  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    sub_B5D69C(0LL, active);
  UnityEngine_GameObject__SetActive(MoveToPartyButton, active, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__SetWaveInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t wave,
        int32_t maxWave,
        WaveBattleWaveInfoComponent_CallbackFunc_o *callback,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        const MethodInfo *method)
{
  UserEventDeckEntity_o *v15; // x23
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  __int64 v98; // x21
  void *servantTextMemberSprite; // x0
  __int64 v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  UILabel_o *waveNumLabel; // x26
  System_String_o *v120; // x20
  Il2CppObject *v121; // x21
  Il2CppObject *v122; // x0
  UISprite_o *waveLineSprite; // x20
  UIWidget_o *v124; // x20
  UISprite_o *enemyTextSprite; // x20
  System_Collections_Generic_List_int__o *v126; // x20
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  const MethodInfo *v133; // x3
  UISprite_o *servantTextStartingSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v135; // x20
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x24
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  int32_t v143; // w20
  BalanceConfig_c *v144; // x0
  int32_t v145; // w26
  int v146; // w22
  UnityEngine_GameObject_o *servantInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v151; // x27
  DeckServantData_o *v152; // x21
  UserEventDeckEntity_o *v153; // x25
  QuestRestrictionInfo_o *v154; // x28
  System_Int32_array *v155; // x20
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v156; // x23
  UIGrid_o *servantInfoGrid; // x20
  UILabel_o *clearedLabel; // x20
  UnityEngine_Object_o *backGroundObj; // x20
  UILabel_o *v160; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v161; // x20
  EventDelegate_Callback_o *v162; // x22
  EventDelegate_o *v163; // x21
  __int64 v164; // x0
  const MethodInfo *v165; // [xsp+0h] [xbp-80h]
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // [xsp+10h] [xbp-70h]
  QuestRestrictionInfo_o **v168; // [xsp+18h] [xbp-68h]
  int32_t v170; // [xsp+28h] [xbp-58h] BYREF
  int v171; // [xsp+2Ch] [xbp-54h] BYREF

  v15 = deckEntity;
  if ( (byte_42E737E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)deckEntity, (_DWORD)viewEnemyEntities, questRestrictionInfo);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&EventDelegate_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v32, v33, v34);
    sub_B5D5C4(&int_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass31_0__SetWaveInfo_b__0__, v65, v66, v67);
    sub_B5D5C4(&WaveBattleWaveInfoComponent___c__DisplayClass31_0_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v71, v72, v73);
    sub_B5D5C4(&WaveBattleWaveInfoComponent_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_20490/*"line_whiteAlpha"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_15549/*"WAVE_BATTLE_WAVE_INFO"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_19905/*"img_txt_Member"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_15509/*"WAVE_BATTLE_CLEARED_WAVE"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_19906/*"img_txt_Starting"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_15543/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_19904/*"img_txt_Enemy"*/, v95, v96, v97);
    byte_42E737E = 1;
  }
  v98 = sub_B5D694(WaveBattleWaveInfoComponent___c__DisplayClass31_0_TypeInfo);
  WaveBattleWaveInfoComponent___c__DisplayClass31_0___ctor(
    (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)v98,
    0LL);
  if ( !v98 )
    goto LABEL_78;
  *(_QWORD *)(v98 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v98 + 16),
    (System_Int32_array **)this,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  *(_QWORD *)(v98 + 24) = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v98 + 24),
    (System_Int32_array **)questRestrictionInfo,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  *(_DWORD *)(v98 + 32) = wave;
  *(_DWORD *)(v98 + 36) = restartWaveSelectMax;
  this->fields.callbackFunc = callback;
  v168 = (QuestRestrictionInfo_o **)(v98 + 24);
  this->fields.wave = wave;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  waveNumLabel = this->fields.waveNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  object = (Il2CppObject *)v98;
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_15549/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v171 = *(_DWORD *)(v98 + 32);
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
  v170 = maxWave;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v170);
  servantTextMemberSprite = System_String__Format_44573324(v120, v121, v122, 0LL);
  if ( !waveNumLabel )
    goto LABEL_78;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_20490/*"line_whiteAlpha"*/, 0LL);
  if ( SLODWORD(object[2].klass) >= 10 )
  {
    v124 = (UIWidget_o *)this->fields.waveLineSprite;
    servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
    if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    }
    if ( !v124 )
      goto LABEL_78;
    UIWidget__set_width(v124, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_19904/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v126 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v126,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.enemyClassIdList = v126;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enemyClassIdList,
    (System_Int32_array **)v126,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
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
    if ( !*v168 )
      goto LABEL_78;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v100, viewEnemyEntities, v133);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_19906/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_19905/*"img_txt_Member"*/,
    0LL);
  servantTextMemberSprite = this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v135 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v135,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v135;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantInfoList,
    (System_Int32_array **)v135,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  v143 = this->fields.wave;
  v144 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v144 = BalanceConfig_TypeInfo;
  }
  v145 = 0;
  v146 = v144->static_fields->DeckMainMemberMax * (v143 - 1);
  while ( 1 )
  {
    if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v144);
      v144 = BalanceConfig_TypeInfo;
    }
    if ( v145 >= v144->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_78;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                servantInfoPrefab,
                                transform,
                                0LL,
                                0LL);
    if ( !servantTextMemberSprite )
      goto LABEL_78;
    servantTextMemberSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !v15 )
      goto LABEL_78;
    deckInfo = v15->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_78;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_78;
    if ( v146 + v145 >= svts->max_length )
    {
      v164 = sub_B5D6C8(servantTextMemberSprite);
      sub_B5D668(v164, 0LL);
    }
    v151 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = *p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_78;
    v152 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v146] + v145);
    v153 = v15;
    v154 = *v168;
    v155 = System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    v156 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B5D694(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v156,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v151 )
      goto LABEL_78;
    WaveBattleWaveServantInfoItem__SetItem(
      v151,
      v145,
      v152,
      v154,
      v155,
      v156,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v165);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v151, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_78;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = *p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_78;
    v15 = v153;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantTextMemberSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v151,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    ++v145;
    v144 = BalanceConfig_TypeInfo;
  }
  servantTextMemberSprite = this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    SLODWORD(object[2].klass) < restartWave,
    0LL);
  clearedLabel = this->fields.clearedLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_15509/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0LL);
  if ( !clearedLabel )
    goto LABEL_78;
  UILabel__set_text(clearedLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( !this->fields.isSelectWaveFlag )
    return;
  backGroundObj = (UnityEngine_Object_o *)this->fields.backGroundObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backGroundObj, 0LL, 0LL) )
  {
    servantTextMemberSprite = this->fields.backGroundObj;
    if ( !servantTextMemberSprite )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
  }
  servantTextMemberSprite = this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    SLODWORD(object[2].klass) > restartWave,
    0LL);
  v160 = this->fields.clearedLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_15543/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0LL);
  if ( !v160 )
    goto LABEL_78;
  UILabel__set_text(v160, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( SLODWORD(object[2].klass) > restartWave )
    goto LABEL_75;
  servantTextMemberSprite = this->fields.MoveToPartyButton;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
  servantTextMemberSprite = this->fields.MoveToPartyButton;
  if ( !servantTextMemberSprite
    || (servantTextMemberSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (v161 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)servantTextMemberSprite + 12),
        v162 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v162,
          object,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass31_0__SetWaveInfo_b__0__,
          0LL),
        v163 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo),
        EventDelegate___ctor_29822308(v163, v162, 0LL),
        !v161) )
  {
LABEL_78:
    sub_B5D69C(servantTextMemberSprite, v100);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v161,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v163,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
LABEL_75:
  servantTextMemberSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__UpdateInterruptionData(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  __int64 v34; // x24
  System_Int32_array **SelectableQuests; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleSetupInfo_o **p_battleSetupInfo; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x25
  QuestGroupMaster_o *v50; // x24
  NetworkManager_ResultCallbackFunc_o *v51; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7384 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, questId, questPhase, *(_QWORD *)&warId);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleInterruptionRequest___, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__, v29, v30, v31);
    byte_42E7384 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, questId, questPhase, 0LL);
  v34 = sub_B5D694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_23;
  *(_DWORD *)(v34 + 16) = warId;
  *(_DWORD *)(v34 + 20) = questId;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  SelectableQuests = (System_Int32_array **)QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v34 + 112) = SelectableQuests;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 112), SelectableQuests, v36, v37, v38, v39, v40, v41);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  *(_DWORD *)(v34 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0LL);
  *(_DWORD *)(v34 + 124) = 0;
  *(_DWORD *)(v34 + 24) = questPhase;
  *(_WORD *)(v34 + 72) = 0;
  *(_QWORD *)(v34 + 40) = 0LL;
  *(_QWORD *)(v34 + 48) = 0LL;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v34;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
    (System_Int32_array **)v34,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_23;
  v50 = (QuestGroupMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !v50 )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(
                                                           v50,
                                                           (int32_t)Master_WarQuestSelectionMaster,
                                                           0LL);
  if ( !battleSetupInfo )
    goto LABEL_23;
  battleSetupInfo->fields.eventId = (int)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_23;
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_23;
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( !*p_battleSetupInfo )
    goto LABEL_23;
  (*p_battleSetupInfo)->fields.originQuestId = questId;
  if ( !*p_battleSetupInfo )
    goto LABEL_23;
  (*p_battleSetupInfo)->fields.isScriptBeforeWarBoard = 0;
  if ( !*p_battleSetupInfo )
    goto LABEL_23;
  (*p_battleSetupInfo)->fields.restartWave = waveNum;
  v51 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v51,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v51,
                                                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v33);
  BattleInterruptionRequest__beginRequest(
    (BattleInterruptionRequest_o *)Master_WarQuestSelectionMaster,
    questId,
    questPhase,
    waveNum,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isInterruption,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t wave; // w24
  System_Collections_Generic_List_int__o *enemyClassIdList; // x0
  int32_t v23; // w22
  bool v24; // w23
  int v25; // w28
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *servantInfoList; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  struct WaveBattleWaveServantInfoItem_array *items; // x10
  DeckServantData_o *v30; // x24
  WaveBattleWaveServantInfoItem_o *v31; // x25
  System_Int32_array *v32; // x26
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v33; // x27
  __int64 v34; // x0
  const MethodInfo *v35; // [xsp+0h] [xbp-60h]

  if ( (byte_42E737F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)deckEntity, (_DWORD)questRestrictionInfo, isInterruption);
    sub_B5D5C4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v18, v19, v20);
    byte_42E737F = 1;
  }
  wave = this->fields.wave;
  enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  }
  v23 = 0;
  v24 = isInterruption;
  v25 = *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) * (wave - 1);
  while ( 1 )
  {
    if ( (enemyClassIdList[7].fields._size & 0x4000000) != 0 && !enemyClassIdList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(enemyClassIdList);
      enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
    }
    if ( v23 >= *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) )
      break;
    servantInfoList = this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_22;
    if ( servantInfoList->fields._size <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !deckEntity )
      goto LABEL_22;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_22;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_22;
    if ( v25 + v23 >= svts->max_length )
    {
      v34 = sub_B5D6C8(enemyClassIdList);
      sub_B5D668(v34, 0LL);
    }
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList
      || (items = servantInfoList->fields._items,
          v30 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v25] + v23),
          v31 = items->m_Items[v23],
          v32 = System_Collections_Generic_List_int___ToArray(
                  enemyClassIdList,
                  (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
          v33 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B5D694(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v33,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            0LL),
          !v31) )
    {
LABEL_22:
      sub_B5D69C(enemyClassIdList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v31, v23++, v30, questRestrictionInfo, v32, v33, v24, 0, v35);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  }
}


void __fastcall WaveBattleWaveInfoComponent__add_callbackFunc(
        WaveBattleWaveInfoComponent_o *this,
        WaveBattleWaveInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleWaveInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleWaveInfoComponent_o *v12; // x0
  WaveBattleWaveInfoComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E737C & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E737C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleWaveInfoComponent_CallbackFunc_c *)v9->klass != WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleWaveInfoComponent_o *)sub_B5D990(v9);
  WaveBattleWaveInfoComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall WaveBattleWaveInfoComponent__remove_callbackFunc(
        WaveBattleWaveInfoComponent_o *this,
        WaveBattleWaveInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleWaveInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleWaveInfoComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E737D & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E737D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleWaveInfoComponent_CallbackFunc_c *)v9->klass != WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleWaveInfoComponent_o *)sub_B5D990(v9);
  WaveBattleWaveInfoComponent__Awake(v12, v13);
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
  sub_B5D560(p_method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v15 = idx;
  v16 = wave;
  if ( (byte_42E6002 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, wave, *(_QWORD *)&idx);
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11, v12);
    byte_42E6002 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&wave);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
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
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
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
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
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
            v19 = sub_AF54C0(v24, class_0, v12, v14);
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


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass31_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass31_0___SetWaveInfo_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *_4__this; // x22
  int32_t questPhase; // w20
  int32_t questId; // w21
  struct QuestRestrictionInfo_o *v12; // x8

  v4 = this;
  if ( (byte_42E5FFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, (_DWORD)method, v2, v3);
    this = (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)sub_B5D5C4(
                                                                    &SingletonTemplate_QuestTree__TypeInfo,
                                                                    v5,
                                                                    v6,
                                                                    v7);
    byte_42E5FFE = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v12 = v4->fields.questRestrictionInfo;
  if ( !v12
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v12->fields.questId,
                                                                        0LL),
        !_4__this) )
  {
LABEL_11:
    sub_B5D69C(this, method);
  }
  WaveBattleWaveInfoComponent__OnClickWave(
    _4__this,
    questId,
    questPhase,
    (int32_t)this,
    v4->fields.wave,
    v4->fields.restartWaveSelectMax,
    0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass37_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass37_0___OnClickWave_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_42E5FFF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass37_1__OnClickWave_b__1__, v9, v10, v11);
    sub_B5D5C4(&WaveBattleWaveInfoComponent___c__DisplayClass37_1_TypeInfo, v12, v13, v14);
    byte_42E5FFF = 1;
  }
  v15 = sub_B5D694(WaveBattleWaveInfoComponent___c__DisplayClass37_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 24) = this,
        sub_B5D560(v15 + 24),
        *(_BYTE *)(v15 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v15,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass37_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  CommonUI__CloseConfirmDialog_18202348(Instance, v19, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass37_1___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass37_1___OnClickWave_b__1(
        WaveBattleWaveInfoComponent___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct WaveBattleWaveInfoComponent___c__DisplayClass37_0_o *CS___8__locals1; // x8

  if ( (byte_42E6000 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6000 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL);
  if ( this->fields.isDecide )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      Instance = (CommonUI_o *)CS___8__locals1->fields.__4__this;
      if ( Instance )
      {
        WaveBattleWaveInfoComponent__UpdateInterruptionData(
          (WaveBattleWaveInfoComponent_o *)Instance,
          CS___8__locals1->fields.questId,
          CS___8__locals1->fields.questPhase,
          CS___8__locals1->fields.warId,
          CS___8__locals1->fields.waveNum,
          0LL);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(Instance, v6);
  }
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass42_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass42_0___OverwriteMoveToPartyButton_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *v4; // x19
  struct WaveBattleWaveInfoComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_42E6001 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *)sub_B5D5C4(
                                                                    &Method_ActionExtensions_Call_int___,
                                                                    (_DWORD)method,
                                                                    v2,
                                                                    v3);
    byte_42E6001 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v4->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
}