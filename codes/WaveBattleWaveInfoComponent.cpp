void WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2C666 & 1) == 0 )
  {
    sub_1C93AD4(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4D2C666 = 1;
  }
  static_fields = WaveBattleWaveInfoComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_HEIGHT_NORMAL = xmmword_D01F20;
  static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL = 186.0;
  *(_OWORD *)&static_fields->MAX_ENEMY_INFO = xmmword_D00B40;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
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
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8

  if ( (byte_4D2C65F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
    sub_1C93AD4(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4D2C65F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v6;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyInfoList, (int32_t)v6, v8, v9, v10, v11, v12, v13);
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
            sub_1C93D34(enemyInfoListParent);
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
                    (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              enemyInfoListParent = this->fields.enemyClassIdList;
              if ( !enemyInfoListParent )
                break;
              classId = (unsigned int)v24->fields.classId;
              items = enemyInfoListParent->fields._items;
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
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
                                                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
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
                *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = (__int64)v38 + 8 * v40;
              enemyInfoListParent->fields._size = v40 + 1;
              *(_QWORD *)(v41 + 32) = v31;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
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
        sub_1C93D2C(enemyInfoListParent, classId);
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

  if ( (byte_4D2C664 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2C664 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.wave,
      0,
      callbackFunc->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v5);
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

  if ( (byte_4D2C661 & 1) == 0 )
  {
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_OnClickMask__);
    byte_4D2C661 = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C93AEC(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v2, v2[4]);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int *v22; // x20
  int *v23; // x21
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  int v26; // w22
  int v27; // w23
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  int v34; // w23
  int v35; // w24
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x23
  int v40; // w22
  int v41; // w28
  Il2CppObject *v42; // x20
  System_String_o *v43; // x21
  System_String_o *v44; // x24
  CommonConfirmDialog_ClickDelegate_o *v45; // x25
  int32_t decideTxtSize; // w8
  System_String_o *message; // [xsp+18h] [xbp-68h]

  if ( (byte_4D2C662 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass59_0__OpenRestartWaveConfirmDialog_b__0__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent___c__DisplayClass59_0_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__);
    sub_1C93AD4(&StringLiteral_2786/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_2801/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_2799/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_2788/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_2785/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_2787/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1123/*"00"*/);
    byte_4D2C662 = 1;
  }
  v13 = sub_1C93D20(WaveBattleWaveInfoComponent___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 36) = waveNum;
  v22 = (int *)(v13 + 36);
  *(_DWORD *)(v13 + 32) = warId;
  *(_DWORD *)(v13 + 24) = questId;
  *(_DWORD *)(v13 + 28) = questPhase;
  *(_DWORD *)(v13 + 40) = waveNumMax;
  v23 = (int *)(v13 + 40);
  v24 = Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1C93AEC(Method_WaveBattleWaveInfoComponent_OpenRestartWaveConfirmDialog__);
  v25 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
  v26 = *v22;
  v27 = *v23;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v26 == v27 )
  {
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2787/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0);
    v29 = (Il2CppObject *)System_Int32__ToString_65934220((int)v13 + 36, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
    v30 = System_String__Format(v28, v29, 0);
  }
  else
  {
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2801/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v32 = (Il2CppObject *)System_Int32__ToString_65934220((int)v13 + 36, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
    v33 = (Il2CppObject *)System_Int32__ToString_65934220((int)v13 + 40, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
    v30 = System_String__Format_64467032(v31, v32, v33, 0);
  }
  message = v30;
  v34 = *v22;
  v35 = *v23;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v34 == v35 )
  {
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2786/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0);
  }
  else
  {
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2799/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v37 = (Il2CppObject *)System_Int32__ToString_65934220((int)v13 + 36, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
    v38 = System_String__Format(v36, v37, 0);
  }
  v39 = v38;
  v40 = *v22;
  v41 = *v23;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_2788/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2785/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0);
  v45 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v45,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass59_0__OpenRestartWaveConfirmDialog_b__0__,
    0);
  if ( !v42 )
LABEL_24:
    sub_1C93D2C(Instance, v15);
  if ( v40 == v41 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v42, v43, message, v39, v44, v45, 26, 270, 13.0, decideTxtSize, 1, 0);
}


void WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
        WaveBattleWaveInfoComponent_o *this,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  UILabel_o *clearedLabel; // x0

  clearedLabel = this->fields.clearedLabel;
  if ( !clearedLabel || (UILabel__set_maxLineCount(clearedLabel, 0, 0), (clearedLabel = this->fields.clearedLabel) == 0) )
    sub_1C93D2C(clearedLabel, overwriteLabel);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v22; // w2
  int v23; // w8
  EventDelegate_Callback_o *v24; // x21
  EventDelegate_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Array_o *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x0

  if ( (byte_4D2C665 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass65_0__OverwriteMoveToPartyButton_b__0__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent___c__DisplayClass65_0_TypeInfo);
    byte_4D2C665 = 1;
  }
  v5 = sub_1C93D20(WaveBattleWaveInfoComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isSwitchPartyBattle )
    return;
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_19;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
        v22 = *((_DWORD *)monitor + 6);
        v23 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v23;
        if ( v22 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v22, 0);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v24 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass65_0__OverwriteMoveToPartyButton_b__0__,
          0);
        v25 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
        EventDelegate___ctor_49997180(v25, v24, 0);
        if ( monitor )
        {
          v32 = monitor[2];
          v33 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++*((_DWORD *)monitor + 7);
          if ( v32 )
          {
            v34 = *((int *)monitor + 6);
            if ( (unsigned int)v34 >= LODWORD(v32[1].monitor) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)monitor,
                (Il2CppObject *)v25,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = (__int64)v32 + 8 * v34;
              *((_DWORD *)monitor + 6) = v34 + 1;
              *(_QWORD *)(v35 + 32) = v25;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v25, v26, v27, v28, v29, v30, v31);
            }
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1C93D2C(MoveToPartyButton, v7);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x3

  if ( (byte_4D2C658 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_21510/*"line_whiteAlpha"*/);
    sub_1C93AD4(&StringLiteral_15605/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/);
    byte_4D2C658 = 1;
  }
  this->fields.wave = nowWave;
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskObj = LocalizationManager__Get((System_String_o *)StringLiteral_15605/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/, 0);
  if ( !waveNumLabel )
    goto LABEL_14;
  UILabel__set_text(waveNumLabel, maskObj, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21510/*"line_whiteAlpha"*/, 0);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyClassIdList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_14;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v11, viewEnemyEntities, v20);
  }
  maskObj = (System_String_o *)this->fields.maskObj;
  if ( !maskObj )
LABEL_14:
    sub_1C93D2C(maskObj, v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObj, 0, 0);
}


void WaveBattleWaveInfoComponent__SetEnemyInfo_35294264(
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
  if ( (byte_4D2C660 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__);
    this = (WaveBattleWaveInfoComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
    byte_4D2C660 = 1;
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
            sub_1C93D34(this);
          v8 = viewEnemyEntities->m_Items[v6];
          if ( !v8 )
LABEL_16:
            sub_1C93D2C(this, viewEnemyEntities);
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
                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
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
    sub_1C93D2C(0, active);
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
    sub_1C93D2C(0, active);
  UnityEngine_GameObject__SetActive(MoveToPartyButton, active, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  il2cpp_array_size_t max_length; // x8
  __int64 v35; // x20
  int v36; // w25
  ViewWaveEnemyEntity_o *v37; // x26
  System_String_Fields fields; // x8
  _QWORD *v39; // x9
  __int64 klass_low; // x10
  _BOOL4 v41; // w20
  __int64 v42; // x9
  UISprite_o *servantTextStartingSprite; // x24
  System_Collections_Generic_List_object__o *v44; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  BalanceConfig_c *v52; // x0
  int32_t v53; // w20
  int32_t v54; // w26
  int v55; // w20
  UnityEngine_GameObject_o *servantInfoPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v60; // x27
  DeckServantData_o *v61; // x28
  System_Int32_array *v62; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v63; // x24
  const MethodInfo *v64; // x3
  UIGrid_o *servantInfoGrid; // x24
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_String_Fields v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  System_String_o *v76; // x0
  const MethodInfo *v77; // x5
  const MethodInfo *v78; // [xsp+0h] [xbp-90h]
  int32_t v81; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D2C65B & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_15580/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C93AD4(&StringLiteral_21510/*"line_whiteAlpha"*/);
    sub_1C93AD4(&StringLiteral_15643/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_1C93AD4(&StringLiteral_20844/*"img_txt_Member"*/);
    sub_1C93AD4(&StringLiteral_20845/*"img_txt_Starting"*/);
    byte_4D2C65B = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)viewEnemyEntities,
    (int32_t)questRestrictionInfo,
    *(System_String_o **)&nowWave,
    maxWave,
    (int64_t)callback,
    *(System_String_o **)&restartWave);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15643/*"WAVE_BATTLE_WAVE_INFO"*/, 0);
  wave = this->fields.wave;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wave);
  v81 = maxWave;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  servantTextMemberSprite = System_String__Format_64467032(v17, v18, v19, 0);
  if ( !waveNumLabel )
    goto LABEL_66;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21510/*"line_whiteAlpha"*/, 0);
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
  v26 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v26;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyClassIdList, (int32_t)v26, v28, v29, v30, v31, v32, v33);
  if ( viewEnemyEntities )
  {
    max_length = viewEnemyEntities->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v35 = 0;
        v36 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v35 >= (unsigned int)max_length )
LABEL_67:
            sub_1C93D34(servantTextMemberSprite);
          v37 = viewEnemyEntities->m_Items[v35];
          if ( !v37 )
            break;
          if ( v37->fields.wave == 1 )
          {
            servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
            if ( !*p_enemyClassIdList )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                    v37->fields.classId,
                    (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
              if ( !*p_enemyClassIdList )
                break;
              classId = (unsigned int)v37->fields.classId;
              fields = servantTextMemberSprite->fields;
              v39 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(servantTextMemberSprite[1].klass);
              if ( !*(_QWORD *)&fields )
                break;
              klass_low = SLODWORD(servantTextMemberSprite[1].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                  classId,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
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
            if ( ++v36 >= *(_DWORD *)(*(_QWORD *)&servantTextMemberSprite[7].fields + 20LL) )
              goto LABEL_34;
            max_length = viewEnemyEntities->max_length;
          }
          if ( (int)++v35 >= (int)max_length )
            goto LABEL_34;
        }
LABEL_66:
        sub_1C93D2C(servantTextMemberSprite, classId);
      }
    }
  }
LABEL_34:
  v41 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v42 = 16;
  if ( !v41 )
    v42 = 8;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v42);
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20845/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_66;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20844/*"img_txt_Member"*/,
    0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_66;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v44 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v44;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantInfoList, (int32_t)v44, v46, v47, v48, v49, v50, v51);
  v52 = BalanceConfig_TypeInfo;
  v53 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  v54 = 0;
  v55 = v52->static_fields->DeckMainMemberMax * (v53 - 1);
  while ( 1 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = BalanceConfig_TypeInfo;
    }
    if ( v54 >= v52->static_fields->DeckMainMemberMax )
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
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_66;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_66;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_66;
    if ( (unsigned int)(v55 + v54) >= LODWORD(svts->max_length) )
      goto LABEL_67;
    v60 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_66;
    v61 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v55] + v54);
    v62 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    v63 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C93D20(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v63,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v64);
    if ( !v60 )
      goto LABEL_66;
    WaveBattleWaveServantInfoItem__SetItem(
      v60,
      v54,
      v61,
      questRestrictionInfo,
      v62,
      v63,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v78);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v60, 0);
    if ( !servantInfoGrid )
      goto LABEL_66;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_66;
    v72 = servantTextMemberSprite->fields;
    v73 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&v72 )
      goto LABEL_66;
    v74 = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)v74 >= *(_DWORD *)(*(_QWORD *)&v72 + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v60,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = *(_QWORD *)&v72 + 8 * v74;
      LODWORD(servantTextMemberSprite[1].klass) = v74 + 1;
      *(_QWORD *)(v75 + 32) = v60;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 32), (int32_t)v60, v66, v67, v68, v69, v70, v71);
    }
    v52 = BalanceConfig_TypeInfo;
    ++v54;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15580/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v76, v77);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Object_o *backGroundObj; // x22
  UILabel_o *clearedLabel; // x22
  UnityEngine_Object_o *MoveToPartyButton; // x21
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_Callback_o *v30; // x22
  EventDelegate_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4D2C65C & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass50_0__SetRestartInfo_b__0__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent___c__DisplayClass50_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_15631/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/);
    byte_4D2C65C = 1;
  }
  v11 = sub_1C93D20(WaveBattleWaveInfoComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_31;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = questRestrictionInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)questRestrictionInfo, v20, v21, v22, v23, v24, v25);
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
      maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15631/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0);
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
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
            if ( !maskObj )
              goto LABEL_31;
            monitor = (System_Collections_Generic_List_object__o *)maskObj[4].monitor;
            v30 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v30,
              (Il2CppObject *)v11,
              Method_WaveBattleWaveInfoComponent___c__DisplayClass50_0__SetRestartInfo_b__0__,
              0);
            v31 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
            EventDelegate___ctor_49997180(v31, v30, 0);
            if ( !monitor )
              goto LABEL_31;
            items = monitor->fields._items;
            v39 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++monitor->fields._version;
            if ( !items )
              goto LABEL_31;
            size = monitor->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                monitor,
                (Il2CppObject *)v31,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              monitor->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v31;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
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
    sub_1C93D2C(maskObj, v13);
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
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x3
  _BOOL4 v39; // w21
  __int64 v40; // x9
  System_String_o *v41; // x0
  const MethodInfo *v42; // x5
  UnityEngine_Object_o *startPartyObject; // x22
  UnityEngine_Object_o *startPartyLabel; // x22
  bool v45; // w1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *waveInfoList; // x8
  int32_t size; // w1
  int32_t StartPartyNumber; // w21
  UILabel_o *v49; // x20
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  __int64 v55; // [xsp+10h] [xbp-70h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D2C659 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_20618/*"img_formation_bg_select"*/);
    sub_1C93AD4(&StringLiteral_21510/*"line_whiteAlpha"*/);
    sub_1C93AD4(&StringLiteral_15590/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_1C93AD4(&StringLiteral_20523/*"img_StartParty_base"*/);
    sub_1C93AD4(&StringLiteral_15644/*"WAVE_BATTLE_WAVE_INFO_SWITCH_PARTY"*/);
    sub_1C93AD4(&StringLiteral_20843/*"img_txt_Enemy"*/);
    sub_1C93AD4(&StringLiteral_15641/*"WAVE_BATTLE_START_PARTY"*/);
    byte_4D2C659 = 1;
  }
  isSelectWaveFlag = this->fields.isSelectWaveFlag;
  this->fields.isSwitchPartyBattle = 1;
  this->fields.wave = nowWave;
  if ( isSelectWaveFlag )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)questRestrictionInfo,
      nowWave,
      *(System_String_o **)&maxWave,
      (int32_t)callback,
      *(int64_t *)&restartWave,
      *(System_String_o **)&restartWaveSelectMax);
  }
  selectFrameSprite = (UnityEngine_Object_o *)this->fields.selectFrameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectFrameSprite, 0, 0) )
  {
    v17 = this->fields.selectFrameSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_20618/*"img_formation_bg_select"*/, 0);
  }
  startPartyBaseSprite = (UnityEngine_Object_o *)this->fields.startPartyBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(startPartyBaseSprite, 0, 0) )
  {
    v19 = this->fields.startPartyBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(v19, (System_String_o *)StringLiteral_20523/*"img_StartParty_base"*/, 0);
  }
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15644/*"WAVE_BATTLE_WAVE_INFO_SWITCH_PARTY"*/, 0);
  LODWORD(v55) = this->fields.wave;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  v56 = maxWave;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
  enemyTextSprite = System_String__Format_64467032(v21, v22, v23, 0);
  if ( !waveNumLabel )
    goto LABEL_71;
  UILabel__set_text(waveNumLabel, (System_String_o *)enemyTextSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21510/*"line_whiteAlpha"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.enemyTextSprite, (System_String_o *)StringLiteral_20843/*"img_txt_Enemy"*/, 0);
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
  v31 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyClassIdList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_71;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v25, viewEnemyEntities, v38);
  }
  v39 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v40 = 16;
  if ( !v39 )
    v40 = 8;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v40);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15590/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v41, v42);
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
              v55 = 0,
              System_Nullable_int____ctor(
                (System_Nullable_int__o)&v55,
                size,
                (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__),
              (_BYTE)v55)
          && SHIDWORD(v55) >= v27 )
        {
          StartPartyNumber = UserInterruptionQuestEntity__GetStartPartyNumber(userInterruptionQuest, v27, 0);
        }
        else
        {
          enemyTextSprite = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !enemyTextSprite )
            goto LABEL_71;
          enemyTextSprite = (void *)*((_QWORD *)enemyTextSprite + 22);
          if ( !enemyTextSprite )
            goto LABEL_71;
          if ( *((_DWORD *)enemyTextSprite + 6) >= v27 )
          {
            enemyTextSprite = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)enemyTextSprite,
                                v27 - 1,
                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
            if ( !enemyTextSprite )
              goto LABEL_71;
            StartPartyNumber = *((_DWORD *)enemyTextSprite + 26);
          }
          else
          {
            StartPartyNumber = 1;
          }
        }
        v49 = this->fields.startPartyLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_15641/*"WAVE_BATTLE_START_PARTY"*/, 0);
        v51 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(StartPartyNumber, 0);
        enemyTextSprite = System_String__Format(v50, v51, 0);
        if ( v49 )
        {
          UILabel__set_text(v49, (System_String_o *)enemyTextSprite, 0);
          enemyTextSprite = this->fields.startPartyObject;
          if ( enemyTextSprite )
          {
            v45 = 1;
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
            v45 = 0;
LABEL_69:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)enemyTextSprite, v45, 0);
            return;
          }
        }
      }
LABEL_71:
      sub_1C93D2C(enemyTextSprite, v25);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  _BOOL4 v29; // w21
  __int64 v30; // x9
  UISprite_o *servantTextStartingSprite; // x21
  System_Collections_Generic_List_object__o *v32; // x21
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  BalanceConfig_c *v40; // x0
  int32_t v41; // w21
  int32_t v42; // w26
  int v43; // w22
  UnityEngine_GameObject_o *servantInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v48; // x27
  DeckServantData_o *v49; // x28
  System_Int32_array *v50; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v51; // x21
  const MethodInfo *v52; // x3
  UIGrid_o *servantInfoGrid; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_String_Fields fields; // x8
  _QWORD *v61; // x9
  __int64 klass_low; // x10
  __int64 v63; // x8
  UnityEngine_Object_o *MoveToPartyButton; // x21
  UILabel_o *clearedLabel; // x19
  const MethodInfo *v66; // [xsp+0h] [xbp-80h]

  if ( (byte_4D2C65A & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_21510/*"line_whiteAlpha"*/);
    sub_1C93AD4(&StringLiteral_20844/*"img_txt_Member"*/);
    sub_1C93AD4(&StringLiteral_15581/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/);
    sub_1C93AD4(&StringLiteral_20845/*"img_txt_Starting"*/);
    sub_1C93AD4(&StringLiteral_15610/*"WAVE_BATTLE_PARTY_INFO"*/);
    byte_4D2C65A = 1;
  }
  isSelectWaveFlag = this->fields.isSelectWaveFlag;
  this->fields.isSwitchPartyBattle = 1;
  this->fields.wave = nowWave;
  if ( !isSelectWaveFlag )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)questRestrictionInfo,
      nowWave,
      *(System_String_o **)&maxWave,
      (int32_t)callback,
      *(int64_t *)&restartWave,
      *(System_String_o **)&restartWaveSelectMax);
  }
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15610/*"WAVE_BATTLE_PARTY_INFO"*/, 0);
  v17 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(this->fields.wave, 0);
  servantTextMemberSprite = System_String__Format(v16, v17, 0);
  if ( !waveNumLabel )
    goto LABEL_54;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21510/*"line_whiteAlpha"*/, 0);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v21;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyClassIdList, (int32_t)v21, v23, v24, v25, v26, v27, v28);
  v29 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v30 = 16;
  if ( !v29 )
    v30 = 8;
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v30);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20845/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20844/*"img_txt_Member"*/,
    0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v32;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantInfoList, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = BalanceConfig_TypeInfo;
  v41 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v42 = 0;
  v43 = v40->static_fields->DeckMainMemberMax * (v41 - 1);
  while ( 1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = BalanceConfig_TypeInfo;
    }
    if ( v42 >= v40->static_fields->DeckMainMemberMax )
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
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_54;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_54;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_54;
    if ( (unsigned int)(v43 + v42) >= LODWORD(svts->max_length) )
      sub_1C93D34(servantTextMemberSprite);
    v48 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_54;
    v49 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v43] + v42);
    v50 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    v51 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C93D20(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v51,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v52);
    if ( !v48 )
      goto LABEL_54;
    WaveBattleWaveServantInfoItem__SetItem(
      v48,
      v42,
      v49,
      questRestrictionInfo,
      v50,
      v51,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v66);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v48, 0);
    if ( !servantInfoGrid )
      goto LABEL_54;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_54;
    fields = servantTextMemberSprite->fields;
    v61 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_54;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v48,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v63 + 32) = v48;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 32), (int32_t)v48, v54, v55, v56, v57, v58, v59);
    }
    v40 = BalanceConfig_TypeInfo;
    ++v42;
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
      servantTextMemberSprite = LocalizationManager__Get((System_String_o *)StringLiteral_15581/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/, 0);
      if ( clearedLabel )
      {
        UILabel__set_text(clearedLabel, servantTextMemberSprite, 0);
        return;
      }
    }
LABEL_54:
    sub_1C93D2C(servantTextMemberSprite, v19);
  }
  servantTextMemberSprite = (System_String_o *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  const MethodInfo *v39; // x3
  UISprite_o *servantTextStartingSprite; // x23
  System_Collections_Generic_List_object__o *v41; // x23
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  BalanceConfig_c *v49; // x0
  int32_t v50; // w19
  int32_t v51; // w26
  int v52; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v57; // x27
  DeckServantData_o *v58; // x28
  System_Int32_array *v59; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v60; // x23
  const MethodInfo *v61; // x3
  UIGrid_o *servantInfoGrid; // x23
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_String_Fields fields; // x8
  _QWORD *v70; // x9
  __int64 klass_low; // x10
  __int64 v72; // x8
  System_String_o *v73; // x0
  const MethodInfo *v74; // x5
  const MethodInfo *v75; // [xsp+0h] [xbp-90h]
  int32_t v78; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D2C657 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_21510/*"line_whiteAlpha"*/);
    sub_1C93AD4(&StringLiteral_15643/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_1C93AD4(&StringLiteral_20844/*"img_txt_Member"*/);
    sub_1C93AD4(&StringLiteral_15590/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_1C93AD4(&StringLiteral_20845/*"img_txt_Starting"*/);
    sub_1C93AD4(&StringLiteral_20843/*"img_txt_Enemy"*/);
    byte_4D2C657 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)viewEnemyEntities,
    (int32_t)questRestrictionInfo,
    *(System_String_o **)&nowWave,
    maxWave,
    (int64_t)callback,
    *(System_String_o **)&restartWave);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15643/*"WAVE_BATTLE_WAVE_INFO"*/, 0);
  wave = this->fields.wave;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wave);
  v78 = maxWave;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  servantTextMemberSprite = System_String__Format_64467032(v17, v18, v19, 0);
  if ( !waveNumLabel )
    goto LABEL_61;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21510/*"line_whiteAlpha"*/, 0);
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
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20843/*"img_txt_Enemy"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_61;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v31;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyClassIdList, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  if ( viewEnemyEntities && viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_61;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v21, viewEnemyEntities, v39);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20845/*"img_txt_Starting"*/, 0);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || (((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
          servantTextMemberSprite,
          servantTextMemberSprite->klass[1]._1.typeMetadataHandle),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_20844/*"img_txt_Member"*/,
          0),
        (servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite) == 0) )
  {
LABEL_61:
    sub_1C93D2C(servantTextMemberSprite, v21);
  }
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.generic_class)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.typeMetadataHandle);
  v41 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v41;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantInfoList, (int32_t)v41, v43, v44, v45, v46, v47, v48);
  v49 = BalanceConfig_TypeInfo;
  v50 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  v51 = 0;
  v52 = v49->static_fields->DeckMainMemberMax * (v50 - 1);
  while ( 1 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = BalanceConfig_TypeInfo;
    }
    if ( v51 >= v49->static_fields->DeckMainMemberMax )
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
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_61;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_61;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_61;
    if ( (unsigned int)(v52 + v51) >= LODWORD(svts->max_length) )
      sub_1C93D34(servantTextMemberSprite);
    v57 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_61;
    v58 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v52] + v51);
    v59 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    v60 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C93D20(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v60,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v61);
    if ( !v57 )
      goto LABEL_61;
    WaveBattleWaveServantInfoItem__SetItem(
      v57,
      v51,
      v58,
      questRestrictionInfo,
      v59,
      v60,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v75);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v57, 0);
    if ( !servantInfoGrid )
      goto LABEL_61;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_61;
    fields = servantTextMemberSprite->fields;
    v70 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_61;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v57,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v72 + 32) = v57;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v72 + 32), (int32_t)v57, v63, v64, v65, v66, v67, v68);
    }
    v49 = BalanceConfig_TypeInfo;
    ++v51;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15590/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v73, v74);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v31; // x25
  BattleSetupInfo_o *v32; // x8
  NetworkManager_ResultCallbackFunc_o *v33; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2C663 & 1) == 0 )
  {
    sub_1C93AD4(&BattleSetupInfo_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_BattleInterruptionRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__);
    byte_4D2C663 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0);
  v15 = sub_1C93D20(BattleSetupInfo_TypeInfo);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 112), (int32_t)SelectableQuests, v17, v18, v19, v20, v21, v22);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.battleSetupInfo, v15, v24, v25, v26, v27, v28, v29);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v31 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0);
  if ( !v31 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v31, (int32_t)Master_object, 0);
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
  v32 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  v32->fields.originQuestId = questId;
  v32->fields.isScriptBeforeWarBoard = 0;
  v32->fields.restartWave = waveNum;
  if ( waveNum == waveNumMax )
  {
    WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(this, v14);
    return;
  }
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v33,
                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1C93D2C(Master_object, v14);
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
  if ( (byte_4D2C65E & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_15581/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/);
    byte_4D2C65E = 1;
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
    maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15581/*"WAVE_BATTLE_ALREADY_SORTIE_NOT_EDIT"*/, 0);
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
    sub_1C93D2C(maskObj, isAlreadySortie);
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

  if ( (byte_4D2C65D & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    byte_4D2C65D = 1;
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
                                                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( (unsigned int)(v13 + v11) >= LODWORD(svts->max_length) )
      sub_1C93D34(servantInfoList);
    v17 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v18 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v13] + v11),
          v19 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__),
          v20 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C93D20(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v21),
          !v17) )
    {
LABEL_18:
      sub_1C93D2C(servantInfoList, deckEntity);
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

  if ( (byte_4D2C655 & 1) == 0 )
  {
    sub_1C93AD4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4D2C655 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1C940C8(v8);
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

  if ( (byte_4D2C656 & 1) == 0 )
  {
    sub_1C93AD4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4D2C656 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1C940C8(v8);
  WaveBattleWaveInfoComponent__Awake(v11, v12);
}


void WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3738;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC36D8;
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
  if ( (byte_4D2C667 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4D2C667 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return sub_1C93A88(this, v11, callback, object);
}


void WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  if ( (byte_4D2C668 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D2C668 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass50_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0),
        (v9 = v2->fields.__4__this) == 0)
    || !_4__this )
  {
    sub_1C93D2C(this, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4D2C669 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_WaveBattleWaveInfoComponent___c__DisplayClass59_1__OpenRestartWaveConfirmDialog_b__1__);
    sub_1C93AD4(&WaveBattleWaveInfoComponent___c__DisplayClass59_1_TypeInfo);
    byte_4D2C669 = 1;
  }
  v5 = sub_1C93D20(WaveBattleWaveInfoComponent___c__DisplayClass59_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass59_1__OpenRestartWaveConfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31581328((CommonUI_o *)Instance, v15, 0);
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

  if ( (byte_4D2C66A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C66A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C93D2C(Instance, v4);
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
  if ( (byte_4D2C66B & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass65_0_o *)sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    byte_4D2C66B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
}