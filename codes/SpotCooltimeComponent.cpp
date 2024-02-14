void __fastcall SpotCooltimeComponent___ctor(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SpotCooltimeComponent__GetCooltimeText(
        SpotCooltimeComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x19
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-24h] BYREF
  int v12; // [xsp+18h] [xbp-18h] BYREF
  int v13; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42152E5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
    sub_B0D8A4(&StringLiteral_4562/*"D2"*/, v4);
    sub_B0D8A4(&StringLiteral_5623/*"EVENT_COOLTIME_REMAIN"*/, v5);
    byte_42152E5 = 1;
  }
  v13 = remainTime / 3600;
  v11 = remainTime % 60;
  v12 = remainTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5623/*"EVENT_COOLTIME_REMAIN"*/, 0LL);
  v7 = (Il2CppObject *)System_Int32__ToString_38473032((int32_t)&v13, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString_38473032((int32_t)&v12, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString_38473032((int32_t)&v11, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
  return System_String__Format_43850968(v6, v7, v8, v9, 0LL);
}


void __fastcall SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v4; // x0
  struct SrcSpotBasePrefab_o *v5; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SrcSpotBasePrefab_o *v7; // x8
  struct MapControl_SpotInfo_o *v8; // x8

  if ( (byte_42152E8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42152E8 = 1;
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
    v5 = this->fields.targetSpot;
    if ( !v5
      || (mMapCtrl_SpotInfo = v5->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v7 = this->fields.targetSpot) == 0LL)
      || (v8 = v7->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B0D97C(v4);
    }
    v8->fields.touchType = 1;
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
  sub_B0D840(
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
  __int64 v11; // x1
  __int64 v12; // x0
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

  if ( (byte_42152E7 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, userCooltimeEntity);
    sub_B0D8A4(&StringLiteral_17758/*"cooltime_base"*/, v11);
    byte_42152E7 = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userCooltimeEntity,
    (System_Int32_array **)userCooltimeEntity,
    (System_String_array **)targetSpot,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_B0D97C(v12);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cooltimeEntity,
    (System_Int32_array **)MasterEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.targetSpot = targetSpot;
  sub_B0D840(
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
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17758/*"cooltime_base"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8
  int64_t clearedAt; // x21
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v10; // w20
  int32_t cooltime; // w22
  int32_t v12; // w21
  const MethodInfo *v13; // x1
  struct SrcSpotBasePrefab_o *v14; // x8
  _BOOL4 v15; // w9
  struct MapControl_SpotInfo_o *v16; // x8
  unsigned int v17; // w20
  int v18; // w9
  struct SrcSpotBasePrefab_o *v19; // x8
  struct MapControl_SpotInfo_o *v20; // x8
  float v21; // s0
  SpotCooltimeComponent_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  UILabel_o *cooltimeLb; // x22
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v28; // x8
  bool v29; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v31; // w1
  __int64 v32; // x8
  System_DateTime_o v33; // 0:x0.8

  v2 = this;
  if ( (byte_42152E4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    this = (SpotCooltimeComponent_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    byte_42152E4 = 1;
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
  v33.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_25503776(v33, 0LL);
  cooltimeEntity = v2->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_60;
  v10 = (int)this;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_60;
  v12 = cooltime + clearedAt - v10;
  this = (SpotCooltimeComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  v14 = v2->fields.targetSpot;
  v15 = v12 > 0;
  if ( !v14 )
    goto LABEL_60;
  v16 = v14->fields.mMapCtrl_SpotInfo;
  if ( !v16 )
    goto LABEL_60;
  v17 = v15 & (unsigned int)this;
  v18 = (v15 & (unsigned int)this) != 0 ? 2 : 1;
  v16->fields.dispType = v18;
  v19 = v2->fields.targetSpot;
  if ( !v19 )
    goto LABEL_60;
  v20 = v19->fields.mMapCtrl_SpotInfo;
  if ( !v20 )
    goto LABEL_60;
  v20->fields.touchType = v17 ^ 1;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  v21 = 1.0;
  if ( v17 )
    v21 = 0.5;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v21, v13);
  if ( v17 )
  {
    cooltimeLb = v2->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v22, v12, v24);
    if ( !cooltimeLb )
      goto LABEL_60;
    UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
  }
  else
  {
    SpotCooltimeComponent__UpdateQuestCount(v2, v23);
  }
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, v26),
        (this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0LL),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_60:
    sub_B0D97C(this);
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
      if ( v17 )
      {
        if ( !this )
          goto LABEL_60;
        v28 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v28 )
          goto LABEL_60;
        v29 = *(_DWORD *)(v28 + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v29 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v29, 0LL);
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
      if ( (v17 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_60;
        v31 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v32 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v32 )
          goto LABEL_60;
        v31 = *(_DWORD *)(v32 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v31, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  __int64 v8; // x1
  struct SrcSpotBasePrefab_o *v9; // x9
  __int64 v10; // x8

  v2 = this;
  if ( (byte_42152E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v3);
    this = (SpotCooltimeComponent_o *)sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v4);
    byte_42152E6 = 1;
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
    this = (SpotCooltimeComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      v9 = v2->fields.targetSpot;
      if ( v9 )
      {
        v9->fields.miQuestCount = 1;
        v9->fields.mtIsUpdate = 1;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
          byte_421083D = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        v10 = *(_QWORD *)this[2].monitor;
        if ( v10 )
        {
          this = *(SpotCooltimeComponent_o **)(v10 + 248);
          if ( this )
          {
            ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)this, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B0D97C(this);
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