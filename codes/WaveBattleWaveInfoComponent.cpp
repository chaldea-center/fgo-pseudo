void __fastcall WaveBattleWaveInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B122FC & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoComponent_TypeInfo, v1, v2);
    byte_4B122FC = 1;
  }
  *WaveBattleWaveInfoComponent_TypeInfo->static_fields = (struct WaveBattleWaveInfoComponent_StaticFields)xmmword_BD29F0;
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o **p_enemyInfoList; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_int__o *enemyInfoListParent; // x0
  __int64 classId; // x1
  struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *enemyInfoList; // x8
  int32_t size; // w2
  int v34; // w9
  __int64 v35; // x8
  struct System_Collections_Generic_List_int__o *enemyClassIdList; // x9
  int v37; // w10
  __int64 v38; // x25
  int32_t v39; // w22
  ViewWaveEnemyEntity_o *v40; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  UnityEngine_GameObject_o *enemyInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UIGrid_o *enemyInfoGrid; // x24
  Il2CppObject *v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8

  if ( (byte_4B122F5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___,
      *(_QWORD *)&questId,
      viewEnemyEntities);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo, v18, v19);
    sub_1BCA7E0(&WaveBattleWaveInfoComponent_TypeInfo, v20, v21);
    byte_4B122F5 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       viewEnemyEntities,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem___ctor__);
  this->fields.enemyInfoList = (struct System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__o *)v22;
  p_enemyInfoList = &this->fields.enemyInfoList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enemyInfoList, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  enemyInfoList = this->fields.enemyInfoList;
  if ( !enemyInfoList )
    goto LABEL_38;
  size = enemyInfoList->fields._size;
  v34 = enemyInfoList->fields._version + 1;
  enemyInfoList->fields._size = 0;
  enemyInfoList->fields._version = v34;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enemyInfoList->fields._items, 0, size, 0LL);
  if ( viewEnemyEntities )
  {
    v35 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v35 )
    {
      enemyClassIdList = this->fields.enemyClassIdList;
      if ( !enemyClassIdList )
        goto LABEL_38;
      v37 = enemyClassIdList->fields._version + 1;
      enemyClassIdList->fields._size = 0;
      enemyClassIdList->fields._version = v37;
      if ( (int)v35 >= 1 )
      {
        v38 = 0LL;
        v39 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v38 >= (unsigned int)v35 )
            sub_1BCAA44(enemyInfoListParent, classId);
          v40 = viewEnemyEntities->m_Items[v38];
          if ( !v40 )
            break;
          if ( v40->fields.wave == this->fields.wave )
          {
            enemyInfoListParent = this->fields.enemyClassIdList;
            if ( !enemyInfoListParent )
              break;
            if ( !System_Collections_Generic_List_int___Contains(
                    enemyInfoListParent,
                    v40->fields.classId,
                    (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              enemyInfoListParent = this->fields.enemyClassIdList;
              if ( !enemyInfoListParent )
                break;
              classId = (unsigned int)v40->fields.classId;
              items = enemyInfoListParent->fields._items;
              v42 = Method_System_Collections_Generic_List_int__Add__;
              ++enemyInfoListParent->fields._version;
              if ( !items )
                break;
              v43 = enemyInfoListParent->fields._size;
              if ( (unsigned int)v43 >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  enemyInfoListParent,
                  classId,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                enemyInfoListParent->fields._size = v43 + 1;
                items->m_Items[v43 + 1] = classId;
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
                                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveEnemyInfoItem___);
            if ( !enemyInfoListParent )
              break;
            enemyInfoGrid = this->fields.enemyInfoGrid;
            v47 = (Il2CppObject *)enemyInfoListParent;
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)enemyInfoListParent,
                                                                              0LL);
            if ( !enemyInfoGrid )
              break;
            UIGrid__AddChild(enemyInfoGrid, (UnityEngine_Transform_o *)enemyInfoListParent, 0LL);
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)*p_enemyInfoList;
            if ( !*p_enemyInfoList )
              break;
            v54 = enemyInfoListParent->fields._items;
            v55 = Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__Add__;
            ++enemyInfoListParent->fields._version;
            if ( !v54 )
              break;
            v56 = enemyInfoListParent->fields._size;
            if ( (unsigned int)v56 >= v54->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)enemyInfoListParent,
                v47,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v57 = (__int64)v54 + 8 * v56;
              enemyInfoListParent->fields._size = v56 + 1;
              *(_QWORD *)(v57 + 32) = v47;
              sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)v47, v48, v49, v50, v51, v52, v53);
            }
            enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, classId);
              enemyInfoListParent = (System_Collections_Generic_List_int__o *)WaveBattleWaveInfoComponent_TypeInfo;
            }
            if ( ++v39 >= *(_DWORD *)(*(_QWORD *)&enemyInfoListParent[4].fields._size + 4LL) )
              return v39;
            v35 = *(_QWORD *)&viewEnemyEntities->max_length;
          }
          if ( (int)++v38 >= (int)v35 )
            return v39;
        }
LABEL_38:
        sub_1BCAA3C(enemyInfoListParent, classId);
      }
    }
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(
        WaveBattleWaveInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct WaveBattleWaveInfoComponent_CallbackFunc_o *callbackFunc; // x8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B122FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B122FA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.wave,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B122F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent_OnClickMask__, method, v2);
    byte_4B122F7 = 1;
  }
  v3 = Method_WaveBattleWaveInfoComponent_OnClickMask__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickMask__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleWaveInfoComponent_OnClickMask__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x19
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int *v46; // x20
  int *v47; // x21
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  __int64 v50; // x1
  int v51; // w22
  int v52; // w23
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x22
  Il2CppObject *v58; // x23
  Il2CppObject *v59; // x0
  int v60; // w23
  int v61; // w24
  System_String_o *v62; // x23
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x23
  int v66; // w22
  int v67; // w28
  __int64 v68; // x1
  Il2CppObject *v69; // x20
  System_String_o *v70; // x21
  System_String_o *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  CommonConfirmDialog_ClickDelegate_o *v75; // x25
  int32_t decideTxtSize; // w8
  System_String_o *message; // [xsp+18h] [xbp-68h]

  if ( (byte_4B122F8 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__, v17, v18);
    sub_1BCA7E0(&WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent_OnClickWave__, v21, v22);
    sub_1BCA7E0(&StringLiteral_2915/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2917/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_2914/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2916/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v35, v36);
    byte_4B122F8 = 1;
  }
  v37 = sub_1BCAA2C(
          WaveBattleWaveInfoComponent___c__DisplayClass38_0_TypeInfo,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          *(_QWORD *)&warId);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_24;
  *(_QWORD *)(v37 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)this, v40, v41, v42, v43, v44, v45);
  *(_DWORD *)(v37 + 36) = waveNum;
  v46 = (int *)(v37 + 36);
  *(_DWORD *)(v37 + 32) = warId;
  *(_DWORD *)(v37 + 24) = questId;
  *(_DWORD *)(v37 + 28) = questPhase;
  *(_DWORD *)(v37 + 40) = waveNumMax;
  v47 = (int *)(v37 + 40);
  v48 = Method_WaveBattleWaveInfoComponent_OnClickWave__;
  if ( (*((_BYTE *)Method_WaveBattleWaveInfoComponent_OnClickWave__ + 83) & 2) != 0 )
    v48 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleWaveInfoComponent_OnClickWave__);
  v49 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v48, v48[4]);
  OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0LL);
  v51 = *v46;
  v52 = *v47;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
  if ( v51 == v52 )
  {
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2916/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v54 = (Il2CppObject *)System_Int32__ToString_63206828((int)v37 + 36, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v55 = System_String__Format(v53, v54, 0LL);
  }
  else
  {
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v58 = (Il2CppObject *)System_Int32__ToString_63206828((int)v37 + 36, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v59 = (Il2CppObject *)System_Int32__ToString_63206828((int)v37 + 40, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v55 = System_String__Format_62415592(v57, v58, v59, 0LL);
  }
  message = v55;
  v60 = *v46;
  v61 = *v47;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
  if ( v60 == v61 )
  {
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2915/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_DECIDE"*/, 0LL);
  }
  else
  {
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v63 = (Il2CppObject *)System_Int32__ToString_63206828((int)v37 + 36, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v64 = System_String__Format(v62, v63, 0LL);
  }
  v65 = v64;
  v66 = *v46;
  v67 = *v47;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_2917/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_TITLE"*/, 0LL);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2914/*"BATTLE_INTERRUPTION_RESTART_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v72, v73, v74);
  CommonConfirmDialog_ClickDelegate___ctor(
    v75,
    (Il2CppObject *)v37,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass38_0__OnClickWave_b__0__,
    0LL);
  if ( !v69 )
LABEL_24:
    sub_1BCAA3C(Instance, v39);
  if ( v66 == v67 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)v69,
    v70,
    message,
    v65,
    v71,
    v75,
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
    sub_1BCAA3C(clearedLabel, overwriteLabel);
  }
  UILabel__set_text(clearedLabel, overwriteLabel, 0LL);
}


void __fastcall WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoComponent_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x19
  UnityEngine_GameObject_o *MoveToPartyButton; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *Component_object; // x21
  __int64 v37; // x3
  System_Array_o **monitor; // x20
  __int64 v39; // x2
  int v40; // w8
  EventDelegate_Callback_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  EventDelegate_o *v45; // x19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Array_o *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x0

  if ( (byte_4B122FB & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, callback, method);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__, v16, v17);
    sub_1BCA7E0(&WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo, v18, v19);
    byte_4B122FB = 1;
  }
  v20 = sub_1BCAA2C(WaveBattleWaveInfoComponent___c__DisplayClass44_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_17;
  *(_QWORD *)(v20 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v29, v30, v31, v32, v33, v34);
  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               MoveToPartyButton,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  MoveToPartyButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)MoveToPartyButton & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Array_o **)Component_object[4].monitor;
      if ( monitor )
      {
        v39 = *((unsigned int *)monitor + 6);
        v40 = *((_DWORD *)monitor + 7) + 1;
        *((_DWORD *)monitor + 6) = 0;
        *((_DWORD *)monitor + 7) = v40;
        if ( (int)v39 >= 1 )
        {
          System_Array__Clear(monitor[2], 0, v39, 0LL);
          monitor = (System_Array_o **)Component_object[4].monitor;
        }
        v41 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v22, v39, v37);
        EventDelegate_Callback___ctor(
          v41,
          (Il2CppObject *)v20,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass44_0__OverwriteMoveToPartyButton_b__0__,
          0LL);
        v45 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v42, v43, v44);
        EventDelegate___ctor_47348668(v45, v41, 0LL);
        if ( monitor )
        {
          v52 = monitor[2];
          v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++*((_DWORD *)monitor + 7);
          if ( v52 )
          {
            v54 = *((int *)monitor + 6);
            if ( (unsigned int)v54 >= LODWORD(v52[1].monitor) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)monitor,
                (Il2CppObject *)v45,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = (__int64)v52 + 8 * v54;
              *((_DWORD *)monitor + 6) = v54 + 1;
              *(_QWORD *)(v55 + 32) = v45;
              sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v45, v46, v47, v48, v49, v50, v51);
            }
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(MoveToPartyButton, v22);
  }
}


void __fastcall WaveBattleWaveInfoComponent__SetEnemyInfo(
        WaveBattleWaveInfoComponent_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  WaveBattleWaveInfoComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  __int64 v8; // x23
  int32_t v9; // w21
  ViewWaveEnemyEntity_o *v10; // x22
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4B122F6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Count__,
      viewEnemyEntities,
      method);
    this = (WaveBattleWaveInfoComponent_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__,
                                              v5,
                                              v6);
    byte_4B122F6 = 1;
  }
  if ( viewEnemyEntities )
  {
    v7 = *(_QWORD *)&viewEnemyEntities->max_length;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = 0LL;
        v9 = 0;
        do
        {
          if ( (unsigned int)v8 >= (unsigned int)v7 )
            sub_1BCAA44(this, viewEnemyEntities);
          v10 = viewEnemyEntities->m_Items[v8];
          if ( !v10 )
LABEL_16:
            sub_1BCAA3C(this, viewEnemyEntities);
          if ( v10->fields.wave == v4->fields.wave )
          {
            this = (WaveBattleWaveInfoComponent_o *)v4->fields.enemyInfoList;
            if ( !this )
              goto LABEL_16;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) <= v9 )
              return;
            this = (WaveBattleWaveInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v9,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WaveBattleWaveEnemyInfoItem__get_Item__);
            if ( !this )
              goto LABEL_16;
            WaveBattleWaveEnemyInfoItem__SetItem((WaveBattleWaveEnemyInfoItem_o *)this, v10, v11);
            v7 = *(_QWORD *)&viewEnemyEntities->max_length;
            ++v9;
          }
          ++v8;
        }
        while ( (int)v8 < (int)v7 );
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__SetMaskObjActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObj; // x0

  maskObj = this->fields.maskObj;
  if ( !maskObj )
    sub_1BCAA3C(0LL, active);
  UnityEngine_GameObject__SetActive(maskObj, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoComponent__SetMoveToPartyButtonActive(
        WaveBattleWaveInfoComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *MoveToPartyButton; // x0

  MoveToPartyButton = this->fields.MoveToPartyButton;
  if ( !MoveToPartyButton )
    sub_1BCAA3C(0LL, active);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x25
  int *servantTextMemberSprite; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  UILabel_o *waveNumLabel; // x26
  System_String_o *v92; // x20
  Il2CppObject *v93; // x21
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  UISprite_o *waveLineSprite; // x20
  UIWidget_o *v97; // x20
  UIWidget_o *v98; // x20
  UISprite_o *enemyTextSprite; // x20
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  System_Collections_Generic_List_int__o *v103; // x20
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  const MethodInfo *v110; // x3
  UISprite_o *servantTextStartingSprite; // x20
  BalanceConfig_c **v112; // x28
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  System_Collections_Generic_List_object__o *v116; // x20
  struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o **p_servantInfoList; // x24
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  BalanceConfig_c *v124; // x0
  int32_t v125; // w20
  int32_t v126; // w26
  int v127; // w23
  UnityEngine_GameObject_o *servantInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v132; // x27
  DeckServantData_o *v133; // x29
  UserEventDeckEntity_o *v134; // x25
  BalanceConfig_c **v135; // x22
  QuestRestrictionInfo_o *v136; // x28
  System_Int32_array *v137; // x21
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v141; // x20
  const MethodInfo *v142; // x3
  UIGrid_o *servantInfoGrid; // x20
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  __int64 v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  __int64 v153; // x8
  __int64 v154; // x1
  UILabel_o *clearedLabel; // x21
  __int64 v156; // x1
  UnityEngine_Object_o *backGroundObj; // x20
  __int64 v158; // x1
  UILabel_o *v159; // x21
  __int64 v160; // x2
  __int64 v161; // x3
  System_Collections_Generic_List_object__o *v162; // x20
  EventDelegate_Callback_o *v163; // x22
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x3
  EventDelegate_o *v167; // x21
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct System_Object_array *items; // x8
  _QWORD *v175; // x9
  __int64 size; // x10
  Il2CppClass **v177; // x0
  const MethodInfo *v178; // [xsp+0h] [xbp-A0h]
  __int64 v180; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_int__o **p_enemyClassIdList; // [xsp+20h] [xbp-80h]
  QuestRestrictionInfo_o **v183; // [xsp+28h] [xbp-78h]
  int32_t v185; // [xsp+38h] [xbp-68h] BYREF
  int v186; // [xsp+3Ch] [xbp-64h] BYREF

  v13 = deckEntity;
  if ( (byte_4B122F3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, deckEntity, viewEnemyEntities);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v17, v18);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v19, v20);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo, v41, v42);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__, v47, v48);
    sub_1BCA7E0(&WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v51, v52);
    sub_1BCA7E0(&WaveBattleWaveInfoComponent_TypeInfo, v53, v54);
    sub_1BCA7E0(&StringLiteral_21343/*"line_whiteAlpha"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_15710/*"WAVE_BATTLE_WAVE_INFO"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_20712/*"img_txt_Member"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_15669/*"WAVE_BATTLE_CLEARED_WAVE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_20713/*"img_txt_Starting"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_15703/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_20711/*"img_txt_Enemy"*/, v67, v68);
    byte_4B122F3 = 1;
  }
  v69 = sub_1BCAA2C(
          WaveBattleWaveInfoComponent___c__DisplayClass32_0_TypeInfo,
          deckEntity,
          viewEnemyEntities,
          questRestrictionInfo);
  System_Object___ctor((Il2CppObject *)v69, 0LL);
  if ( !v69 )
    goto LABEL_79;
  *(_QWORD *)(v69 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 16), (int64_t)this, v72, v73, v74, v75, v76, v77);
  *(_QWORD *)(v69 + 24) = questRestrictionInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 24), (int64_t)questRestrictionInfo, v78, v79, v80, v81, v82, v83);
  *(_DWORD *)(v69 + 32) = wave;
  *(_DWORD *)(v69 + 36) = restartWaveSelectMax;
  this->fields.callbackFunc = callback;
  v183 = (QuestRestrictionInfo_o **)(v69 + 24);
  this->fields.wave = wave;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v84, v85, v86, v87, v88, v89);
  waveNumLabel = this->fields.waveNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v90);
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_15710/*"WAVE_BATTLE_WAVE_INFO"*/, 0LL);
  v180 = v69;
  v186 = *(_DWORD *)(v69 + 32);
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
  v185 = maxWave;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v185);
  servantTextMemberSprite = (int *)System_String__Format_62415592(v92, v93, v94, 0LL);
  if ( !waveNumLabel )
    goto LABEL_79;
  UILabel__set_text(waveNumLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  waveLineSprite = this->fields.waveLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v95);
  AtlasManager__SetPartyOrganizationImage(waveLineSprite, (System_String_o *)StringLiteral_21343/*"line_whiteAlpha"*/, 0LL);
  if ( *(int *)(v69 + 32) >= 10 )
  {
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
    v97 = (UIWidget_o *)this->fields.waveLineSprite;
    if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v71);
    if ( !v97 )
      goto LABEL_79;
    UIWidget__set_width(v97, WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT, 0LL);
    if ( restartWave >= 1 && this->fields.isSelectWaveFlag )
    {
      servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
      v98 = (UIWidget_o *)this->fields.waveLineSprite;
      if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v71);
      if ( !v98 )
        goto LABEL_79;
      UIWidget__set_width(
        v98,
        WaveBattleWaveInfoComponent_TypeInfo->static_fields->LINE_SPRITE_WIDTH_SHORT_RESTART_WAVE,
        0LL);
    }
  }
  enemyTextSprite = this->fields.enemyTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
  AtlasManager__SetPartyOrganizationImage(enemyTextSprite, (System_String_o *)StringLiteral_20711/*"img_txt_Enemy"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.enemyTextSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v103 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v100,
                                                     v101,
                                                     v102);
  System_Collections_Generic_List_int____ctor(
    v103,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enemyClassIdList = v103;
  p_enemyClassIdList = &this->fields.enemyClassIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.enemyClassIdList,
    (int64_t)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  if ( !WaveBattleWaveInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveInfoComponent_TypeInfo, v71);
    servantTextMemberSprite = (int *)WaveBattleWaveInfoComponent_TypeInfo;
  }
  this->fields.height = **((_DWORD **)servantTextMemberSprite + 23);
  if ( viewEnemyEntities && *(_QWORD *)&viewEnemyEntities->max_length )
  {
    if ( !*v183 )
      goto LABEL_79;
    WaveBattleWaveInfoComponent__CreateEnemyList(this, v71, viewEnemyEntities, v110);
  }
  servantTextStartingSprite = this->fields.servantTextStartingSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
  AtlasManager__SetPartyOrganizationImage(servantTextStartingSprite, (System_String_o *)StringLiteral_20713/*"img_txt_Starting"*/, 0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextStartingSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  AtlasManager__SetPartyOrganizationImage(
    this->fields.servantTextMemberSprite,
    (System_String_o *)StringLiteral_20712/*"img_txt_Member"*/,
    0LL);
  servantTextMemberSprite = (int *)this->fields.servantTextMemberSprite;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v112 = &BalanceConfig_TypeInfo;
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)servantTextMemberSprite + 840LL))(
    servantTextMemberSprite,
    *(_QWORD *)(*(_QWORD *)servantTextMemberSprite + 848LL));
  v116 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WaveBattleWaveServantInfoItem__TypeInfo,
                                                        v113,
                                                        v114,
                                                        v115);
  System_Collections_Generic_List_object____ctor(
    v116,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_WaveBattleWaveServantInfoItem__o *)v116;
  p_servantInfoList = &this->fields.servantInfoList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantInfoList,
    (int64_t)v116,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v124 = BalanceConfig_TypeInfo;
  v125 = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v71);
    v124 = BalanceConfig_TypeInfo;
  }
  v126 = 0;
  v127 = v124->static_fields->DeckMainMemberMax * (v125 - 1);
  while ( 1 )
  {
    if ( !v124->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v124, v71);
      v124 = *v112;
    }
    if ( v126 >= v124->static_fields->DeckMainMemberMax )
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
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveServantInfoItem___);
    if ( !v13 )
      goto LABEL_79;
    deckInfo = v13->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_79;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_79;
    if ( v127 + v126 >= svts->max_length )
      sub_1BCAA44(servantTextMemberSprite, v71);
    v132 = (WaveBattleWaveServantInfoItem_o *)servantTextMemberSprite;
    servantTextMemberSprite = (int *)*p_enemyClassIdList;
    if ( !*p_enemyClassIdList )
      goto LABEL_79;
    v133 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v127] + v126);
    v134 = v13;
    v135 = v112;
    v136 = *v183;
    v137 = System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)servantTextMemberSprite,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    v141 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1BCAA2C(
                                                             WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo,
                                                             v138,
                                                             v139,
                                                             v140);
    WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
      v141,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
      v142);
    if ( !v132 )
      goto LABEL_79;
    WaveBattleWaveServantInfoItem__SetItem(
      v132,
      v126,
      v133,
      v136,
      v137,
      v141,
      restartWave > 0,
      this->fields.isSelectWaveFlag,
      v178);
    servantInfoGrid = this->fields.servantInfoGrid;
    servantTextMemberSprite = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v132, 0LL);
    if ( !servantInfoGrid )
      goto LABEL_79;
    UIGrid__AddChild(servantInfoGrid, (UnityEngine_Transform_o *)servantTextMemberSprite, 0LL);
    servantTextMemberSprite = (int *)*p_servantInfoList;
    if ( !*p_servantInfoList )
      goto LABEL_79;
    v150 = *((_QWORD *)servantTextMemberSprite + 2);
    v151 = Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__Add__;
    ++servantTextMemberSprite[7];
    if ( !v150 )
      goto LABEL_79;
    v152 = servantTextMemberSprite[6];
    v112 = v135;
    v13 = v134;
    if ( (unsigned int)v152 >= *(_DWORD *)(v150 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantTextMemberSprite,
        (Il2CppObject *)v132,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
    }
    else
    {
      v153 = v150 + 8 * v152;
      servantTextMemberSprite[6] = v152 + 1;
      *(_QWORD *)(v153 + 32) = v132;
      sub_1BCA784((PartyOrganizationUtility_o *)(v153 + 32), (int64_t)v132, v144, v145, v146, v147, v148, v149);
    }
    v124 = *v112;
    ++v126;
  }
  servantTextMemberSprite = (int *)this->fields.maskObj;
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)servantTextMemberSprite,
    *(_DWORD *)(v180 + 32) < restartWave,
    0LL);
  clearedLabel = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v154);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15669/*"WAVE_BATTLE_CLEARED_WAVE"*/, 0LL);
  if ( !clearedLabel )
    goto LABEL_79;
  UILabel__set_text(clearedLabel, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( !this->fields.isSelectWaveFlag )
    return;
  backGroundObj = (UnityEngine_Object_o *)this->fields.backGroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v156);
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
    *(_DWORD *)(v180 + 32) > restartWave,
    0LL);
  v159 = this->fields.clearedLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v158);
  servantTextMemberSprite = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15703/*"WAVE_BATTLE_RESTART_WAVE_CAN_NOT_SELECT"*/, 0LL);
  if ( !v159 )
    goto LABEL_79;
  UILabel__set_text(v159, (System_String_o *)servantTextMemberSprite, 0LL);
  if ( *(_DWORD *)(v180 + 32) > restartWave )
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
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !servantTextMemberSprite )
    goto LABEL_79;
  v162 = (System_Collections_Generic_List_object__o *)*((_QWORD *)servantTextMemberSprite + 13);
  v163 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v71, v160, v161);
  EventDelegate_Callback___ctor(
    v163,
    (Il2CppObject *)v180,
    Method_WaveBattleWaveInfoComponent___c__DisplayClass32_0__SetWaveInfo_b__0__,
    0LL);
  v167 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v164, v165, v166);
  EventDelegate___ctor_47348668(v167, v163, 0LL);
  if ( !v162
    || (items = v162->fields._items,
        v175 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v162->fields._version,
        !items) )
  {
LABEL_79:
    sub_1BCAA3C(servantTextMemberSprite, v71);
  }
  size = v162->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v162,
      (Il2CppObject *)v167,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
  }
  else
  {
    v177 = &items->obj.klass + size;
    v162->fields._size = size + 1;
    v177[4] = (Il2CppClass *)v167;
    sub_1BCA784((PartyOrganizationUtility_o *)(v177 + 4), (int64_t)v167, v168, v169, v170, v171, v172, v173);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  QuestPhaseMaster_o *Master_object; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x25
  System_Int32_array *SelectableQuests; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BattleSetupInfo_o **p_battleSetupInfo; // x24
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x26
  QuestGroupMaster_o *v48; // x25
  __int64 v49; // x2
  __int64 v50; // x3
  BattleSetupInfo_o *v51; // x8
  NetworkManager_ResultCallbackFunc_o *v52; // x23
  __int64 v53; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B122F9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleInterruptionRequest___, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__, v25, v26);
    byte_4B122F9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_22;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  v32 = sub_1BCAA2C(BattleSetupInfo_TypeInfo, v29, v30, v31);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_22;
  *(_DWORD *)(v32 + 16) = warId;
  *(_DWORD *)(v32 + 20) = questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v32 + 112) = SelectableQuests;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 112), (int64_t)SelectableQuests, v34, v35, v36, v37, v38, v39);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_22;
  *(_DWORD *)(v32 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, questId, 0, 0LL);
  *(_DWORD *)(v32 + 124) = 0;
  *(_DWORD *)(v32 + 24) = questPhase;
  *(_WORD *)(v32 + 72) = 0;
  *(_QWORD *)(v32 + 40) = 0LL;
  *(_QWORD *)(v32 + 48) = 0LL;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v32;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleSetupInfo, v32, v41, v42, v43, v44, v45, v46);
  battleSetupInfo = this->fields.battleSetupInfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_22;
  v48 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !v48 )
    goto LABEL_22;
  Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v48, (int32_t)Master_object, 0LL);
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
  v51 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_22;
  v51->fields.originQuestId = questId;
  v51->fields.isScriptBeforeWarBoard = 0;
  v51->fields.restartWave = waveNum;
  if ( waveNum == waveNumMax )
  {
    WaveBattleWaveInfoComponent__ExecutionCallBackAndTransitionScene(this, v28);
    return;
  }
  v52 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v28, v49, v50);
  NetworkManager_ResultCallbackFunc___ctor(
    v52,
    (Il2CppObject *)this,
    Method_WaveBattleWaveInfoComponent_EndRequestBattleInterruption__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53);
  Master_object = (QuestPhaseMaster_o *)NetworkManager__getRequest_object_(
                                          v52,
                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleInterruptionRequest___);
  if ( !Master_object )
LABEL_22:
    sub_1BCAA3C(Master_object, v28);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BalanceConfig_c *v17; // x0
  int32_t wave; // w24
  int32_t v19; // w22
  bool v20; // w23
  int v21; // w29
  System_Collections_Generic_List_object__o *servantInfoList; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  WaveBattleWaveServantInfoItem_o *v25; // x24
  DeckServantData_o *v26; // x25
  System_Int32_array *v27; // x26
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v31; // x27
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // [xsp+0h] [xbp-70h]

  if ( (byte_4B122F4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, deckEntity, questRestrictionInfo);
    sub_1BCA7E0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__, v15, v16);
    byte_4B122F4 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  wave = this->fields.wave;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, deckEntity);
    v17 = BalanceConfig_TypeInfo;
  }
  v19 = 0;
  v20 = isInterruption;
  v21 = v17->static_fields->DeckMainMemberMax * (wave - 1);
  while ( 1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, deckEntity);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v17->static_fields->DeckMainMemberMax )
      break;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.servantInfoList;
    if ( !servantInfoList )
      goto LABEL_18;
    servantInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantInfoList,
                                                                     v19,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WaveBattleWaveServantInfoItem__get_Item__);
    if ( !deckEntity )
      goto LABEL_18;
    deckInfo = deckEntity->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_18;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_18;
    if ( v21 + v19 >= svts->max_length )
      sub_1BCAA44(servantInfoList, deckEntity);
    v25 = (WaveBattleWaveServantInfoItem_o *)servantInfoList;
    servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.enemyClassIdList;
    if ( !servantInfoList
      || (v26 = (DeckServantData_o *)*((_QWORD *)&svts->m_Items[v21] + v19),
          v27 = System_Collections_Generic_List_int___ToArray(
                  (System_Collections_Generic_List_int__o *)servantInfoList,
                  (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
          v31 = (WaveBattleWaveServantInfoItem_CallbackFunc_o *)sub_1BCAA2C(
                                                                  WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo,
                                                                  v28,
                                                                  v29,
                                                                  v30),
          WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
            v31,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoComponent_OnSelectWavePartyList__,
            v32),
          !v25) )
    {
LABEL_18:
      sub_1BCAA3C(servantInfoList, deckEntity);
    }
    WaveBattleWaveServantInfoItem__SetItem(v25, v19, v26, questRestrictionInfo, v27, v31, v20, 0, v33);
    v17 = BalanceConfig_TypeInfo;
    ++v19;
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

  if ( (byte_4B122F1 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B122F1 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B122F2 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B122F2 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoComponent_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07EA8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07E48;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = wave;
  v17 = result;
  v15 = idx;
  if ( (byte_4B122FD & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&wave);
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11);
    byte_4B122FD = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall WaveBattleWaveInfoComponent_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *v3; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *_4__this; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  struct QuestRestrictionInfo_o *v8; // x8
  const MethodInfo *v9; // x6

  v3 = this;
  if ( (byte_4B122FE & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)sub_1BCA7E0(
                                                                    &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                                    method,
                                                                    v2);
    byte_4B122FE = 1;
  }
  questRestrictionInfo = v3->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (_4__this = v3->fields.__4__this,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v8 = v3->fields.questRestrictionInfo) == 0LL)
    || !this
    || (this = (WaveBattleWaveInfoComponent___c__DisplayClass32_0_o *)QuestTree__GetWarID_ByQuestID(
                                                                        (QuestTree_o *)this,
                                                                        v8->fields.questId,
                                                                        0LL),
        !_4__this) )
  {
    sub_1BCAA3C(this, method);
  }
  WaveBattleWaveInfoComponent__OnClickWave(
    _4__this,
    questId,
    questPhase,
    (int32_t)this,
    v3->fields.wave,
    v3->fields.restartWaveSelectMax,
    v9);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B122FF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__, v8, v9);
    sub_1BCA7E0(&WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo, v10, v11);
    byte_4B122FF = 1;
  }
  v12 = sub_1BCAA2C(WaveBattleWaveInfoComponent___c__DisplayClass38_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_WaveBattleWaveInfoComponent___c__DisplayClass38_1__OnClickWave_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x6
  struct WaveBattleWaveInfoComponent___c__DisplayClass38_0_o *CS___8__locals1; // x8

  if ( (byte_4B12300 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B12300 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          v6);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(Instance, v5);
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
  __int64 v2; // x2
  WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *v3; // x19
  struct WaveBattleWaveInfoComponent_o *_4__this; // x8

  v3 = this;
  if ( (byte_4B12301 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoComponent___c__DisplayClass44_0_o *)sub_1BCA7E0(
                                                                    &Method_ActionExtensions_Call_int___,
                                                                    method,
                                                                    v2);
    byte_4B12301 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)v3->fields.callback,
    _4__this->fields.wave,
    (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
}