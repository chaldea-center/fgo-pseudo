void SpotCooltimeComponent___ctor(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *SpotCooltimeComponent__GetCooltimeText(
        SpotCooltimeComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x0
  int v9; // [xsp+4h] [xbp-2Ch] BYREF
  int v10; // [xsp+8h] [xbp-28h] BYREF
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE8ADA & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4956/*"D2"*/);
    sub_1C7BAE8(&StringLiteral_5589/*"EVENT_COOLTIME_REMAIN"*/);
    byte_4CE8ADA = 1;
  }
  v11 = remainTime / 3600;
  v9 = remainTime % 60;
  v10 = remainTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_COOLTIME_REMAIN"*/, 0);
  v5 = (Il2CppObject *)System_Int32__ToString_65685416((int32_t)&v11, (System_String_o *)StringLiteral_4956/*"D2"*/, 0);
  v6 = (Il2CppObject *)System_Int32__ToString_65685416((int32_t)&v10, (System_String_o *)StringLiteral_4956/*"D2"*/, 0);
  v7 = (Il2CppObject *)System_Int32__ToString_65685416((int32_t)&v9, (System_String_o *)StringLiteral_4956/*"D2"*/, 0);
  return System_String__Format_64218288(v4, v5, v6, v7, 0);
}


void SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4CE8ADD & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8ADD = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(targetSpot, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.targetSpot;
    if ( !v6 || (mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo) == 0 )
      sub_1C7BD40(v4, v5);
    *(_QWORD *)&mMapCtrl_SpotInfo->fields.dispType = 0x100000001LL;
  }
}


void SpotCooltimeComponent__SetSpotActiveGimmick(
        SpotCooltimeComponent_o *this,
        MapGimmickComponent_o *mapGimmick,
        bool isActiveCooltimeGimmick,
        const MethodInfo *method)
{
  __int64 v4; // x10
  struct MapGimmickComponent_o **p_spotActiveGimmick; // x0
  const MethodInfo *v7; // x1

  v4 = 88;
  if ( isActiveCooltimeGimmick )
  {
    v4 = 80;
    p_spotActiveGimmick = &this->fields.spotActiveGimmick;
  }
  else
  {
    p_spotActiveGimmick = &this->fields.spotInactiveGimmick;
  }
  *(SpotCooltimeComponent_c **)((char *)&this->klass + v4) = (SpotCooltimeComponent_c *)mapGimmick;
  sub_1C7BA8C(p_spotActiveGimmick, mapGimmick);
  SpotCooltimeComponent__UpdateDisp(this, v7);
}


void SpotCooltimeComponent__Setup(
        SpotCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  UISprite_o *bgSprite; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4CE8ADC & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18370/*"cooltime_base"*/);
    byte_4CE8ADC = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  v7 = sub_1C7BA8C(&this->fields.userCooltimeEntity, userCooltimeEntity);
  if ( !userCooltimeEntity )
    sub_1C7BD40(v7, v8);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0);
  this->fields.cooltimeEntity = MasterEntity;
  sub_1C7BA8C(&this->fields.cooltimeEntity, MasterEntity);
  this->fields.targetSpot = targetSpot;
  sub_1C7BA8C(&this->fields.targetSpot, targetSpot);
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_18370/*"cooltime_base"*/, 0);
  SpotCooltimeComponent__UpdateDisp(this, v11);
}


// attributes: thunk
void SpotCooltimeComponent__Update(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent__UpdateDisp(this, method);
}


void SpotCooltimeComponent__UpdateDisp(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent_o *v2; // x19
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x9
  int64_t clearedAt; // x21
  System_DateTime_o v7; // x0
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v9; // w20
  int32_t cooltime; // w22
  int32_t v11; // w21
  _BOOL4 activeSelf; // w8
  _BOOL4 v13; // w10
  struct UILabel_o *cooltimeLb; // x9
  int v15; // w20
  float v16; // s0
  _BOOL4 v17; // w22
  int v18; // w8
  SpotCooltimeComponent_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  UILabel_o *v22; // x22
  UnityEngine_Object_o *spotActiveGimmick; // x21
  intptr_t m_CachedPtr; // x8
  bool v25; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v27; // w1
  intptr_t v28; // x8

  v2 = this;
  if ( (byte_4CE8AD9 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (SpotCooltimeComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4CE8AD9 = 1;
  }
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_54;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_54;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
    this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_54;
  }
  userCooltimeEntity = v2->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    clearedAt = userCooltimeEntity->fields.clearedAt;
  else
    LODWORD(clearedAt) = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v7.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_41942424(v7, 0);
  cooltimeEntity = v2->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_54;
  v9 = (int)this;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_54;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_54;
  v11 = cooltime + clearedAt - v9;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  v13 = v11 > 0;
  if ( !this )
    goto LABEL_54;
  cooltimeLb = this[2].fields.cooltimeLb;
  if ( !cooltimeLb )
    goto LABEL_54;
  v15 = v13 && activeSelf;
  v16 = 1.0;
  v17 = v11 <= 0 || !activeSelf;
  if ( v13 && activeSelf )
    v18 = 2;
  else
    v18 = 1;
  if ( v15 )
    v16 = 0.5;
  HIDWORD(cooltimeLb->fields.m_CachedPtr) = v18;
  LODWORD(cooltimeLb->fields.m_CancellationTokenSource) = v17;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v16, 0);
  if ( v17 )
  {
    SpotCooltimeComponent__UpdateQuestCount(v2, v20);
  }
  else
  {
    v22 = v2->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v19, v11, v21);
    if ( !v22 )
      goto LABEL_54;
    UILabel__set_text(v22, (System_String_o *)this, 0);
  }
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, 0),
        (this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15, 0),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
LABEL_54:
    sub_1C7BD40(this, method);
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)this, 0) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)v2->fields.spotActiveGimmick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0, 0) )
    {
      this = (SpotCooltimeComponent_o *)v2->fields.spotActiveGimmick;
      if ( v15 )
      {
        if ( !this )
          goto LABEL_54;
        m_CachedPtr = this[1].fields.m_CachedPtr;
        if ( !m_CachedPtr )
          goto LABEL_54;
        v25 = *(_DWORD *)(m_CachedPtr + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v25 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v25, 0);
      this = (SpotCooltimeComponent_o *)v2->fields.spotActiveGimmick;
      if ( !this )
        goto LABEL_54;
      MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0, 0);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)v2->fields.spotInactiveGimmick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0, 0) )
    {
      this = (SpotCooltimeComponent_o *)v2->fields.spotInactiveGimmick;
      if ( (v15 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_54;
        v27 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v28 = this[1].fields.m_CachedPtr;
        if ( !v28 )
          goto LABEL_54;
        v27 = *(_DWORD *)(v28 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v27, 0);
      this = (SpotCooltimeComponent_o *)v2->fields.spotInactiveGimmick;
      if ( this )
      {
        MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0, 0);
        return;
      }
      goto LABEL_54;
    }
  }
}


void SpotCooltimeComponent__UpdateQuestCount(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent_o *v2; // x19
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapGimmickComponent_c *klass; // x8

  v2 = this;
  if ( (byte_4CE8ADB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (SpotCooltimeComponent_o *)sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE8ADB = 1;
  }
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_21;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo && !mMapCtrl_SpotInfo->fields.questCount )
  {
    this = (SpotCooltimeComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = v2->fields.cooltimeEntity;
    if ( cooltimeEntity && this )
    {
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)this, cooltimeEntity->fields.questId, 0);
      if ( QuestInfo )
        QuestInfo->fields.dispType = 1;
      mMapCtrl_SpotInfo->fields.questCount = 1;
      this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
      if ( this )
      {
        SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)this, 1, 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CE840E )
        {
          sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
          byte_4CE840E = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = this[1].fields.spotInactiveGimmick->klass;
        if ( klass )
        {
          this = *(SpotCooltimeComponent_o **)&klass->_2.element_size;
          if ( this )
          {
            ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)this, 0);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C7BD40(this, method);
  }
}


int32_t SpotCooltimeComponent__get_QuestId(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8

  userCooltimeEntity = this->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    return userCooltimeEntity->fields.questId;
  else
    return 0;
}