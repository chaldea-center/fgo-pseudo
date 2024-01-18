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

  if ( (byte_4188BA4 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
    sub_B2C35C(&StringLiteral_4546/*"D2"*/, v4);
    sub_B2C35C(&StringLiteral_5607/*"EVENT_COOLTIME_REMAIN"*/, v5);
    byte_4188BA4 = 1;
  }
  v13 = remainTime / 3600;
  v11 = remainTime % 60;
  v12 = remainTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EVENT_COOLTIME_REMAIN"*/, 0LL);
  v7 = (Il2CppObject *)System_Int32__ToString_38381416((int32_t)&v13, (System_String_o *)StringLiteral_4546/*"D2"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString_38381416((int32_t)&v12, (System_String_o *)StringLiteral_4546/*"D2"*/, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString_38381416((int32_t)&v11, (System_String_o *)StringLiteral_4546/*"D2"*/, 0LL);
  return System_String__Format_44306596(v6, v7, v8, v9, 0LL);
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

  if ( (byte_4188BA7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188BA7 = 1;
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
      sub_B2C434(v4, v5);
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
  sub_B2C2F8(
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
  __int64 v13; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UISprite_o *bgSprite; // x20
  const MethodInfo *v28; // x1

  if ( (byte_4188BA6 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, userCooltimeEntity);
    sub_B2C35C(&StringLiteral_17702/*"cooltime_base"*/, v11);
    byte_4188BA6 = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCooltimeEntity,
    (System_Int32_array **)userCooltimeEntity,
    (System_String_array **)targetSpot,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_B2C434(v12, v13);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cooltimeEntity,
    (System_Int32_array **)MasterEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.targetSpot = targetSpot;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetSpot,
    (System_Int32_array **)targetSpot,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17702/*"cooltime_base"*/, 0LL);
  SpotCooltimeComponent__UpdateDisp(this, v28);
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
  struct SrcSpotBasePrefab_o *v13; // x8
  _BOOL4 v14; // w9
  struct MapControl_SpotInfo_o *v15; // x8
  unsigned int v16; // w20
  int v17; // w9
  struct SrcSpotBasePrefab_o *v18; // x8
  struct MapControl_SpotInfo_o *v19; // x8
  float v20; // s0
  SpotCooltimeComponent_o *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  UILabel_o *cooltimeLb; // x22
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v27; // x8
  bool v28; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v30; // w1
  __int64 v31; // x8
  System_DateTime_o v32; // 0:x0.8

  v2 = this;
  if ( (byte_4188BA3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    this = (SpotCooltimeComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    byte_4188BA3 = 1;
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
  v32.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_26270684(v32, 0LL);
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
  v13 = v2->fields.targetSpot;
  v14 = v12 > 0;
  if ( !v13 )
    goto LABEL_60;
  v15 = v13->fields.mMapCtrl_SpotInfo;
  if ( !v15 )
    goto LABEL_60;
  v16 = v14 & (unsigned int)this;
  v17 = (v14 & (unsigned int)this) != 0 ? 2 : 1;
  v15->fields.dispType = v17;
  v18 = v2->fields.targetSpot;
  if ( !v18 )
    goto LABEL_60;
  v19 = v18->fields.mMapCtrl_SpotInfo;
  if ( !v19 )
    goto LABEL_60;
  v19->fields.touchType = v16 ^ 1;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_60;
  v20 = 1.0;
  if ( v16 )
    v20 = 0.5;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v20, method);
  if ( v16 )
  {
    cooltimeLb = v2->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v21, v12, v23);
    if ( !cooltimeLb )
      goto LABEL_60;
    UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
  }
  else
  {
    SpotCooltimeComponent__UpdateQuestCount(v2, v22);
  }
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, v25),
        (this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_60:
    sub_B2C434(this, method);
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
      if ( v16 )
      {
        if ( !this )
          goto LABEL_60;
        v27 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v27 )
          goto LABEL_60;
        v28 = *(_DWORD *)(v27 + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v28 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v28, 0LL);
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
      if ( (v16 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_60;
        v30 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_60;
        v31 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v31 )
          goto LABEL_60;
        v30 = *(_DWORD *)(v31 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v30, 0LL);
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
  struct SrcSpotBasePrefab_o *v8; // x9
  __int64 v9; // x8

  v2 = this;
  if ( (byte_4188BA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v3);
    this = (SpotCooltimeComponent_o *)sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    byte_4188BA5 = 1;
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
    this = (SpotCooltimeComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      v8 = v2->fields.targetSpot;
      if ( v8 )
      {
        v8->fields.miQuestCount = 1;
        v8->fields.mtIsUpdate = 1;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
          byte_4183C65 = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        v9 = *(_QWORD *)this[2].monitor;
        if ( v9 )
        {
          this = *(SpotCooltimeComponent_o **)(v9 + 248);
          if ( this )
          {
            ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)this, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(this, method);
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