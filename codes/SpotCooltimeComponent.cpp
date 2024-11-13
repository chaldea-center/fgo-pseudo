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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x19
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  int v13; // [xsp+4h] [xbp-2Ch] BYREF
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A2E0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&remainTime, method);
    sub_1BCA7E0(&StringLiteral_5060/*"D2"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5683/*"EVENT_COOLTIME_REMAIN"*/, v6, v7);
    byte_4B1A2E0 = 1;
  }
  v15 = remainTime / 3600;
  v13 = remainTime % 60;
  v14 = remainTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_COOLTIME_REMAIN"*/, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v15, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
  v10 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v14, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
  v11 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v13, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
  return System_String__Format_62415660(v8, v9, v10, v11, 0LL);
}


void __fastcall SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct SrcSpotBasePrefab_o *v7; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4B1A2E3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A2E3 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.targetSpot;
    if ( !v7 || (mMapCtrl_SpotInfo = v7->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1BCAA3C(v5, v6);
    *(_QWORD *)&mMapCtrl_SpotInfo->fields.dispType = 0x100000001LL;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotCooltimeComponent__SetSpotActiveGimmick(
        SpotCooltimeComponent_o *this,
        MapGimmickComponent_o *mapGimmick,
        bool isActiveCooltimeGimmick,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x10
  struct MapGimmickComponent_o **p_spotActiveGimmick; // x0
  const MethodInfo *v11; // x1

  v8 = 88LL;
  if ( isActiveCooltimeGimmick )
    v8 = 80LL;
  if ( isActiveCooltimeGimmick )
    p_spotActiveGimmick = &this->fields.spotActiveGimmick;
  else
    p_spotActiveGimmick = &this->fields.spotInactiveGimmick;
  *(SpotCooltimeComponent_c **)((char *)&this->klass + v8) = (SpotCooltimeComponent_c *)mapGimmick;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_spotActiveGimmick,
    (int64_t)mapGimmick,
    isActiveCooltimeGimmick,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  SpotCooltimeComponent__UpdateDisp(this, v11);
}


void __fastcall SpotCooltimeComponent__Setup(
        SpotCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UISprite_o *bgSprite; // x20
  const MethodInfo *v30; // x1

  if ( (byte_4B1A2E2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, userCooltimeEntity, targetSpot);
    sub_1BCA7E0(&StringLiteral_18448/*"cooltime_base"*/, v11, v12);
    byte_4B1A2E2 = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userCooltimeEntity,
    (int64_t)userCooltimeEntity,
    (int64_t)targetSpot,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_1BCAA3C(v13, v14);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cooltimeEntity,
    (int64_t)MasterEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.targetSpot = targetSpot;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetSpot, (int64_t)targetSpot, v22, v23, v24, v25, v26, v27);
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_18448/*"cooltime_base"*/, 0LL);
  SpotCooltimeComponent__UpdateDisp(this, v30);
}


// attributes: thunk
void __fastcall SpotCooltimeComponent__Update(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent__UpdateDisp(this, method);
}


void __fastcall SpotCooltimeComponent__UpdateDisp(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotCooltimeComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x9
  int64_t clearedAt; // x21
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v13; // w20
  int32_t cooltime; // w22
  int32_t v15; // w21
  _BOOL4 activeSelf; // w8
  _BOOL4 v17; // w10
  struct UILabel_o *cooltimeLb; // x9
  int v19; // w20
  float v20; // s0
  _BOOL4 v21; // w22
  int v22; // w8
  SpotCooltimeComponent_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  UILabel_o *v26; // x22
  __int64 v27; // x1
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v29; // x8
  bool v30; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v32; // w1
  __int64 v33; // x8
  System_DateTime_o v34; // 0:x0.8

  v3 = this;
  if ( (byte_4B1A2DF & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    this = (SpotCooltimeComponent_o *)sub_1BCA7E0(
                                        &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                        v6,
                                        v7);
    byte_4B1A2DF = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_54;
  }
  userCooltimeEntity = v3->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    clearedAt = userCooltimeEntity->fields.clearedAt;
  else
    LODWORD(clearedAt) = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v34.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_39269384(v34, 0LL);
  cooltimeEntity = v3->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_54;
  v13 = (int)this;
  this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
  if ( !this )
    goto LABEL_54;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_54;
  v15 = cooltime + clearedAt - v13;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
  v17 = v15 > 0;
  if ( !this )
    goto LABEL_54;
  cooltimeLb = this[2].fields.cooltimeLb;
  if ( !cooltimeLb )
    goto LABEL_54;
  v19 = v17 && activeSelf;
  v20 = 1.0;
  v21 = v15 <= 0 || !activeSelf;
  if ( v17 && activeSelf )
    v22 = 2;
  else
    v22 = 1;
  if ( v19 )
    v20 = 0.5;
  *((_DWORD *)&cooltimeLb->fields.UnityEngine_Behaviour_Fields + 1) = v22;
  LODWORD(cooltimeLb->fields.m_CancellationTokenSource) = v21;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v20, 0LL);
  if ( v21 )
  {
    SpotCooltimeComponent__UpdateQuestCount(v3, v24);
  }
  else
  {
    v26 = v3->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v23, v15, v25);
    if ( !v26 )
      goto LABEL_54;
    UILabel__set_text(v26, (System_String_o *)this, 0LL);
  }
  this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, 0LL),
        (this = (SpotCooltimeComponent_o *)v3->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0LL),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_54:
    sub_1BCAA3C(this, method);
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)this, 0LL) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)v3->fields.spotActiveGimmick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v3->fields.spotActiveGimmick;
      if ( v19 )
      {
        if ( !this )
          goto LABEL_54;
        v29 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v29 )
          goto LABEL_54;
        v30 = *(_DWORD *)(v29 + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v30 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v30, 0LL);
      this = (SpotCooltimeComponent_o *)v3->fields.spotActiveGimmick;
      if ( !this )
        goto LABEL_54;
      MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0LL, 0LL);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)v3->fields.spotInactiveGimmick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v3->fields.spotInactiveGimmick;
      if ( (v19 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_54;
        v32 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v33 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v33 )
          goto LABEL_54;
        v32 = *(_DWORD *)(v33 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v32, 0LL);
      this = (SpotCooltimeComponent_o *)v3->fields.spotInactiveGimmick;
      if ( this )
      {
        MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0LL, 0LL);
        return;
      }
      goto LABEL_54;
    }
  }
}


void __fastcall SpotCooltimeComponent__UpdateQuestCount(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotCooltimeComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v10; // x2
  MapGimmickComponent_c *klass; // x8

  v3 = this;
  if ( (byte_4B1A2E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, method, v2);
    this = (SpotCooltimeComponent_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B1A2E1 = 1;
  }
  targetSpot = v3->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_21;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo && !mMapCtrl_SpotInfo->fields.questCount )
  {
    this = (SpotCooltimeComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = v3->fields.cooltimeEntity;
    if ( cooltimeEntity && this )
    {
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)this, cooltimeEntity->fields.questId, 0LL);
      if ( QuestInfo )
        MapControl_QuestInfo__SetDispType(QuestInfo, 1, 0, 0, 0LL, 0, 0LL);
      mMapCtrl_SpotInfo->fields.questCount = 1;
      this = (SpotCooltimeComponent_o *)v3->fields.targetSpot;
      if ( this )
      {
        SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)this, 1, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v10);
          byte_4B10F83 = 1;
        }
        this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
          this = (SpotCooltimeComponent_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = this[1].fields.spotInactiveGimmick->klass;
        if ( klass )
        {
          this = *(SpotCooltimeComponent_o **)&klass->_2.static_fields_size;
          if ( this )
          {
            ScrTerminalListTop__UpdateList((ScrTerminalListTop_o *)this, 0LL);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, method);
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