void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  if ( (byte_435012E & 1) == 0 )
  {
    sub_B70694(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_435012E = 1;
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

  if ( (byte_4350127 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
    sub_B70694(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
    sub_B70694(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4350127 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v6;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_B70630(
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
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
    if ( !enemyInfoList )
      goto LABEL_30;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)enemyInfoList,
      (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
    v16 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      v18 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= (unsigned int)v16 )
        {
          v25 = sub_B70798(enemyInfoList);
          sub_B70738(v25, 0LL);
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
                  (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            enemyInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyClassIdList;
            if ( !enemyInfoList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)enemyInfoList,
              v19->fields.classId,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
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
                                                                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
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
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
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
      sub_B7076C(enemyInfoList, v14);
    }
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoComponent__EndRequestBattleInterruption(
        WaveBattleWaveInfoComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_435012C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_435012C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveInfoComponent_CallbackFunc__Invoke(callbackFunc, 0, this->fields.wave, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
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
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4350129 & 1) == 0 )
  {
    sub_B70694(&Method_WaveBattleWaveInfoComponent_OnClickMask__);
    byte_4350129 = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B7069C(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_B70678(v2, v2[3]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__OnClickWave(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  __int64 v12; // x19
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x21
  CommonUI_o *v30; // x22
  System_String_o *v31; // x23
  System_String_o *v32; // x24
  CommonConfirmDialog_ClickDelegate_o *v33; // x25
  int32_t v34; // [xsp+2Ch] [xbp-34h] BYREF

  v34 = waveNumMax;
  if ( (byte_435012A & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WaveBattleWaveInfoComponent___c__DisplayClass37_0__OnClickWave_b__0__);
    sub_B70694(&WaveBattleWaveInfoComponent___c__DisplayClass37_0_TypeInfo);
    sub_B70694(&Method_WaveBattleWaveInfoComponent_OnClickWave__);
    sub_B70694(&StringLiteral_2505/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_B70694(&StringLiteral_2504/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_2503/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_2506/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_B70694(&StringLiteral_987/*"00"*/);
    byte_435012A = 1;
  }
  v12 = sub_B70764(WaveBattleWaveInfoComponent___c__DisplayClass37_0_TypeInfo);
  WaveBattleWaveInfoComponent___c__DisplayClass37_0___ctor(
    (WaveBattleWaveInfoComponent___c__DisplayClass37_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_12;
  *(_QWORD *)(v12 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 36) = waveNum;
  *(_DWORD *)(v12 + 24) = questId;
  *(_DWORD *)(v12 + 28) = questPhase;
  *(_DWORD *)(v12 + 32) = warId;
  v21 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 75) & 2) != 0 )
    v21 = (_QWORD *)sub_B7069C(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v22 = (System_Reflection_MethodBase_o *)sub_B70678(v21, v21[3]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2504/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
  v24 = (Il2CppObject *)System_Int32__ToString_39283984((int)v12 + 36, (System_String_o *)StringLiteral_987/*"00"*/, 0LL);
  v25 = System_String__Format(v23, v24, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  v27 = (Il2CppObject *)System_Int32__ToString_39283984((int)v12 + 36, (System_String_o *)StringLiteral_987/*"00"*/, 0LL);
  v28 = (Il2CppObject *)System_Int32__ToString_39283984((int32_t)&v34, (System_String_o *)StringLiteral_987/*"00"*/, 0LL);
  v29 = System_String__Format_44753704(v26, v27, v28, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL),
        v30 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2506/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL),
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2503/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL),
        v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo),
        CommonConfirmDialog_ClickDelegate___ctor(
          v33,
          (Il2CppObject *)v12,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass37_0__OnClickWave_b__0__,
          0LL),
        !v30) )
  {
LABEL_12:
    sub_B7076C(Instance, v14);
  }
  CommonUI__OpenConfirmDecideDialog(v30, v31, v29, v25, v32, v33, 26, 280, 13.0, 22, 1, 0LL);
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
  __int64 v5; // x19
  UnityEngine_GameObject_o *MoveToPartyButton; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x20
  EventDelegate_Callback_o *v22; // x21
  EventDelegate_o *v23; // x19

  if ( (byte_435012D & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_WaveBattleWaveInfoComponent___c__DisplayClass42_0__OverwriteMoveToPartyButton_b__0__);
    sub_B70694(&WaveBattleWaveInfoComponent___c__DisplayClass42_0_TypeInfo);
    byte_435012D = 1;
  }
  v5 = sub_B70764(WaveBattleWaveInfoComponent___c__DisplayClass42_0_TypeInfo);
  WaveBattleWaveInfoComponent___c__DisplayClass42_0___ctor(
    (WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_13;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      MoveToPartyButton,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite[4].klass;
        v22 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass42_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v23 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo);
        EventDelegate___ctor_29875020(v23, v22, 0LL);
        if ( klass )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            klass,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
          return;
        }
      }
    }
LABEL_13:
    sub_B7076C(MoveToPartyButton, v7);
  }
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
  if ( (byte_4350128 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__);
    this = (WaveBattleWaveInfoComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
    byte_4350128 = 1;
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
            v11 = sub_B70798(this);
            sub_B70738(v11, 0LL);
          }
          v8 = viewEnemyEntities->m_Items[v6];
          if ( !v8 )
LABEL_18:
            sub_B7076C(this, viewEnemyEntities);
          if ( v8->fields.wave == v4->fields.wave )
          {
            enemyInfoList = v4->fields.enemyInfoList;
            if ( !enemyInfoList )
              goto LABEL_18;
            size = enemyInfoList->fields._size;
            if ( size <= (int)v7 )
              return;
            if ( size <= v7 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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


void __fastcall WaveBattleWaveInfoComponent__SetMaskObjActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObj; // x0

  maskObj = this->fields.maskObj;
  if ( !maskObj )
    sub_B7076C(0LL, active);
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
    sub_B7076C(0LL, active);
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
  __int64 v17; // x21
  void *servantTextMemberSprite; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UILabel_o *waveNumLabel; // x26
  System_String_o *v39; // x20
  __int64 v40; // x2
  Il2CppObject *v41; // x21
  __int64 v42; // x2
  Il2CppObject *v43; // x0
  UISprite_o *waveLineSprite; // x20
  UIWidget_o *v45; // x20
  UISprite_o *enemyTextSprite; // x20
  System_Collections_Generic_List_int__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x3
  UISprite_o *servantTextStartingSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x20
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int32_t v64; // w20
  BalanceConfig_c *v65; // x0
  int32_t v66; // w26
  int v67; // w22
  UnityEngine_GameObject_o *servantInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v72; // x27
  DeckServantData_o *v73; // x21
  UserEventDeckEntity_o *v74; // x25
  QuestRestrictionInfo_o *v75; // x28
  System_Int32_array *v76; // x20
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v77; // x23
  UIGrid_o *servantInfoGrid; // x20
  UILabel_o *clearedLabel; // x20
  UnityEngine_Object_o *backGroundObj; // x20
  UILabel_o *v81; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x20
  EventDelegate_Callback_o *v83; // x22
  EventDelegate_o *v84; // x21
  __int64 v85; // x0
  const MethodInfo *v86; // [xsp+0h] [xbp-80h]
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // [xsp+10h] [xbp-70h]
  QuestRestrictionInfo_o **v89; // [xsp+18h] [xbp-68h]
  int32_t v91; // [xsp+28h] [xbp-58h] BYREF
  int v92; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4350125 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_B70694(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_WaveBattleWaveInfoComponent___c__DisplayClass31_0__SetWaveInfo_b__0__);
    sub_B70694(&WaveBattleWaveInfoComponent___c__DisplayClass31_0_TypeInfo);
    sub_B70694(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_B70694(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_B70694(&StringLiteral_20550/*"line_whiteAlpha"*/);
    sub_B70694(&StringLiteral_15580/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_B70694(&StringLiteral_19964/*"img_txt_Member"*/);
    sub_B70694(&StringLiteral_15540/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_B70694(&StringLiteral_19965/*"img_txt_Starting"*/);
    sub_B70694(&StringLiteral_15574/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/);
    sub_B70694(&StringLiteral_19963/*"img_txt_Enemy"*/);
    byte_4350125 = 1;
  }
  v17 = sub_B70764(WaveBattleWaveInfoComponent___c__DisplayClass31_0_TypeInfo);
  WaveBattleWaveInfoComponent___c__DisplayClass31_0___ctor(
    (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_78;
  *(_QWORD *)(v17 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)(v17 + 24),
    (System_Int32_array **)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(_DWORD *)(v17 + 32) = wave;
  *(_DWORD *)(v17 + 36) = restartWaveSelectMax;
  this->fields.callbackFunc = callback;
  v89 = (QuestRestrictionInfo_o **)(v17 + 24);
  this->fields.wave = wave;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  waveNumLabel = this->fields.waveNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  object = (Il2CppObject *)v17;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15580/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v92 = *(_DWORD *)(v17 + 32);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v40);
  v91 = maxWave;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v42);
  servantTextMemberSprite = System_String__Format_44753704(v39, v41, v43, 0LL);
  if ( !waveNumLabel )
    goto LABEL_78;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_20550/*"line_whiteAlpha"*/, 0LL);
  if ( SLODWORD(object[2].klass) >= 10 )
  {
    v45 = (UIWidget_o *)this->fields.waveLineSprite;
    servantTextMemberSprite = WaveBattleWaveInfoComponent_TypeInfo;
    if ( (BYTE3(WaveBattleWaveInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    }
    if ( !v45 )
      goto LABEL_78;
    UIWidget__set_width(v45, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_19963/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v47 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v47;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.enemyClassIdList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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
    if ( !*v89 )
      goto LABEL_78;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v19, viewEnemyEntities, v54);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_19965/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_19964/*"img_txt_Member"*/,
    0LL);
  servantTextMemberSprite = this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v56;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantInfoList,
    (System_Int32_array **)v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = this->fields.wave;
  v65 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v65 = BalanceConfig_TypeInfo;
  }
  v66 = 0;
  v67 = v65->static_fields->DeckMainMemberMax * (v64 - 1);
  while ( 1 )
  {
    if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = BalanceConfig_TypeInfo;
    }
    if ( v66 >= v65->static_fields->DeckMainMemberMax )
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
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_78;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_78;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_78;
    if ( v67 + v66 >= svts->max_length )
    {
      v85 = sub_B70798(servantTextMemberSprite);
      sub_B70738(v85, 0LL);
    }
    v72 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = *p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_78;
    v73 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v67] + v66);
    v74 = deckEntity;
    v75 = *v89;
    v76 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
    v77 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B70764(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v77,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v72 )
      goto LABEL_78;
    WaveBattleWaveServantInfoItem__SetItem(
      v72,
      v66,
      v73,
      v75,
      v76,
      v77,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v86);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v72, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_78;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = *p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_78;
    deckEntity = v74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantTextMemberSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    ++v66;
    v65 = BalanceConfig_TypeInfo;
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
  servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_15540/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0LL);
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
  v81 = this->fields.clearedLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_15574/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0LL);
  if ( !v81 )
    goto LABEL_78;
  UILabel__set_text(v81, (System_String_o *)servantTextMemberSprite, 0LL);
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
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL
    || (v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)servantTextMemberSprite + 12),
        v83 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v83,
          object,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass31_0__SetWaveInfo_b__0__,
          0LL),
        v84 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo),
        EventDelegate___ctor_29875020(v84, v83, 0LL),
        !v82) )
  {
LABEL_78:
    sub_B7076C(servantTextMemberSprite, v19);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v82,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
LABEL_75:
  servantTextMemberSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !servantTextMemberSprite )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__UpdateInterruptionData(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x24
  System_Int32_array **SelectableQuests; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleSetupInfo_o **p_battleSetupInfo; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x25
  QuestGroupMaster_o *v29; // x24
  NetworkManager_ResultCallbackFunc_o *v30; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435012B & 1) == 0 )
  {
    sub_B70694(&BattleSetupInfo_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_BattleInterruptionRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__);
    byte_435012B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, questId, questPhase, 0LL);
  v13 = sub_B70764(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_23;
  *(_DWORD *)(v13 + 16) = warId;
  *(_DWORD *)(v13 + 20) = questId;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  SelectableQuests = (System_Int32_array **)QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v13 + 112) = SelectableQuests;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 112), SelectableQuests, v15, v16, v17, v18, v19, v20);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  *(_DWORD *)(v13 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0LL);
  *(_DWORD *)(v13 + 124) = 0;
  *(_DWORD *)(v13 + 24) = questPhase;
  *(_WORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 48) = 0LL;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v13;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
    (System_Int32_array **)v13,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_23;
  v29 = (QuestGroupMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !v29 )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(
                                                           v29,
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
  v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v30,
                                                           (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B7076C(Master_WarQuestSelectionMaster, v12);
  BattleInterruptionRequest__beginRequest(
    (BattleInterruptionRequest_o *)Master_WarQuestSelectionMaster,
    questId,
    questPhase,
    waveNum,
    0LL);
}


void __fastcall WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isInterruption,
        const MethodInfo *method)
{
  int32_t wave; // w24
  System_Collections_Generic_List_int__o *enemyClassIdList; // x0
  int32_t v11; // w22
  bool v12; // w23
  int v13; // w28
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *servantInfoList; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  struct WaveBattleWaveServantInfoItem_array *items; // x10
  DeckServantData_o *v18; // x24
  WaveBattleWaveServantInfoItem_o *v19; // x25
  System_Int32_array *v20; // x26
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v21; // x27
  __int64 v22; // x0
  const MethodInfo *v23; // [xsp+0h] [xbp-60h]

  if ( (byte_4350126 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    sub_B70694(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    byte_4350126 = 1;
  }
  wave = this->fields.wave;
  enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
  }
  v11 = 0;
  v12 = isInterruption;
  v13 = *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) * (wave - 1);
  while ( 1 )
  {
    if ( (enemyClassIdList[7].fields._size & 0x4000000) != 0 && !enemyClassIdList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(enemyClassIdList);
      enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
    }
    if ( v11 >= *(_DWORD *)(*(_QWORD *)&enemyClassIdList[4].fields._size + 160LL) )
      break;
    servantInfoList = this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_22;
    if ( servantInfoList->fields._size <= (unsigned int)v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( !deckEntity )
      goto LABEL_22;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_22;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_22;
    if ( v13 + v11 >= svts->max_length )
    {
      v22 = sub_B70798(enemyClassIdList);
      sub_B70738(v22, 0LL);
    }
    enemyClassIdList = this->fields.enemyClassIdList;
    if ( !enemyClassIdList
      || (items = servantInfoList->fields._items,
          v18 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v13] + v11),
          v19 = items->m_Items[v11],
          v20 = System_Collections_Generic_List_int___ToArray(
                  enemyClassIdList,
                  (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__),
          v21 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_B70764(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v21,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            0LL),
          !v19) )
    {
LABEL_22:
      sub_B7076C(enemyClassIdList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v19, v11++, v18, questRestrictionInfo, v20, v21, v12, 0, v23);
    enemyClassIdList = (System_Collections_Generic_List_int__o *)BalanceConfig_TypeInfo;
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

  if ( (byte_4350123 & 1) == 0 )
  {
    sub_B70694(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4350123 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B70A60(v8);
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

  if ( (byte_4350124 & 1) == 0 )
  {
    sub_B70694(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4350124 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_B70A60(v8);
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
  sub_B70630(
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
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v15; // [xsp+28h] [xbp-28h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-24h] BYREF

  v16 = result;
  v14 = idx;
  v15 = wave;
  if ( (byte_434FCCD & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_434FCCD = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v16, *(_QWORD *)&wave);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B70638(this, v13, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v24) & 1) == 0 )
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
      v26 = sub_B706BC(v24);
      v27 = sub_B70AC0(v24);
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
            v20 = sub_B08590(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B70744(v19, v24);
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
            v18 = sub_B08590(v23, class_0, v12);
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
  WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *_4__this; // x22
  int32_t questPhase; // w20
  int32_t questId; // w21
  struct QuestRestrictionInfo_o *v7; // x8

  v2 = this;
  if ( (byte_434FCC9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_434FCC9 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_11;
  _4__this = v2->fields.__4__this;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v7 = v2->fields.questRestrictionInfo;
  if ( !v7
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass31_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0LL),
        !_4__this) )
  {
LABEL_11:
    sub_B7076C(this, method);
  }
  WaveBattleWaveInfoComponent__OnClickWave(
    _4__this,
    questId,
    questPhase,
    (int32_t)this,
    v2->fields.wave,
    v2->fields.restartWaveSelectMax,
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_434FCCA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WaveBattleWaveInfoComponent___c__DisplayClass37_1__OnClickWave_b__1__);
    sub_B70694(&WaveBattleWaveInfoComponent___c__DisplayClass37_1_TypeInfo);
    byte_434FCCA = 1;
  }
  v5 = sub_B70764(WaveBattleWaveInfoComponent___c__DisplayClass37_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass37_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_17904524(Instance, v15, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct WaveBattleWaveInfoComponent___c__DisplayClass37_0_o *CS___8__locals1; // x8

  if ( (byte_434FCCB & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434FCCB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B7076C(Instance, v4);
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
  WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *v2; // x19
  struct WaveBattleWaveInfoComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_434FCCC & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass42_0_o *)sub_B70694(&Method_ActionExtensions_Call_int___);
    byte_434FCCC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2BFC258 *)Method_ActionExtensions_Call_int___);
}