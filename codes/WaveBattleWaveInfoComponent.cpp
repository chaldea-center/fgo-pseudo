void WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_59342B8 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_59342B8 = 1;
  }
  static_fields = WaveBattleWaveInfoComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_HEIGHT_NORMAL = xmmword_E94520;
  static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL = 186.0;
  *(_OWORD *)&static_fields->MAX_ENEMY_INFO = xmmword_E92C50;
  *(_QWORD *)&static_fields->PARTY_LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE = 0x1A400000110LL;
  static_fields->SEPARATE_ENEMY_LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE = 254;
}


void WaveBattleWaveInfoComponent___ctor(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void WaveBattleWaveInfoComponent__Awake(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t WaveBattleWaveInfoComponent__CreateEnemyList(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  int32_t size; // w2
  int v18; // w9
  il2cpp_array_size_t max_length; // x8
  struct System_Collections_Generic_List_int__o *enemyClassIdList; // x9
  int v21; // w10
  __int64 v22; // x25
  int32_t v23; // w22
  ViewWaveEnemyEntity_o *v24; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  Il2CppObject *v31; // x23
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  __int64 v42; // x2

  if ( (byte_59342B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
    sub_21FFC50(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_59342B1 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v6;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.enemyInfoList, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = enemyInfoList->fields._size;
  v18 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enemyInfoList->fields._items, 0, size, 0);
  if ( viewEnemyEntities )
  {
    max_length = viewEnemyEntities->max_length;
    if ( max_length )
    {
      enemyClassIdList = this->fields.enemyClassIdList;
      if ( !enemyClassIdList )
        goto LABEL_38;
      v21 = enemyClassIdList->fields._version + 1;
      enemyClassIdList->fields._size = 0;
      enemyClassIdList->fields._version = v21;
      if ( (int)max_length >= 1 )
      {
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= (unsigned int)max_length )
            sub_21FFED4(enemyInfoListParent);
          v24 = viewEnemyEntities->m_Items[v22];
          if ( !v24 )
            break;
          if ( v24->fields.wave == this->fields.wave )
          {
            enemyInfoListParent = this->fields.enemyClassIdList;
            if ( !enemyInfoListParent )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    enemyInfoListParent,
                    v24->fields.classId,
                    (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              enemyInfoListParent = this->fields.enemyClassIdList;
              if ( !enemyInfoListParent )
                break;
              items = enemyInfoListParent->fields._items;
              classId = (unsigned int)v24->fields.classId;
              v26 = Method_System_Collections_Generic_List_int__Add__;
              ++enemyInfoListParent->fields._version;
              if ( !items )
                break;
              v27 = enemyInfoListParent->fields._size;
              if ( (unsigned int)v27 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  enemyInfoListParent,
                  classId,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                enemyInfoListParent->fields._size = v27 + 1;
                items->m_Items[v27] = classId;
              }
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)this->fields.enemyInfoListParent;
            if ( !enemyInfoListParent )
              break;
            enemyInfoPrefab = this->fields.enemyInfoPrefab;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)enemyInfoListParent, 0);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)BaseMonoBehaviour__createObject(
                                                                              (BaseMonoBehaviour_o *)this,
                                                                              enemyInfoPrefab,
                                                                              transform,
                                                                              0,
                                                                              0);
            if ( !enemyInfoListParent )
              break;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)enemyInfoListParent,
                                                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
            if ( !enemyInfoListParent )
              break;
            enemyInfoGrid = this->fields.enemyInfoGrid;
            v31 = (Il2CppObject *)enemyInfoListParent;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)enemyInfoListParent,
                                                                              0);
            if ( !enemyInfoGrid )
              break;
            UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoListParent, 0);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)*p_enemyInfoList;
            if ( !*p_enemyInfoList )
              break;
            v38 = enemyInfoListParent->fields._items;
            v39 = Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__;
            ++enemyInfoListParent->fields._version;
            if ( !v38 )
              break;
            v40 = enemyInfoListParent->fields._size;
            if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)enemyInfoListParent,
                v31,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = (__int64)v38 + 8 * v40;
              enemyInfoListParent->fields._size = v40 + 1;
              *(_QWORD *)(v41 + 32) = v31;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !*(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId, v42);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v23 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 20LL) )
              return v23;
            max_length = viewEnemyEntities->max_length;
          }
          if ( (int)++v22 >= (int)max_length )
            return v23;
        }
LABEL_38:
        sub_21FFECC(enemyInfoListParent, classId);
      }
    }
  }
  return 0;
}


void WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(
        WaveBattleWaveInfoComponent_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_59342B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59342B6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.wave,
      0,
      callbackFunc->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  AvalonSceneManager__pushScene(
    (AvalonSceneManager_o *)Instance,
    35,
    1,
    (Il2CppObject *)this->fields.battleSetupInfo,
    0);
}


float WaveBattleWaveInfoComponent__GetHeight(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.height;
}


bool WaveBattleWaveInfoComponent__IsSpecifiedWave(
        WaveBattleWaveInfoComponent_o *this,
        int32_t specifiedWave,
        const MethodInfo *method)
{
  return this->fields.wave == specifiedWave;
}


void WaveBattleWaveInfoComponent__OnClickMask(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_59342B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_OnClickMask__);
    byte_59342B3 = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void WaveBattleWaveInfoComponent__OnClickWave(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x9

  if ( this->fields.isSwitchPartyBattle )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        10,
        (unsigned int)waveNum,
        0,
        callbackFunc->fields.method);
  }
  else
  {
    WaveBattleWaveInfoComponent__OpenRestartWaveConfirmDialog(
      this,
      questId,
      questPhase,
      warId,
      waveNum,
      waveNumMax,
      method);
  }
}


void WaveBattleWaveInfoComponent__OnSelectWavePartyList(
        WaveBattleWaveInfoComponent_o *this,
        int32_t result,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x9

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      (unsigned int)this->fields.wave,
      (unsigned int)idx,
      callbackFunc->fields.method);
}


void WaveBattleWaveInfoComponent__OpenRestartWaveConfirmDialog(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  __int64 v13; // x19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  _BYTE *v22; // x0
  int *v23; // x20
  int *v24; // x21
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  int v28; // w8
  System_String_o *v29; // x22
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *v34; // x22
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  int v37; // w8
  System_String_o *v38; // x0
  System_String_o *v39; // x23
  Il2CppObject *v40; // x0
  System_String_o *v41; // x23
  int v42; // w22
  int v43; // w28
  __int64 v44; // x1
  __int64 v45; // x2
  Il2CppObject *v46; // x20
  System_String_o *v47; // x21
  System_String_o *v48; // x24
  CommonConfirmDialog_ClickDelegate_o *v49; // x25
  int32_t decideTxtSize; // w8
  System_String_o *message; // [xsp+18h] [xbp-68h]

  if ( (byte_59342B4 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent___c__DisplayClass59_0__OpenRestartWaveConfirmDialog_b__0__);
    sub_21FFC50(&WaveBattleWaveInfoComponent___c__DisplayClass59_0_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__);
    sub_21FFC50(&StringLiteral_2889/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_2904/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_2891/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_2888/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_2890/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1205/*"00"*/);
    byte_59342B4 = 1;
  }
  v13 = sub_21FFEBC(WaveBattleWaveInfoComponent___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_28;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__;
  *(_DWORD *)(v13 + 36) = waveNum;
  v23 = (int *)(v13 + 36);
  *(_DWORD *)(v13 + 24) = questId;
  *(_DWORD *)(v13 + 28) = questPhase;
  *(_DWORD *)(v13 + 32) = warId;
  *(_DWORD *)(v13 + 40) = waveNumMax;
  v24 = (int *)(v13 + 40);
  if ( (v22[83] & 2) != 0 )
    v22 = (_BYTE *)sub_21FFC68(v22);
  v25 = (System_Reflection_MethodBase_o *)sub_21FFC34(v22, *((_QWORD *)v22 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
  v28 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( *v23 == *v24 )
  {
    if ( !v28 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0);
    v30 = (Il2CppObject *)System_Int32__ToString_76925352((int)v13 + 36, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    v31 = System_String__Format(v29, v30, 0);
  }
  else
  {
    if ( !v28 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2904/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v35 = (Il2CppObject *)System_Int32__ToString_76925352((int)v13 + 36, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    v36 = (Il2CppObject *)System_Int32__ToString_76925352((int)v13 + 40, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    v31 = System_String__Format_75484576(v34, v35, v36, 0);
  }
  message = v31;
  v37 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( *v23 == *v24 )
  {
    if ( !v37 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2889/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0);
  }
  else
  {
    if ( !v37 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v40 = (Il2CppObject *)System_Int32__ToString_76925352((int)v13 + 36, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    v38 = System_String__Format(v39, v40, 0);
  }
  v41 = v38;
  v42 = *v23;
  v43 = *v24;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0);
  v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v49,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass59_0__OpenRestartWaveConfirmDialog_b__0__,
    0);
  if ( !v46 )
LABEL_28:
    sub_21FFECC(Instance, v15);
  if ( v42 == v43 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v46, v47, message, v41, v48, v49, 26, 270, 13.0, decideTxtSize, 1, 0);
}


void WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
        WaveBattleWaveInfoComponent_o *this,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  UILabel_o *clearedLabel; // x0

  clearedLabel = this->fields.clearedLabel;
  if ( !clearedLabel || (UILabel__set_maxLineCount(clearedLabel, 0, 0), (clearedLabel = this->fields.clearedLabel) == 0) )
    sub_21FFECC(clearedLabel, overwriteLabel);
  UILabel__set_text(clearedLabel, overwriteLabel, 0);
}


void WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoComponent_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *MoveToPartyButton; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v24; // w2
  int v25; // w8
  EventDelegate_Callback_o *v26; // x21
  EventDelegate_o *v27; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Array_o *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x0

  if ( (byte_59342B7 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent___c__DisplayClass65_0__OverwriteMoveToPartyButton_b__0__);
    sub_21FFC50(&WaveBattleWaveInfoComponent___c__DisplayClass65_0_TypeInfo);
    byte_59342B7 = 1;
  }
  v5 = sub_21FFEBC(WaveBattleWaveInfoComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isSwitchPartyBattle )
    return;
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_19;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  MoveToPartyButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
  if ( ((unsigned __int8)MoveToPartyButton & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Array_o **)Component_object[4].monitor;
      if ( monitor )
      {
        v24 = *((_DWORD *)monitor + 6);
        v25 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v25;
        if ( v24 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v24, 0);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v26 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v26,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass65_0__OverwriteMoveToPartyButton_b__0__,
          0);
        v27 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56132624(v27, v26, 0);
        if ( monitor )
        {
          v34 = monitor[2];
          v35 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++*((_DWORD *)monitor + 7);
          if ( v34 )
          {
            v36 = *((int *)monitor + 6);
            if ( (unsigned int)v36 >= LODWORD(v34[1].monitor) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)monitor,
                (Il2CppObject *)v27,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = (__int64)v34 + 8 * v36;
              *((_DWORD *)monitor + 6) = v36 + 1;
              *(_QWORD *)(v37 + 32) = v27;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
            }
            return;
          }
        }
      }
    }
LABEL_19:
    sub_21FFECC(MoveToPartyButton, v7);
  }
}


void WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        const MethodInfo *method)
{
  LocalizationManager_c *v9; // x0
  int v10; // w8
  UILabel_o *waveNumLabel; // x23
  System_String_o *maskObj; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UISprite_o *waveLineSprite; // x22
  System_Collections_Generic_List_int__o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x3

  if ( (byte_59342AA & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_22279/*"line_whiteAlpha"*/);
    sub_21FFC50(&StringLiteral_16086/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/);
    byte_59342AA = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  waveNumLabel = this->fields.waveNumLabel;
  this->fields.wave = nowWave;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, viewEnemyEntities, questRestrictionInfo);
  maskObj = LocalizationManager__Get((System_String_o *)StringLiteral_16086/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/, 0);
  if ( !waveNumLabel )
    goto LABEL_14;
  UILabel__set_text(waveNumLabel, maskObj, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_22279/*"line_whiteAlpha"*/, 0);
  v17 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyClassIdList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_14;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v13, viewEnemyEntities, v24);
  }
  maskObj = (System_String_o *)this->fields.maskObj;
  if ( !maskObj )
LABEL_14:
    sub_21FFECC(maskObj, v13);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObj, 0, 0);
}


void WaveBattleWaveInfoComponent__SetEnemyInfo_41503148(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 v6; // x23
  int32_t v7; // w21
  ViewWaveEnemyEntity_o *v8; // x22
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_59342B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__);
    this = (WaveBattleWaveInfoComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
    byte_59342B2 = 1;
  }
  if ( viewEnemyEntities )
  {
    max_length = viewEnemyEntities->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          if ( (unsigned int)v6 >= (unsigned int)max_length )
            sub_21FFED4(this);
          v8 = viewEnemyEntities->m_Items[v6];
          if ( !v8 )
LABEL_16:
            sub_21FFECC(this, viewEnemyEntities);
          if ( v8->fields.wave == v4->fields.wave )
          {
            this = (WaveBattleWaveInfoComponent_o *)v4->fields.enemyInfoList;
            if ( !this )
              goto LABEL_16;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) <= v7 )
              return;
            this = (WaveBattleWaveInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v7,
                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
            if ( !this )
              goto LABEL_16;
            WaveBattleWaveEnemyInfoItem__SetItem((WaveBattleWaveEnemyInfoItem_o *)this, v8, v9);
            max_length = viewEnemyEntities->max_length;
            ++v7;
          }
          ++v6;
        }
        while ( (int)v6 < (int)max_length );
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoComponent__SetMaskObjActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObj; // x0

  maskObj = this->fields.maskObj;
  if ( !maskObj )
    sub_21FFECC(0, active);
  UnityEngine_GameObject__SetActive(maskObj, active, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoComponent__SetMoveToPartyButtonActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *MoveToPartyButton; // x0

  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    sub_21FFECC(0, active);
  UnityEngine_GameObject__SetActive(MoveToPartyButton, active, 0);
}


void WaveBattleWaveInfoComponent__SetPartyInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        int32_t maxWave,
        WaveBattleWaveInfoComponent_CallbackFunc_o *callback,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *waveNumLabel; // x25
  System_String_o *v19; // x26
  Il2CppObject *v20; // x27
  Il2CppObject *v21; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 classId; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  UISprite_o *waveLineSprite; // x23
  __int64 v27; // x2
  UIWidget_o *v28; // x23
  int v29; // w8
  int32_t *v30; // x8
  System_Collections_Generic_List_int__o *v31; // x25
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x2
  il2cpp_array_size_t max_length; // x8
  __int64 v41; // x19
  int v42; // w20
  ViewWaveEnemyEntity_o *v43; // x26
  System_String_Fields fields; // x8
  _QWORD *v45; // x9
  __int64 klass_low; // x10
  WaveBattleWaveInfoComponent_c *v47; // x0
  int v48; // w8
  float *p_BASE_HEIGHT_RESTART_WAVE_SPECIAL; // x8
  AtlasManager_c *v50; // x0
  float v51; // s0
  int v52; // w8
  UISprite_o *servantTextStartingSprite; // x24
  System_Collections_Generic_List_object__o *v54; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x2
  BalanceConfig_c *v63; // x0
  int32_t v64; // w20
  int32_t v65; // w26
  int v66; // w20
  UnityEngine_GameObject_o *servantInfoPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v71; // x27
  DeckServantData_o *v72; // x28
  System_Int32_array *v73; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v74; // x24
  const MethodInfo *v75; // x3
  UIGrid_o *servantInfoGrid; // x24
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_Fields v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  System_String_o *v87; // x0
  const MethodInfo *v88; // x5
  const MethodInfo *v89; // [xsp+0h] [xbp-90h]
  int32_t v92; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_59342AD & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_21FFC50(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_21FFC50(&StringLiteral_22279/*"line_whiteAlpha"*/);
    sub_21FFC50(&StringLiteral_16124/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_21FFC50(&StringLiteral_21564/*"img_txt_Member"*/);
    sub_21FFC50(&StringLiteral_21565/*"img_txt_Starting"*/);
    byte_59342AD = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)viewEnemyEntities,
    (System_String_o *)questRestrictionInfo,
    nowWave,
    maxWave,
    (bool)callback,
    restartWave);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_16124/*"WAVE_BATTLE_WAVE_INFO"*/, 0);
  wave = this->fields.wave;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &wave);
  v92 = maxWave;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v92);
  servantTextMemberSprite = System_String__Format_75484576(v19, v20, v21, 0);
  if ( !waveNumLabel )
    goto LABEL_71;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_22279/*"line_whiteAlpha"*/, 0);
  if ( this->fields.wave >= 10 )
  {
    servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
    v28 = (UIWidget_o *)this->fields.waveLineSprite;
    v29 = *(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.isSelectWaveFlag )
    {
      if ( !v29 )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId, v27);
        servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
      }
      v30 = (int32_t *)(*(_QWORD *)&servantTextMemberSprite[7].fields + 36LL);
      if ( !v28 )
        goto LABEL_71;
    }
    else
    {
      if ( !v29 )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId, v27);
        servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
      }
      v30 = (int32_t *)(*(_QWORD *)&servantTextMemberSprite[7].fields + 32LL);
      if ( !v28 )
        goto LABEL_71;
    }
    UIWidget__set_width(v28, *v30, 0);
  }
  v31 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v31;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyClassIdList,
    (int32_t)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( viewEnemyEntities )
  {
    max_length = viewEnemyEntities->max_length;
    if ( (int)max_length >= 1 )
    {
      v41 = 0;
      v42 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v41 >= (unsigned int)max_length )
LABEL_72:
          sub_21FFED4(servantTextMemberSprite);
        v43 = viewEnemyEntities->m_Items[v41];
        if ( !v43 )
          break;
        if ( v43->fields.wave == 1 )
        {
          servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
          if ( !*p_enemyClassIdList )
            break;
          if ( !System_Collections_Generic_List_int___Contains(
                  (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                  v43->fields.classId,
                  (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
            if ( !*p_enemyClassIdList )
              break;
            fields = servantTextMemberSprite->fields;
            classId = (unsigned int)v43->fields.classId;
            v45 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(servantTextMemberSprite[1].klass);
            if ( !*(_QWORD *)&fields )
              break;
            klass_low = SLODWORD(servantTextMemberSprite[1].klass);
            if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                classId,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
              *(_DWORD *)(*(_QWORD *)&fields + 4 * klass_low + 32) = classId;
            }
          }
          servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
          if ( !*(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId, v39);
            servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
          }
          if ( ++v42 >= *(_DWORD *)(*(_QWORD *)&servantTextMemberSprite[7].fields + 20LL) )
            goto LABEL_36;
          max_length = viewEnemyEntities->max_length;
        }
        if ( (int)++v41 >= (int)max_length )
          goto LABEL_36;
      }
LABEL_71:
      sub_21FFECC(servantTextMemberSprite, classId);
    }
  }
LABEL_36:
  v47 = WaveBattleWaveInfoComponent_TypeInfo;
  v48 = *(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isSelectWaveFlag )
  {
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId, v39);
      v47 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_RESTART_WAVE_SPECIAL = &v47->static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL;
  }
  else
  {
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId, v39);
      v47 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_RESTART_WAVE_SPECIAL = &v47->static_fields->BASE_HEIGHT_SPECIAL;
  }
  v50 = AtlasManager_TypeInfo;
  v51 = *p_BASE_HEIGHT_RESTART_WAVE_SPECIAL;
  v52 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  this->fields.height = v51;
  if ( !v52 )
    j_il2cpp_runtime_class_init_0(v50, classId, v39);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_21565/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_71;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_21564/*"img_txt_Member"*/,
    0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_71;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v54 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v54;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantInfoList,
    (int32_t)v54,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v63 = BalanceConfig_TypeInfo;
  v64 = this->fields.wave;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, classId, v62);
    v63 = BalanceConfig_TypeInfo;
  }
  v65 = 0;
  v66 = v63->static_fields->DeckMainMemberMax * (v64 - 1);
  while ( 1 )
  {
    if ( !*(&v63->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v63, classId, v62);
      v63 = BalanceConfig_TypeInfo;
    }
    if ( v65 >= v63->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_71;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0,
                                                   0);
    if ( !servantTextMemberSprite )
      goto LABEL_71;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_71;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_71;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_71;
    if ( (unsigned int)(v66 + v65) >= LODWORD(svts->max_length) )
      goto LABEL_72;
    v71 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_71;
    v72 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v66] + v65);
    v73 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v74 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_21FFEBC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v74,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v75);
    if ( !v71 )
      goto LABEL_71;
    WaveBattleWaveServantInfoItem__SetItem(
      v71,
      v65,
      v72,
      questRestrictionInfo,
      v73,
      v74,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v89);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v71, 0);
    if ( !servantInfoGrid )
      goto LABEL_71;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_71;
    v83 = servantTextMemberSprite->fields;
    v84 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&v83 )
      goto LABEL_71;
    v85 = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)v85 >= *(_DWORD *)(*(_QWORD *)&v83 + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v71,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = *(_QWORD *)&v83 + 8 * v85;
      LODWORD(servantTextMemberSprite[1].klass) = v85 + 1;
      *(_QWORD *)(v86 + 32) = v71;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v86 + 32), (int32_t)v71, v77, v78, v79, v80, v81, v82);
    }
    v63 = BalanceConfig_TypeInfo;
    ++v65;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, classId, v62);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v87, v88);
}


void WaveBattleWaveInfoComponent__SetRestartInfo(
        WaveBattleWaveInfoComponent_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        System_String_o *maskMessage,
        const MethodInfo *method)
{
  __int64 v11; // x20
  UnityEngine_GameObject_o *maskObj; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *backGroundObj; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *clearedLabel; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *MoveToPartyButton; // x21
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_Callback_o *v36; // x22
  EventDelegate_o *v37; // x20
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_59342AE & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent___c__DisplayClass50_0__SetRestartInfo_b__0__);
    sub_21FFC50(&WaveBattleWaveInfoComponent___c__DisplayClass50_0_TypeInfo);
    sub_21FFC50(&StringLiteral_16112/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/);
    byte_59342AE = 1;
  }
  v11 = sub_21FFEBC(WaveBattleWaveInfoComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_31;
  *(_QWORD *)(v11 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v11 + 24),
    (int32_t)questRestrictionInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  maskObj = this->fields.maskObj;
  *(_DWORD *)(v11 + 32) = restartWaveSelectMax;
  if ( !maskObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(maskObj, this->fields.wave < restartWave, 0);
  maskObj = (UnityEngine_GameObject_o *)this->fields.clearedLabel;
  if ( !maskObj )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)maskObj, maskMessage, 0);
  if ( this->fields.isSelectWaveFlag )
  {
    backGroundObj = (UnityEngine_Object_o *)this->fields.backGroundObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
    if ( UnityEngine_Object__op_Inequality(backGroundObj, 0, 0) )
    {
      maskObj = this->fields.backGroundObj;
      if ( !maskObj )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(maskObj, 1, 0);
    }
    maskObj = this->fields.maskObj;
    if ( maskObj )
    {
      UnityEngine_GameObject__SetActive(maskObj, this->fields.wave > restartWave, 0);
      clearedLabel = this->fields.clearedLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
      maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16112/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0);
      if ( clearedLabel )
      {
        UILabel__set_text(clearedLabel, (System_String_o *)maskObj, 0);
        if ( this->fields.wave <= restartWave )
        {
          MoveToPartyButton = (UnityEngine_Object_o *)this->fields.MoveToPartyButton;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
          if ( UnityEngine_Object__op_Inequality(MoveToPartyButton, 0, 0) )
          {
            maskObj = this->fields.MoveToPartyButton;
            if ( !maskObj )
              goto LABEL_31;
            UnityEngine_GameObject__SetActive(maskObj, 1, 0);
            maskObj = this->fields.MoveToPartyButton;
            if ( !maskObj )
              goto LABEL_31;
            maskObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    maskObj,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
            if ( !maskObj )
              goto LABEL_31;
            monitor = (System_Collections_Generic_List_object__o *)maskObj[4].monitor;
            v36 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v36,
              (Il2CppObject *)v11,
              Method_WaveBattleWaveInfoComponent___c__DisplayClass50_0__SetRestartInfo_b__0__,
              0);
            v37 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
            EventDelegate___ctor_56132624(v37, v36, 0);
            if ( !monitor )
              goto LABEL_31;
            items = monitor->fields._items;
            v45 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++monitor->fields._version;
            if ( !items )
              goto LABEL_31;
            size = monitor->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                monitor,
                (Il2CppObject *)v37,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              monitor->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v37;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v37, v38, v39, v40, v41, v42, v43);
            }
          }
        }
        maskObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( maskObj )
        {
          UnityEngine_GameObject__SetActive(maskObj, 1, 0);
          return;
        }
      }
    }
LABEL_31:
    sub_21FFECC(maskObj, v13);
  }
}


void WaveBattleWaveInfoComponent__SetSelectedState(
        WaveBattleWaveInfoComponent_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.selectFrameSprite, isSelect, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoComponent__SetSeparateEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        int32_t maxWave,
        WaveBattleWaveInfoComponent_CallbackFunc_o *callback,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        UserInterruptionQuestEntity_o *userInterruptionQuest,
        const MethodInfo *method)
{
  _BOOL4 isSelectWaveFlag; // w9
  UnityEngine_Object_o *selectFrameSprite; // x26
  __int64 v17; // x1
  __int64 v18; // x2
  UISprite_o *v19; // x26
  UnityEngine_Object_o *startPartyBaseSprite; // x26
  __int64 v21; // x1
  __int64 v22; // x2
  UISprite_o *v23; // x26
  UILabel_o *waveNumLabel; // x26
  System_String_o *v25; // x27
  Il2CppObject *v26; // x28
  Il2CppObject *v27; // x0
  void *enemyTextSprite; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  UISprite_o *waveLineSprite; // x25
  __int64 v33; // x2
  int v34; // w26
  UIWidget_o *v35; // x25
  int v36; // w8
  int32_t *v37; // x8
  System_Collections_Generic_List_int__o *v38; // x25
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x2
  const MethodInfo *v46; // x3
  WaveBattleWaveInfoComponent_c *v47; // x0
  int v48; // w8
  int32_t v49; // w24
  float *p_BASE_HEIGHT_RESTART_WAVE_SPECIAL; // x8
  LocalizationManager_c *v51; // x0
  System_String_o *v52; // x0
  const MethodInfo *v53; // x5
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *startPartyObject; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Object_o *startPartyLabel; // x22
  bool v60; // w1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x8
  System_Nullable_int__o v62; // x0
  int32_t size; // w1
  __int64 v64; // x2
  int32_t StartPartyNumber; // w21
  UILabel_o *v66; // x20
  System_String_o *v67; // x22
  Il2CppObject *v68; // x0
  __int64 v72; // [xsp+10h] [xbp-70h] BYREF
  int32_t v73; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_59342AB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21333/*"img_formation_bg_select"*/);
    sub_21FFC50(&StringLiteral_22279/*"line_whiteAlpha"*/);
    sub_21FFC50(&StringLiteral_16071/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_21FFC50(&StringLiteral_21238/*"img_StartParty_base"*/);
    sub_21FFC50(&StringLiteral_16125/*"WAVE_BATTLE_WAVE_INFO_SWITCH_PARTY"*/);
    sub_21FFC50(&StringLiteral_21563/*"img_txt_Enemy"*/);
    sub_21FFC50(&StringLiteral_16122/*"WAVE_BATTLE_START_PARTY"*/);
    byte_59342AB = 1;
  }
  isSelectWaveFlag = this->fields.isSelectWaveFlag;
  this->fields.isSwitchPartyBattle = 1;
  this->fields.wave = nowWave;
  if ( isSelectWaveFlag )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)questRestrictionInfo,
      *(System_String_o **)&nowWave,
      maxWave,
      (int32_t)callback,
      restartWave,
      restartWaveSelectMax);
  }
  selectFrameSprite = (UnityEngine_Object_o *)this->fields.selectFrameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, viewEnemyEntities, questRestrictionInfo);
  if ( UnityEngine_Object__op_Inequality(selectFrameSprite, 0, 0) )
  {
    v19 = this->fields.selectFrameSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
    AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_21333/*"img_formation_bg_select"*/, 0);
  }
  startPartyBaseSprite = (UnityEngine_Object_o *)this->fields.startPartyBaseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(startPartyBaseSprite, 0, 0) )
  {
    v23 = this->fields.startPartyBaseSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
    AtlasManager__SetDownloadCommonSprite(v23, (System_String_o *)StringLiteral_21238/*"img_StartParty_base"*/, 0);
  }
  waveNumLabel = this->fields.waveNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_16125/*"WAVE_BATTLE_WAVE_INFO_SWITCH_PARTY"*/, 0);
  LODWORD(v72) = this->fields.wave;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v72);
  v73 = maxWave;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v73);
  enemyTextSprite = System_String__Format_75484576(v25, v26, v27, 0);
  if ( !waveNumLabel )
    goto LABEL_77;
  UILabel__set_text(waveNumLabel, (System_String_o *)enemyTextSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30, v31);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_22279/*"line_whiteAlpha"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.enemyTextSprite, (System_String_o *)StringLiteral_21563/*"img_txt_Enemy"*/, 0);
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !enemyTextSprite )
    goto LABEL_77;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)enemyTextSprite + 840LL))(
    enemyTextSprite,
    *(_QWORD *)(*(_QWORD *)enemyTextSprite + 848LL));
  v34 = nowWave;
  if ( this->fields.wave >= 10 )
  {
    enemyTextSprite = WaveBattleWaveInfoComponent_TypeInfo;
    v35 = (UIWidget_o *)this->fields.waveLineSprite;
    v36 = *(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.isSelectWaveFlag )
    {
      if ( !v36 )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v29, v33);
        enemyTextSprite = WaveBattleWaveInfoComponent_TypeInfo;
      }
      v37 = (int32_t *)(*((_QWORD *)enemyTextSprite + 23) + 44LL);
      if ( !v35 )
        goto LABEL_77;
    }
    else
    {
      if ( !v36 )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v29, v33);
        enemyTextSprite = WaveBattleWaveInfoComponent_TypeInfo;
      }
      v37 = (int32_t *)(*((_QWORD *)enemyTextSprite + 23) + 40LL);
      if ( !v35 )
        goto LABEL_77;
    }
    UIWidget__set_width(v35, *v37, 0);
  }
  v38 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v38;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyClassIdList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_77;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v29, viewEnemyEntities, v46);
  }
  v47 = WaveBattleWaveInfoComponent_TypeInfo;
  v48 = *(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isSelectWaveFlag )
  {
    v49 = restartWave;
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v29, v45);
      v47 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_RESTART_WAVE_SPECIAL = &v47->static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL;
  }
  else
  {
    v49 = restartWave;
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v29, v45);
      v47 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_RESTART_WAVE_SPECIAL = &v47->static_fields->BASE_HEIGHT_SPECIAL;
  }
  v51 = LocalizationManager_TypeInfo;
  this->fields.height = *p_BASE_HEIGHT_RESTART_WAVE_SPECIAL;
  if ( !*(&v51->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v51, v29, v45);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_16071/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, v49, restartWaveSelectMax, v52, v53);
  startPartyObject = (UnityEngine_Object_o *)this->fields.startPartyObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
  if ( !UnityEngine_Object__op_Equality(startPartyObject, 0, 0) )
  {
    startPartyLabel = (UnityEngine_Object_o *)this->fields.startPartyLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
    if ( !UnityEngine_Object__op_Equality(startPartyLabel, 0, 0) )
    {
      enemyTextSprite = this->fields.maskObj;
      if ( !enemyTextSprite )
        goto LABEL_77;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)enemyTextSprite, 0)
        || v34 != v49 && !this->fields.isSelectWaveFlag )
      {
        enemyTextSprite = this->fields.startPartyLabel;
        if ( !enemyTextSprite )
          goto LABEL_77;
        UILabel__set_text((UILabel_o *)enemyTextSprite, **(System_String_o ***)(qword_594C0B8 + 184), 0);
        enemyTextSprite = this->fields.startPartyObject;
        if ( !enemyTextSprite )
          goto LABEL_77;
        v60 = 0;
        goto LABEL_75;
      }
      if ( userInterruptionQuest
        && (waveInfoList = userInterruptionQuest->fields.waveInfoList) != 0
        && (v62 = (System_Nullable_int__o)&v72,
            size = waveInfoList->fields._size,
            v72 = 0,
            System_Nullable_int____ctor(v62, size, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__),
            (_BYTE)v72)
        && SHIDWORD(v72) >= v34 )
      {
        StartPartyNumber = UserInterruptionQuestEntity__GetStartPartyNumber(userInterruptionQuest, v34, 0);
      }
      else
      {
        enemyTextSprite = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !enemyTextSprite )
          goto LABEL_77;
        enemyTextSprite = (void *)*((_QWORD *)enemyTextSprite + 22);
        if ( !enemyTextSprite )
          goto LABEL_77;
        if ( *((_DWORD *)enemyTextSprite + 6) >= v34 )
        {
          enemyTextSprite = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)enemyTextSprite,
                              v34 - 1,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
          if ( !enemyTextSprite )
            goto LABEL_77;
          StartPartyNumber = *((_DWORD *)enemyTextSprite + 26);
        }
        else
        {
          StartPartyNumber = 1;
        }
      }
      v66 = this->fields.startPartyLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v64);
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_16122/*"WAVE_BATTLE_START_PARTY"*/, 0);
      v68 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(StartPartyNumber, 0);
      enemyTextSprite = System_String__Format(v67, v68, 0);
      if ( v66 )
      {
        UILabel__set_text(v66, (System_String_o *)enemyTextSprite, 0);
        enemyTextSprite = this->fields.startPartyObject;
        if ( enemyTextSprite )
        {
          v60 = 1;
LABEL_75:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)enemyTextSprite, v60, 0);
          return;
        }
      }
LABEL_77:
      sub_21FFECC(enemyTextSprite, v29);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoComponent__SetSeparatePartyInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        int32_t maxWave,
        WaveBattleWaveInfoComponent_CallbackFunc_o *callback,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        UserInterruptionQuestEntity_o *userInterruptionQuest,
        const MethodInfo *method)
{
  _BOOL4 isSelectWaveFlag; // w9
  UILabel_o *waveNumLabel; // x24
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UISprite_o *waveLineSprite; // x21
  System_Collections_Generic_List_int__o *v23; // x21
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  WaveBattleWaveInfoComponent_c *v33; // x0
  int v34; // w8
  float *p_BASE_HEIGHT_RESTART_WAVE_SPECIAL; // x8
  AtlasManager_c *v36; // x0
  float v37; // s0
  int v38; // w8
  UISprite_o *servantTextStartingSprite; // x21
  System_Collections_Generic_List_object__o *v40; // x21
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x2
  BalanceConfig_c *v49; // x0
  int32_t v50; // w21
  int32_t v51; // w26
  int v52; // w22
  UnityEngine_GameObject_o *servantInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v57; // x27
  DeckServantData_o *v58; // x28
  System_Int32_array *v59; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v60; // x21
  const MethodInfo *v61; // x3
  UIGrid_o *servantInfoGrid; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_Fields fields; // x8
  _QWORD *v70; // x9
  __int64 klass_low; // x10
  __int64 v72; // x8
  UnityEngine_Object_o *MoveToPartyButton; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  UILabel_o *clearedLabel; // x19
  const MethodInfo *v77; // [xsp+0h] [xbp-80h]

  if ( (byte_59342AC & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_21FFC50(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_22279/*"line_whiteAlpha"*/);
    sub_21FFC50(&StringLiteral_21564/*"img_txt_Member"*/);
    sub_21FFC50(&StringLiteral_16062/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/);
    sub_21FFC50(&StringLiteral_21565/*"img_txt_Starting"*/);
    sub_21FFC50(&StringLiteral_16091/*"WAVE_BATTLE_PARTY_INFO"*/);
    byte_59342AC = 1;
  }
  isSelectWaveFlag = this->fields.isSelectWaveFlag;
  this->fields.isSwitchPartyBattle = 1;
  this->fields.wave = nowWave;
  if ( !isSelectWaveFlag )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)questRestrictionInfo,
      *(System_String_o **)&nowWave,
      maxWave,
      (int32_t)callback,
      restartWave,
      restartWaveSelectMax);
  }
  waveNumLabel = this->fields.waveNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, deckEntity, questRestrictionInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_16091/*"WAVE_BATTLE_PARTY_INFO"*/, 0);
  v17 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(this->fields.wave, 0);
  servantTextMemberSprite = System_String__Format(v16, v17, 0);
  if ( !waveNumLabel )
    goto LABEL_57;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20, v21);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_22279/*"line_whiteAlpha"*/, 0);
  v23 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v23;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyClassIdList,
    (int32_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v33 = WaveBattleWaveInfoComponent_TypeInfo;
  v34 = *(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isSelectWaveFlag )
  {
    if ( !v34 )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v31, v32);
      v33 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_RESTART_WAVE_SPECIAL = &v33->static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL;
  }
  else
  {
    if ( !v34 )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v31, v32);
      v33 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_RESTART_WAVE_SPECIAL = &v33->static_fields->BASE_HEIGHT_SPECIAL;
  }
  v36 = AtlasManager_TypeInfo;
  v37 = *p_BASE_HEIGHT_RESTART_WAVE_SPECIAL;
  v38 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  this->fields.height = v37;
  if ( !v38 )
    j_il2cpp_runtime_class_init_0(v36, v31, v32);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_21565/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_57;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_21564/*"img_txt_Member"*/,
    0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_57;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v40 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v40;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantInfoList,
    (int32_t)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v49 = BalanceConfig_TypeInfo;
  v50 = this->fields.wave;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v48);
    v49 = BalanceConfig_TypeInfo;
  }
  v51 = 0;
  v52 = v49->static_fields->DeckMainMemberMax * (v50 - 1);
  while ( 1 )
  {
    if ( !*(&v49->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v49, v19, v48);
      v49 = BalanceConfig_TypeInfo;
    }
    if ( v51 >= v49->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_57;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0,
                                                   0);
    if ( !servantTextMemberSprite )
      goto LABEL_57;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_57;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_57;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_57;
    if ( (unsigned int)(v52 + v51) >= LODWORD(svts->max_length) )
      sub_21FFED4(servantTextMemberSprite);
    v57 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_57;
    v58 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v52] + v51);
    v59 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v60 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_21FFEBC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v60,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v61);
    if ( !v57 )
      goto LABEL_57;
    WaveBattleWaveServantInfoItem__SetItem(
      v57,
      v51,
      v58,
      questRestrictionInfo,
      v59,
      v60,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v77);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v57, 0);
    if ( !servantInfoGrid )
      goto LABEL_57;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_57;
    fields = servantTextMemberSprite->fields;
    v70 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_57;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v57,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v72 + 32) = v57;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 32), (int32_t)v57, v63, v64, v65, v66, v67, v68);
    }
    v49 = BalanceConfig_TypeInfo;
    ++v51;
  }
  if ( restartWave >= 1 && userInterruptionQuest )
  {
    if ( this->fields.isSelectWaveFlag )
    {
      MoveToPartyButton = (UnityEngine_Object_o *)this->fields.MoveToPartyButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v48);
      if ( UnityEngine_Object__op_Inequality(MoveToPartyButton, 0, 0) )
      {
        servantTextMemberSprite = (System_String_o *)this->fields.MoveToPartyButton;
        if ( !servantTextMemberSprite )
          goto LABEL_57;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0);
      }
    }
    servantTextMemberSprite = (System_String_o *)UserInterruptionQuestEntity__GetAlreadySortiePartyNum(
                                                   userInterruptionQuest,
                                                   restartWave,
                                                   0);
    if ( this->fields.maskObj )
    {
      UnityEngine_GameObject__SetActive(this->fields.maskObj, (int)servantTextMemberSprite >= this->fields.wave, 0);
      clearedLabel = this->fields.clearedLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74, v75);
      servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_16062/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/, 0);
      if ( clearedLabel )
      {
        UILabel__set_text(clearedLabel, servantTextMemberSprite, 0);
        return;
      }
    }
LABEL_57:
    sub_21FFECC(servantTextMemberSprite, v19);
  }
  servantTextMemberSprite = (System_String_o *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 0, 0);
}


void WaveBattleWaveInfoComponent__SetWaveInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        int32_t maxWave,
        WaveBattleWaveInfoComponent_CallbackFunc_o *callback,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *waveNumLabel; // x25
  System_String_o *v19; // x26
  Il2CppObject *v20; // x27
  Il2CppObject *v21; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  UISprite_o *waveLineSprite; // x24
  __int64 v27; // x2
  UIWidget_o *v28; // x24
  UIWidget_o *v29; // x24
  WaveBattleWaveInfoComponent_c *v30; // x0
  float BASE_HEIGHT_RESTART_WAVE_NORMAL; // s0
  WaveBattleWaveInfoComponent_c *v32; // x0
  int v33; // w8
  AtlasManager_c *v34; // x0
  int v35; // w8
  UISprite_o *enemyTextSprite; // x24
  System_Collections_Generic_List_int__o *v37; // x25
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x24
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x2
  const MethodInfo *v46; // x3
  UISprite_o *servantTextStartingSprite; // x23
  System_Collections_Generic_List_object__o *v48; // x23
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x2
  BalanceConfig_c *v57; // x0
  int32_t v58; // w19
  int32_t v59; // w26
  int v60; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v65; // x27
  DeckServantData_o *v66; // x28
  System_Int32_array *v67; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v68; // x23
  const MethodInfo *v69; // x3
  UIGrid_o *servantInfoGrid; // x23
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_String_Fields fields; // x8
  _QWORD *v78; // x9
  __int64 klass_low; // x10
  __int64 v80; // x8
  System_String_o *v81; // x0
  const MethodInfo *v82; // x5
  const MethodInfo *v83; // [xsp+0h] [xbp-90h]
  int32_t v86; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_59342A9 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_21FFC50(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_22279/*"line_whiteAlpha"*/);
    sub_21FFC50(&StringLiteral_16124/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_21FFC50(&StringLiteral_21564/*"img_txt_Member"*/);
    sub_21FFC50(&StringLiteral_16071/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_21FFC50(&StringLiteral_21565/*"img_txt_Starting"*/);
    sub_21FFC50(&StringLiteral_21563/*"img_txt_Enemy"*/);
    byte_59342A9 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)viewEnemyEntities,
    (System_String_o *)questRestrictionInfo,
    nowWave,
    maxWave,
    (bool)callback,
    restartWave);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_16124/*"WAVE_BATTLE_WAVE_INFO"*/, 0);
  wave = this->fields.wave;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &wave);
  v86 = maxWave;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v86);
  servantTextMemberSprite = System_String__Format_75484576(v19, v20, v21, 0);
  if ( !waveNumLabel )
    goto LABEL_64;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_22279/*"line_whiteAlpha"*/, 0);
  if ( this->fields.wave >= 10 )
  {
    servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
    v28 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !*(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v23, v27);
    if ( !v28 )
      goto LABEL_64;
    UIWidget__set_width(v28, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
      v29 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !*(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v23, v27);
      if ( !v29 )
        goto LABEL_64;
      UIWidget__set_width(
        v29,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0);
    }
  }
  if ( this->fields.isSelectWaveFlag )
  {
    v30 = WaveBattleWaveInfoComponent_TypeInfo;
    if ( !*(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v23, v27);
      v30 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    BASE_HEIGHT_RESTART_WAVE_NORMAL = v30->static_fields->BASE_HEIGHT_RESTART_WAVE_NORMAL;
  }
  else
  {
    v32 = WaveBattleWaveInfoComponent_TypeInfo;
    v33 = *(&WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.wave >= restartWave )
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v23, v27);
        v32 = WaveBattleWaveInfoComponent_TypeInfo;
      }
      BASE_HEIGHT_RESTART_WAVE_NORMAL = v32->static_fields->BASE_HEIGHT_NORMAL;
    }
    else
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v23, v27);
        v32 = WaveBattleWaveInfoComponent_TypeInfo;
      }
      BASE_HEIGHT_RESTART_WAVE_NORMAL = v32->static_fields->BASE_HEIGHT_NORMAL + v32->static_fields->ADJUST_HEIGHT;
    }
  }
  v34 = AtlasManager_TypeInfo;
  v35 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  enemyTextSprite = this->fields.enemyTextSprite;
  this->fields.height = BASE_HEIGHT_RESTART_WAVE_NORMAL;
  if ( !v35 )
    j_il2cpp_runtime_class_init_0(v34, v23, v27);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_21563/*"img_txt_Enemy"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_64;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v37 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v37;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyClassIdList,
    (int32_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_64;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v23, viewEnemyEntities, v46);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23, v45);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_21565/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || (((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
          servantTextMemberSprite,
          servantTextMemberSprite->klass[1]._1.typeMetadataHandle),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_21564/*"img_txt_Member"*/,
          0),
        (servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite) == 0) )
  {
LABEL_64:
    sub_21FFECC(servantTextMemberSprite, v23);
  }
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v48 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v48;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantInfoList,
    (int32_t)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v57 = BalanceConfig_TypeInfo;
  v58 = this->fields.wave;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23, v56);
    v57 = BalanceConfig_TypeInfo;
  }
  v59 = 0;
  v60 = v57->static_fields->DeckMainMemberMax * (v58 - 1);
  while ( 1 )
  {
    if ( !*(&v57->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v57, v23, v56);
      v57 = BalanceConfig_TypeInfo;
    }
    if ( v59 >= v57->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_64;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0,
                                                   0);
    if ( !servantTextMemberSprite )
      goto LABEL_64;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_64;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_64;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_64;
    if ( (unsigned int)(v60 + v59) >= LODWORD(svts->max_length) )
      sub_21FFED4(servantTextMemberSprite);
    v65 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_64;
    v66 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v60] + v59);
    v67 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v68 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_21FFEBC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v68,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v69);
    if ( !v65 )
      goto LABEL_64;
    WaveBattleWaveServantInfoItem__SetItem(
      v65,
      v59,
      v66,
      questRestrictionInfo,
      v67,
      v68,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v83);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v65, 0);
    if ( !servantInfoGrid )
      goto LABEL_64;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_64;
    fields = servantTextMemberSprite->fields;
    v78 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_64;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v65,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v80 + 32) = v65;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v80 + 32), (int32_t)v65, v71, v72, v73, v74, v75, v76);
    }
    v57 = BalanceConfig_TypeInfo;
    ++v59;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v56);
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_16071/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v81, v82);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoComponent__UpdateInterruptionData(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  int v13; // w8
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x25
  System_Int32_array *SelectableQuests; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v32; // x25
  BattleSetupInfo_o *v33; // x8
  BattleSetupInfo_o *v34; // x8
  NetworkManager_ResultCallbackFunc_o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59342B5 & 1) == 0 )
  {
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_BattleInterruptionRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__);
    byte_59342B5 = 1;
  }
  v13 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0);
  v16 = sub_21FFEBC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v16, 0);
  if ( !v16 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)entity;
  *(_DWORD *)(v16 + 16) = warId;
  *(_DWORD *)(v16 + 20) = questId;
  if ( !Master_object )
    goto LABEL_22;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests((QuestPhaseEntity_o *)Master_object, 0);
  *(_QWORD *)(v16 + 112) = SelectableQuests;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 112), (int32_t)SelectableQuests, v18, v19, v20, v21, v22, v23);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  *(_DWORD *)(v16 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0);
  *(_DWORD *)(v16 + 124) = 0;
  *(_WORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v16;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  *(_DWORD *)(v16 + 24) = questPhase;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.battleSetupInfo, v16, v25, v26, v27, v28, v29, v30);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v32 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0);
  if ( !v32 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v32, (int32_t)Master_object, 0);
  if ( !battleSetupInfo )
    goto LABEL_22;
  v33 = *p_battleSetupInfo;
  battleSetupInfo->fields.eventId = (int)Master_object;
  if ( !v33 )
    goto LABEL_22;
  BattleSetupInfo__SetEventUpValues(v33, 0);
  Master_object = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0);
  v34 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  v34->fields.originQuestId = questId;
  v34->fields.isScriptBeforeWarBoard = 0;
  v34->fields.restartWave = waveNum;
  if ( waveNum == waveNumMax )
  {
    WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(this, v15);
    return;
  }
  v35 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v35,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36, v37);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v35,
                                          (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_21FFECC(Master_object, v15);
  BattleInterruptionRequest__beginRequest((BattleInterruptionRequest_o *)Master_object, questId, questPhase, waveNum, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoComponent__UpdatePartyState(
        WaveBattleWaveInfoComponent_o *this,
        bool isAlreadySortie,
        const MethodInfo *method)
{
  bool v3; // w19
  UnityEngine_GameObject_o *maskObj; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *clearedLabel; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *MoveToPartyButton; // x21

  v3 = isAlreadySortie;
  if ( (byte_59342B0 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16062/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/);
    byte_59342B0 = 1;
  }
  maskObj = this->fields.maskObj;
  if ( !maskObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskObj, v3, 0);
  clearedLabel = this->fields.clearedLabel;
  if ( v3 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16062/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/, 0);
    *(_QWORD *)&isAlreadySortie = maskObj;
  }
  else
  {
    *(_QWORD *)&isAlreadySortie = **(_QWORD **)(qword_594C0B8 + 184);
  }
  if ( !clearedLabel )
    goto LABEL_16;
  UILabel__set_text(clearedLabel, (System_String_o *)isAlreadySortie, 0);
  MoveToPartyButton = (UnityEngine_Object_o *)this->fields.MoveToPartyButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(MoveToPartyButton, 0, 0) )
  {
    maskObj = this->fields.MoveToPartyButton;
    if ( maskObj )
    {
      UnityEngine_GameObject__SetActive(maskObj, !v3, 0);
      return;
    }
LABEL_16:
    sub_21FFECC(maskObj, isAlreadySortie);
  }
}


void WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        WaveBattleWaveInfoComponent_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isInterruption,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  int32_t wave; // w23
  int v11; // w9
  int32_t v12; // w23
  int v13; // w29
  System_Collections_Generic_List_object__o *servantInfoList; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v17; // x24
  DeckServantData_o *v18; // x25
  System_Int32_array *v19; // x26
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v20; // x27
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // [xsp+0h] [xbp-70h]

  if ( (byte_59342AF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    byte_59342AF = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  wave = this->fields.wave;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, deckEntity, questRestrictionInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = wave - 1;
  v12 = 0;
  v13 = v9->static_fields->DeckMainMemberMax * v11;
  while ( 1 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, deckEntity, questRestrictionInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( v12 >= v9->static_fields->DeckMainMemberMax )
      break;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_18;
    servantInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantInfoList,
                                                                     v12,
                                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( (unsigned int)(v13 + v12) >= LODWORD(svts->max_length) )
      sub_21FFED4(servantInfoList);
    v17 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v18 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v13] + v12),
          v19 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__),
          v20 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_21FFEBC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v21),
          !v17) )
    {
LABEL_18:
      sub_21FFECC(servantInfoList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v17, v12, v18, questRestrictionInfo, v19, v20, isInterruption, 0, v22);
    v9 = BalanceConfig_TypeInfo;
    ++v12;
  }
}


void WaveBattleWaveInfoComponent__add_callbackFunc(
        WaveBattleWaveInfoComponent_o *this,
        WaveBattleWaveInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleWaveInfoComponent_o *v13; // x0
  WaveBattleWaveInfoComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59342A7 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_59342A7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoComponent_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleWaveInfoComponent_o *)sub_220024C(v8, WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleWaveInfoComponent__remove_callbackFunc(v13, v14, v15);
}


void WaveBattleWaveInfoComponent__remove_callbackFunc(
        WaveBattleWaveInfoComponent_o *this,
        WaveBattleWaveInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleWaveInfoComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59342A8 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_59342A8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoComponent_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleWaveInfoComponent_o *)sub_220024C(v8, WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleWaveInfoComponent__Awake(v13, v14);
}


void WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF2354;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF22F4;
}


System_IAsyncResult_o *WaveBattleWaveInfoComponent_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = wave;
  v15 = result;
  v13 = idx;
  if ( (byte_59342B9 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_59342B9 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_594C070, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_594C070, &v13);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void WaveBattleWaveInfoComponent_CallbackFunc__Invoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    wave,
    idx,
    this->fields.method);
}


void WaveBattleWaveInfoComponent___c__DisplayClass50_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveInfoComponent___c__DisplayClass50_0___SetRestartInfo_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *_4__this; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  struct QuestRestrictionInfo_o *v7; // x8
  const MethodInfo *v8; // x6
  struct WaveBattleWaveInfoComponent_o *v9; // x8

  v2 = this;
  if ( (byte_59342BA & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_59342BA = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0),
        (v9 = v2->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_21FFECC(this, method);
  }
  WaveBattleWaveInfoComponent__OnClickWave(
    _4__this,
    questId,
    questPhase,
    (int32_t)this,
    v9->fields.wave,
    v2->fields.restartWaveSelectMax,
    v8);
}


void WaveBattleWaveInfoComponent___c__DisplayClass59_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveInfoComponent___c__DisplayClass59_0___OpenRestartWaveConfirmDialog_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass59_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_59342BB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WaveBattleWaveInfoComponent___c__DisplayClass59_1__OpenRestartWaveConfirmDialog_b__1__);
    sub_21FFC50(&WaveBattleWaveInfoComponent___c__DisplayClass59_1_TypeInfo);
    byte_59342BB = 1;
  }
  v5 = sub_21FFEBC(WaveBattleWaveInfoComponent___c__DisplayClass59_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass59_1__OpenRestartWaveConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
}


void WaveBattleWaveInfoComponent___c__DisplayClass59_1___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass59_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveInfoComponent___c__DisplayClass59_1___OpenRestartWaveConfirmDialog_b__1(
        WaveBattleWaveInfoComponent___c__DisplayClass59_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct WaveBattleWaveInfoComponent___c__DisplayClass59_0_o *CS___8__locals1; // x8

  if ( (byte_59342BC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59342BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0);
  if ( this->fields.isDecide )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      Instance = (Il2CppObject *)CS___8__locals1->fields.__4__this;
      if ( Instance )
      {
        WaveBattleWaveInfoComponent__UpdateInterruptionData(
          (WaveBattleWaveInfoComponent_o *)Instance,
          CS___8__locals1->fields.questId,
          CS___8__locals1->fields.questPhase,
          CS___8__locals1->fields.warId,
          CS___8__locals1->fields.waveNum,
          CS___8__locals1->fields.waveNumMax,
          v5);
        return;
      }
    }
LABEL_9:
    sub_21FFECC(Instance, v4);
  }
}


void WaveBattleWaveInfoComponent___c__DisplayClass65_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveInfoComponent___c__DisplayClass65_0___OverwriteMoveToPartyButton_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent___c__DisplayClass65_0_o *v2; // x19
  struct WaveBattleWaveInfoComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_59342BD & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass65_0_o *)sub_21FFC50(&Method_ActionExtensions_Call_int___);
    byte_59342BD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
}