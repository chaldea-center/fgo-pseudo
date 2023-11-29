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

  if ( (byte_40FADA1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
    sub_B16FFC(&StringLiteral_4532, v4);
    sub_B16FFC(&StringLiteral_5592, v5);
    byte_40FADA1 = 1;
  }
  v13 = remainTime / 3600;
  v11 = remainTime % 60;
  v12 = remainTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5592, 0LL);
  v7 = (Il2CppObject *)System_Int32__ToString_38275808((int32_t)&v13, (System_String_o *)StringLiteral_4532, 0LL);
  v8 = (Il2CppObject *)System_Int32__ToString_38275808((int32_t)&v12, (System_String_o *)StringLiteral_4532, 0LL);
  v9 = (Il2CppObject *)System_Int32__ToString_38275808((int32_t)&v11, (System_String_o *)StringLiteral_4532, 0LL);
  return System_String__Format_43744796(v6, v7, v8, v9, 0LL);
}


void __fastcall SpotCooltimeComponent__OnDestroyObject(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetSpot; // x20
  struct SrcSpotBasePrefab_o *v4; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *v7; // x8

  if ( (byte_40FADA4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADA4 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL) )
  {
    v4 = this->fields.targetSpot;
    if ( !v4
      || (mMapCtrl_SpotInfo = v4->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v6 = this->fields.targetSpot) == 0LL)
      || (v7 = v6->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B170D4();
    }
    v7->fields.touchType = 1;
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
  sub_B16F98(
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
  struct EventQuestCooltimeEntity_o *MasterEntity; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UISprite_o *bgSprite; // x20
  const MethodInfo *v26; // x1

  if ( (byte_40FADA3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, userCooltimeEntity);
    sub_B16FFC(&StringLiteral_17634, v11);
    byte_40FADA3 = 1;
  }
  this->fields.userCooltimeEntity = userCooltimeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCooltimeEntity,
    (System_Int32_array **)userCooltimeEntity,
    (System_String_array **)targetSpot,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !userCooltimeEntity )
    sub_B170D4();
  MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(userCooltimeEntity, 0LL);
  this->fields.cooltimeEntity = MasterEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cooltimeEntity,
    (System_Int32_array **)MasterEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.targetSpot = targetSpot;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSpot,
    (System_Int32_array **)targetSpot,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  bgSprite = this->fields.bgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_17634, 0LL);
  SpotCooltimeComponent__UpdateDisp(this, v26);
}


// attributes: thunk
void __fastcall SpotCooltimeComponent__Update(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeComponent__UpdateDisp(this, method);
}


void __fastcall SpotCooltimeComponent__UpdateDisp(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8
  int64_t clearedAt; // x21
  UnityEngine_GameObject_o *cooltimeObj; // x0
  int Time_23684488; // w0
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  int v12; // w20
  UnityEngine_Component_o *v13; // x0
  int32_t cooltime; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w21
  _BOOL4 activeSelf; // w0
  const MethodInfo *v18; // x1
  struct SrcSpotBasePrefab_o *v19; // x8
  _BOOL4 v20; // w9
  struct MapControl_SpotInfo_o *v21; // x8
  int v22; // w20
  int v23; // w9
  struct SrcSpotBasePrefab_o *v24; // x8
  struct MapControl_SpotInfo_o *v25; // x8
  SrcSpotBasePrefab_o *v26; // x0
  float v27; // s0
  SpotCooltimeComponent_o *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  UILabel_o *cooltimeLb; // x22
  System_String_o *CooltimeText; // x0
  const MethodInfo *v33; // x2
  SrcSpotBasePrefab_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *spotActiveGimmick; // x21
  struct MapGimmickComponent_o *v38; // x0
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  bool v40; // w1
  MapGimmickComponent_o *v41; // x0
  UnityEngine_Object_o *spotInactiveGimmick; // x21
  struct MapGimmickComponent_o *v43; // x0
  bool v44; // w1
  struct MapControl_MapGimmickInfo_o *v45; // x8
  MapGimmickComponent_o *v46; // x0
  System_DateTime_o v47; // 0:x0.8

  if ( (byte_40FADA0 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    byte_40FADA0 = 1;
  }
  targetSpot = this->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_60;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_60;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
    cooltimeObj = this->fields.cooltimeObj;
    if ( cooltimeObj )
    {
      UnityEngine_GameObject__SetActive(cooltimeObj, 0, 0LL);
      return;
    }
    goto LABEL_60;
  }
  userCooltimeEntity = this->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    clearedAt = userCooltimeEntity->fields.clearedAt;
  else
    LODWORD(clearedAt) = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v47.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  Time_23684488 = NetworkManager__getTime_23684488(v47, 0LL);
  cooltimeEntity = this->fields.cooltimeEntity;
  if ( !cooltimeEntity )
    goto LABEL_60;
  v12 = Time_23684488;
  v13 = (UnityEngine_Component_o *)this->fields.targetSpot;
  if ( !v13 )
    goto LABEL_60;
  cooltime = cooltimeEntity->fields.cooltime;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  v16 = cooltime + clearedAt - v12;
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  v19 = this->fields.targetSpot;
  v20 = v16 > 0;
  if ( !v19 )
    goto LABEL_60;
  v21 = v19->fields.mMapCtrl_SpotInfo;
  if ( !v21 )
    goto LABEL_60;
  v22 = v20 && activeSelf;
  v23 = v20 && activeSelf ? 2 : 1;
  v21->fields.dispType = v23;
  v24 = this->fields.targetSpot;
  if ( !v24 )
    goto LABEL_60;
  v25 = v24->fields.mMapCtrl_SpotInfo;
  if ( !v25 )
    goto LABEL_60;
  v25->fields.touchType = v22 ^ 1;
  v26 = this->fields.targetSpot;
  if ( !v26 )
    goto LABEL_60;
  v27 = 1.0;
  if ( v22 )
    v27 = 0.5;
  SrcSpotBasePrefab__SetContrast(v26, v27, v18);
  if ( v22 )
  {
    cooltimeLb = this->fields.cooltimeLb;
    CooltimeText = SpotCooltimeComponent__GetCooltimeText(v28, v16, v30);
    if ( !cooltimeLb )
      goto LABEL_60;
    UILabel__set_text(cooltimeLb, CooltimeText, 0LL);
  }
  else
  {
    SpotCooltimeComponent__UpdateQuestCount(this, v29);
  }
  v34 = this->fields.targetSpot;
  if ( !v34
    || (SrcSpotBasePrefab__UpdateDisp(v34, 1, v33), (v35 = this->fields.cooltimeObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(v35, v22, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
LABEL_60:
    sub_B170D4();
  }
  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    spotActiveGimmick = (UnityEngine_Object_o *)this->fields.spotActiveGimmick;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spotActiveGimmick, 0LL, 0LL) )
    {
      v38 = this->fields.spotActiveGimmick;
      if ( v22 )
      {
        if ( !v38 )
          goto LABEL_60;
        mMapCtrl_MapGimmickInfo = v38->fields.mMapCtrl_MapGimmickInfo;
        if ( !mMapCtrl_MapGimmickInfo )
          goto LABEL_60;
        v40 = mMapCtrl_MapGimmickInfo->fields.dispType == 1;
      }
      else
      {
        if ( !v38 )
          goto LABEL_60;
        v40 = 0;
      }
      MapGimmickComponent__SetDispAnimQuick(v38, v40, 0LL);
      v41 = this->fields.spotActiveGimmick;
      if ( !v41 )
        goto LABEL_60;
      MapGimmickComponent__SetState(v41, 0, 0LL, 0LL);
    }
    spotInactiveGimmick = (UnityEngine_Object_o *)this->fields.spotInactiveGimmick;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spotInactiveGimmick, 0LL, 0LL) )
    {
      v43 = this->fields.spotInactiveGimmick;
      if ( (v22 & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_60;
        v44 = 0;
      }
      else
      {
        if ( !v43 )
          goto LABEL_60;
        v45 = v43->fields.mMapCtrl_MapGimmickInfo;
        if ( !v45 )
          goto LABEL_60;
        v44 = v45->fields.dispType == 1;
      }
      MapGimmickComponent__SetDispAnimQuick(v43, v44, 0LL);
      v46 = this->fields.spotInactiveGimmick;
      if ( v46 )
      {
        MapGimmickComponent__SetState(v46, 0, 0LL, 0LL);
        return;
      }
      goto LABEL_60;
    }
  }
}


void __fastcall SpotCooltimeComponent__UpdateQuestCount(SpotCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SrcSpotBasePrefab_o *targetSpot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x20
  QuestTree_o *v7; // x0
  struct EventQuestCooltimeEntity_o *cooltimeEntity; // x8
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v10; // x1
  struct SrcSpotBasePrefab_o *v11; // x9
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_40FADA2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v3);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v4);
    byte_40FADA2 = 1;
  }
  targetSpot = this->fields.targetSpot;
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
    v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    cooltimeEntity = this->fields.cooltimeEntity;
    if ( cooltimeEntity && v7 )
    {
      QuestInfo = QuestTree__GetQuestInfo(v7, cooltimeEntity->fields.questId, 0LL);
      if ( QuestInfo )
        MapControl_QuestInfo__SetDispType(QuestInfo, 1, 0, 0, 0LL, 0, 0LL);
      mMapCtrl_SpotInfo->fields.questCount = 1;
      v11 = this->fields.targetSpot;
      if ( v11 )
      {
        v11->fields.miQuestCount = 1;
        v11->fields.mtIsUpdate = 1;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
          byte_40F6042 = 1;
        }
        v12 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = v12->static_fields->mInstance;
        if ( mInstance )
        {
          mTerminalList = mInstance->fields.mTerminalList;
          if ( mTerminalList )
          {
            ScrTerminalListTop__UpdateList(mTerminalList, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
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