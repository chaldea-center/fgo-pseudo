void __fastcall EventBuddyPointResultComponent___ctor(EventBuddyPointResultComponent_o *this, const MethodInfo *method)
{
  this->fields.figureFadeInDuration = 0.266;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBuddyPointResultComponent__FadeInFigure(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figureR; // x20
  UnityEngine_Component_o *v4; // x0
  __int64 v5; // x1
  struct UIStandFigureR_o *v6; // x8
  UnityEngine_Object_o *bodyTexture; // x20
  struct UIStandFigureR_o *v8; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BE07E8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE07E8 = 1;
  }
  figureR = (UnityEngine_Object_o *)this->fields.figureR;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.figureR;
    if ( !v6 )
      goto LABEL_14;
    bodyTexture = (UnityEngine_Object_o *)v6->fields.bodyTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v8 = this->fields.figureR;
      if ( v8 )
      {
        v4 = (UnityEngine_Component_o *)v8->fields.bodyTexture;
        if ( v4 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
          v10.fields.r = 1.0;
          v10.fields.g = 1.0;
          v10.fields.b = 1.0;
          v10.fields.a = 1.0;
          TweenColor__Begin(gameObject, this->fields.figureFadeInDuration, v10, 0LL);
          return;
        }
      }
LABEL_14:
      sub_1C22094(v4, v5);
    }
  }
}


System_String_o *__fastcall EventBuddyPointResultComponent__GetFileNameFromRank(
        EventBuddyPointResultComponent_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = rank;
  if ( (byte_4BE07EA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23198/*"rank_"*/);
    byte_4BE07EA = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_23198/*"rank_"*/, v3, 0LL);
}


void __fastcall EventBuddyPointResultComponent__OnClickScreen(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o *closeCallback; // x8

  if ( (byte_4BE07E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventBuddyPointResultComponent_OnClickScreen__);
    byte_4BE07E9 = 1;
  }
  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_1C22094(0LL, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(touchHintObj, 0LL) )
  {
    v4 = Method_EventBuddyPointResultComponent_OnClickScreen__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultComponent_OnClickScreen__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_EventBuddyPointResultComponent_OnClickScreen__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
        closeCallback->fields.original_method_info,
        *(_QWORD *)&closeCallback->fields.extra_arg);
  }
}


void __fastcall EventBuddyPointResultComponent__OnPlayEnd(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(touchHintObj, 1, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetAnimationEvent(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct CommonEffectActionComponent_o *v7; // x20
  System_Action_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BE07E7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventBuddyPointResultComponent_FadeInFigure__);
    sub_1C21E38(&Method_EventBuddyPointResultComponent_OnPlayEnd__);
    byte_4BE07E7 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_FadeInFigure__, 0LL);
  if ( !effectActionComponent
    || (CommonEffectActionComponent__SetEventAction(effectActionComponent, 1, v4, 0LL),
        v7 = this->fields.effectActionComponent,
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_OnPlayEnd__, 0LL),
        !v7) )
  {
    sub_1C22094(v5, v6);
  }
  v7->fields.endAction = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.endAction, (int64_t)v8, v9, v10, v11, v12, v13, v14);
}


void __fastcall EventBuddyPointResultComponent__SetPointInfo(
        EventBuddyPointResultComponent_o *this,
        int32_t eventId,
        int32_t point,
        int32_t svtId,
        const MethodInfo *method)
{
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v10; // x1
  EventServantPointRankEntity_o *EnableEntity; // x0
  EventServantPointRankEntity_o *v12; // x21
  UILabel_o *pointLabel; // x22
  UnityEngine_Object_o *buddyUiAtlas; // x20
  UISprite_o *rankSprite; // x20
  EventBuddyPointResultComponent_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_4BE07E5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE07E5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(Master_object, eventId, point, svtId, 0LL);
  if ( EnableEntity )
  {
    v12 = EnableEntity;
    pointLabel = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (EventServantPointRankMaster_o *)LocalizationManager__GetNumberFormat(point, 0LL);
    if ( !pointLabel )
      goto LABEL_18;
    UILabel__set_text(pointLabel, (System_String_o *)Master_object, 0LL);
    buddyUiAtlas = (UnityEngine_Object_o *)this->fields.buddyUiAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(buddyUiAtlas, 0LL, 0LL) )
    {
      Master_object = (EventServantPointRankMaster_o *)this->fields.rankSprite;
      if ( Master_object )
      {
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.buddyUiAtlas, 0LL);
        rankSprite = this->fields.rankSprite;
        Master_object = (EventServantPointRankMaster_o *)EventBuddyPointResultComponent__GetFileNameFromRank(
                                                           v16,
                                                           v12->fields.svtPointRank,
                                                           v17);
        if ( rankSprite )
        {
          UISprite__set_spriteName(rankSprite, (System_String_o *)Master_object, 0LL);
          Master_object = (EventServantPointRankMaster_o *)this->fields.rankSprite;
          if ( Master_object )
          {
            (*(void (__fastcall **)(EventServantPointRankMaster_o *, _QWORD))&Master_object->klass[1]._2.thread_static_fields_offset)(
              Master_object,
              *(_QWORD *)&Master_object->klass[1]._2.token);
            return;
          }
        }
      }
LABEL_18:
      sub_1C22094(Master_object, v10);
    }
  }
}


void __fastcall EventBuddyPointResultComponent__SetSvtFigure(
        EventBuddyPointResultComponent_o *this,
        int32_t svtId,
        int32_t overwriteImgLimitCount,
        System_Action_o *setupEndCallBack,
        const MethodInfo *method)
{
  __int64 v9; // x21
  ServantLimitImageMaster_o *svtStandFig; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int LimitCountByImageLimitCostumeIn; // w23
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t ServantLimitCountSealAfter; // w22
  StandFigureBack_o *v28; // x20
  System_Action_o *v29; // x23

  if ( (byte_4BE07E6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventBuddyPointResultComponent___c__DisplayClass11_0__SetSvtFigure_b__0__);
    sub_1C21E38(&EventBuddyPointResultComponent___c__DisplayClass11_0_TypeInfo);
    byte_4BE07E6 = 1;
  }
  v9 = sub_1C22084(EventBuddyPointResultComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = setupEndCallBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)setupEndCallBack, v18, v19, v20, v21, v22, v23);
  if ( (overwriteImgLimitCount & 0x80000000) == 0 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(overwriteImgLimitCount, 0LL);
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  svtStandFig = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    svtStandFig = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_31:
    sub_1C22094(svtStandFig, v11);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       (int64_t)svtStandFig[2].fields.list[1].monitor,
                       svtId,
                       0LL);
  if ( !EntityDefinitely )
  {
    LimitCountByImageLimitCostumeIn = 0;
    goto LABEL_22;
  }
  LimitCountByImageLimitCostumeIn = EntityDefinitely->fields.maxLimitCount;
  overwriteImgLimitCount = 0;
LABEL_19:
  if ( LimitCountByImageLimitCostumeIn > 10 )
    goto LABEL_28;
LABEL_22:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtStandFig = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !svtStandFig )
    goto LABEL_31;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 svtStandFig,
                                 svtId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  overwriteImgLimitCount = ImageLimitCount__GetImageLimitCount(svtId, ServantLimitCountSealAfter, 0LL);
LABEL_28:
  svtStandFig = (ServantLimitImageMaster_o *)this->fields.svtStandFig;
  if ( !svtStandFig )
    goto LABEL_31;
  StandFigureBack__Init((StandFigureBack_o *)svtStandFig, 0LL);
  v28 = this->fields.svtStandFig;
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultComponent___c__DisplayClass11_0__SetSvtFigure_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_31;
  StandFigureBack__CreatedStandFigure(v28, svtId, overwriteImgLimitCount, 0, 0, v29, 0, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetTouchEnable(
        EventBuddyPointResultComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_1C22094(0LL, isEnable);
  UnityEngine_GameObject__SetActive(touchHintObj, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultComponent__Setup(
        EventBuddyPointResultComponent_o *this,
        int32_t eventId,
        UIAtlas_o *buddyUiAtlas,
        System_Action_o *setupEndCallback,
        System_Action_o *closeCallback,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  Il2CppObject *Master_object; // x23
  UnityEngine_GameObject_o *touchHintObj; // x0
  UserEventServantPointEntity_o *BestServantPointEntity; // x0
  int32_t svtId; // w23
  int32_t BuddyPoint; // w0
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x1

  if ( (byte_4BE07E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE07E4 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeCallback,
    (int64_t)closeCallback,
    (int64_t)buddyUiAtlas,
    (int32_t)setupEndCallback,
    (System_String_o *)closeCallback,
    *(BattleSetupInfo_o **)&overwriteLimitCount,
    (FollowerInfo_o *)method,
    v7);
  this->fields.buddyUiAtlas = buddyUiAtlas;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.buddyUiAtlas,
    (int64_t)buddyUiAtlas,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  touchHintObj = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    touchHintObj = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_16;
  BestServantPointEntity = UserEventServantPointMaster__GetBestServantPointEntity(
                             (UserEventServantPointMaster_o *)Master_object,
                             *(_QWORD *)(*(_QWORD *)&touchHintObj[7].fields.m_CachedPtr + 64LL),
                             eventId,
                             0LL);
  if ( BestServantPointEntity )
  {
    svtId = BestServantPointEntity->fields.svtId;
    BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(BestServantPointEntity, 0LL);
    EventBuddyPointResultComponent__SetPointInfo(this, eventId, BuddyPoint, svtId, v26);
    EventBuddyPointResultComponent__SetSvtFigure(this, svtId, overwriteLimitCount, setupEndCallback, v27);
    EventBuddyPointResultComponent__SetAnimationEvent(this, v28);
    touchHintObj = this->fields.touchHintObj;
    if ( touchHintObj )
    {
      UnityEngine_GameObject__SetActive(touchHintObj, 0, 0LL);
      return;
    }
LABEL_16:
    sub_1C22094(touchHintObj, v20);
  }
}


void __fastcall EventBuddyPointResultComponent___c__DisplayClass11_0___ctor(
        EventBuddyPointResultComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultComponent___c__DisplayClass11_0___SetSvtFigure_b__0(
        EventBuddyPointResultComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  EventBuddyPointResultComponent___c__DisplayClass11_0_o *v2; // x19
  struct EventBuddyPointResultComponent_o *_4__this; // x20
  UIStandFigureR_o *SvtStandFigure; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct EventBuddyPointResultComponent_o *v11; // x8
  UnityEngine_Object_o *figureR; // x20
  struct EventBuddyPointResultComponent_o *v13; // x8
  struct UIStandFigureR_o *v14; // x8
  struct System_Action_o *setupEndCallBack; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BE07EB & 1) == 0 )
  {
    this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE07EB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)_4__this->fields.svtStandFig;
  if ( !this )
    goto LABEL_16;
  SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  _4__this->fields.figureR = SvtStandFigure;
  sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.figureR, (int64_t)SvtStandFigure, v5, v6, v7, v8, v9, v10);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  figureR = (UnityEngine_Object_o *)v11->fields.figureR;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v2->fields.__4__this;
    if ( v13 )
    {
      v14 = v13->fields.figureR;
      if ( v14 )
      {
        this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)v14->fields.bodyTexture;
        if ( this )
        {
          v16.fields.r = 0.0;
          v16.fields.g = 0.0;
          v16.fields.b = 0.0;
          v16.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v16, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_16:
    sub_1C22094(this, method);
  }
LABEL_13:
  setupEndCallBack = v2->fields.setupEndCallBack;
  if ( setupEndCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))setupEndCallBack->fields.m_target)(
      setupEndCallBack->fields.original_method_info,
      *(_QWORD *)&setupEndCallBack->fields.extra_arg);
}