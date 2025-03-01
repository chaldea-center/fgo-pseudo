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
  int v11; // [xsp+4h] [xbp-2Ch] BYREF
  int v12; // [xsp+8h] [xbp-28h] BYREF
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C019D9 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
    sub_1C2E12C(&StringLiteral_5081/*"D2"*/, v4);
    sub_1C2E12C(&StringLiteral_5713/*"EVENT_COOLTIME_REMAIN"*/, v5);
    byte_4C019D9 = 1;
  }
  v13 = remainTime / 3600;
  v11 = remainTime % 60;
  v12 = remainTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5713/*"EVENT_COOLTIME_REMAIN"*/, 0LL);
  v7 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v13, (System_String_o *)StringLiteral_5081/*"D2"*/, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v12, (System_String_o *)StringLiteral_5081/*"D2"*/, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v11, (System_String_o *)StringLiteral_5081/*"D2"*/, 0LL);
  return System_String__Format_63250024(v6, v7, v8, v9, 0LL);
}


void __fastcall SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4C019DC & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C019DC = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.targetSpot;
    if ( !v6 || (mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1C2E388(v4, v5);
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
  sub_1C2E0D0(
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
  __int64 v12; // x0
  __int64 v13; // x1
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
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
  UISprite_o *bgSprite; // x20
  const MethodInfo *v28; // x1

  if ( (byte_4C019DB & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, userCooltimeEntity);
    sub_1C2E12C(&StringLiteral_18585/*"cooltime_base"*/, v11);
    byte_4C019DB = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.userCooltimeEntity,
    (int64_t)userCooltimeEntity,
    (int64_t)targetSpot,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_1C2E388(v12, v13);
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.cooltimeEntity,
    (int64_t)MasterEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.targetSpot = targetSpot;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.targetSpot, (int64_t)targetSpot, v21, v22, v23, v24, v25, v26);
  bgSprite = this->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_18585/*"cooltime_base"*/, 0LL);
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
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x9
  int64_t clearedAt; // x21
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v10; // w20
  int32_t cooltime; // w22
  int32_t v12; // w21
  _BOOL4 activeSelf; // w8
  _BOOL4 v14; // w10
  struct UILabel_o *cooltimeLb; // x9
  int v16; // w20
  float v17; // s0
  _BOOL4 v18; // w22
  int v19; // w8
  SpotCooltimeComponent_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x22
  UnityEngine_Object_o *spotActiveGimmick; // x21
  __int64 v25; // x8
  bool v26; // w1
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  bool v28; // w1
  __int64 v29; // x8
  System_DateTime_o v30; // 0:x0.8

  v2 = this;
  if ( (byte_4C019D8 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    this = (SpotCooltimeComponent_o *)sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    byte_4C019D8 = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  v30.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  this = (SpotCooltimeComponent_o *)NetworkManager__getTime_39876888(v30, 0LL);
  cooltimeEntity = v2->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_54;
  v10 = (int)this;
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this )
    goto LABEL_54;
  cooltime = cooltimeEntity->fields.cooltime;
  this = (SpotCooltimeComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_54;
  v12 = cooltime + clearedAt - v10;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  v14 = v12 > 0;
  if ( !this )
    goto LABEL_54;
  cooltimeLb = this[2].fields.cooltimeLb;
  if ( !cooltimeLb )
    goto LABEL_54;
  v16 = v14 && activeSelf;
  v17 = 1.0;
  v18 = v12 <= 0 || !activeSelf;
  if ( v14 && activeSelf )
    v19 = 2;
  else
    v19 = 1;
  if ( v16 )
    v17 = 0.5;
  *((_DWORD *)&cooltimeLb->fields.UnityEngine_Behaviour_Fields + 1) = v19;
  LODWORD(cooltimeLb->fields.m_CancellationTokenSource) = v18;
  SrcSpotBasePrefab__SetContrast((SrcSpotBasePrefab_o *)this, v17, 0LL);
  if ( v18 )
  {
    SpotCooltimeComponent__UpdateQuestCount(v2, v21);
  }
  else
  {
    v23 = v2->fields.cooltimeLb;
    this = (SpotCooltimeComponent_o *)SpotCooltimeComponent__GetCooltimeText(v20, v12, v22);
    if ( !v23 )
      goto LABEL_54;
    UILabel__set_text(v23, (System_String_o *)this, 0LL);
  }
  this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
  if ( !this
    || (SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, 0LL),
        (this = (SpotCooltimeComponent_o *)v2->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL),
        (this = (SpotCooltimeComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_54:
    sub_1C2E388(this, method);
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)this, 0LL) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)v2->fields.spotActiveGimmick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v2->fields.spotActiveGimmick;
      if ( v16 )
      {
        if ( !this )
          goto LABEL_54;
        v25 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v25 )
          goto LABEL_54;
        v26 = *(_DWORD *)(v25 + 16) == 1;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v26 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v26, 0LL);
      this = (SpotCooltimeComponent_o *)v2->fields.spotActiveGimmick;
      if ( !this )
        goto LABEL_54;
      MapGimmickComponent__SetState((MapGimmickComponent_o *)this, 0, 0LL, 0LL);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)v2->fields.spotInactiveGimmick;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0LL, 0LL) )
    {
      this = (SpotCooltimeComponent_o *)v2->fields.spotInactiveGimmick;
      if ( (v16 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_54;
        v28 = 0;
      }
      else
      {
        if ( !this )
          goto LABEL_54;
        v29 = *(_QWORD *)&this[1].fields.m_CachedPtr;
        if ( !v29 )
          goto LABEL_54;
        v28 = *(_DWORD *)(v29 + 16) == 1;
      }
      MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)this, v28, 0LL);
      this = (SpotCooltimeComponent_o *)v2->fields.spotInactiveGimmick;
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
  SpotCooltimeComponent_o *v2; // x19
  __int64 v3; // x1
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapGimmickComponent_c *klass; // x8

  v2 = this;
  if ( (byte_4C019DA & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    this = (SpotCooltimeComponent_o *)sub_1C2E12C(&TerminalSceneComponent_TypeInfo, v3);
    byte_4C019DA = 1;
  }
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_21;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo && !mMapCtrl_SpotInfo->fields.questCount )
  {
    this = (SpotCooltimeComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = v2->fields.cooltimeEntity;
    if ( cooltimeEntity && this )
    {
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)this, cooltimeEntity->fields.questId, 0LL);
      if ( QuestInfo )
        MapControl_QuestInfo__SetDispType(QuestInfo, 1, 0, 0, 0LL, 0, 0LL);
      mMapCtrl_SpotInfo->fields.questCount = 1;
      this = (SpotCooltimeComponent_o *)v2->fields.targetSpot;
      if ( this )
      {
        SrcSpotBasePrefab__mfSetQuestCount((SrcSpotBasePrefab_o *)this, 1, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BF8363 )
        {
          sub_1C2E12C(&TerminalSceneComponent_TypeInfo, method);
          byte_4BF8363 = 1;
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
    sub_1C2E388(this, method);
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