void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB0770 & 1) == 0 )
  {
    sub_1C13D24(&WaveBattleWaveInfoComponent_TypeInfo, v1);
    byte_4BB0770 = 1;
  }
  *WaveBattleWaveInfoComponent_TypeInfo->static_fields = (struct WaveBattleWaveInfoComponent_StaticFields)xmmword_BF6780;
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  int32_t size; // w2
  int v26; // w9
  __int64 v27; // x8
  struct System_Collections_Generic_List_int__o *enemyClassIdList; // x9
  int v29; // w10
  __int64 v30; // x25
  int32_t v31; // w22
  ViewWaveEnemyEntity_o *v32; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  Il2CppObject *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Int32_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8

  if ( (byte_4BB0769 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___, *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Clear__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v12);
    sub_1C13D24(&WaveBattleWaveInfoComponent_TypeInfo, v13);
    byte_4BB0769 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v14;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.enemyInfoList, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = enemyInfoList->fields._size;
  v26 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enemyInfoList->fields._items, 0, size, 0LL);
  if ( viewEnemyEntities )
  {
    v27 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v27 )
    {
      enemyClassIdList = this->fields.enemyClassIdList;
      if ( !enemyClassIdList )
        goto LABEL_38;
      v29 = enemyClassIdList->fields._version + 1;
      enemyClassIdList->fields._size = 0;
      enemyClassIdList->fields._version = v29;
      if ( (int)v27 >= 1 )
      {
        v30 = 0LL;
        v31 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v30 >= (unsigned int)v27 )
            sub_1C13F88(enemyInfoListParent, classId);
          v32 = viewEnemyEntities->m_Items[v30];
          if ( !v32 )
            break;
          if ( v32->fields.wave == this->fields.wave )
          {
            enemyInfoListParent = this->fields.enemyClassIdList;
            if ( !enemyInfoListParent )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    enemyInfoListParent,
                    v32->fields.classId,
                    (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              enemyInfoListParent = this->fields.enemyClassIdList;
              if ( !enemyInfoListParent )
                break;
              classId = (unsigned int)v32->fields.classId;
              items = enemyInfoListParent->fields._items;
              v34 = Method_System_Collections_Generic_List_int__Add__;
              ++enemyInfoListParent->fields._version;
              if ( !items )
                break;
              v35 = enemyInfoListParent->fields._size;
              if ( (unsigned int)v35 >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  enemyInfoListParent,
                  classId,
                  *(const MethodInfo_36101A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                enemyInfoListParent->fields._size = v35 + 1;
                items->m_Items[v35 + 1] = classId;
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
                                                                              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
            if ( !enemyInfoListParent )
              break;
            enemyInfoGrid = this->fields.enemyInfoGrid;
            v39 = (Il2CppObject *)enemyInfoListParent;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)enemyInfoListParent,
                                                                              0LL);
            if ( !enemyInfoGrid )
              break;
            UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoListParent, 0LL);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)*p_enemyInfoList;
            if ( !*p_enemyInfoList )
              break;
            v46 = enemyInfoListParent->fields._items;
            v47 = Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__;
            ++enemyInfoListParent->fields._version;
            if ( !v46 )
              break;
            v48 = enemyInfoListParent->fields._size;
            if ( (unsigned int)v48 >= v46->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)enemyInfoListParent,
                v39,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = (__int64)v46 + 8 * v48;
              enemyInfoListParent->fields._size = v48 + 1;
              *(_QWORD *)(v49 + 32) = v39;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v39, v40, v41, v42, v43, v44, v45);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v31 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 4LL) )
              return v31;
            v27 = *(_QWORD *)&viewEnemyEntities->max_length;
          }
          if ( (int)++v30 >= (int)v27 )
            return v31;
        }
LABEL_38:
        sub_1C13F80(enemyInfoListParent, classId);
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

  if ( (byte_4BB076E & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BB076E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.wave,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v5);
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

  if ( (byte_4BB076B & 1) == 0 )
  {
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent_OnClickMask__, method);
    byte_4BB076B = 1;
  }
  v2 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C13D3C(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C13D08(v2, v2[4]);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int *v34; // x20
  int *v35; // x21
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  int v38; // w22
  int v39; // w23
  System_String_o *v40; // x22
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x22
  Il2CppObject *v44; // x23
  Il2CppObject *v45; // x0
  int v46; // w23
  int v47; // w24
  System_String_o *v48; // x23
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x23
  int v52; // w22
  int v53; // w28
  Il2CppObject *v54; // x20
  System_String_o *v55; // x21
  System_String_o *v56; // x24
  CommonConfirmDialog_ClickDelegate_o *v57; // x25
  int32_t decideTxtSize; // w8
  System_String_o *message; // [xsp+18h] [xbp-68h]

  if ( (byte_4BB076C & 1) == 0 )
  {
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&questId);
    sub_1C13D24(&LocalizationManager_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__, v15);
    sub_1C13D24(&WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo, v16);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent_OnClickWave__, v17);
    sub_1C13D24(&StringLiteral_2924/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, v18);
    sub_1C13D24(&StringLiteral_2939/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, v19);
    sub_1C13D24(&StringLiteral_2937/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v20);
    sub_1C13D24(&StringLiteral_2926/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, v21);
    sub_1C13D24(&StringLiteral_2923/*"BATTLE_HASNOT_TD"*/, v22);
    sub_1C13D24(&StringLiteral_2925/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, v23);
    sub_1C13D24(&StringLiteral_1220/*"00"*/, v24);
    byte_4BB076C = 1;
  }
  v25 = sub_1C13F70(WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_24;
  *(_QWORD *)(v25 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v25 + 36) = waveNum;
  v34 = (int *)(v25 + 36);
  *(_DWORD *)(v25 + 32) = warId;
  *(_DWORD *)(v25 + 24) = questId;
  *(_DWORD *)(v25 + 28) = questPhase;
  *(_DWORD *)(v25 + 40) = waveNumMax;
  v35 = (int *)(v25 + 40);
  v36 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1C13D3C(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v37 = (System_Reflection_MethodBase_o *)sub_1C13D08(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0, 0LL);
  v38 = *v34;
  v39 = *v35;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v38 == v39 )
  {
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2925/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v41 = (Il2CppObject *)System_Int32__ToString_63773552((int)v25 + 36, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
    v42 = System_String__Format(v40, v41, 0LL);
  }
  else
  {
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0LL);
    v44 = (Il2CppObject *)System_Int32__ToString_63773552((int)v25 + 36, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
    v45 = (Il2CppObject *)System_Int32__ToString_63773552((int)v25 + 40, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
    v42 = System_String__Format_62982316(v43, v44, v45, 0LL);
  }
  message = v42;
  v46 = *v34;
  v47 = *v35;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v46 == v47 )
  {
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2924/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0LL);
  }
  else
  {
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2937/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL);
    v49 = (Il2CppObject *)System_Int32__ToString_63773552((int)v25 + 36, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
    v50 = System_String__Format(v48, v49, 0LL);
  }
  v51 = v50;
  v52 = *v34;
  v53 = *v35;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2926/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_HASNOT_TD"*/, 0LL);
  v57 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v57,
    (Il2CppObject *)v25,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__,
    0LL);
  if ( !v54 )
LABEL_24:
    sub_1C13F80(Instance, v27);
  if ( v52 == v53 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)v54,
    v55,
    message,
    v51,
    v56,
    v57,
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
    sub_1C13F80(clearedLabel, overwriteLabel);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *Component_object; // x21
  System_Array_o **monitor; // x20
  int32_t v29; // w2
  int v30; // w8
  EventDelegate_Callback_o *v31; // x21
  EventDelegate_o *v32; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Array_o *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x0

  if ( (byte_4BB076F & 1) == 0 )
  {
    sub_1C13D24(&EventDelegate_Callback_TypeInfo, callback);
    sub_1C13D24(&EventDelegate_TypeInfo, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__, v10);
    sub_1C13D24(&WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo, v11);
    byte_4BB076F = 1;
  }
  v12 = sub_1C13F70(WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
        v29 = *((_DWORD *)monitor + 6);
        v30 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v30;
        if ( v29 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v29, 0LL);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v31 = (EventDelegate_Callback_o *)sub_1C13F70(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v31,
          (Il2CppObject *)v12,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v32 = (EventDelegate_o *)sub_1C13F70(EventDelegate_TypeInfo);
        EventDelegate___ctor_47827852(v32, v31, 0LL);
        if ( monitor )
        {
          v39 = monitor[2];
          v40 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++*((_DWORD *)monitor + 7);
          if ( v39 )
          {
            v41 = *((int *)monitor + 6);
            if ( (unsigned int)v41 >= LODWORD(v39[1].monitor) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)monitor,
                (Il2CppObject *)v32,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = (__int64)v39 + 8 * v41;
              *((_DWORD *)monitor + 6) = v41 + 1;
              *(_QWORD *)(v42 + 32) = v32;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
            }
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C13F80(MoveToPartyButton, v14);
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
  if ( (byte_4BB076A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__, viewEnemyEntities);
    this = (WaveBattleWaveInfoComponent_o *)sub_1C13D24(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5);
    byte_4BB076A = 1;
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
            sub_1C13F88(this, viewEnemyEntities);
          v9 = viewEnemyEntities->m_Items[v7];
          if ( !v9 )
LABEL_16:
            sub_1C13F80(this, viewEnemyEntities);
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
                                                      (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
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
    sub_1C13F80(0LL, active);
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
    sub_1C13F80(0LL, active);
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UILabel_o *waveNumLabel; // x26
  System_String_o *v64; // x20
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x21
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x0
  UISprite_o *waveLineSprite; // x20
  UIWidget_o *v74; // x20
  UIWidget_o *v75; // x20
  UISprite_o *enemyTextSprite; // x20
  System_Collections_Generic_List_int__o *v77; // x20
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  const MethodInfo *v84; // x3
  UISprite_o *servantTextStartingSprite; // x20
  BalanceConfig_c **v86; // x28
  System_Collections_Generic_List_object__o *v87; // x20
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x24
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  BalanceConfig_c *v95; // x0
  int32_t v96; // w20
  int32_t v97; // w26
  int v98; // w23
  UnityEngine_GameObject_o *servantInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v103; // x27
  DeckServantData_o *v104; // x29
  UserEventDeckEntity_o *v105; // x25
  BalanceConfig_c **v106; // x22
  QuestRestrictionInfo_o *v107; // x28
  System_Int32_array *v108; // x21
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v109; // x20
  const MethodInfo *v110; // x3
  UIGrid_o *servantInfoGrid; // x20
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x8
  UILabel_o *clearedLabel; // x21
  UnityEngine_Object_o *backGroundObj; // x20
  UILabel_o *v124; // x21
  System_Collections_Generic_List_object__o *v125; // x20
  EventDelegate_Callback_o *v126; // x22
  EventDelegate_o *v127; // x21
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  struct System_Object_array *items; // x8
  _QWORD *v135; // x9
  __int64 size; // x10
  Il2CppClass **v137; // x0
  const MethodInfo *v138; // [xsp+0h] [xbp-A0h]
  __int64 v140; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // [xsp+20h] [xbp-80h]
  QuestRestrictionInfo_o **v143; // [xsp+28h] [xbp-78h]
  int32_t v145; // [xsp+38h] [xbp-68h] BYREF
  int v146; // [xsp+3Ch] [xbp-64h] BYREF

  v13 = deckEntity;
  if ( (byte_4BB0767 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, deckEntity);
    sub_1C13D24(&BalanceConfig_TypeInfo, v15);
    sub_1C13D24(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v16);
    sub_1C13D24(&EventDelegate_Callback_TypeInfo, v17);
    sub_1C13D24(&EventDelegate_TypeInfo, v18);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v19);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v20);
    sub_1C13D24(&int_TypeInfo, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDelegate__Add__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v26);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v27);
    sub_1C13D24(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v28);
    sub_1C13D24(&LocalizationManager_TypeInfo, v29);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v30);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__, v31);
    sub_1C13D24(&WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo, v32);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v33);
    sub_1C13D24(&WaveBattleWaveInfoComponent_TypeInfo, v34);
    sub_1C13D24(&StringLiteral_21463/*"limitCountGiftIdDic"*/, v35);
    sub_1C13D24(&StringLiteral_15786/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, v36);
    sub_1C13D24(&StringLiteral_20830/*"img_talk_textbg"*/, v37);
    sub_1C13D24(&StringLiteral_15745/*"WAR_MESSAGE_DIALOG_CANCEL"*/, v38);
    sub_1C13D24(&StringLiteral_20831/*"img_terminal_itembg"*/, v39);
    sub_1C13D24(&StringLiteral_15779/*"WAVE_BATTLE_PARTY_ORGANIZATION_DECK_SAVE_CONFIRM_DIALOG_NOT_SAVE"*/, v40);
    sub_1C13D24(&StringLiteral_20829/*"img_talk_namebg"*/, v41);
    byte_4BB0767 = 1;
  }
  v42 = sub_1C13F70(WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_79;
  *(_QWORD *)(v42 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)this, v45, v46, v47, v48, v49, v50);
  *(_QWORD *)(v42 + 24) = questRestrictionInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v42 + 24), (int64_t)questRestrictionInfo, v51, v52, v53, v54, v55, v56);
  *(_DWORD *)(v42 + 32) = wave;
  *(_DWORD *)(v42 + 36) = restartWaveSelectMax;
  this->fields.callbackFunc = callback;
  v143 = (QuestRestrictionInfo_o **)(v42 + 24);
  this->fields.wave = wave;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v57, v58, v59, v60, v61, v62);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_15786/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  v140 = v42;
  v146 = *(_DWORD *)(v42 + 32);
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v146, v65, v66, v67);
  v145 = maxWave;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v145, v69, v70, v71);
  servantTextMemberSprite = (int *)System_String__Format_62982316(v64, v68, v72, 0LL);
  if ( !waveNumLabel )
    goto LABEL_79;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21463/*"limitCountGiftIdDic"*/, 0LL);
  if ( *(int *)(v42 + 32) >= 10 )
  {
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
    v74 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    if ( !v74 )
      goto LABEL_79;
    UIWidget__set_width(v74, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
      v75 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
      if ( !v75 )
        goto LABEL_79;
      UIWidget__set_width(
        v75,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0LL);
    }
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20829/*"img_talk_namebg"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v77 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v77;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.enemyClassIdList, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo);
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  }
  this->fields.height = **((_DWORD **)servantTextMemberSprite + 23);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !*v143 )
      goto LABEL_79;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v44, viewEnemyEntities, v84);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20831/*"img_terminal_itembg"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20830/*"img_talk_textbg"*/,
    0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v86 = &BalanceConfig_TypeInfo;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v87 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v87;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantInfoList, (int64_t)v87, v89, v90, v91, v92, v93, v94);
  v95 = BalanceConfig_TypeInfo;
  v96 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v95 = BalanceConfig_TypeInfo;
  }
  v97 = 0;
  v98 = v95->static_fields->DeckMainMemberMax * (v96 - 1);
  while ( 1 )
  {
    if ( !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95);
      v95 = *v86;
    }
    if ( v97 >= v95->static_fields->DeckMainMemberMax )
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
                                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !v13 )
      goto LABEL_79;
    deckInfo = v13->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_79;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_79;
    if ( v98 + v97 >= svts->max_length )
      sub_1C13F88(servantTextMemberSprite, v44);
    v103 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (int *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_79;
    v104 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v98] + v97);
    v105 = v13;
    v106 = v86;
    v107 = *v143;
    v108 = System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
             (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
    v109 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C13F70(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v109,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v110);
    if ( !v103 )
      goto LABEL_79;
    WaveBattleWaveServantInfoItem__SetItem(
      v103,
      v97,
      v104,
      v107,
      v108,
      v109,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v138);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v103, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_79;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (int *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_79;
    v118 = *((_QWORD *)servantTextMemberSprite + 2);
    v119 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++servantTextMemberSprite[7];
    if ( !v118 )
      goto LABEL_79;
    v120 = servantTextMemberSprite[6];
    v86 = v106;
    v13 = v105;
    if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v103,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = v118 + 8 * v120;
      servantTextMemberSprite[6] = v120 + 1;
      *(_QWORD *)(v121 + 32) = v103;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 32), (int64_t)v103, v112, v113, v114, v115, v116, v117);
    }
    v95 = *v86;
    ++v97;
  }
  servantTextMemberSprite = (int *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    *(_DWORD *)(v140 + 32) < restartWave,
    0LL);
  clearedLabel = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15745/*"WAR_MESSAGE_DIALOG_CANCEL"*/, 0LL);
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
    *(_DWORD *)(v140 + 32) > restartWave,
    0LL);
  v124 = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15779/*"WAVE_BATTLE_PARTY_ORGANIZATION_DECK_SAVE_CONFIRM_DIALOG_NOT_SAVE"*/, 0LL);
  if ( !v124 )
    goto LABEL_79;
  UILabel__set_text(v124, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( *(_DWORD *)(v140 + 32) > restartWave )
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
                                     (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v125 = (System_Collections_Generic_List_object__o *)*((_QWORD *)servantTextMemberSprite + 13);
  v126 = (EventDelegate_Callback_o *)sub_1C13F70(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v126,
    (Il2CppObject *)v140,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__,
    0LL);
  v127 = (EventDelegate_o *)sub_1C13F70(EventDelegate_TypeInfo);
  EventDelegate___ctor_47827852(v127, v126, 0LL);
  if ( !v125
    || (items = v125->fields._items,
        v135 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v125->fields._version,
        !items) )
  {
LABEL_79:
    sub_1C13F80(servantTextMemberSprite, v44);
  }
  size = v125->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v125,
      (Il2CppObject *)v127,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
  }
  else
  {
    v137 = &items->obj.klass + size;
    v125->fields._size = size + 1;
    v137[4] = (Il2CppClass *)v127;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v137 + 4), (int64_t)v127, v128, v129, v130, v131, v132, v133);
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
  int64_t v22; // x25
  System_Int32_array *SelectableQuests; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v38; // x25
  BattleSetupInfo_o *v39; // x8
  NetworkManager_ResultCallbackFunc_o *v40; // x23
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB076D & 1) == 0 )
  {
    sub_1C13D24(&BattleSetupInfo_TypeInfo, *(_QWORD *)&questId);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_1C13D24(&DataManager_TypeInfo, v15);
    sub_1C13D24(&Method_NetworkManager_getRequest_BattleInterruptionRequest___, v16);
    sub_1C13D24(&NetworkManager_TypeInfo, v17);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v18);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__, v19);
    byte_4BB076D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  v22 = sub_1C13F70(BattleSetupInfo_TypeInfo);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 112), (int64_t)SelectableQuests, v24, v25, v26, v27, v28, v29);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.battleSetupInfo, v22, v31, v32, v33, v34, v35, v36);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v38 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !v38 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v38, (int32_t)Master_object, 0LL);
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
  v39 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  v39->fields.originQuestId = questId;
  v39->fields.isScriptBeforeWarBoard = 0;
  v39->fields.restartWave = waveNum;
  if ( waveNum == waveNumMax )
  {
    WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(this, v21);
    return;
  }
  v40 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v40,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v40,
                                          (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1C13F80(Master_object, v21);
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

  if ( (byte_4BB0768 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, deckEntity);
    sub_1C13D24(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v11);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v12);
    byte_4BB0768 = 1;
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
                                                                     (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( v17 + v15 >= svts->max_length )
      sub_1C13F88(servantInfoList, deckEntity);
    v21 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v22 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v17] + v15),
          v23 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__),
          v24 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1C13F70(WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v25),
          !v21) )
    {
LABEL_18:
      sub_1C13F80(servantInfoList, deckEntity);
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

  if ( (byte_4BB0765 & 1) == 0 )
  {
    sub_1C13D24(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4BB0765 = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1C14240(v8);
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

  if ( (byte_4BB0766 & 1) == 0 )
  {
    sub_1C13D24(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4BB0766 = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1C14240(v8);
  WaveBattleWaveInfoComponent__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A504D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A50474;
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
  if ( (byte_4BB0771 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4BB0771 = 1;
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
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v18, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  if ( (byte_4BB0772 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)sub_1C13D24(
                                                                    &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                                    method);
    byte_4BB0772 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v2->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v7 = v2->fields.questRestrictionInfo) == 0LL)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v7->fields.questId,
                                                                        0LL),
        !_4__this) )
  {
    sub_1C13F80(this, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4BB0773 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__, v6);
    sub_1C13D24(&WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo, v7);
    byte_4BB0773 = 1;
  }
  v8 = sub_1C13F70(WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C13F80(v9, v10);
  }
  CommonUI__CloseConfirmDialog_31071160((CommonUI_o *)Instance, v18, 0LL);
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

  if ( (byte_4BB0774 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB0774 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C13F80(Instance, v4);
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
  if ( (byte_4BB0775 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *)sub_1C13D24(
                                                                    &Method_ActionExtensions_Call_int___,
                                                                    method);
    byte_4BB0775 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v2->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2EE1BD8 *)Method_ActionExtensions_Call_int___);
}