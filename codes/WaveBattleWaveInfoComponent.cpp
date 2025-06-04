void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct WaveBattleWaveInfoComponent_StaticFields *static_fields; // x8

  if ( (byte_4AFDE11 & 1) == 0 )
  {
    sub_1BC3008(&WaveBattleWaveInfoComponent_TypeInfo, v1);
    byte_4AFDE11 = 1;
  }
  static_fields = WaveBattleWaveInfoComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_HEIGHT_NORMAL = xmmword_BDF900;
  static_fields->BASE_HEIGHT_RESTART_WAVE_SPECIAL = 186.0;
  *(_OWORD *)&static_fields->MAX_ENEMY_INFO = xmmword_BDE5E0;
  static_fields->PARTY_LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE = 272;
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
  System_Collections_Generic_List_object__o *v14; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  __int64 size; // x2
  int v22; // w9
  __int64 v23; // x8
  struct System_Collections_Generic_List_int__o *enemyClassIdList; // x9
  int v25; // w10
  __int64 v26; // x25
  int32_t v27; // w22
  ViewWaveEnemyEntity_o *v28; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  Il2CppObject *v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8

  if ( (byte_4AFDE0A & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___, *(_QWORD *)&questId);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v12);
    sub_1BC3008(&WaveBattleWaveInfoComponent_TypeInfo, v13);
    byte_4AFDE0A = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v14;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enemyInfoList, (int32_t)v14, v16, v17);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = (unsigned int)enemyInfoList->fields._size;
  v22 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v22;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)enemyInfoList->fields._items, 0, size, 0LL);
  if ( viewEnemyEntities )
  {
    v23 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v23 )
    {
      enemyClassIdList = this->fields.enemyClassIdList;
      if ( !enemyClassIdList )
        goto LABEL_38;
      v25 = enemyClassIdList->fields._version + 1;
      enemyClassIdList->fields._size = 0;
      enemyClassIdList->fields._version = v25;
      if ( (int)v23 >= 1 )
      {
        v26 = 0LL;
        v27 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v26 >= (unsigned int)v23 )
            sub_1BC326C(enemyInfoListParent, classId, size);
          v28 = viewEnemyEntities->m_Items[v26];
          if ( !v28 )
            break;
          if ( v28->fields.wave == this->fields.wave )
          {
            enemyInfoListParent = this->fields.enemyClassIdList;
            if ( !enemyInfoListParent )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    enemyInfoListParent,
                    v28->fields.classId,
                    (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              enemyInfoListParent = this->fields.enemyClassIdList;
              if ( !enemyInfoListParent )
                break;
              classId = (unsigned int)v28->fields.classId;
              items = enemyInfoListParent->fields._items;
              v30 = Method_System_Collections_Generic_List_int__Add__;
              ++enemyInfoListParent->fields._version;
              if ( !items )
                break;
              v31 = enemyInfoListParent->fields._size;
              if ( (unsigned int)v31 >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  enemyInfoListParent,
                  classId,
                  *(const MethodInfo_3683E1C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                enemyInfoListParent->fields._size = v31 + 1;
                items->m_Items[v31 + 1] = classId;
              }
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)this->fields.enemyInfoListParent;
            if ( !enemyInfoListParent )
              break;
            enemyInfoPrefab = this->fields.enemyInfoPrefab;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)enemyInfoListParent, 0LL);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)BaseMonoBehaviour__createObject(
                                                                              (BaseMonoBehaviour_o *)this,
                                                                              enemyInfoPrefab,
                                                                              transform,
                                                                              0LL,
                                                                              0LL);
            if ( !enemyInfoListParent )
              break;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)enemyInfoListParent,
                                                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
            if ( !enemyInfoListParent )
              break;
            enemyInfoGrid = this->fields.enemyInfoGrid;
            v35 = (Il2CppObject *)enemyInfoListParent;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)enemyInfoListParent,
                                                                              0LL);
            if ( !enemyInfoGrid )
              break;
            UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoListParent, 0LL);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)*p_enemyInfoList;
            if ( !*p_enemyInfoList )
              break;
            v38 = enemyInfoListParent->fields._items;
            v39 = Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__;
            ++enemyInfoListParent->fields._version;
            if ( !v38 )
              break;
            v40 = enemyInfoListParent->fields._size;
            if ( (unsigned int)v40 >= v38->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)enemyInfoListParent,
                v35,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = (__int64)v38 + 8 * v40;
              enemyInfoListParent->fields._size = v40 + 1;
              *(_QWORD *)(v41 + 32) = v35;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v35, v36, v37);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v27 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 20LL) )
              return v27;
            v23 = *(_QWORD *)&viewEnemyEntities->max_length;
          }
          if ( (int)++v26 >= (int)v23 )
            return v27;
        }
LABEL_38:
        sub_1BC3264(enemyInfoListParent, classId);
      }
    }
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(
        WaveBattleWaveInfoComponent_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4AFDE0F & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4AFDE0F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.wave,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v5);
  AvalonSceneManager__pushScene(
    (AvalonSceneManager_o *)Instance,
    35,
    1,
    (Il2CppObject *)this->fields.battleSetupInfo,
    0LL);
}


float __fastcall WaveBattleWaveInfoComponent__GetHeight(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.height;
}


bool __fastcall WaveBattleWaveInfoComponent__IsSpecifiedWave(
        WaveBattleWaveInfoComponent_o *this,
        int32_t specifiedWave,
        const MethodInfo *method)
{
  return this->fields.wave == specifiedWave;
}


void __fastcall WaveBattleWaveInfoComponent__OnClickMask(WaveBattleWaveInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4AFDE0C & 1) == 0 )
  {
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent_OnClickMask__, method);
    byte_4AFDE0C = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BC3020(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
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
  __int64 v13; // x1
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
  __int64 v25; // x19
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int *v30; // x20
  int *v31; // x21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  int v34; // w22
  int v35; // w23
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x22
  Il2CppObject *v40; // x23
  Il2CppObject *v41; // x0
  int v42; // w23
  int v43; // w24
  System_String_o *v44; // x23
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x23
  int v48; // w22
  int v49; // w28
  Il2CppObject *v50; // x20
  System_String_o *v51; // x21
  System_String_o *v52; // x24
  CommonConfirmDialog_ClickDelegate_o *v53; // x25
  int32_t decideTxtSize; // w8
  System_String_o *message; // [xsp+18h] [xbp-68h]

  if ( (byte_4AFDE0D & 1) == 0 )
  {
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent___c__DisplayClass47_0__OnClickWave_b__0__, v15);
    sub_1BC3008(&WaveBattleWaveInfoComponent___c__DisplayClass47_0_TypeInfo, v16);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent_OnClickWave__, v17);
    sub_1BC3008(&StringLiteral_2759/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, v18);
    sub_1BC3008(&StringLiteral_2774/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v19);
    sub_1BC3008(&StringLiteral_2772/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v20);
    sub_1BC3008(&StringLiteral_2761/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, v21);
    sub_1BC3008(&StringLiteral_2758/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, v22);
    sub_1BC3008(&StringLiteral_2760/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, v23);
    sub_1BC3008(&StringLiteral_1120/*"00"*/, v24);
    byte_4AFDE0D = 1;
  }
  v25 = sub_1BC3254(WaveBattleWaveInfoComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_24;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  *(_DWORD *)(v25 + 36) = waveNum;
  v30 = (int *)(v25 + 36);
  *(_DWORD *)(v25 + 32) = warId;
  *(_DWORD *)(v25 + 24) = questId;
  *(_DWORD *)(v25 + 28) = questPhase;
  *(_DWORD *)(v25 + 40) = waveNumMax;
  v31 = (int *)(v25 + 40);
  v32 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1BC3020(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v33 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
  v34 = *v30;
  v35 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v34 == v35 )
  {
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2760/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v37 = (Il2CppObject *)System_Int32__ToString_63857360((int)v25 + 36, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
    v38 = System_String__Format(v36, v37, 0LL);
  }
  else
  {
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2774/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v40 = (Il2CppObject *)System_Int32__ToString_63857360((int)v25 + 36, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
    v41 = (Il2CppObject *)System_Int32__ToString_63857360((int)v25 + 40, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
    v38 = System_String__Format_62389940(v39, v40, v41, 0LL);
  }
  message = v38;
  v42 = *v30;
  v43 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v42 == v43 )
  {
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2759/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0LL);
  }
  else
  {
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2772/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v45 = (Il2CppObject *)System_Int32__ToString_63857360((int)v25 + 36, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
    v46 = System_String__Format(v44, v45, 0LL);
  }
  v47 = v46;
  v48 = *v30;
  v49 = *v31;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2761/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0LL);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2758/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v53,
    (Il2CppObject *)v25,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass47_0__OnClickWave_b__0__,
    0LL);
  if ( !v50 )
LABEL_24:
    sub_1BC3264(Instance, v27);
  if ( v48 == v49 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)v50,
    v51,
    message,
    v47,
    v52,
    v53,
    26,
    280,
    13.0,
    decideTxtSize,
    1,
    0LL);
}


void __fastcall WaveBattleWaveInfoComponent__OnSelectWavePartyList(
        WaveBattleWaveInfoComponent_o *this,
        int32_t result,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      (unsigned int)this->fields.wave,
      (unsigned int)idx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
        WaveBattleWaveInfoComponent_o *this,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  UILabel_o *clearedLabel; // x0

  clearedLabel = this->fields.clearedLabel;
  if ( !clearedLabel
    || (UILabel__set_maxLineCount(clearedLabel, 0, 0LL), (clearedLabel = this->fields.clearedLabel) == 0LL) )
  {
    sub_1BC3264(clearedLabel, overwriteLabel);
  }
  UILabel__set_text(clearedLabel, overwriteLabel, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoComponent_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  UnityEngine_GameObject_o *MoveToPartyButton; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v21; // w2
  int v22; // w8
  EventDelegate_Callback_o *v23; // x21
  EventDelegate_o *v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Array_o *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x0

  if ( (byte_4AFDE10 & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, callback);
    sub_1BC3008(&EventDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent___c__DisplayClass53_0__OverwriteMoveToPartyButton_b__0__, v10);
    sub_1BC3008(&WaveBattleWaveInfoComponent___c__DisplayClass53_0_TypeInfo, v11);
    byte_4AFDE10 = 1;
  }
  v12 = sub_1BC3254(WaveBattleWaveInfoComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v17, v18);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MoveToPartyButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)MoveToPartyButton & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Array_o **)Component_object[4].monitor;
      if ( monitor )
      {
        v21 = *((_DWORD *)monitor + 6);
        v22 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v22;
        if ( v21 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v21, 0LL);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v23 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v23,
          (Il2CppObject *)v12,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass53_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v24 = (EventDelegate_o *)sub_1BC3254(EventDelegate_TypeInfo);
        EventDelegate___ctor_48365464(v24, v23, 0LL);
        if ( monitor )
        {
          v27 = monitor[2];
          v28 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++*((_DWORD *)monitor + 7);
          if ( v27 )
          {
            v29 = *((int *)monitor + 6);
            if ( (unsigned int)v29 >= LODWORD(v27[1].monitor) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)monitor,
                (Il2CppObject *)v24,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = (__int64)v27 + 8 * v29;
              *((_DWORD *)monitor + 6) = v29 + 1;
              *(_QWORD *)(v30 + 32) = v24;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v24, v25, v26);
            }
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1BC3264(MoveToPartyButton, v14);
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t nowWave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *waveNumLabel; // x22
  System_String_o *maskObj; // x0
  __int64 v16; // x1
  UISprite_o *waveLineSprite; // x22
  System_Collections_Generic_List_int__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_4AFDE06 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, viewEnemyEntities);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_21039/*"line_whiteAlpha"*/, v12);
    sub_1BC3008(&StringLiteral_15368/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/, v13);
    byte_4AFDE06 = 1;
  }
  this->fields.wave = nowWave;
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskObj = LocalizationManager__Get((System_String_o *)StringLiteral_15368/*"WAVE_BATTLE_FIX_ENEMY_TITLE"*/, 0LL);
  if ( !waveNumLabel )
    goto LABEL_14;
  UILabel__set_text(waveNumLabel, maskObj, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21039/*"line_whiteAlpha"*/, 0LL);
  v18 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v18, v19, v20);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_14;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v16, viewEnemyEntities, v21);
  }
  maskObj = (System_String_o *)this->fields.maskObj;
  if ( !maskObj )
LABEL_14:
    sub_1BC3264(maskObj, v16);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObj, 0, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo_33773256(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 v7; // x23
  int32_t v8; // w21
  ViewWaveEnemyEntity_o *v9; // x22
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4AFDE0B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__, viewEnemyEntities);
    this = (WaveBattleWaveInfoComponent_o *)sub_1BC3008(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5);
    byte_4AFDE0B = 1;
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
            sub_1BC326C(this, viewEnemyEntities, method);
          v9 = viewEnemyEntities->m_Items[v7];
          if ( !v9 )
LABEL_16:
            sub_1BC3264(this, viewEnemyEntities);
          if ( v9->fields.wave == v4->fields.wave )
          {
            this = (WaveBattleWaveInfoComponent_o *)v4->fields.enemyInfoList;
            if ( !this )
              goto LABEL_16;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) <= v8 )
              return;
            this = (WaveBattleWaveInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v8,
                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
            if ( !this )
              goto LABEL_16;
            WaveBattleWaveEnemyInfoItem__SetItem((WaveBattleWaveEnemyInfoItem_o *)this, v9, v10);
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


void __fastcall WaveBattleWaveInfoComponent__SetMaskObjActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObj; // x0

  maskObj = this->fields.maskObj;
  if ( !maskObj )
    sub_1BC3264(0LL, active);
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
    sub_1BC3264(0LL, active);
  UnityEngine_GameObject__SetActive(MoveToPartyButton, active, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__SetPartyInfo(
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  UILabel_o *waveNumLabel; // x25
  System_String_o *v37; // x26
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x27
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 classId; // x1
  UISprite_o *waveLineSprite; // x23
  UIWidget_o *v49; // x23
  _BOOL4 isSelectWaveFlag; // w20
  __int64 v51; // x9
  System_Collections_Generic_List_int__o *v52; // x25
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  __int64 v57; // x8
  __int64 v58; // x20
  int v59; // w25
  ViewWaveEnemyEntity_o *v60; // x26
  System_String_Fields fields; // x8
  _QWORD *v62; // x9
  __int64 klass_low; // x10
  _BOOL4 v64; // w20
  __int64 v65; // x9
  UISprite_o *servantTextStartingSprite; // x24
  System_Collections_Generic_List_object__o *v67; // x24
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  BalanceConfig_c *v71; // x0
  int32_t v72; // w20
  int32_t v73; // w26
  int v74; // w20
  UnityEngine_GameObject_o *servantInfoPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v79; // x27
  DeckServantData_o *v80; // x28
  System_Int32_array *v81; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v82; // x24
  const MethodInfo *v83; // x3
  UIGrid_o *servantInfoGrid; // x24
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_String_Fields v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  System_String_o *v91; // x0
  const MethodInfo *v92; // x5
  const MethodInfo *v93; // [xsp+0h] [xbp-90h]
  int32_t v96; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AFDE07 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, deckEntity);
    sub_1BC3008(&BalanceConfig_TypeInfo, v16);
    sub_1BC3008(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v17);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v18);
    sub_1BC3008(&int_TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v25);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_1BC3008(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v27);
    sub_1BC3008(&LocalizationManager_TypeInfo, v28);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v29);
    sub_1BC3008(&WaveBattleWaveInfoComponent_TypeInfo, v30);
    sub_1BC3008(&StringLiteral_15346/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v31);
    sub_1BC3008(&StringLiteral_21039/*"line_whiteAlpha"*/, v32);
    sub_1BC3008(&StringLiteral_15399/*"WAVE_BATTLE_WAVE_INFO"*/, v33);
    sub_1BC3008(&StringLiteral_20409/*"img_txt_Member"*/, v34);
    sub_1BC3008(&StringLiteral_20410/*"img_txt_Starting"*/, v35);
    byte_4AFDE07 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)viewEnemyEntities,
    (const MethodInfo *)questRestrictionInfo);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15399/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  wave = this->fields.wave;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wave, v38, v39, v40);
  v96 = maxWave;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v42, v43, v44);
  servantTextMemberSprite = System_String__Format_62389940(v37, v41, v45, 0LL);
  if ( !waveNumLabel )
    goto LABEL_66;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21039/*"line_whiteAlpha"*/, 0LL);
  if ( this->fields.wave >= 10 )
  {
    servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
    v49 = (UIWidget_o *)this->fields.waveLineSprite;
    isSelectWaveFlag = this->fields.isSelectWaveFlag;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v49 )
      goto LABEL_66;
    v51 = 36LL;
    if ( !isSelectWaveFlag )
      v51 = 32LL;
    UIWidget__set_width(
      v49,
      *(_DWORD *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v51),
      0LL);
  }
  v52 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v52;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v52, v54, v55);
  if ( viewEnemyEntities )
  {
    v57 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v57 )
    {
      if ( (int)v57 >= 1 )
      {
        v58 = 0LL;
        v59 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v58 >= (unsigned int)v57 )
LABEL_67:
            sub_1BC326C(servantTextMemberSprite, classId, v56);
          v60 = viewEnemyEntities->m_Items[v58];
          if ( !v60 )
            break;
          if ( v60->fields.wave == 1 )
          {
            servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
            if ( !*p_enemyClassIdList )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                    v60->fields.classId,
                    (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
              if ( !*p_enemyClassIdList )
                break;
              classId = (unsigned int)v60->fields.classId;
              fields = servantTextMemberSprite->fields;
              v62 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(servantTextMemberSprite[1].klass);
              if ( !*(_QWORD *)&fields )
                break;
              klass_low = SLODWORD(servantTextMemberSprite[1].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
                  classId,
                  *(const MethodInfo_3683E1C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
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
            if ( ++v59 >= *(_DWORD *)(*(_QWORD *)&servantTextMemberSprite[7].fields + 20LL) )
              goto LABEL_34;
            v57 = *(_QWORD *)&viewEnemyEntities->max_length;
          }
          if ( (int)++v58 >= (int)v57 )
            goto LABEL_34;
        }
LABEL_66:
        sub_1BC3264(servantTextMemberSprite, classId);
      }
    }
  }
LABEL_34:
  v64 = this->fields.isSelectWaveFlag;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
  v65 = 16LL;
  if ( !v64 )
    v65 = 8LL;
  this->fields.height = *(float *)((char *)&WaveBattleWaveInfoComponent_TypeInfo->static_fields->BASE_HEIGHT_NORMAL + v65);
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20410/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_66;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.typeMetadataHandle)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.interopData);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20409/*"img_txt_Member"*/,
    0LL);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_66;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.typeMetadataHandle)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.interopData);
  v67 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v67;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantInfoList, (int32_t)v67, v69, v70);
  v71 = BalanceConfig_TypeInfo;
  v72 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  v73 = 0;
  v74 = v71->static_fields->DeckMainMemberMax * (v72 - 1);
  while ( 1 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = BalanceConfig_TypeInfo;
    }
    if ( v73 >= v71->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_66;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0LL,
                                                   0LL);
    if ( !servantTextMemberSprite )
      goto LABEL_66;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_66;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_66;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_66;
    if ( v74 + v73 >= svts->max_length )
      goto LABEL_67;
    v79 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_66;
    v80 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v74] + v73);
    v81 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    v82 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1BC3254(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v82,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v83);
    if ( !v79 )
      goto LABEL_66;
    WaveBattleWaveServantInfoItem__SetItem(
      v79,
      v73,
      v80,
      questRestrictionInfo,
      v81,
      v82,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v93);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v79,
                                                   0LL);
    if ( !servantInfoGrid )
      goto LABEL_66;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_66;
    v87 = servantTextMemberSprite->fields;
    v88 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&v87 )
      goto LABEL_66;
    v89 = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)v89 >= *(_DWORD *)(*(_QWORD *)&v87 + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v79,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = *(_QWORD *)&v87 + 8 * v89;
      LODWORD(servantTextMemberSprite[1].klass) = v89 + 1;
      *(_QWORD *)(v90 + 32) = v79;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v90 + 32), (int32_t)v79, v85, v86);
    }
    v71 = BalanceConfig_TypeInfo;
    ++v73;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_15346/*"WAVE_BATTLE_ALREADY_SORTIE"*/, 0LL);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v91, v92);
}


void __fastcall WaveBattleWaveInfoComponent__SetRestartInfo(
        WaveBattleWaveInfoComponent_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t restartWave,
        int32_t restartWaveSelectMax,
        System_String_o *maskMessage,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  UnityEngine_GameObject_o *maskObj; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *backGroundObj; // x22
  UILabel_o *clearedLabel; // x22
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_Callback_o *v29; // x22
  EventDelegate_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4AFDE08 & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, questRestrictionInfo);
    sub_1BC3008(&EventDelegate_TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDelegate__Add__, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent___c__DisplayClass41_0__SetRestartInfo_b__0__, v16);
    sub_1BC3008(&WaveBattleWaveInfoComponent___c__DisplayClass41_0_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_15392/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, v18);
    byte_4AFDE08 = 1;
  }
  v19 = sub_1BC3254(WaveBattleWaveInfoComponent___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_28;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v19 + 24) = questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)questRestrictionInfo, v24, v25);
  *(_DWORD *)(v19 + 32) = restartWaveSelectMax;
  maskObj = this->fields.maskObj;
  if ( !maskObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(maskObj, this->fields.wave < restartWave, 0LL);
  maskObj = (UnityEngine_GameObject_o *)this->fields.clearedLabel;
  if ( !maskObj )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)maskObj, maskMessage, 0LL);
  if ( this->fields.isSelectWaveFlag )
  {
    backGroundObj = (UnityEngine_Object_o *)this->fields.backGroundObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(backGroundObj, 0LL, 0LL) )
    {
      maskObj = this->fields.backGroundObj;
      if ( !maskObj )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive(maskObj, 1, 0LL);
    }
    maskObj = this->fields.maskObj;
    if ( maskObj )
    {
      UnityEngine_GameObject__SetActive(maskObj, this->fields.wave > restartWave, 0LL);
      clearedLabel = this->fields.clearedLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      maskObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15392/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0LL);
      if ( clearedLabel )
      {
        UILabel__set_text(clearedLabel, (System_String_o *)maskObj, 0LL);
        if ( this->fields.wave <= restartWave )
        {
          maskObj = this->fields.MoveToPartyButton;
          if ( !maskObj )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive(maskObj, 1, 0LL);
          maskObj = this->fields.MoveToPartyButton;
          if ( !maskObj )
            goto LABEL_28;
          maskObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  maskObj,
                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
          if ( !maskObj )
            goto LABEL_28;
          monitor = (System_Collections_Generic_List_object__o *)maskObj[4].monitor;
          v29 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v29,
            (Il2CppObject *)v19,
            Method_WaveBattleWaveInfoComponent___c__DisplayClass41_0__SetRestartInfo_b__0__,
            0LL);
          v30 = (EventDelegate_o *)sub_1BC3254(EventDelegate_TypeInfo);
          EventDelegate___ctor_48365464(v30, v29, 0LL);
          if ( !monitor )
            goto LABEL_28;
          items = monitor->fields._items;
          v34 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++monitor->fields._version;
          if ( !items )
            goto LABEL_28;
          size = monitor->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              monitor,
              (Il2CppObject *)v30,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            monitor->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v30;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
          }
        }
        maskObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( maskObj )
        {
          UnityEngine_GameObject__SetActive(maskObj, 1, 0LL);
          return;
        }
      }
    }
LABEL_28:
    sub_1BC3264(maskObj, v21);
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetWaveInfo(
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  UILabel_o *waveNumLabel; // x25
  System_String_o *v36; // x26
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x27
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  System_String_o *servantTextMemberSprite; // x0
  __int64 v46; // x1
  UISprite_o *waveLineSprite; // x24
  UIWidget_o *v48; // x24
  UIWidget_o *v49; // x24
  WaveBattleWaveInfoComponent_c *v50; // x0
  float BASE_HEIGHT_RESTART_WAVE_NORMAL; // s0
  WaveBattleWaveInfoComponent_c *v52; // x0
  int32_t v53; // w24
  float *p_BASE_HEIGHT_NORMAL; // x8
  UISprite_o *enemyTextSprite; // x24
  System_Collections_Generic_List_int__o *v56; // x25
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  UISprite_o *servantTextStartingSprite; // x23
  System_Collections_Generic_List_object__o *v62; // x23
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x25
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  BalanceConfig_c *v66; // x0
  int32_t v67; // w19
  int32_t v68; // w26
  int v69; // w19
  UnityEngine_GameObject_o *servantInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v72; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v75; // x27
  DeckServantData_o *v76; // x28
  System_Int32_array *v77; // x29
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v78; // x23
  const MethodInfo *v79; // x3
  UIGrid_o *servantInfoGrid; // x23
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_String_Fields fields; // x8
  _QWORD *v84; // x9
  __int64 klass_low; // x10
  __int64 v86; // x8
  System_String_o *v87; // x0
  const MethodInfo *v88; // x5
  const MethodInfo *v89; // [xsp+0h] [xbp-90h]
  int32_t v92; // [xsp+28h] [xbp-68h] BYREF
  int32_t wave; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AFDE05 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, deckEntity);
    sub_1BC3008(&BalanceConfig_TypeInfo, v16);
    sub_1BC3008(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v17);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v18);
    sub_1BC3008(&int_TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v23);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_1BC3008(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v25);
    sub_1BC3008(&LocalizationManager_TypeInfo, v26);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v27);
    sub_1BC3008(&WaveBattleWaveInfoComponent_TypeInfo, v28);
    sub_1BC3008(&StringLiteral_21039/*"line_whiteAlpha"*/, v29);
    sub_1BC3008(&StringLiteral_15399/*"WAVE_BATTLE_WAVE_INFO"*/, v30);
    sub_1BC3008(&StringLiteral_20409/*"img_txt_Member"*/, v31);
    sub_1BC3008(&StringLiteral_15355/*"WAVE_BATTLE_CLEARED_WAVE"*/, v32);
    sub_1BC3008(&StringLiteral_20410/*"img_txt_Starting"*/, v33);
    sub_1BC3008(&StringLiteral_20408/*"img_txt_Enemy"*/, v34);
    byte_4AFDE05 = 1;
  }
  this->fields.callbackFunc = callback;
  this->fields.wave = nowWave;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)viewEnemyEntities,
    (const MethodInfo *)questRestrictionInfo);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_15399/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  wave = this->fields.wave;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wave, v37, v38, v39);
  v92 = maxWave;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v41, v42, v43);
  servantTextMemberSprite = System_String__Format_62389940(v36, v40, v44, 0LL);
  if ( !waveNumLabel )
    goto LABEL_61;
  UILabel__set_text(waveNumLabel, servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21039/*"line_whiteAlpha"*/, 0LL);
  if ( this->fields.wave >= 10 )
  {
    servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
    v48 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v48 )
      goto LABEL_61;
    UIWidget__set_width(v48, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (System_String_o *)WaveBattleWaveInfoComponent_TypeInfo;
      v49 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      if ( !v49 )
        goto LABEL_61;
      UIWidget__set_width(
        v49,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0LL);
    }
  }
  if ( this->fields.isSelectWaveFlag )
  {
    v50 = WaveBattleWaveInfoComponent_TypeInfo;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      v50 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    BASE_HEIGHT_RESTART_WAVE_NORMAL = v50->static_fields->BASE_HEIGHT_RESTART_WAVE_NORMAL;
  }
  else
  {
    v52 = WaveBattleWaveInfoComponent_TypeInfo;
    v53 = this->fields.wave;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      v52 = WaveBattleWaveInfoComponent_TypeInfo;
    }
    p_BASE_HEIGHT_NORMAL = &v52->static_fields->BASE_HEIGHT_NORMAL;
    BASE_HEIGHT_RESTART_WAVE_NORMAL = *p_BASE_HEIGHT_NORMAL;
    if ( v53 < restartWave )
      BASE_HEIGHT_RESTART_WAVE_NORMAL = BASE_HEIGHT_RESTART_WAVE_NORMAL + p_BASE_HEIGHT_NORMAL[1];
  }
  this->fields.height = BASE_HEIGHT_RESTART_WAVE_NORMAL;
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20408/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = (System_String_o *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_61;
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.typeMetadataHandle)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.interopData);
  v56 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v56,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v56;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enemyClassIdList, (int32_t)v56, v58, v59);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !questRestrictionInfo )
      goto LABEL_61;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v46, viewEnemyEntities, v60);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20410/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = (System_String_o *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite
    || (((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.typeMetadataHandle)(
          servantTextMemberSprite,
          servantTextMemberSprite->klass[1]._1.interopData),
        AtlasManager__SetPartyOrganizationImage(
          this->fields.servantTextMemberSprite,
          (System_String_o *)StringLiteral_20409/*"img_txt_Member"*/,
          0LL),
        (servantTextMemberSprite = (System_String_o *)this->fields.servantTextMemberSprite) == 0LL) )
  {
LABEL_61:
    sub_1BC3264(servantTextMemberSprite, v46);
  }
  ((void (__fastcall *)(System_String_o *, void *))servantTextMemberSprite->klass[1]._1.typeMetadataHandle)(
    servantTextMemberSprite,
    servantTextMemberSprite->klass[1]._1.interopData);
  v62 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v62;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantInfoList, (int32_t)v62, v64, v65);
  v66 = BalanceConfig_TypeInfo;
  v67 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  v68 = 0;
  v69 = v66->static_fields->DeckMainMemberMax * (v67 - 1);
  while ( 1 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = BalanceConfig_TypeInfo;
    }
    if ( v68 >= v66->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (System_String_o *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_61;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (System_String_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   servantInfoPrefab,
                                                   transform,
                                                   0LL,
                                                   0LL);
    if ( !servantTextMemberSprite )
      goto LABEL_61;
    servantTextMemberSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_61;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_61;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_61;
    if ( v69 + v68 >= svts->max_length )
      sub_1BC326C(servantTextMemberSprite, v46, v72);
    v75 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (System_String_o *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_61;
    v76 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v69] + v68);
    v77 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    v78 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1BC3254(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v78,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v79);
    if ( !v75 )
      goto LABEL_61;
    WaveBattleWaveServantInfoItem__SetItem(
      v75,
      v68,
      v76,
      questRestrictionInfo,
      v77,
      v78,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v89);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (System_String_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v75,
                                                   0LL);
    if ( !servantInfoGrid )
      goto LABEL_61;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (System_String_o *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_61;
    fields = servantTextMemberSprite->fields;
    v84 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++HIDWORD(servantTextMemberSprite[1].klass);
    if ( !*(_QWORD *)&fields )
      goto LABEL_61;
    klass_low = SLODWORD(servantTextMemberSprite[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v75,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = *(_QWORD *)&fields + 8 * klass_low;
      LODWORD(servantTextMemberSprite[1].klass) = klass_low + 1;
      *(_QWORD *)(v86 + 32) = v75;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v86 + 32), (int32_t)v75, v81, v82);
    }
    v66 = BalanceConfig_TypeInfo;
    ++v68;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_15355/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0LL);
  WaveBattleWaveInfoComponent__SetRestartInfo(this, questRestrictionInfo, restartWave, restartWaveSelectMax, v87, v88);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__UpdateInterruptionData(
        WaveBattleWaveInfoComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t warId,
        int32_t waveNum,
        int32_t waveNumMax,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x25
  System_Int32_array *SelectableQuests; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v30; // x25
  BattleSetupInfo_o *v31; // x8
  NetworkManager_ResultCallbackFunc_o *v32; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFDE0E & 1) == 0 )
  {
    sub_1BC3008(&BattleSetupInfo_TypeInfo, *(_QWORD *)&questId);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&Method_NetworkManager_getRequest_BattleInterruptionRequest___, v16);
    sub_1BC3008(&NetworkManager_TypeInfo, v17);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v18);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__, v19);
    byte_4AFDE0E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  v22 = sub_1BC3254(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_22;
  *(_DWORD *)(v22 + 16) = warId;
  *(_DWORD *)(v22 + 20) = questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v22 + 112) = SelectableQuests;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 112), (int32_t)SelectableQuests, v24, v25);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  *(_DWORD *)(v22 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0LL);
  *(_DWORD *)(v22 + 124) = 0;
  *(_DWORD *)(v22 + 24) = questPhase;
  *(_WORD *)(v22 + 72) = 0;
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_QWORD *)(v22 + 48) = 0LL;
  *(_DWORD *)(v22 + 56) = 0;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v22;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battleSetupInfo, v22, v27, v28);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v30 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !v30 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v30, (int32_t)Master_object, 0LL);
  if ( !battleSetupInfo )
    goto LABEL_22;
  battleSetupInfo->fields.eventId = (int)Master_object;
  Master_object = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0LL);
  Master_object = (QuestPhaseMaster_o *)*p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0LL);
  v31 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  v31->fields.originQuestId = questId;
  v31->fields.isScriptBeforeWarBoard = 0;
  v31->fields.restartWave = waveNum;
  if ( waveNum == waveNumMax )
  {
    WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(this, v21);
    return;
  }
  v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v32,
                                          (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1BC3264(Master_object, v21);
  BattleInterruptionRequest__beginRequest(
    (BattleInterruptionRequest_o *)Master_object,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BalanceConfig_c *v13; // x0
  int32_t wave; // w24
  int32_t v15; // w22
  bool v16; // w23
  int v17; // w29
  System_Collections_Generic_List_object__o *servantInfoList; // x0
  __int64 v19; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v22; // x24
  DeckServantData_o *v23; // x25
  System_Int32_array *v24; // x26
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v25; // x27
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // [xsp+0h] [xbp-70h]

  if ( (byte_4AFDE09 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, deckEntity);
    sub_1BC3008(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v11);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v12);
    byte_4AFDE09 = 1;
  }
  v13 = BalanceConfig_TypeInfo;
  wave = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  v15 = 0;
  v16 = isInterruption;
  v17 = v13->static_fields->DeckMainMemberMax * (wave - 1);
  while ( 1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BalanceConfig_TypeInfo;
    }
    if ( v15 >= v13->static_fields->DeckMainMemberMax )
      break;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_18;
    servantInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantInfoList,
                                                                     v15,
                                                                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( v17 + v15 >= svts->max_length )
      sub_1BC326C(servantInfoList, deckEntity, v19);
    v22 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v23 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v17] + v15),
          v24 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__),
          v25 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1BC3254(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v26),
          !v22) )
    {
LABEL_18:
      sub_1BC3264(servantInfoList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v22, v15, v23, questRestrictionInfo, v24, v25, v16, 0, v27);
    v13 = BalanceConfig_TypeInfo;
    ++v15;
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

  if ( (byte_4AFDE03 & 1) == 0 )
  {
    sub_1BC3008(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4AFDE03 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1BC3524(v8);
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

  if ( (byte_4AFDE04 & 1) == 0 )
  {
    sub_1BC3008(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4AFDE04 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1BC3524(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A08474;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08414;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = wave;
  v22 = result;
  v20 = idx;
  if ( (byte_4AFDE12 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4AFDE12 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&wave,
             *(_QWORD *)&idx,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v18, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__Invoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    wave,
    idx,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass41_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass41_0___SetRestartInfo_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent___c__DisplayClass41_0_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *_4__this; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  struct QuestRestrictionInfo_o *v7; // x8
  const MethodInfo *v8; // x6
  struct WaveBattleWaveInfoComponent_o *v9; // x8

  v2 = this;
  if ( (byte_4AFDE13 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass41_0_o *)sub_1BC3008(
                                                                    &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                                    method);
    byte_4AFDE13 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass41_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0LL)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass41_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0LL),
        (v9 = v2->fields.__4__this) == 0LL)
    || !_4__this )
  {
    sub_1BC3264(this, method);
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


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass47_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass47_0___OnClickWave_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass47_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4AFDE14 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_WaveBattleWaveInfoComponent___c__DisplayClass47_1__OnClickWave_b__1__, v6);
    sub_1BC3008(&WaveBattleWaveInfoComponent___c__DisplayClass47_1_TypeInfo, v7);
    byte_4AFDE14 = 1;
  }
  v8 = sub_1BC3254(WaveBattleWaveInfoComponent___c__DisplayClass47_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass47_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BC3264(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30731324((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass47_1___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass47_1___OnClickWave_b__1(
        WaveBattleWaveInfoComponent___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct WaveBattleWaveInfoComponent___c__DisplayClass47_0_o *CS___8__locals1; // x8

  if ( (byte_4AFDE15 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AFDE15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL);
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
    sub_1BC3264(Instance, v4);
  }
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass53_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass53_0___OverwriteMoveToPartyButton_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent___c__DisplayClass53_0_o *v2; // x19
  struct WaveBattleWaveInfoComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_4AFDE16 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass53_0_o *)sub_1BC3008(
                                                                    &Method_ActionExtensions_Call_int___,
                                                                    method);
    byte_4AFDE16 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2F5140C *)Method_ActionExtensions_Call_int___);
}