void WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4CB20BA & 1) == 0 )
  {
    sub_1C6BA08(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4CB20BA = 1;
  }
  static_fields = WaveBattleWaveInfoComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_HEIGHT_NORMAL = xmmword_CED780;
  static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL = 186.0;
  *(_OWORD *)&static_fields->MAX_ENEMY_INFO = xmmword_CEC3F0;
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  int32_t size; // w2
  int v14; // w9
  il2cpp_array_size_t max_length; // x8
  struct System_Collections_Generic_List_int__o *enemyClassIdList; // x9
  int v17; // w10
  __int64 v18; // x25
  int32_t v19; // w22
  ViewWaveEnemyEntity_o *v20; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  Il2CppObject *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8

  if ( (byte_4CB20B3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
    sub_1C6BA08(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4CB20B3 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v6;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.enemyInfoList, (int32_t)v6, v8, v9);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = enemyInfoList->fields._size;
  v14 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v14;
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
      v17 = enemyClassIdList->fields._version + 1;
      enemyClassIdList->fields._size = 0;
      enemyClassIdList->fields._version = v17;
      if ( (int)max_length >= 1 )
      {
        v18 = 0;
        v19 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= (unsigned int)max_length )
            sub_1C6BC68(enemyInfoListParent);
          v20 = viewEnemyEntities->m_Items[v18];
          if ( !v20 )
            break;
          if ( v20->fields.wave == this->fields.wave )
          {
            enemyInfoListParent = this->fields.enemyClassIdList;
            if ( !enemyInfoListParent )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    enemyInfoListParent,
                    v20->fields.classId,
                    (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              enemyInfoListParent = this->fields.enemyClassIdList;
              if ( !enemyInfoListParent )
                break;
              classId = (unsigned int)v20->fields.classId;
              items = enemyInfoListParent->fields._items;
              v22 = Method_System_Collections_Generic_List_int__Add__;
              ++enemyInfoListParent->fields._version;
              if ( !items )
                break;
              v23 = enemyInfoListParent->fields._size;
              if ( (unsigned int)v23 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  enemyInfoListParent,
                  classId,
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                enemyInfoListParent->fields._size = v23 + 1;
                items->m_Items[v23] = classId;
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
                                                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
            if ( !enemyInfoListParent )
              break;
            enemyInfoGrid = this->fields.enemyInfoGrid;
            v27 = (Il2CppObject *)enemyInfoListParent;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)enemyInfoListParent,
                                                                              0);
            if ( !enemyInfoGrid )
              break;
            UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoListParent, 0);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)*p_enemyInfoList;
            if ( !*p_enemyInfoList )
              break;
            v30 = enemyInfoListParent->fields._items;
            v31 = Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__;
            ++enemyInfoListParent->fields._version;
            if ( !v30 )
              break;
            v32 = enemyInfoListParent->fields._size;
            if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)enemyInfoListParent,
                v27,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = (__int64)v30 + 8 * v32;
              enemyInfoListParent->fields._size = v32 + 1;
              *(_QWORD *)(v33 + 32) = v27;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v27, v28, v29);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v19 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 20LL) )
              return v19;
            max_length = viewEnemyEntities->max_length;
          }
          if ( (int)++v18 >= (int)max_length )
            return v19;
        }
LABEL_38:
        sub_1C6BC60(enemyInfoListParent, classId);
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

  if ( (byte_4CB20B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB20B8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.wave,
      0,
      callbackFunc->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
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

  if ( (byte_4CB20B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_OnClickMask__);
    byte_4CB20B5 = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
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
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x8

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
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x8

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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int *v18; // x20
  int *v19; // x21
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  int v22; // w22
  int v23; // w23
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x0
  int v30; // w23
  int v31; // w24
  System_String_o *v32; // x23
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x23
  int v36; // w22
  int v37; // w28
  Il2CppObject *v38; // x20
  System_String_o *v39; // x21
  System_String_o *v40; // x24
  CommonConfirmDialog_ClickDelegate_o *v41; // x25
  int32_t decideTxtSize; // w8
  System_String_o *message; // [xsp+18h] [xbp-68h]

  if ( (byte_4CB20B6 & 1) == 0 )
  {
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent___c__DisplayClass59_0__OpenRestartWaveConfirmDialog_b__0__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent___c__DisplayClass59_0_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__);
    sub_1C6BA08(&StringLiteral_2769/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2782/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_2771/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_2768/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_2770/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_1122/*"00"*/);
    byte_4CB20B6 = 1;
  }
  v13 = sub_1C6BC54(WaveBattleWaveInfoComponent___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 36) = waveNum;
  v18 = (int *)(v13 + 36);
  *(_DWORD *)(v13 + 32) = warId;
  *(_DWORD *)(v13 + 24) = questId;
  *(_DWORD *)(v13 + 28) = questPhase;
  *(_DWORD *)(v13 + 40) = waveNumMax;
  v19 = (int *)(v13 + 40);
  v20 = Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C6BA20(Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
  v22 = *v18;
  v23 = *v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v22 == v23 )
  {
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2770/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0);
    v25 = (Il2CppObject *)System_Int32__ToString_65475288((int)v13 + 36, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v26 = System_String__Format(v24, v25, 0);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v28 = (Il2CppObject *)System_Int32__ToString_65475288((int)v13 + 36, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v29 = (Il2CppObject *)System_Int32__ToString_65475288((int)v13 + 40, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v26 = System_String__Format_64008100(v27, v28, v29, 0);
  }
  message = v26;
  v30 = *v18;
  v31 = *v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v30 == v31 )
  {
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2769/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0);
  }
  else
  {
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2782/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v33 = (Il2CppObject *)System_Int32__ToString_65475288((int)v13 + 36, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v34 = System_String__Format(v32, v33, 0);
  }
  v35 = v34;
  v36 = *v18;
  v37 = *v19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2771/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2768/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0);
  v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass59_0__OpenRestartWaveConfirmDialog_b__0__,
    0);
  if ( !v38 )
LABEL_24:
    sub_1C6BC60(Instance, v15);
  if ( v36 == v37 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v38, v39, message, v35, v40, v41, 26, 270, 13.0, decideTxtSize, 1, 0);
}


void WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
        WaveBattleWaveInfoComponent_o *this,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  UILabel_o *clearedLabel; // x0

  clearedLabel = this->fields.clearedLabel;
  if ( !clearedLabel || (UILabel__set_maxLineCount(clearedLabel, 0, 0), (clearedLabel = this->fields.clearedLabel) == 0) )
    sub_1C6BC60(clearedLabel, overwriteLabel);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v14; // w2
  int v15; // w8
  EventDelegate_Callback_o *v16; // x21
  EventDelegate_o *v17; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Array_o *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x0

  if ( (byte_4CB20B9 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent___c__DisplayClass65_0__OverwriteMoveToPartyButton_b__0__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent___c__DisplayClass65_0_TypeInfo);
    byte_4CB20B9 = 1;
  }
  v5 = sub_1C6BC54(WaveBattleWaveInfoComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  if ( this->fields.isSwitchPartyBattle )
    return;
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_19;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MoveToPartyButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
  if ( ((unsigned __int8)MoveToPartyButton & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Array_o **)Component_object[4].monitor;
      if ( monitor )
      {
        v14 = *((_DWORD *)monitor + 6);
        v15 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v15;
        if ( v14 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v14, 0);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v16 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass65_0__OverwriteMoveToPartyButton_b__0__,
          0);
        v17 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
        EventDelegate___ctor_49576072(v17, v16, 0);
        if ( monitor )
        {
          v20 = monitor[2];
          v21 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++*((_DWORD *)monitor + 7);
          if ( v20 )
          {
            v22 = *((int *)monitor + 6);
            if ( (unsigned int)v22 >= LODWORD(v20[1].monitor) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)monitor,
                (Il2CppObject *)v17,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = (__int64)v20 + 8 * v22;
              *((_DWORD *)monitor + 6) = v22 + 1;
              *(_QWORD *)(v23 + 32) = v17;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
            }
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1C6BC60(MoveToPartyButton, v7);
  }
}


void WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        const MethodInfo *method)
{
  UILabel_o *waveNumLabel; // x22
  System_String_o *maskObj; // x0
  __int64 v11; // x1
  UISprite_o *waveLineSprite; // x22
  System_Collections_Generic_List_int__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4CB20AC & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_21331/*"line_whiteAlpha"*/);
    sub_1C6BA08(&StringLiteral_15503/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/);
    byte_4CB20AC = 1;
  }
  this->fields.wave = nowWave;
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskObj = LocalizationManager__Get((System_String_o *)StringLiteral_15503/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/, 0);
  if ( !waveNumLabel )
    goto LABEL_14;
  UILabel__set_text(waveNumLabel, maskObj, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21331/*"line_whiteAlpha"*/, 0);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v13, v14, v15);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_14;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v11, viewEnemyEntities, v16);
  }
  maskObj = (System_String_o *)this->fields.maskObj;
  if ( !maskObj )
LABEL_14:
    sub_1C6BC60(maskObj, v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObj, 0, 0);
}


void WaveBattleWaveInfoComponent__SetEnemyInfo_34993080(
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
  if ( (byte_4CB20B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__);
    this = (WaveBattleWaveInfoComponent_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
    byte_4CB20B4 = 1;
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
            sub_1C6BC68(this);
          v8 = viewEnemyEntities->m_Items[v6];
          if ( !v8 )
LABEL_16:
            sub_1C6BC60(this, viewEnemyEntities);
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
                                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
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


void WaveBattleWaveInfoComponent__SetMaskObjActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObj; // x0

  maskObj = this->fields.maskObj;
  if ( !maskObj )
    sub_1C6BC60(0, active);
  UnityEngine_GameObject__SetActive(maskObj, active, 0);
}


void WaveBattleWaveInfoComponent__SetMoveToPartyButtonActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *MoveToPartyButton; // x0

  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    sub_1C6BC60(0, active);
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
  UILabel_o *waveNumLabel; // x25
  System_String_o *v17; // x26
  Il2CppObject *v18; // x27
  Il2CppObject *v19; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 classId; // x1
  UISprite_o *waveLineSprite; // x23
  UIWidget_o *v23; // x23
  _BOOL4 isSelectWaveFlag; // w20
  __int64 v25; // x9
  System_Collections_Generic_List_int__o *v26; // x25
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  il2cpp_array_size_t max_length; // x8
  __int64 v31; // x20
  int v32; // w25
  ViewWaveEnemyEntity_o *v33; // x26
  System_String_Fields fields; // x8
  _QWORD *v35; // x9
  __int64 klass_low; // x10
  _BOOL4 v37; // w20
  __int64 v38; // x9
  UISprite_o *servantTextStartingSprite; // x24
  System_Collections_Generic_List_object__o *v40; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BalanceConfig_c *v44; // x0
  int32_t v45; // w20
  int32_t v46; // w26
  int v47; // w20
  UnityEngine_GameObject_o *servantInfoPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v52; // x27
  DeckServantData_o *v53; // x28
  System_Int32_array *v54; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v55; // x24
  const MethodInfo *v56; // x3
  UIGrid_o *servantInfoGrid; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_String_Fields v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  System_String_o *v64; // x0
  const MethodInfo *v65; // x5
  const MethodInfo *v66; // [xsp+0h] [xbp-90h]
  int32_t v69; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB20AF & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C6BA08(&StringLiteral_21331/*"line_whiteAlpha"*/);
    sub_1C6BA08(&StringLiteral_15541/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_1C6BA08(&StringLiteral_20676/*"img_txt_Member"*/);
    sub_1C6BA08(&StringLiteral_20677/*"img_txt_Starting"*/);
    byte_4CB20AF = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)viewEnemyEntities,
    (const MethodInfo *)questRestrictionInfo);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15541/*"WAVE_BATTLE_WAVE_INFO"*/, 0);
  wave = this->fields.wave;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wave);
  v69 = maxWave;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  servantTextMemberSprite = System_String__Format_64008100(v17, v18, v19, 0);
  if ( !waveNumLabel )
    goto LABEL_66;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21331/*"line_whiteAlpha"*/, 0);
  if ( this->fields.wave >= 10 )
  {
    servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
    v23 = (UIWidget_o *)this->fields.waveLineSprite;
    isSelectWaveFlag = this->fields.isSelectWaveFlag;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v23 )
      goto LABEL_66;
    v25 = 36;
    if ( !isSelectWaveFlag )
      v25 = 32;
    UIWidget__set_width(
      v23,
      *(_DWORD *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v25),
      0);
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v26;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v26, v28, v29);
  if ( viewEnemyEntities )
  {
    max_length = viewEnemyEntities->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v31 = 0;
        v32 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v31 >= (unsigned int)max_length )
LABEL_67:
            sub_1C6BC68(servantTextMemberSprite);
          v33 = viewEnemyEntities->m_Items[v31];
          if ( !v33 )
            break;
          if ( v33->fields.wave == 1 )
          {
            servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
            if ( !*p_enemyClassIdList )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                    v33->fields.classId,
                    (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
              if ( !*p_enemyClassIdList )
                break;
              classId = (unsigned int)v33->fields.classId;
              fields = servantTextMemberSprite->fields;
              v35 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(servantTextMemberSprite[1].klass);
              if ( !*(_QWORD *)&fields )
                break;
              klass_low = SLODWORD(servantTextMemberSprite[1].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                  classId,
                  *(const MethodInfo_37E3950 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
                *(_DWORD *)(*(_QWORD *)&fields + 4 * klass_low + 32) = classId;
              }
            }
            servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
              servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v32 >= *(_DWORD *)(*(_QWORD *)&servantTextMemberSprite[7].fields + 20LL) )
              goto LABEL_34;
            max_length = viewEnemyEntities->max_length;
          }
          if ( (int)++v31 >= (int)max_length )
            goto LABEL_34;
        }
LABEL_66:
        sub_1C6BC60(servantTextMemberSprite, classId);
      }
    }
  }
LABEL_34:
  v37 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v38 = 16;
  if ( !v37 )
    v38 = 8;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v38);
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20677/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_66;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20676/*"img_txt_Member"*/,
    0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_66;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v40;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantInfoList, (int32_t)v40, v42, v43);
  v44 = BalanceConfig_TypeInfo;
  v45 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  v46 = 0;
  v47 = v44->static_fields->DeckMainMemberMax * (v45 - 1);
  while ( 1 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = BalanceConfig_TypeInfo;
    }
    if ( v46 >= v44->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_66;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0,
                                                   0);
    if ( !servantTextMemberSprite )
      goto LABEL_66;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_66;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_66;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_66;
    if ( (unsigned int)(v47 + v46) >= LODWORD(svts->max_length) )
      goto LABEL_67;
    v52 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_66;
    v53 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v47] + v46);
    v54 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    v55 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C6BC54(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v55,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v56);
    if ( !v52 )
      goto LABEL_66;
    WaveBattleWaveServantInfoItem__SetItem(
      v52,
      v46,
      v53,
      questRestrictionInfo,
      v54,
      v55,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v66);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v52, 0);
    if ( !servantInfoGrid )
      goto LABEL_66;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_66;
    v60 = servantTextMemberSprite->fields;
    v61 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&v60 )
      goto LABEL_66;
    v62 = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)v62 >= *(_DWORD *)(*(_QWORD *)&v60 + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v52,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = *(_QWORD *)&v60 + 8 * v62;
      LODWORD(servantTextMemberSprite[1].klass) = v62 + 1;
      *(_QWORD *)(v63 + 32) = v52;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v52, v58, v59);
    }
    v44 = BalanceConfig_TypeInfo;
    ++v46;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_15478/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v64, v65);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *backGroundObj; // x22
  UILabel_o *clearedLabel; // x22
  UnityEngine_Object_o *MoveToPartyButton; // x21
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_Callback_o *v22; // x22
  EventDelegate_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4CB20B0 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent___c__DisplayClass50_0__SetRestartInfo_b__0__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent___c__DisplayClass50_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_15529/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/);
    byte_4CB20B0 = 1;
  }
  v11 = sub_1C6BC54(WaveBattleWaveInfoComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_31;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = questRestrictionInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)questRestrictionInfo, v16, v17);
  *(_DWORD *)(v11 + 32) = restartWaveSelectMax;
  maskObj = this->fields.maskObj;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15529/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0);
      if ( clearedLabel )
      {
        UILabel__set_text(clearedLabel, (System_String_o *)maskObj, 0);
        if ( this->fields.wave <= restartWave )
        {
          MoveToPartyButton = (UnityEngine_Object_o *)this->fields.MoveToPartyButton;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
            if ( !maskObj )
              goto LABEL_31;
            monitor = (System_Collections_Generic_List_object__o *)maskObj[4].monitor;
            v22 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v22,
              (Il2CppObject *)v11,
              Method_WaveBattleWaveInfoComponent___c__DisplayClass50_0__SetRestartInfo_b__0__,
              0);
            v23 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
            EventDelegate___ctor_49576072(v23, v22, 0);
            if ( !monitor )
              goto LABEL_31;
            items = monitor->fields._items;
            v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++monitor->fields._version;
            if ( !items )
              goto LABEL_31;
            size = monitor->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                monitor,
                (Il2CppObject *)v23,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              monitor->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v23;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
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
    sub_1C6BC60(maskObj, v13);
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
  _BOOL4 isSelectWaveFlag; // w8
  UnityEngine_Object_o *selectFrameSprite; // x26
  UISprite_o *v17; // x26
  UnityEngine_Object_o *startPartyBaseSprite; // x26
  UISprite_o *v19; // x26
  UILabel_o *waveNumLabel; // x26
  System_String_o *v21; // x27
  Il2CppObject *v22; // x28
  Il2CppObject *v23; // x0
  void *enemyTextSprite; // x0
  __int64 v25; // x1
  UISprite_o *waveLineSprite; // x25
  int v27; // w26
  UIWidget_o *v28; // x25
  _BOOL4 v29; // w21
  __int64 v30; // x9
  System_Collections_Generic_List_int__o *v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  _BOOL4 v35; // w21
  __int64 v36; // x9
  System_String_o *v37; // x0
  const MethodInfo *v38; // x5
  UnityEngine_Object_o *startPartyObject; // x22
  UnityEngine_Object_o *startPartyLabel; // x22
  bool v41; // w1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x8
  int32_t size; // w1
  System_Nullable_int__o v44; // x0
  int32_t StartPartyNumber; // w21
  UILabel_o *v46; // x20
  System_String_o *v47; // x22
  Il2CppObject *v48; // x0
  __int64 v52; // [xsp+10h] [xbp-70h] BYREF
  int32_t v53; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB20AD & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_int___ctor__);
    sub_1C6BA08(&Method_System_Nullable_int__get_HasValue__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_20456/*"img_formation_bg_select"*/);
    sub_1C6BA08(&StringLiteral_21331/*"line_whiteAlpha"*/);
    sub_1C6BA08(&StringLiteral_15488/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_1C6BA08(&StringLiteral_20361/*"img_StartParty_base"*/);
    sub_1C6BA08(&StringLiteral_15542/*"WAVE_BATTLE_WAVE_INFO_SWITCH_PARTY"*/);
    sub_1C6BA08(&StringLiteral_20675/*"img_txt_Enemy"*/);
    sub_1C6BA08(&StringLiteral_15539/*"WAVE_BATTLE_START_PARTY"*/);
    byte_4CB20AD = 1;
  }
  isSelectWaveFlag = this->fields.isSelectWaveFlag;
  this->fields.isSwitchPartyBattle = 1;
  this->fields.wave = nowWave;
  if ( isSelectWaveFlag )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)questRestrictionInfo,
      *(const MethodInfo **)&nowWave);
  }
  selectFrameSprite = (UnityEngine_Object_o *)this->fields.selectFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectFrameSprite, 0, 0) )
  {
    v17 = this->fields.selectFrameSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_20456/*"img_formation_bg_select"*/, 0);
  }
  startPartyBaseSprite = (UnityEngine_Object_o *)this->fields.startPartyBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(startPartyBaseSprite, 0, 0) )
  {
    v19 = this->fields.startPartyBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v19, (System_String_o *)StringLiteral_20361/*"img_StartParty_base"*/, 0);
  }
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15542/*"WAVE_BATTLE_WAVE_INFO_SWITCH_PARTY"*/, 0);
  LODWORD(v52) = this->fields.wave;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v53 = maxWave;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  enemyTextSprite = System_String__Format_64008100(v21, v22, v23, 0);
  if ( !waveNumLabel )
    goto LABEL_71;
  UILabel__set_text(waveNumLabel, (System_String_o *)enemyTextSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21331/*"line_whiteAlpha"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.enemyTextSprite, (System_String_o *)StringLiteral_20675/*"img_txt_Enemy"*/, 0);
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !enemyTextSprite )
    goto LABEL_71;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)enemyTextSprite + 840LL))(
    enemyTextSprite,
    *(_QWORD *)(*(_QWORD *)enemyTextSprite + 848LL));
  v27 = nowWave;
  if ( this->fields.wave >= 10 )
  {
    enemyTextSprite = WaveBattleWaveInfoComponent_TypeInfo;
    v28 = (UIWidget_o *)this->fields.waveLineSprite;
    v29 = this->fields.isSelectWaveFlag;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v28 )
      goto LABEL_71;
    v30 = 44;
    if ( !v29 )
      v30 = 40;
    UIWidget__set_width(
      v28,
      *(_DWORD *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v30),
      0);
  }
  v31 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v31, v32, v33);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_71;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v25, viewEnemyEntities, v34);
  }
  v35 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v36 = 16;
  if ( !v35 )
    v36 = 8;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v36);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15488/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v37, v38);
  startPartyObject = (UnityEngine_Object_o *)this->fields.startPartyObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startPartyObject, 0, 0) )
  {
    startPartyLabel = (UnityEngine_Object_o *)this->fields.startPartyLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(startPartyLabel, 0, 0) )
    {
      enemyTextSprite = this->fields.maskObj;
      if ( !enemyTextSprite )
        goto LABEL_71;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)enemyTextSprite, 0)
        && (v27 == restartWave || this->fields.isSelectWaveFlag) )
      {
        if ( userInterruptionQuest
          && (waveInfoList = userInterruptionQuest->fields.waveInfoList) != 0
          && (size = waveInfoList->fields._size,
              v44 = (System_Nullable_int__o)&v52,
              v52 = 0,
              System_Nullable_int____ctor(v44, size, (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__),
              (_BYTE)v52)
          && SHIDWORD(v52) >= v27 )
        {
          StartPartyNumber = UserInterruptionQuestEntity__GetStartPartyNumber(userInterruptionQuest, v27, 0);
        }
        else
        {
          enemyTextSprite = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !enemyTextSprite )
            goto LABEL_71;
          enemyTextSprite = (void *)*((_QWORD *)enemyTextSprite + 19);
          if ( !enemyTextSprite )
            goto LABEL_71;
          if ( *((_DWORD *)enemyTextSprite + 6) >= v27 )
          {
            enemyTextSprite = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)enemyTextSprite,
                                v27 - 1,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
            if ( !enemyTextSprite )
              goto LABEL_71;
            StartPartyNumber = *((_DWORD *)enemyTextSprite + 26);
          }
          else
          {
            StartPartyNumber = 1;
          }
        }
        v46 = this->fields.startPartyLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15539/*"WAVE_BATTLE_START_PARTY"*/, 0);
        v48 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(StartPartyNumber, 0);
        enemyTextSprite = System_String__Format(v47, v48, 0);
        if ( v46 )
        {
          UILabel__set_text(v46, (System_String_o *)enemyTextSprite, 0);
          enemyTextSprite = this->fields.startPartyObject;
          if ( enemyTextSprite )
          {
            v41 = 1;
            goto LABEL_69;
          }
        }
      }
      else
      {
        enemyTextSprite = this->fields.startPartyLabel;
        if ( enemyTextSprite )
        {
          UILabel__set_text((UILabel_o *)enemyTextSprite, string_TypeInfo->static_fields->Empty, 0);
          enemyTextSprite = this->fields.startPartyObject;
          if ( enemyTextSprite )
          {
            v41 = 0;
LABEL_69:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)enemyTextSprite, v41, 0);
            return;
          }
        }
      }
LABEL_71:
      sub_1C6BC60(enemyTextSprite, v25);
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
  _BOOL4 isSelectWaveFlag; // w8
  UILabel_o *waveNumLabel; // x24
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 v19; // x1
  UISprite_o *waveLineSprite; // x21
  System_Collections_Generic_List_int__o *v21; // x21
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  _BOOL4 v25; // w21
  __int64 v26; // x9
  UISprite_o *servantTextStartingSprite; // x21
  System_Collections_Generic_List_object__o *v28; // x21
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  BalanceConfig_c *v32; // x0
  int32_t v33; // w21
  int32_t v34; // w26
  int v35; // w22
  UnityEngine_GameObject_o *servantInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v40; // x27
  DeckServantData_o *v41; // x28
  System_Int32_array *v42; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v43; // x21
  const MethodInfo *v44; // x3
  UIGrid_o *servantInfoGrid; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_Fields fields; // x8
  _QWORD *v49; // x9
  __int64 klass_low; // x10
  __int64 v51; // x8
  UnityEngine_Object_o *MoveToPartyButton; // x21
  UILabel_o *clearedLabel; // x19
  const MethodInfo *v54; // [xsp+0h] [xbp-80h]

  if ( (byte_4CB20AE & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_21331/*"line_whiteAlpha"*/);
    sub_1C6BA08(&StringLiteral_20676/*"img_txt_Member"*/);
    sub_1C6BA08(&StringLiteral_15479/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/);
    sub_1C6BA08(&StringLiteral_20677/*"img_txt_Starting"*/);
    sub_1C6BA08(&StringLiteral_15508/*"WAVE_BATTLE_PARTY_INFO"*/);
    byte_4CB20AE = 1;
  }
  isSelectWaveFlag = this->fields.isSelectWaveFlag;
  this->fields.isSwitchPartyBattle = 1;
  this->fields.wave = nowWave;
  if ( !isSelectWaveFlag )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)questRestrictionInfo,
      *(const MethodInfo **)&nowWave);
  }
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15508/*"WAVE_BATTLE_PARTY_INFO"*/, 0);
  v17 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(this->fields.wave, 0);
  servantTextMemberSprite = System_String__Format(v16, v17, 0);
  if ( !waveNumLabel )
    goto LABEL_54;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21331/*"line_whiteAlpha"*/, 0);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v21;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v21, v23, v24);
  v25 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v26 = 16;
  if ( !v25 )
    v26 = 8;
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v26);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20677/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20676/*"img_txt_Member"*/,
    0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v28;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantInfoList, (int32_t)v28, v30, v31);
  v32 = BalanceConfig_TypeInfo;
  v33 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  v34 = 0;
  v35 = v32->static_fields->DeckMainMemberMax * (v33 - 1);
  while ( 1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BalanceConfig_TypeInfo;
    }
    if ( v34 >= v32->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_54;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0,
                                                   0);
    if ( !servantTextMemberSprite )
      goto LABEL_54;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_54;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_54;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_54;
    if ( (unsigned int)(v35 + v34) >= LODWORD(svts->max_length) )
      sub_1C6BC68(servantTextMemberSprite);
    v40 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_54;
    v41 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v35] + v34);
    v42 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    v43 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C6BC54(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v43,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v44);
    if ( !v40 )
      goto LABEL_54;
    WaveBattleWaveServantInfoItem__SetItem(
      v40,
      v34,
      v41,
      questRestrictionInfo,
      v42,
      v43,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v54);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v40, 0);
    if ( !servantInfoGrid )
      goto LABEL_54;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_54;
    fields = servantTextMemberSprite->fields;
    v49 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_54;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v40,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v51 + 32) = v40;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 32), (int32_t)v40, v46, v47);
    }
    v32 = BalanceConfig_TypeInfo;
    ++v34;
  }
  if ( restartWave >= 1 && userInterruptionQuest )
  {
    if ( this->fields.isSelectWaveFlag )
    {
      MoveToPartyButton = (UnityEngine_Object_o *)this->fields.MoveToPartyButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(MoveToPartyButton, 0, 0) )
      {
        servantTextMemberSprite = (System_String_o *)this->fields.MoveToPartyButton;
        if ( !servantTextMemberSprite )
          goto LABEL_54;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_15479/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/, 0);
      if ( clearedLabel )
      {
        UILabel__set_text(clearedLabel, servantTextMemberSprite, 0);
        return;
      }
    }
LABEL_54:
    sub_1C6BC60(servantTextMemberSprite, v19);
  }
  servantTextMemberSprite = (System_String_o *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_54;
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
  UILabel_o *waveNumLabel; // x25
  System_String_o *v17; // x26
  Il2CppObject *v18; // x27
  Il2CppObject *v19; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 v21; // x1
  UISprite_o *waveLineSprite; // x24
  UIWidget_o *v23; // x24
  UIWidget_o *v24; // x24
  WaveBattleWaveInfoComponent_c *v25; // x0
  float BASE_HEIGHT_RESTART_WAVE_NORMAL; // s0
  WaveBattleWaveInfoComponent_c *v27; // x0
  int32_t v28; // w24
  float *p_BASE_HEIGHT_NORMAL; // x8
  UISprite_o *enemyTextSprite; // x24
  System_Collections_Generic_List_int__o *v31; // x25
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  UISprite_o *servantTextStartingSprite; // x23
  System_Collections_Generic_List_object__o *v37; // x23
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  BalanceConfig_c *v41; // x0
  int32_t v42; // w19
  int32_t v43; // w26
  int v44; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v49; // x27
  DeckServantData_o *v50; // x28
  System_Int32_array *v51; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v52; // x23
  const MethodInfo *v53; // x3
  UIGrid_o *servantInfoGrid; // x23
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_String_Fields fields; // x8
  _QWORD *v58; // x9
  __int64 klass_low; // x10
  __int64 v60; // x8
  System_String_o *v61; // x0
  const MethodInfo *v62; // x5
  const MethodInfo *v63; // [xsp+0h] [xbp-90h]
  int32_t v66; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CB20AB & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_21331/*"line_whiteAlpha"*/);
    sub_1C6BA08(&StringLiteral_15541/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_1C6BA08(&StringLiteral_20676/*"img_txt_Member"*/);
    sub_1C6BA08(&StringLiteral_15488/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_1C6BA08(&StringLiteral_20677/*"img_txt_Starting"*/);
    sub_1C6BA08(&StringLiteral_20675/*"img_txt_Enemy"*/);
    byte_4CB20AB = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)viewEnemyEntities,
    (const MethodInfo *)questRestrictionInfo);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15541/*"WAVE_BATTLE_WAVE_INFO"*/, 0);
  wave = this->fields.wave;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wave);
  v66 = maxWave;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  servantTextMemberSprite = System_String__Format_64008100(v17, v18, v19, 0);
  if ( !waveNumLabel )
    goto LABEL_61;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21331/*"line_whiteAlpha"*/, 0);
  if ( this->fields.wave >= 10 )
  {
    servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
    v23 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v23 )
      goto LABEL_61;
    UIWidget__set_width(v23, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
      v24 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      if ( !v24 )
        goto LABEL_61;
      UIWidget__set_width(
        v24,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0);
    }
  }
  if ( this->fields.isSelectWaveFlag )
  {
    v25 = WaveBattleWaveInfoComponent_TypeInfo;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      v25 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    BASE_HEIGHT_RESTART_WAVE_NORMAL = v25->static_fields->BASE_HEIGHT_RESTART_WAVE_NORMAL;
  }
  else
  {
    v27 = WaveBattleWaveInfoComponent_TypeInfo;
    v28 = this->fields.wave;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      v27 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_NORMAL = &v27->static_fields->BASE_HEIGHT_NORMAL;
    BASE_HEIGHT_RESTART_WAVE_NORMAL = *p_BASE_HEIGHT_NORMAL;
    if ( v28 < restartWave )
      BASE_HEIGHT_RESTART_WAVE_NORMAL = BASE_HEIGHT_RESTART_WAVE_NORMAL + p_BASE_HEIGHT_NORMAL[1];
  }
  this->fields.height = BASE_HEIGHT_RESTART_WAVE_NORMAL;
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20675/*"img_txt_Enemy"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_61;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v31;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v31, v33, v34);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_61;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v21, viewEnemyEntities, v35);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20677/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || (((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
          servantTextMemberSprite,
          servantTextMemberSprite->klass[1]._1.typeMetadataHandle),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_20676/*"img_txt_Member"*/,
          0),
        (servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite) == 0) )
  {
LABEL_61:
    sub_1C6BC60(servantTextMemberSprite, v21);
  }
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v37 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v37;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantInfoList, (int32_t)v37, v39, v40);
  v41 = BalanceConfig_TypeInfo;
  v42 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  v43 = 0;
  v44 = v41->static_fields->DeckMainMemberMax * (v42 - 1);
  while ( 1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = BalanceConfig_TypeInfo;
    }
    if ( v43 >= v41->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_61;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0,
                                                   0);
    if ( !servantTextMemberSprite )
      goto LABEL_61;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_61;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_61;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_61;
    if ( (unsigned int)(v44 + v43) >= LODWORD(svts->max_length) )
      sub_1C6BC68(servantTextMemberSprite);
    v49 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_61;
    v50 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v44] + v43);
    v51 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    v52 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C6BC54(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v52,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v53);
    if ( !v49 )
      goto LABEL_61;
    WaveBattleWaveServantInfoItem__SetItem(
      v49,
      v43,
      v50,
      questRestrictionInfo,
      v51,
      v52,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v63);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v49, 0);
    if ( !servantInfoGrid )
      goto LABEL_61;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_61;
    fields = servantTextMemberSprite->fields;
    v58 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_61;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v49,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v60 + 32) = v49;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v60 + 32), (int32_t)v49, v55, v56);
    }
    v41 = BalanceConfig_TypeInfo;
    ++v43;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_15488/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v61, v62);
}


void WaveBattleWaveInfoComponent__UpdateInterruptionData(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x25
  System_Int32_array *SelectableQuests; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v23; // x25
  BattleSetupInfo_o *v24; // x8
  NetworkManager_ResultCallbackFunc_o *v25; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB20B7 & 1) == 0 )
  {
    sub_1C6BA08(&BattleSetupInfo_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_BattleInterruptionRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__);
    byte_4CB20B7 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0);
  v15 = sub_1C6BC54(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v15, 0);
  if ( !v15 )
    goto LABEL_22;
  *(_DWORD *)(v15 + 16) = warId;
  *(_DWORD *)(v15 + 20) = questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0);
  *(_QWORD *)(v15 + 112) = SelectableQuests;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 112), (int32_t)SelectableQuests, v17, v18);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  *(_DWORD *)(v15 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0);
  *(_DWORD *)(v15 + 124) = 0;
  *(_DWORD *)(v15 + 24) = questPhase;
  *(_WORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v15;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.battleSetupInfo, v15, v20, v21);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v23 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0);
  if ( !v23 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v23, (int32_t)Master_object, 0);
  if ( !battleSetupInfo )
    goto LABEL_22;
  battleSetupInfo->fields.eventId = (int)Master_object;
  Master_object = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0);
  Master_object = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0);
  v24 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  v24->fields.originQuestId = questId;
  v24->fields.isScriptBeforeWarBoard = 0;
  v24->fields.restartWave = waveNum;
  if ( waveNum == waveNumMax )
  {
    WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(this, v14);
    return;
  }
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v25,
                                          (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1C6BC60(Master_object, v14);
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
  UILabel_o *clearedLabel; // x21
  UnityEngine_Object_o *MoveToPartyButton; // x21

  v3 = isAlreadySortie;
  if ( (byte_4CB20B2 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_15479/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/);
    byte_4CB20B2 = 1;
  }
  maskObj = this->fields.maskObj;
  if ( !maskObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskObj, v3, 0);
  clearedLabel = this->fields.clearedLabel;
  if ( v3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15479/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/, 0);
    *(_QWORD *)&isAlreadySortie = maskObj;
  }
  else
  {
    *(_QWORD *)&isAlreadySortie = string_TypeInfo->static_fields->Empty;
  }
  if ( !clearedLabel )
    goto LABEL_16;
  UILabel__set_text(clearedLabel, (System_String_o *)isAlreadySortie, 0);
  MoveToPartyButton = (UnityEngine_Object_o *)this->fields.MoveToPartyButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(MoveToPartyButton, 0, 0) )
  {
    maskObj = this->fields.MoveToPartyButton;
    if ( maskObj )
    {
      UnityEngine_GameObject__SetActive(maskObj, !v3, 0);
      return;
    }
LABEL_16:
    sub_1C6BC60(maskObj, isAlreadySortie);
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
  int32_t wave; // w24
  int32_t v11; // w22
  bool v12; // w23
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

  if ( (byte_4CB20B1 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    byte_4CB20B1 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  wave = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = 0;
  v12 = isInterruption;
  v13 = v9->static_fields->DeckMainMemberMax * (wave - 1);
  while ( 1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( v11 >= v9->static_fields->DeckMainMemberMax )
      break;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_18;
    servantInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantInfoList,
                                                                     v11,
                                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( (unsigned int)(v13 + v11) >= LODWORD(svts->max_length) )
      sub_1C6BC68(servantInfoList);
    v17 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v18 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v13] + v11),
          v19 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__),
          v20 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C6BC54(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v21),
          !v17) )
    {
LABEL_18:
      sub_1C6BC60(servantInfoList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v17, v11, v18, questRestrictionInfo, v19, v20, v12, 0, v22);
    v9 = BalanceConfig_TypeInfo;
    ++v11;
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
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoComponent_o *v11; // x0
  WaveBattleWaveInfoComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB20A9 & 1) == 0 )
  {
    sub_1C6BA08(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4CB20A9 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1C6BFFC(v8);
  WaveBattleWaveInfoComponent__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB20AA & 1) == 0 )
  {
    sub_1C6BA08(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4CB20AA = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1C6BFFC(v8);
  WaveBattleWaveInfoComponent__Awake(v11, v12);
}


void WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9C918;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9C8B8;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = wave;
  v15 = result;
  v13 = idx;
  if ( (byte_4CB20BB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4CB20BB = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v11, callback, object);
}


void WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  if ( (byte_4CB20BC & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CB20BC = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0),
        (v9 = v2->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_1C6BC60(this, method);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4CB20BD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_WaveBattleWaveInfoComponent___c__DisplayClass59_1__OpenRestartWaveConfirmDialog_b__1__);
    sub_1C6BA08(&WaveBattleWaveInfoComponent___c__DisplayClass59_1_TypeInfo);
    byte_4CB20BD = 1;
  }
  v5 = sub_1C6BC54(WaveBattleWaveInfoComponent___c__DisplayClass59_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass59_1__OpenRestartWaveConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C6BC60(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v11, 0);
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

  if ( (byte_4CB20BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB20BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C6BC60(Instance, v4);
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
  if ( (byte_4CB20BF & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass65_0_o *)sub_1C6BA08(&Method_ActionExtensions_Call_int___);
    byte_4CB20BF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_3085EC4 *)Method_ActionExtensions_Call_int___);
}