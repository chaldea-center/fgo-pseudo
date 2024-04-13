void __fastcall SpotCooltimeComponent___ctor(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall SpotCooltimeComponent__GetCooltimeText(
        SpotCooltimeComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x19
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF
  int v17; // [xsp+18h] [xbp-18h] BYREF
  int v18; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E9236 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, remainTime, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4619/*"D2"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5684/*"EVENT_COOLTIME_REMAIN"*/, v8, v9, v10);
    byte_42E9236 = 1;
  }
  v18 = remainTime / 3600;
  v16 = remainTime % 60;
  v17 = remainTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EVENT_COOLTIME_REMAIN"*/, 0LL);
  v12 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v18, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
  v13 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v17, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
  v14 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v16, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
  return System_String__Format_44578852(v11, v12, v13, v14, 0LL);
}


void __fastcall SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct SrcSpotBasePrefab_o *v8; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SrcSpotBasePrefab_o *v10; // x8
  struct MapControl_SpotInfo_o *v11; // x8

  if ( (byte_42E9239 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9239 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.targetSpot;
    if ( !v8
      || (mMapCtrl_SpotInfo = v8->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v10 = this->fields.targetSpot) == 0LL)
      || (v11 = v10->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B5D69C(v6, v7);
    }
    v11->fields.touchType = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotCooltimeComponent__SetSpotActiveGimmick(
        SpotCooltimeComponent_o *this,
        MapGimmickComponent_o *mapGimmick,
        bool isActiveCooltimeGimmick,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct MapGimmickComponent_o **p_spotActiveGimmick; // x0
  const MethodInfo *v10; // x1

  if ( isActiveCooltimeGimmick )
  {
    this->fields.spotActiveGimmick = mapGimmick;
    p_spotActiveGimmick = &this->fields.spotActiveGimmick;
  }
  else
  {
    this->fields.spotInactiveGimmick = mapGimmick;
    p_spotActiveGimmick = &this->fields.spotInactiveGimmick;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)p_spotActiveGimmick,
    (System_Int32_array **)mapGimmick,
    (System_String_array **)isActiveCooltimeGimmick,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SpotCooltimeComponent__UpdateDisp(this, v10);
}


void __fastcall SpotCooltimeComponent__Setup(
        SpotCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UISprite_o *bgSprite; // x20
  const MethodInfo *v30; // x1

  if ( (byte_42E9238 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)userCooltimeEntity, (_DWORD)targetSpot, method);
    sub_B5D5C4(&StringLiteral_17921/*"cooltime_base"*/, v11, v12, v13);
    byte_42E9238 = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCooltimeEntity,
    (System_Int32_array **)userCooltimeEntity,
    (System_String_array **)targetSpot,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_B5D69C(v14, v15);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cooltimeEntity,
    (System_Int32_array **)MasterEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.targetSpot = targetSpot;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetSpot,
    (System_Int32_array **)targetSpot,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17921/*"cooltime_base"*/, 0LL);
  SpotCooltimeComponent__UpdateDisp(this, v30);
}


// attributes: thunk
void __fastcall SpotCooltimeComponent__Update(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent__UpdateDisp(this, method);
}


void __fastcall SpotCooltimeComponent__UpdateDisp(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SpotCooltimeComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8
  int64_t clearedAt; // x21
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v16; // w20
  int32_t cooltime; // w22
  int32_t v18; // w21
  struct SrcSpotBasePrefab_o *v19; // x8
  _BOOL4 v20; // w9
  struct MapControl_SpotInfo_o *v21; // x8
  unsigned int v22; // w20
  int v23; // w9
  struct SrcSpotBasePrefab_o *v24; // x8
  struct MapControl_SpotInfo_o *v25; // x8
  float v26; // s0
  SpotCooltimeComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  UILabel_o *cooltimeLb; // x22
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v33; // x8
  bool v34; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v36; // w1
  __int64 v37; // x8
  System_DateTime_o v38; // 0:x0.8

  v4 = this;
  if ( (byte_42E9235 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    this = (SpotCooltimeComponent_o *)sub_B5D5C4(
                                        &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                        v8,
                                        v9,
                                        v10);
    byte_42E9235 = 1;
  }
  targetSpot = v4->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_60;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_60;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
    this = (SpotCooltimeComponent_o *)v4->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_60;
  }
  userCooltimeEntity = v4->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    clearedAt = userCooltimeEntity->fields.clearedAt;
  else
    LODWORD(clearedAt) = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v38.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_26076684(v38, 0LL);
  cooltimeEntity = v4->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_60;
  v16 = (int)this;
  this = (SpotCooltimeComponent_o *)v4->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_60;
  v18 = cooltime + clearedAt - v16;
  this = (SpotCooltimeComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  v19 = v4->fields.targetSpot;
  v20 = v18 > 0;
  if ( !v19 )
    goto LABEL_60;
  v21 = v19->fields.mMapCtrl_SpotInfo;
  if ( !v21 )
    goto LABEL_60;
  v22 = v20 & (unsigned int)this;
  v23 = (v20 & (unsigned int)this) != 0 ? 2 : 1;
  v21->fields.dispType = v23;
  v24 = v4->fields.targetSpot;
  if ( !v24 )
    goto LABEL_60;
  v25 = v24->fields.mMapCtrl_SpotInfo;
  if ( !v25 )
    goto LABEL_60;
  v25->fields.touchType = v22 ^ 1;
  this = (SpotCooltimeComponent_o *)v4->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  v26 = 1.0;
  if ( v22 )
    v26 = 0.5;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v26, method);
  if ( v22 )
  {
    cooltimeLb = v4->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v27, v18, v29);
    if ( !cooltimeLb )
      goto LABEL_60;
    UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
  }
  else
  {
    SpotCooltimeComponent__UpdateQuestCount(v4, v28);
  }
  this = (SpotCooltimeComponent_o *)v4->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, v31),
        (this = (SpotCooltimeComponent_o *)v4->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22, 0LL),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_60:
    sub_B5D69C(this, method);
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)this, 0LL) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)v4->fields.spotActiveGimmick;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v4->fields.spotActiveGimmick;
      if ( v22 )
      {
        if ( !this )
          goto LABEL_60;
        v33 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v33 )
          goto LABEL_60;
        v34 = *(_DWORD *)(v33 + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v34 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v34, 0LL);
      this = (SpotCooltimeComponent_o *)v4->fields.spotActiveGimmick;
      if ( !this )
        goto LABEL_60;
      MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0LL, 0LL);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)v4->fields.spotInactiveGimmick;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v4->fields.spotInactiveGimmick;
      if ( (v22 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_60;
        v36 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v37 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v37 )
          goto LABEL_60;
        v36 = *(_DWORD *)(v37 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v36, 0LL);
      this = (SpotCooltimeComponent_o *)v4->fields.spotInactiveGimmick;
      if ( this )
      {
        MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0LL, 0LL);
        return;
      }
      goto LABEL_60;
    }
  }
}


void __fastcall SpotCooltimeComponent__UpdateQuestCount(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SpotCooltimeComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v14; // w2
  __int64 v15; // x3
  struct SrcSpotBasePrefab_o *v16; // x9
  __int64 v17; // x8

  v4 = this;
  if ( (byte_42E9237 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v5, v6, v7);
    this = (SpotCooltimeComponent_o *)sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v8, v9, v10);
    byte_42E9237 = 1;
  }
  targetSpot = v4->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_26;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo && !mMapCtrl_SpotInfo->fields.questCount )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (SpotCooltimeComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = v4->fields.cooltimeEntity;
    if ( cooltimeEntity && this )
    {
      this = (SpotCooltimeComponent_o *)QuestTree__GetQuestInfo(
                                          (QuestTree_o *)this,
                                          cooltimeEntity->fields.questId,
                                          0LL);
      if ( this )
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)this, 1, 0, 0, 0LL, 0, 0LL);
      mMapCtrl_SpotInfo->fields.questCount = 1;
      v16 = v4->fields.targetSpot;
      if ( v16 )
      {
        v16->fields.miQuestCount = 1;
        v16->fields.mtIsUpdate = 1;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v14, v15);
          byte_42E4B1E = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        v17 = *(_QWORD *)this[2].monitor;
        if ( v17 )
        {
          this = *(SpotCooltimeComponent_o **)(v17 + 248);
          if ( this )
          {
            ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)this, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B5D69C(this, method);
  }
}


int32_t __fastcall SpotCooltimeComponent__get_QuestId(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8

  userCooltimeEntity = this->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    return userCooltimeEntity->fields.questId;
  else
    return 0;
}