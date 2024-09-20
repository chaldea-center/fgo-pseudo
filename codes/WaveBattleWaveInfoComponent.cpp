void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5731E & 1) == 0 )
  {
    sub_1B885B0(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4A5731E = 1;
  }
  *WaveBattleWaveInfoComponent_TypeInfo->static_fields = (struct WaveBattleWaveInfoComponent_StaticFields)xmmword_BB4820;
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
  System_Collections_Generic_List_object__o *v6; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  int32_t size; // w2
  int v14; // w9
  __int64 v15; // x8
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
  int32_t v29; // w3
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8

  if ( (byte_4A57317 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
    sub_1B885B0(&WaveBattleWaveInfoComponent_TypeInfo);
    byte_4A57317 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v6;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyInfoList, (int32_t)v6, v8, v9);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = enemyInfoList->fields._size;
  v14 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enemyInfoList->fields._items, 0, size, 0LL);
  if ( viewEnemyEntities )
  {
    v15 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v15 )
    {
      enemyClassIdList = this->fields.enemyClassIdList;
      if ( !enemyClassIdList )
        goto LABEL_38;
      v17 = enemyClassIdList->fields._version + 1;
      enemyClassIdList->fields._size = 0;
      enemyClassIdList->fields._version = v17;
      if ( (int)v15 >= 1 )
      {
        v18 = 0LL;
        v19 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= (unsigned int)v15 )
            sub_1B88814(enemyInfoListParent, classId);
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
                    (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
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
              if ( (unsigned int)v23 >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  enemyInfoListParent,
                  classId,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                enemyInfoListParent->fields._size = v23 + 1;
                items->m_Items[v23 + 1] = classId;
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
                                                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
            if ( !enemyInfoListParent )
              break;
            enemyInfoGrid = this->fields.enemyInfoGrid;
            v27 = (Il2CppObject *)enemyInfoListParent;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)enemyInfoListParent,
                                                                              0LL);
            if ( !enemyInfoGrid )
              break;
            UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoListParent, 0LL);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)*p_enemyInfoList;
            if ( !*p_enemyInfoList )
              break;
            v30 = enemyInfoListParent->fields._items;
            v31 = Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__;
            ++enemyInfoListParent->fields._version;
            if ( !v30 )
              break;
            v32 = enemyInfoListParent->fields._size;
            if ( (unsigned int)v32 >= v30->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)enemyInfoListParent,
                v27,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = (__int64)v30 + 8 * v32;
              enemyInfoListParent->fields._size = v32 + 1;
              *(_QWORD *)(v33 + 32) = v27;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v27, v28, v29);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v19 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 4LL) )
              return v19;
            v15 = *(_QWORD *)&viewEnemyEntities->max_length;
          }
          if ( (int)++v18 >= (int)v15 )
            return v19;
        }
LABEL_38:
        sub_1B8880C(enemyInfoListParent, classId);
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

  if ( (byte_4A5731C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5731C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.wave,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
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

  if ( (byte_4A57319 & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent_OnClickMask__);
    byte_4A57319 = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
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
  __int64 v13; // x19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
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

  if ( (byte_4A5731A & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__);
    sub_1B885B0(&WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent_OnClickWave__);
    sub_1B885B0(&StringLiteral_2894/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_2909/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_2896/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_2893/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2895/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1221/*"00"*/);
    byte_4A5731A = 1;
  }
  v13 = sub_1B887FC(WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 36) = waveNum;
  v18 = (int *)(v13 + 36);
  *(_DWORD *)(v13 + 32) = warId;
  *(_DWORD *)(v13 + 24) = questId;
  *(_DWORD *)(v13 + 28) = questPhase;
  *(_DWORD *)(v13 + 40) = waveNumMax;
  v19 = (int *)(v13 + 40);
  v20 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1B885C8(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  v22 = *v18;
  v23 = *v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v22 == v23 )
  {
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2895/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v25 = (Il2CppObject *)System_Int32__ToString_62512312((int)v13 + 36, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v26 = System_String__Format(v24, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2909/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v28 = (Il2CppObject *)System_Int32__ToString_62512312((int)v13 + 36, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v29 = (Il2CppObject *)System_Int32__ToString_62512312((int)v13 + 40, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v26 = System_String__Format_61721404(v27, v28, v29, 0LL);
  }
  message = v26;
  v30 = *v18;
  v31 = *v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v30 == v31 )
  {
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2894/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0LL);
  }
  else
  {
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v33 = (Il2CppObject *)System_Int32__ToString_62512312((int)v13 + 36, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
    v34 = System_String__Format(v32, v33, 0LL);
  }
  v35 = v34;
  v36 = *v18;
  v37 = *v19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2896/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2893/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__,
    0LL);
  if ( !v38 )
LABEL_24:
    sub_1B8880C(Instance, v15);
  if ( v36 == v37 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)v38,
    v39,
    message,
    v35,
    v40,
    v41,
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
    sub_1B8880C(clearedLabel, overwriteLabel);
  }
  UILabel__set_text(clearedLabel, overwriteLabel, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoComponent_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *MoveToPartyButton; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v14; // w2
  int v15; // w8
  EventDelegate_Callback_o *v16; // x21
  EventDelegate_o *v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_Array_o *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5731D & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__);
    sub_1B885B0(&WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo);
    byte_4A5731D = 1;
  }
  v5 = sub_1B887FC(WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
        v14 = *((_DWORD *)monitor + 6);
        v15 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v15;
        if ( v14 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v14, 0LL);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v16 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v17 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
        EventDelegate___ctor_46786736(v17, v16, 0LL);
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
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = (__int64)v20 + 8 * v22;
              *((_DWORD *)monitor + 6) = v22 + 1;
              *(_QWORD *)(v23 + 32) = v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
            }
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1B8880C(MoveToPartyButton, v7);
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_o *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x23
  int32_t v7; // w21
  ViewWaveEnemyEntity_o *v8; // x22
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_4A57318 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__);
    this = (WaveBattleWaveInfoComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
    byte_4A57318 = 1;
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
            sub_1B88814(this, viewEnemyEntities);
          v8 = viewEnemyEntities->m_Items[v6];
          if ( !v8 )
LABEL_16:
            sub_1B8880C(this, viewEnemyEntities);
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
                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
            if ( !this )
              goto LABEL_16;
            WaveBattleWaveEnemyInfoItem__SetItem((WaveBattleWaveEnemyInfoItem_o *)this, v8, v9);
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
    sub_1B8880C(0LL, active);
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
    sub_1B8880C(0LL, active);
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
  __int64 v15; // x25
  int *servantTextMemberSprite; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  UILabel_o *waveNumLabel; // x26
  System_String_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UISprite_o *waveLineSprite; // x20
  UIWidget_o *v35; // x20
  UIWidget_o *v36; // x20
  UISprite_o *enemyTextSprite; // x20
  System_Collections_Generic_List_int__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  const MethodInfo *v41; // x3
  UISprite_o *servantTextStartingSprite; // x20
  BalanceConfig_c **v43; // x28
  System_Collections_Generic_List_object__o *v44; // x20
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  BalanceConfig_c *v48; // x0
  int32_t v49; // w20
  int32_t v50; // w26
  int v51; // w23
  UnityEngine_GameObject_o *servantInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v56; // x27
  DeckServantData_o *v57; // x29
  UserEventDeckEntity_o *v58; // x25
  BalanceConfig_c **v59; // x22
  QuestRestrictionInfo_o *v60; // x28
  System_Int32_array *v61; // x21
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v62; // x20
  const MethodInfo *v63; // x3
  UIGrid_o *servantInfoGrid; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  UILabel_o *clearedLabel; // x21
  UnityEngine_Object_o *backGroundObj; // x20
  UILabel_o *v73; // x21
  System_Collections_Generic_List_object__o *v74; // x20
  EventDelegate_Callback_o *v75; // x22
  EventDelegate_o *v76; // x21
  int32_t v77; // w2
  int32_t v78; // w3
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  const MethodInfo *v83; // [xsp+0h] [xbp-A0h]
  __int64 v85; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // [xsp+20h] [xbp-80h]
  QuestRestrictionInfo_o **v88; // [xsp+28h] [xbp-78h]
  int32_t v90; // [xsp+38h] [xbp-68h] BYREF
  int v91; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A57315 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__);
    sub_1B885B0(&WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    sub_1B885B0(&WaveBattleWaveInfoComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_21117/*"line_whiteAlpha"*/);
    sub_1B885B0(&StringLiteral_15543/*"WAVE_BATTLE_WAVE_INFO"*/);
    sub_1B885B0(&StringLiteral_20493/*"img_txt_Member"*/);
    sub_1B885B0(&StringLiteral_15502/*"WAVE_BATTLE_CLEARED_WAVE"*/);
    sub_1B885B0(&StringLiteral_20494/*"img_txt_Starting"*/);
    sub_1B885B0(&StringLiteral_15536/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/);
    sub_1B885B0(&StringLiteral_20492/*"img_txt_Enemy"*/);
    byte_4A57315 = 1;
  }
  v15 = sub_1B887FC(WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_79;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = questRestrictionInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)questRestrictionInfo, v20, v21);
  *(_DWORD *)(v15 + 32) = wave;
  *(_DWORD *)(v15 + 36) = restartWaveSelectMax;
  this->fields.callbackFunc = callback;
  v88 = (QuestRestrictionInfo_o **)(v15 + 24);
  this->fields.wave = wave;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v22, v23);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15543/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v85 = v15;
  v91 = *(_DWORD *)(v15 + 32);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v26, v27, v28);
  v90 = maxWave;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v30, v31, v32);
  servantTextMemberSprite = (int *)System_String__Format_61721404(v25, v29, v33, 0LL);
  if ( !waveNumLabel )
    goto LABEL_79;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21117/*"line_whiteAlpha"*/, 0LL);
  if ( *(int *)(v15 + 32) >= 10 )
  {
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
    v35 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v35 )
      goto LABEL_79;
    UIWidget__set_width(v35, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
      v36 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      if ( !v36 )
        goto LABEL_79;
      UIWidget__set_width(
        v36,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0LL);
    }
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20492/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v38 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v38;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyClassIdList, (int32_t)v38, v39, v40);
  servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  }
  this->fields.height = **((_DWORD **)servantTextMemberSprite + 23);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !*v88 )
      goto LABEL_79;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v17, viewEnemyEntities, v41);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20494/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20493/*"img_txt_Member"*/,
    0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v43 = &BalanceConfig_TypeInfo;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v44 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v44;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantInfoList, (int32_t)v44, v46, v47);
  v48 = BalanceConfig_TypeInfo;
  v49 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  v50 = 0;
  v51 = v48->static_fields->DeckMainMemberMax * (v49 - 1);
  while ( 1 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = *v43;
    }
    if ( v50 >= v48->static_fields->DeckMainMemberMax )
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
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !deckEntity )
      goto LABEL_79;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_79;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_79;
    if ( v51 + v50 >= svts->max_length )
      sub_1B88814(servantTextMemberSprite, v17);
    v56 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (int *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_79;
    v57 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v51] + v50);
    v58 = deckEntity;
    v59 = v43;
    v60 = *v88;
    v61 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
            (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v62 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1B887FC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v62,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v63);
    if ( !v56 )
      goto LABEL_79;
    WaveBattleWaveServantInfoItem__SetItem(
      v56,
      v50,
      v57,
      v60,
      v61,
      v62,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v83);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v56, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_79;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (int *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_79;
    v67 = *((_QWORD *)servantTextMemberSprite + 2);
    v68 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++servantTextMemberSprite[7];
    if ( !v67 )
      goto LABEL_79;
    v69 = servantTextMemberSprite[6];
    v43 = v59;
    deckEntity = v58;
    if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v56,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = v67 + 8 * v69;
      servantTextMemberSprite[6] = v69 + 1;
      *(_QWORD *)(v70 + 32) = v56;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v56, v65, v66);
    }
    v48 = *v43;
    ++v50;
  }
  servantTextMemberSprite = (int *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    *(_DWORD *)(v85 + 32) < restartWave,
    0LL);
  clearedLabel = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0LL);
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
    *(_DWORD *)(v85 + 32) > restartWave,
    0LL);
  v73 = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15536/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0LL);
  if ( !v73 )
    goto LABEL_79;
  UILabel__set_text(v73, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( *(_DWORD *)(v85 + 32) > restartWave )
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
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v74 = (System_Collections_Generic_List_object__o *)*((_QWORD *)servantTextMemberSprite + 13);
  v75 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v75,
    (Il2CppObject *)v85,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__,
    0LL);
  v76 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46786736(v76, v75, 0LL);
  if ( !v74
    || (items = v74->fields._items,
        v80 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v74->fields._version,
        !items) )
  {
LABEL_79:
    sub_1B8880C(servantTextMemberSprite, v17);
  }
  size = v74->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v74,
      (Il2CppObject *)v76,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
  }
  else
  {
    v82 = &items->obj.klass + size;
    v74->fields._size = size + 1;
    v82[4] = (Il2CppClass *)v76;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v76, v77, v78);
  }
LABEL_76:
  servantTextMemberSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantTextMemberSprite, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__UpdateInterruptionData(
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
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v23; // x25
  BattleSetupInfo_o *v24; // x8
  NetworkManager_ResultCallbackFunc_o *v25; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5731B & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_BattleInterruptionRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__);
    byte_4A5731B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  v15 = sub_1B887FC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_22;
  *(_DWORD *)(v15 + 16) = warId;
  *(_DWORD *)(v15 + 20) = questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v15 + 112) = SelectableQuests;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 112), (int32_t)SelectableQuests, v17, v18);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  *(_DWORD *)(v15 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0LL);
  *(_DWORD *)(v15 + 124) = 0;
  *(_DWORD *)(v15 + 24) = questPhase;
  *(_WORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 48) = 0LL;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v15;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo, v15, v20, v21);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v23 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !v23 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v23, (int32_t)Master_object, 0LL);
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
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v25,
                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1B8880C(Master_object, v14);
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

  if ( (byte_4A57316 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__);
    byte_4A57316 = 1;
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
                                                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( v13 + v11 >= svts->max_length )
      sub_1B88814(servantInfoList, deckEntity);
    v17 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v18 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v13] + v11),
          v19 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
          v20 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1B887FC(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v21),
          !v17) )
    {
LABEL_18:
      sub_1B8880C(servantInfoList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v17, v11, v18, questRestrictionInfo, v19, v20, v12, 0, v22);
    v9 = BalanceConfig_TypeInfo;
    ++v11;
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

  if ( (byte_4A57313 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4A57313 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A57314 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    byte_4A57314 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9940;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C98E0;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = wave;
  v21 = result;
  v19 = idx;
  if ( (byte_4A5731F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4A5731F = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v21,
             *(_QWORD *)&wave,
             *(_QWORD *)&idx,
             callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  if ( (byte_4A57320 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A57320 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0LL)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0LL),
        !_4__this) )
  {
    sub_1B8880C(this, method);
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


void __fastcall WaveBattleWaveInfoComponent___c__DisplayClass38_0___OnClickWave_b__0(
        WaveBattleWaveInfoComponent___c__DisplayClass38_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A57321 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__);
    sub_1B885B0(&WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo);
    byte_4A57321 = 1;
  }
  v5 = sub_1B887FC(WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
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

  if ( (byte_4A57322 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57322 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A57323 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *)sub_1B885B0(&Method_ActionExtensions_Call_int___);
    byte_4A57323 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
}