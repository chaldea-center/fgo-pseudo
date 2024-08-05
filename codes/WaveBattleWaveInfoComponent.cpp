void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FA73F & 1) == 0 )
  {
    sub_1B64870(&WaveBattleWaveInfoComponent_TypeInfo, v1);
    byte_49FA73F = 1;
  }
  *WaveBattleWaveInfoComponent_TypeInfo->static_fields = (struct WaveBattleWaveInfoComponent_StaticFields)xmmword_BA3390;
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
  int32_t v17; // w3
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  int32_t size; // w2
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
  int32_t v37; // w3
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8

  if ( (byte_49FA738 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___, *(_QWORD *)&questId);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Clear__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v12);
    sub_1B64870(&WaveBattleWaveInfoComponent_TypeInfo, v13);
    byte_49FA738 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v14;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.enemyInfoList, (int32_t)v14, v16, v17);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = enemyInfoList->fields._size;
  v22 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v22;
  if ( size >= 1 )
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
            sub_1B64AD4(enemyInfoListParent, classId);
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
                    (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
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
                  *(const MethodInfo_34921B8 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
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
                                                                              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
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
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = (__int64)v38 + 8 * v40;
              enemyInfoListParent->fields._size = v40 + 1;
              *(_QWORD *)(v41 + 32) = v35;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v35, v36, v37);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v27 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 4LL) )
              return v27;
            v23 = *(_QWORD *)&viewEnemyEntities->max_length;
          }
          if ( (int)++v26 >= (int)v23 )
            return v27;
        }
LABEL_38:
        sub_1B64ACC(enemyInfoListParent, classId);
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

  if ( (byte_49FA73D & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FA73D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.wave,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v5);
  AvalonSceneManager__pushScene(
    (AvalonSceneManager_o *)Instance,
    35,
    1,
    (Il2CppObject *)this->fields.battleSetupInfo,
    0LL);
}


int32_t __fastcall WaveBattleWaveInfoComponent__GetHeight(
        WaveBattleWaveInfoComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_49FA73A & 1) == 0 )
  {
    sub_1B64870(&Method_WaveBattleWaveInfoComponent_OnClickMask__, method);
    byte_49FA73A = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B64888(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B64854(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
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
  int32_t v29; // w3
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

  if ( (byte_49FA73B & 1) == 0 )
  {
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&questId);
    sub_1B64870(&LocalizationManager_TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__, v15);
    sub_1B64870(&WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo, v16);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent_OnClickWave__, v17);
    sub_1B64870(&StringLiteral_2873/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, v18);
    sub_1B64870(&StringLiteral_2888/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v19);
    sub_1B64870(&StringLiteral_2886/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v20);
    sub_1B64870(&StringLiteral_2875/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, v21);
    sub_1B64870(&StringLiteral_2872/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, v22);
    sub_1B64870(&StringLiteral_2874/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, v23);
    sub_1B64870(&StringLiteral_1222/*"00"*/, v24);
    byte_49FA73B = 1;
  }
  v25 = sub_1B64ABC(WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_24;
  *(_QWORD *)(v25 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  *(_DWORD *)(v25 + 36) = waveNum;
  v30 = (int *)(v25 + 36);
  *(_DWORD *)(v25 + 32) = warId;
  *(_DWORD *)(v25 + 24) = questId;
  *(_DWORD *)(v25 + 28) = questPhase;
  *(_DWORD *)(v25 + 40) = waveNumMax;
  v31 = (int *)(v25 + 40);
  v32 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1B64888(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v33 = (System_Reflection_MethodBase_o *)sub_1B64854(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
  v34 = *v30;
  v35 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v34 == v35 )
  {
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2874/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v37 = (Il2CppObject *)System_Int32__ToString_62188848((int)v25 + 36, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v38 = System_String__Format(v36, v37, 0LL);
  }
  else
  {
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v40 = (Il2CppObject *)System_Int32__ToString_62188848((int)v25 + 36, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v41 = (Il2CppObject *)System_Int32__ToString_62188848((int)v25 + 40, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v38 = System_String__Format_61397948(v39, v40, v41, 0LL);
  }
  message = v38;
  v42 = *v30;
  v43 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v42 == v43 )
  {
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2873/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0LL);
  }
  else
  {
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2886/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v45 = (Il2CppObject *)System_Int32__ToString_62188848((int)v25 + 36, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v46 = System_String__Format(v44, v45, 0LL);
  }
  v47 = v46;
  v48 = *v30;
  v49 = *v31;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2875/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0LL);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2872/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v53,
    (Il2CppObject *)v25,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__,
    0LL);
  if ( !v50 )
LABEL_24:
    sub_1B64ACC(Instance, v27);
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
    sub_1B64ACC(clearedLabel, overwriteLabel);
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v21; // w2
  int v22; // w8
  EventDelegate_Callback_o *v23; // x21
  EventDelegate_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_Array_o *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x0

  if ( (byte_49FA73E & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, callback);
    sub_1B64870(&EventDelegate_TypeInfo, v5);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__, v10);
    sub_1B64870(&WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo, v11);
    byte_49FA73E = 1;
  }
  v12 = sub_1B64ABC(WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v17, v18);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
        v23 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v23,
          (Il2CppObject *)v12,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v24 = (EventDelegate_o *)sub_1B64ABC(EventDelegate_TypeInfo);
        EventDelegate___ctor_46517468(v24, v23, 0LL);
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
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = (__int64)v27 + 8 * v29;
              *((_DWORD *)monitor + 6) = v29 + 1;
              *(_QWORD *)(v30 + 32) = v24;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v24, v25, v26);
            }
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1B64ACC(MoveToPartyButton, v14);
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo(
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
  if ( (byte_49FA739 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__, viewEnemyEntities);
    this = (WaveBattleWaveInfoComponent_o *)sub_1B64870(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5);
    byte_49FA739 = 1;
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
            sub_1B64AD4(this, viewEnemyEntities);
          v9 = viewEnemyEntities->m_Items[v7];
          if ( !v9 )
LABEL_16:
            sub_1B64ACC(this, viewEnemyEntities);
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
                                                      (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
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
    sub_1B64ACC(0LL, active);
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
    sub_1B64ACC(0LL, active);
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
  UserEventDeckEntity_o *v13; // x22
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x25
  int *servantTextMemberSprite; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  UILabel_o *waveNumLabel; // x26
  System_String_o *v52; // x20
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x21
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  UISprite_o *waveLineSprite; // x20
  UIWidget_o *v62; // x20
  UIWidget_o *v63; // x20
  UISprite_o *enemyTextSprite; // x20
  System_Collections_Generic_List_int__o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  const MethodInfo *v68; // x3
  UISprite_o *servantTextStartingSprite; // x20
  BalanceConfig_c **v70; // x28
  System_Collections_Generic_List_object__o *v71; // x20
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x24
  int32_t v73; // w2
  int32_t v74; // w3
  BalanceConfig_c *v75; // x0
  int32_t v76; // w20
  int32_t v77; // w26
  int v78; // w23
  UnityEngine_GameObject_o *servantInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v83; // x27
  DeckServantData_o *v84; // x29
  UserEventDeckEntity_o *v85; // x25
  BalanceConfig_c **v86; // x22
  QuestRestrictionInfo_o *v87; // x28
  System_Int32_array *v88; // x21
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v89; // x20
  const MethodInfo *v90; // x3
  UIGrid_o *servantInfoGrid; // x20
  int32_t v92; // w2
  int32_t v93; // w3
  __int64 v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  __int64 v97; // x8
  UILabel_o *clearedLabel; // x21
  UnityEngine_Object_o *backGroundObj; // x20
  UILabel_o *v100; // x21
  System_Collections_Generic_List_object__o *v101; // x20
  EventDelegate_Callback_o *v102; // x22
  EventDelegate_o *v103; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  struct System_Object_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  Il2CppClass **v109; // x0
  const MethodInfo *v110; // [xsp+0h] [xbp-A0h]
  __int64 v112; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // [xsp+20h] [xbp-80h]
  QuestRestrictionInfo_o **v115; // [xsp+28h] [xbp-78h]
  int32_t v117; // [xsp+38h] [xbp-68h] BYREF
  int v118; // [xsp+3Ch] [xbp-64h] BYREF

  v13 = deckEntity;
  if ( (byte_49FA736 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, deckEntity);
    sub_1B64870(&BalanceConfig_TypeInfo, v15);
    sub_1B64870(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v16);
    sub_1B64870(&EventDelegate_Callback_TypeInfo, v17);
    sub_1B64870(&EventDelegate_TypeInfo, v18);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v19);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v20);
    sub_1B64870(&int_TypeInfo, v21);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Add__, v22);
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v23);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v26);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v27);
    sub_1B64870(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v28);
    sub_1B64870(&LocalizationManager_TypeInfo, v29);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v30);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__, v31);
    sub_1B64870(&WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo, v32);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v33);
    sub_1B64870(&WaveBattleWaveInfoComponent_TypeInfo, v34);
    sub_1B64870(&StringLiteral_21038/*"line_whiteAlpha"*/, v35);
    sub_1B64870(&StringLiteral_15477/*"WAVE_BATTLE_WAVE_INFO"*/, v36);
    sub_1B64870(&StringLiteral_20415/*"img_txt_Member"*/, v37);
    sub_1B64870(&StringLiteral_15436/*"WAVE_BATTLE_CLEARED_WAVE"*/, v38);
    sub_1B64870(&StringLiteral_20416/*"img_txt_Starting"*/, v39);
    sub_1B64870(&StringLiteral_15470/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, v40);
    sub_1B64870(&StringLiteral_20414/*"img_txt_Enemy"*/, v41);
    byte_49FA736 = 1;
  }
  v42 = sub_1B64ABC(WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_79;
  *(_QWORD *)(v42 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v42 + 16), (int32_t)this, v45, v46);
  *(_QWORD *)(v42 + 24) = questRestrictionInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v42 + 24), (int32_t)questRestrictionInfo, v47, v48);
  *(_DWORD *)(v42 + 32) = wave;
  *(_DWORD *)(v42 + 36) = restartWaveSelectMax;
  this->fields.callbackFunc = callback;
  v115 = (QuestRestrictionInfo_o **)(v42 + 24);
  this->fields.wave = wave;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v49, v50);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_15477/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v112 = v42;
  v118 = *(_DWORD *)(v42 + 32);
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118, v53, v54, v55);
  v117 = maxWave;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v57, v58, v59);
  servantTextMemberSprite = (int *)System_String__Format_61397948(v52, v56, v60, 0LL);
  if ( !waveNumLabel )
    goto LABEL_79;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21038/*"line_whiteAlpha"*/, 0LL);
  if ( *(int *)(v42 + 32) >= 10 )
  {
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
    v62 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v62 )
      goto LABEL_79;
    UIWidget__set_width(v62, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
      v63 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      if ( !v63 )
        goto LABEL_79;
      UIWidget__set_width(
        v63,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0LL);
    }
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20414/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v65 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v65;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.enemyClassIdList, (int32_t)v65, v66, v67);
  servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  }
  this->fields.height = **((_DWORD **)servantTextMemberSprite + 23);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !*v115 )
      goto LABEL_79;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v44, viewEnemyEntities, v68);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20416/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20415/*"img_txt_Member"*/,
    0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v70 = &BalanceConfig_TypeInfo;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v71 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v71;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.servantInfoList, (int32_t)v71, v73, v74);
  v75 = BalanceConfig_TypeInfo;
  v76 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v75 = BalanceConfig_TypeInfo;
  }
  v77 = 0;
  v78 = v75->static_fields->DeckMainMemberMax * (v76 - 1);
  while ( 1 )
  {
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      v75 = *v70;
    }
    if ( v77 >= v75->static_fields->DeckMainMemberMax )
      break;
    servantTextMemberSprite = (int *)this->fields.servantInfoListParent;
    if ( !servantTextMemberSprite )
      goto LABEL_79;
    servantInfoPrefab = this->fields.servantInfoPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (int *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       servantInfoPrefab,
                                       transform,
                                       0LL,
                                       0LL);
    if ( !servantTextMemberSprite )
      goto LABEL_79;
    servantTextMemberSprite = (int *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !v13 )
      goto LABEL_79;
    deckInfo = v13->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_79;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_79;
    if ( v78 + v77 >= svts->max_length )
      sub_1B64AD4(servantTextMemberSprite, v44);
    v83 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (int *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_79;
    v84 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v78] + v77);
    v85 = v13;
    v86 = v70;
    v87 = *v115;
    v88 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
    v89 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1B64ABC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v89,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v90);
    if ( !v83 )
      goto LABEL_79;
    WaveBattleWaveServantInfoItem__SetItem(
      v83,
      v77,
      v84,
      v87,
      v88,
      v89,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v110);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v83, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_79;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (int *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_79;
    v94 = *((_QWORD *)servantTextMemberSprite + 2);
    v95 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++servantTextMemberSprite[7];
    if ( !v94 )
      goto LABEL_79;
    v96 = servantTextMemberSprite[6];
    v70 = v86;
    v13 = v85;
    if ( (unsigned int)v96 >= *(_DWORD *)(v94 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v83,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v97 = v94 + 8 * v96;
      servantTextMemberSprite[6] = v96 + 1;
      *(_QWORD *)(v97 + 32) = v83;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v97 + 32), (int32_t)v83, v92, v93);
    }
    v75 = *v70;
    ++v77;
  }
  servantTextMemberSprite = (int *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    *(_DWORD *)(v112 + 32) < restartWave,
    0LL);
  clearedLabel = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15436/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0LL);
  if ( !clearedLabel )
    goto LABEL_79;
  UILabel__set_text(clearedLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( !this->fields.isSelectWaveFlag )
    return;
  backGroundObj = (UnityEngine_Object_o *)this->fields.backGroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backGroundObj, 0LL, 0LL) )
  {
    servantTextMemberSprite = (int *)this->fields.backGroundObj;
    if ( !servantTextMemberSprite )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
  }
  servantTextMemberSprite = (int *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    *(_DWORD *)(v112 + 32) > restartWave,
    0LL);
  v100 = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15470/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0LL);
  if ( !v100 )
    goto LABEL_79;
  UILabel__set_text(v100, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( *(_DWORD *)(v112 + 32) > restartWave )
    goto LABEL_76;
  servantTextMemberSprite = (int *)this->fields.MoveToPartyButton;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
  servantTextMemberSprite = (int *)this->fields.MoveToPartyButton;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  servantTextMemberSprite = (int *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)servantTextMemberSprite,
                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v101 = (System_Collections_Generic_List_object__o *)*((_QWORD *)servantTextMemberSprite + 13);
  v102 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v102,
    (Il2CppObject *)v112,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__,
    0LL);
  v103 = (EventDelegate_o *)sub_1B64ABC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46517468(v103, v102, 0LL);
  if ( !v101
    || (items = v101->fields._items,
        v107 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v101->fields._version,
        !items) )
  {
LABEL_79:
    sub_1B64ACC(servantTextMemberSprite, v44);
  }
  size = v101->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      (Il2CppObject *)v103,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
  }
  else
  {
    v109 = &items->obj.klass + size;
    v101->fields._size = size + 1;
    v109[4] = (Il2CppClass *)v103;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v109 + 4), (int32_t)v103, v104, v105);
  }
LABEL_76:
  servantTextMemberSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
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
  int32_t v25; // w3
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v30; // x25
  BattleSetupInfo_o *v31; // x8
  NetworkManager_ResultCallbackFunc_o *v32; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FA73C & 1) == 0 )
  {
    sub_1B64870(&BattleSetupInfo_TypeInfo, *(_QWORD *)&questId);
    sub_1B64870(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_1B64870(&DataManager_TypeInfo, v15);
    sub_1B64870(&Method_NetworkManager_getRequest_BattleInterruptionRequest___, v16);
    sub_1B64870(&NetworkManager_TypeInfo, v17);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v18);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__, v19);
    byte_49FA73C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  v22 = sub_1B64ABC(BattleSetupInfo_TypeInfo);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 112), (int32_t)SelectableQuests, v24, v25);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  *(_DWORD *)(v22 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0LL);
  *(_DWORD *)(v22 + 124) = 0;
  *(_DWORD *)(v22 + 24) = questPhase;
  *(_WORD *)(v22 + 72) = 0;
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_QWORD *)(v22 + 48) = 0LL;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v22;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo, v22, v27, v28);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
  v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v32,
                                          (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1B64ACC(Master_object, v21);
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
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v21; // x24
  DeckServantData_o *v22; // x25
  System_Int32_array *v23; // x26
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v24; // x27
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // [xsp+0h] [xbp-70h]

  if ( (byte_49FA737 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, deckEntity);
    sub_1B64870(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v11);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v12);
    byte_49FA737 = 1;
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
                                                                     (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( v17 + v15 >= svts->max_length )
      sub_1B64AD4(servantInfoList, deckEntity);
    v21 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v22 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v17] + v15),
          v23 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__),
          v24 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1B64ABC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v25),
          !v21) )
    {
LABEL_18:
      sub_1B64ACC(servantInfoList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v21, v15, v22, questRestrictionInfo, v23, v24, v16, 0, v26);
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

  if ( (byte_49FA734 & 1) == 0 )
  {
    sub_1B64870(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_49FA734 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1B64D8C(v8);
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

  if ( (byte_49FA735 & 1) == 0 )
  {
    sub_1B64870(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_49FA735 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1B64D8C(v8);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A78F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7894;
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
  if ( (byte_49FA740 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_49FA740 = 1;
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
  return (System_IAsyncResult_o *)sub_1B64824(this, v18, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass32_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass32_0___SetWaveInfo_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *_4__this; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  struct QuestRestrictionInfo_o *v7; // x8
  const MethodInfo *v8; // x6

  v2 = this;
  if ( (byte_49FA741 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)sub_1B64870(
                                                                    &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                                    method);
    byte_49FA741 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0LL)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0LL),
        !_4__this) )
  {
    sub_1B64ACC(this, method);
  }
  WaveBattleWaveInfoComponent__OnClickWave(
    _4__this,
    questId,
    questPhase,
    (int32_t)this,
    v2->fields.wave,
    v2->fields.restartWaveSelectMax,
    v8);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass38_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass38_0___OnClickWave_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass38_0_o *this,
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
  int32_t v12; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_49FA742 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__, v6);
    sub_1B64870(&WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo, v7);
    byte_49FA742 = 1;
  }
  v8 = sub_1B64ABC(WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64ACC(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30347596((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass38_1___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass38_1___OnClickWave_b__1(
        WaveBattleWaveInfoComponent___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct WaveBattleWaveInfoComponent___c__DisplayClass38_0_o *CS___8__locals1; // x8

  if ( (byte_49FA743 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FA743 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64ACC(Instance, v4);
  }
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass44_0___ctor(
        WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass44_0___OverwriteMoveToPartyButton_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *v2; // x19
  struct WaveBattleWaveInfoComponent_o *_4__this; // x8

  v2 = this;
  if ( (byte_49FA744 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *)sub_1B64870(
                                                                    &Method_ActionExtensions_Call_int___,
                                                                    method);
    byte_49FA744 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2D92CB4 *)Method_ActionExtensions_Call_int___);
}