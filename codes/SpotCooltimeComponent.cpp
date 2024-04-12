void __fastcall SpotCooltimeComponent___ctor(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall SpotCooltimeComponent__GetCooltimeText(
        SpotCooltimeComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-24h] BYREF
  int v10; // [xsp+18h] [xbp-18h] BYREF
  int v11; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42B0A59 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_4586/*"D2"*/);
    sub_B52984(&StringLiteral_5649/*"EVENT_COOLTIME_REMAIN"*/);
    byte_42B0A59 = 1;
  }
  v11 = remainTime / 3600;
  v9 = remainTime % 60;
  v10 = remainTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5649/*"EVENT_COOLTIME_REMAIN"*/, 0LL);
  v5 = (Il2CppObject *)System_Int32__ToString_39387012((int32_t)&v11, (System_String_o *)StringLiteral_4586/*"D2"*/, 0LL);
  v6 = (Il2CppObject *)System_Int32__ToString_39387012((int32_t)&v10, (System_String_o *)StringLiteral_4586/*"D2"*/, 0LL);
  v7 = (Il2CppObject *)System_Int32__ToString_39387012((int32_t)&v9, (System_String_o *)StringLiteral_4586/*"D2"*/, 0LL);
  return System_String__Format_44569380(v4, v5, v6, v7, 0LL);
}


void __fastcall SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SrcSpotBasePrefab_o *v8; // x8
  struct MapControl_SpotInfo_o *v9; // x8

  if ( (byte_42B0A5C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A5C = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.targetSpot;
    if ( !v6
      || (mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v8 = this->fields.targetSpot) == 0LL)
      || (v9 = v8->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B52A5C(v4, v5);
    }
    v9->fields.touchType = 1;
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
  sub_B52920(
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
  __int64 v11; // x0
  __int64 v12; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UISprite_o *bgSprite; // x20
  const MethodInfo *v27; // x1

  if ( (byte_42B0A5B & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_17827/*"cooltime_base"*/);
    byte_42B0A5B = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userCooltimeEntity,
    (System_Int32_array **)userCooltimeEntity,
    (System_String_array **)targetSpot,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_B52A5C(v11, v12);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.cooltimeEntity,
    (System_Int32_array **)MasterEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.targetSpot = targetSpot;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.targetSpot,
    (System_Int32_array **)targetSpot,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17827/*"cooltime_base"*/, 0LL);
  SpotCooltimeComponent__UpdateDisp(this, v27);
}


// attributes: thunk
void __fastcall SpotCooltimeComponent__Update(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent__UpdateDisp(this, method);
}


void __fastcall SpotCooltimeComponent__UpdateDisp(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent_o *v2; // x19
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8
  int64_t clearedAt; // x21
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v8; // w20
  int32_t cooltime; // w22
  int32_t v10; // w21
  struct SrcSpotBasePrefab_o *v11; // x8
  _BOOL4 v12; // w9
  struct MapControl_SpotInfo_o *v13; // x8
  unsigned int v14; // w20
  int v15; // w9
  struct SrcSpotBasePrefab_o *v16; // x8
  struct MapControl_SpotInfo_o *v17; // x8
  float v18; // s0
  SpotCooltimeComponent_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  UILabel_o *cooltimeLb; // x22
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v25; // x8
  bool v26; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v28; // w1
  __int64 v29; // x8
  System_DateTime_o v30; // 0:x0.8

  v2 = this;
  if ( (byte_42B0A58 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (SpotCooltimeComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_42B0A58 = 1;
  }
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_60;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_60;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
    this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_60;
  }
  userCooltimeEntity = v2->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    clearedAt = userCooltimeEntity->fields.clearedAt;
  else
    LODWORD(clearedAt) = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v30.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_25741128(v30, 0LL);
  cooltimeEntity = v2->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_60;
  v8 = (int)this;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_60;
  v10 = cooltime + clearedAt - v8;
  this = (SpotCooltimeComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  v11 = v2->fields.targetSpot;
  v12 = v10 > 0;
  if ( !v11 )
    goto LABEL_60;
  v13 = v11->fields.mMapCtrl_SpotInfo;
  if ( !v13 )
    goto LABEL_60;
  v14 = v12 & (unsigned int)this;
  v15 = (v12 & (unsigned int)this) != 0 ? 2 : 1;
  v13->fields.dispType = v15;
  v16 = v2->fields.targetSpot;
  if ( !v16 )
    goto LABEL_60;
  v17 = v16->fields.mMapCtrl_SpotInfo;
  if ( !v17 )
    goto LABEL_60;
  v17->fields.touchType = v14 ^ 1;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  v18 = 1.0;
  if ( v14 )
    v18 = 0.5;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v18, method);
  if ( v14 )
  {
    cooltimeLb = v2->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v19, v10, v21);
    if ( !cooltimeLb )
      goto LABEL_60;
    UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
  }
  else
  {
    SpotCooltimeComponent__UpdateQuestCount(v2, v20);
  }
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, v23),
        (this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14, 0LL),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_60:
    sub_B52A5C(this, method);
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)this, 0LL) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)v2->fields.spotActiveGimmick;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v2->fields.spotActiveGimmick;
      if ( v14 )
      {
        if ( !this )
          goto LABEL_60;
        v25 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v25 )
          goto LABEL_60;
        v26 = *(_DWORD *)(v25 + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v26 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v26, 0LL);
      this = (SpotCooltimeComponent_o *)v2->fields.spotActiveGimmick;
      if ( !this )
        goto LABEL_60;
      MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0LL, 0LL);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)v2->fields.spotInactiveGimmick;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v2->fields.spotInactiveGimmick;
      if ( (v14 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_60;
        v28 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v29 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v29 )
          goto LABEL_60;
        v28 = *(_DWORD *)(v29 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v28, 0LL);
      this = (SpotCooltimeComponent_o *)v2->fields.spotInactiveGimmick;
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
  SpotCooltimeComponent_o *v2; // x19
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  struct SrcSpotBasePrefab_o *v6; // x9
  __int64 v7; // x8

  v2 = this;
  if ( (byte_42B0A5A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    this = (SpotCooltimeComponent_o *)sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42B0A5A = 1;
  }
  targetSpot = v2->fields.targetSpot;
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
    this = (SpotCooltimeComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = v2->fields.cooltimeEntity;
    if ( cooltimeEntity && this )
    {
      this = (SpotCooltimeComponent_o *)QuestTree__GetQuestInfo(
                                          (QuestTree_o *)this,
                                          cooltimeEntity->fields.questId,
                                          0LL);
      if ( this )
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)this, 1, 0, 0, 0LL, 0, 0LL);
      mMapCtrl_SpotInfo->fields.questCount = 1;
      v6 = v2->fields.targetSpot;
      if ( v6 )
      {
        v6->fields.miQuestCount = 1;
        v6->fields.mtIsUpdate = 1;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42AC2A0 )
        {
          sub_B52984(&TerminalSceneComponent_TypeInfo);
          byte_42AC2A0 = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        v7 = *(_QWORD *)this[2].monitor;
        if ( v7 )
        {
          this = *(SpotCooltimeComponent_o **)(v7 + 248);
          if ( this )
          {
            ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)this, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B52A5C(this, method);
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