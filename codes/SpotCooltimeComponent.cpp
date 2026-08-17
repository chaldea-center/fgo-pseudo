void SpotCooltimeComponent___ctor(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SpotCooltimeComponent__GetCooltimeText(
        SpotCooltimeComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  int v4; // w11
  System_String_o *v5; // x19
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF
  unsigned int v11; // [xsp+18h] [xbp-28h] BYREF
  int v12; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_596A953 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5141/*"D2"*/);
    sub_2213A60(&StringLiteral_5782/*"EVENT_COOLTIME_REMAIN"*/);
    byte_596A953 = 1;
  }
  v11 = 0;
  v12 = remainTime / 3600;
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v10 = remainTime % 60;
  v11 = ((__int16)((unsigned int)(34953 * (remainTime % 3600)) >> 16) >> 5)
      + (((remainTime % 3600 + ((unsigned int)(-30583 * (remainTime % 3600)) >> 16)) & 0x8000) >> 15);
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&remainTime, method);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5782/*"EVENT_COOLTIME_REMAIN"*/, 0);
  v6 = (Il2CppObject *)System_Int32__ToString_77138656((int32_t)&v12, (System_String_o *)StringLiteral_5141/*"D2"*/, 0);
  v7 = (Il2CppObject *)System_Int32__ToString_77138656((int32_t)&v11, (System_String_o *)StringLiteral_5141/*"D2"*/, 0);
  v8 = (Il2CppObject *)System_Int32__ToString_77138656((int32_t)&v10, (System_String_o *)StringLiteral_5141/*"D2"*/, 0);
  return System_String__Format_75697948(v5, v6, v7, v8, 0);
}


void SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct SrcSpotBasePrefab_o *v7; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_596A956 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A956 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(targetSpot, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.targetSpot;
    if ( !v7 || (mMapCtrl_SpotInfo = v7->fields.mMapCtrl_SpotInfo) == 0 )
      sub_2213CDC(v5, v6);
    *(_QWORD *)&mMapCtrl_SpotInfo->fields.dispType = 0x100000001LL;
  }
}


// local variable allocation has failed, the output may be wrong!
void SpotCooltimeComponent__SetSpotActiveGimmick(
        SpotCooltimeComponent_o *this,
        MapGimmickComponent_o *mapGimmick,
        bool isActiveCooltimeGimmick,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v8; // x8
  struct MapGimmickComponent_o **p_spotActiveGimmick; // x0
  const MethodInfo *v11; // x1

  v8 = 88;
  if ( isActiveCooltimeGimmick )
  {
    v8 = 80;
    p_spotActiveGimmick = &this->fields.spotActiveGimmick;
  }
  else
  {
    p_spotActiveGimmick = &this->fields.spotInactiveGimmick;
  }
  *(SpotCooltimeComponent_c **)((char *)&this->klass + v8) = (SpotCooltimeComponent_c *)mapGimmick;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_spotActiveGimmick,
    (int32_t)mapGimmick,
    (System_String_o *)isActiveCooltimeGimmick,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SpotCooltimeComponent__UpdateDisp(this, v11);
}


void SpotCooltimeComponent__Setup(
        SpotCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x0
  __int64 v12; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  UISprite_o *bgSprite; // x20
  const MethodInfo *v29; // x1

  if ( (byte_596A955 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_19089/*"cooltime_base"*/);
    byte_596A955 = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCooltimeEntity,
    (int32_t)userCooltimeEntity,
    (System_String_o *)targetSpot,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_2213CDC(v11, v12);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0);
  this->fields.cooltimeEntity = MasterEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cooltimeEntity,
    (int32_t)MasterEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.targetSpot = targetSpot;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSpot,
    (int32_t)targetSpot,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  bgSprite = this->fields.bgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26, v27);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_19089/*"cooltime_base"*/, 0);
  SpotCooltimeComponent__UpdateDisp(this, v29);
}


// attributes: thunk
void SpotCooltimeComponent__Update(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent__UpdateDisp(this, method);
}


void SpotCooltimeComponent__UpdateDisp(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotCooltimeComponent_o *v3; // x19
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x9
  int64_t clearedAt; // x21
  System_DateTime_o v8; // x0
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v10; // w20
  int32_t cooltime; // w22
  int32_t v12; // w21
  _BOOL4 activeSelf; // w8
  _BOOL4 v14; // w10
  struct UILabel_o *cooltimeLb; // x9
  float v16; // s0
  int v17; // w20
  _BOOL4 v18; // w22
  int v19; // w8
  SpotCooltimeComponent_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v27; // x2
  struct UILabel_o *v28; // x8
  bool v29; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v31; // w1
  struct UILabel_o *v32; // x8

  v3 = this;
  if ( (byte_596A952 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (SpotCooltimeComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_596A952 = 1;
  }
  targetSpot = v3->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_54;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_54;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
    this = (SpotCooltimeComponent_o *)v3->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_54;
  }
  userCooltimeEntity = v3->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    clearedAt = userCooltimeEntity->fields.clearedAt;
  else
    LODWORD(clearedAt) = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  v8.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_48346468(v8, 0);
  cooltimeEntity = v3->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_54;
  v10 = (int)this;
  this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
  if ( !this )
    goto LABEL_54;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_54;
  v12 = cooltime + clearedAt - v10;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
  v14 = v12 > 0;
  if ( !this )
    goto LABEL_54;
  cooltimeLb = this[2].fields.cooltimeLb;
  if ( !cooltimeLb )
    goto LABEL_54;
  v16 = 1.0;
  v17 = activeSelf && v14;
  v18 = !activeSelf || v12 <= 0;
  if ( activeSelf && v14 )
    v19 = 2;
  else
    v19 = 1;
  if ( v17 )
    v16 = 0.5;
  HIDWORD(cooltimeLb->fields.m_CachedPtr) = v19;
  LODWORD(cooltimeLb->fields.m_CancellationTokenSource) = v18;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v16, 0);
  if ( v18 )
  {
    SpotCooltimeComponent__UpdateQuestCount(v3, v21);
  }
  else
  {
    v23 = v3->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v20, v12, v22);
    if ( !v23 )
      goto LABEL_54;
    UILabel__set_text(v23, (System_String_o *)this, 0);
  }
  this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, 0),
        (this = (SpotCooltimeComponent_o *)v3->fields.cooltimeObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
LABEL_54:
    sub_2213CDC(this, method);
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)this, 0) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)v3->fields.spotActiveGimmick;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0, 0) )
    {
      this = (SpotCooltimeComponent_o *)v3->fields.spotActiveGimmick;
      if ( v17 )
      {
        if ( !this )
          goto LABEL_54;
        v28 = this[1].fields.cooltimeLb;
        if ( !v28 )
          goto LABEL_54;
        v29 = LODWORD(v28->fields.m_CachedPtr) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v29 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v29, 0);
      this = (SpotCooltimeComponent_o *)v3->fields.spotActiveGimmick;
      if ( !this )
        goto LABEL_54;
      MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0, 0);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)v3->fields.spotInactiveGimmick;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v27);
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0, 0) )
    {
      this = (SpotCooltimeComponent_o *)v3->fields.spotInactiveGimmick;
      if ( (v17 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_54;
        v31 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v32 = this[1].fields.cooltimeLb;
        if ( !v32 )
          goto LABEL_54;
        v31 = LODWORD(v32->fields.m_CachedPtr) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v31, 0);
      this = (SpotCooltimeComponent_o *)v3->fields.spotInactiveGimmick;
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
  __int64 v7; // x2
  MapGimmickComponent_c *klass; // x8

  v2 = this;
  if ( (byte_596A954 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (SpotCooltimeComponent_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A954 = 1;
  }
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_21;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo && !mMapCtrl_SpotInfo->fields.questCount )
  {
    this = (SpotCooltimeComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = v2->fields.cooltimeEntity;
    if ( cooltimeEntity && this )
    {
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)this, cooltimeEntity->fields.questId, 0);
      if ( QuestInfo )
        QuestInfo->fields.dispType = 1;
      this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
      mMapCtrl_SpotInfo->fields.questCount = 1;
      if ( this )
      {
        SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)this, 1, 0);
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v7);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v7);
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
    sub_2213CDC(this, method);
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