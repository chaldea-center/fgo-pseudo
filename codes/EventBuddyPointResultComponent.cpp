void EventBuddyPointResultComponent___ctor(EventBuddyPointResultComponent_o *this, const MethodInfo *method)
{
  this->fields.figureFadeInDuration = 0.266;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventBuddyPointResultComponent__FadeInFigure(EventBuddyPointResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *figureR; // x20
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UIStandFigureR_o *v8; // x8
  UnityEngine_Object_o *bodyTexture; // x20
  struct UIStandFigureR_o *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v12; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_596A9FF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A9FF = 1;
  }
  figureR = (UnityEngine_Object_o *)this->fields.figureR;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(figureR, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v8 = this->fields.figureR;
    if ( !v8 )
      goto LABEL_14;
    bodyTexture = (UnityEngine_Object_o *)v8->fields.bodyTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(bodyTexture, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v10 = this->fields.figureR;
      if ( v10 )
      {
        v5 = (UnityEngine_Component_o *)v10->fields.bodyTexture;
        if ( v5 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v5, 0);
          v12.fields.r = 1.0;
          v12.fields.g = 1.0;
          v12.fields.b = 1.0;
          v12.fields.a = 1.0;
          TweenColor__Begin(gameObject, this->fields.figureFadeInDuration, v12, 0);
          return;
        }
      }
LABEL_14:
      sub_2213CDC(v5, v6);
    }
  }
}


System_String_o *EventBuddyPointResultComponent__GetFileNameFromRank(
        EventBuddyPointResultComponent_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = rank;
  if ( (byte_596AA01 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24155/*"rank_"*/);
    byte_596AA01 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_24155/*"rank_"*/, v3, 0);
}


void EventBuddyPointResultComponent__OnClickScreen(EventBuddyPointResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o *closeCallback; // x8

  if ( (byte_596AA00 & 1) == 0 )
  {
    sub_2213A60(&Method_EventBuddyPointResultComponent_OnClickScreen__);
    byte_596AA00 = 1;
  }
  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_2213CDC(0, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(touchHintObj, 0) )
  {
    v4 = Method_EventBuddyPointResultComponent_OnClickScreen__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultComponent_OnClickScreen__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_EventBuddyPointResultComponent_OnClickScreen__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
        closeCallback->fields.method_code,
        closeCallback->fields.method);
  }
}


void EventBuddyPointResultComponent__OnPlayEnd(EventBuddyPointResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(touchHintObj, 1, 0);
}


void EventBuddyPointResultComponent__SetAnimationEvent(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct CommonEffectActionComponent_o *v7; // x20
  System_Action_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596A9FE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultComponent_FadeInFigure__);
    sub_2213A60(&Method_EventBuddyPointResultComponent_OnPlayEnd__);
    byte_596A9FE = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_FadeInFigure__, 0);
  if ( !effectActionComponent
    || (CommonEffectActionComponent__SetEventAction(effectActionComponent, 1, v4, 0),
        v7 = this->fields.effectActionComponent,
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_OnPlayEnd__, 0),
        !v7) )
  {
    sub_2213CDC(v5, v6);
  }
  v7->fields.endAction = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.endAction, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void EventBuddyPointResultComponent__SetPointInfo(
        EventBuddyPointResultComponent_o *this,
        int32_t eventId,
        int32_t point,
        int32_t svtId,
        const MethodInfo *method)
{
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v10; // x1
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  EventServantPointRankEntity_o *v14; // x21
  UILabel_o *pointLabel; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *buddyUiAtlas; // x20
  UISprite_o *rankSprite; // x20
  EventBuddyPointResultComponent_o *v20; // x0
  const MethodInfo *v21; // x2

  if ( (byte_596A9FC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A9FC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&point);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(Master_object, eventId, point, svtId, 0);
  if ( EnableEntity )
  {
    v14 = EnableEntity;
    pointLabel = this->fields.pointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    Master_object = (EventServantPointRankMaster_o *)LocalizationManager__GetNumberFormat(point, 0);
    if ( !pointLabel )
      goto LABEL_18;
    UILabel__set_text(pointLabel, (System_String_o *)Master_object, 0);
    buddyUiAtlas = (UnityEngine_Object_o *)this->fields.buddyUiAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    if ( UnityEngine_Object__op_Inequality(buddyUiAtlas, 0, 0) )
    {
      Master_object = (EventServantPointRankMaster_o *)this->fields.rankSprite;
      if ( Master_object )
      {
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.buddyUiAtlas, 0);
        rankSprite = this->fields.rankSprite;
        Master_object = (EventServantPointRankMaster_o *)EventBuddyPointResultComponent__GetFileNameFromRank(
                                                           v20,
                                                           v14->fields.svtPointRank,
                                                           v21);
        if ( rankSprite )
        {
          UISprite__set_spriteName(rankSprite, (System_String_o *)Master_object, 0);
          Master_object = (EventServantPointRankMaster_o *)this->fields.rankSprite;
          if ( Master_object )
          {
            (*(void (__fastcall **)(EventServantPointRankMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
              Master_object,
              *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
            return;
          }
        }
      }
LABEL_18:
      sub_2213CDC(Master_object, v10);
    }
  }
}


void EventBuddyPointResultComponent__SetSvtFigure(
        EventBuddyPointResultComponent_o *this,
        int32_t svtId,
        int32_t overwriteImgLimitCount,
        System_Action_o *setupEndCallBack,
        const MethodInfo *method)
{
  __int64 v9; // x21
  ServantLimitImageMaster_o *svtStandFig; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x2
  int LimitCountByImageLimitCostumeIn; // w23
  __int64 v28; // x2
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t ServantLimitCountSealAfter; // w22
  StandFigureBack_o *v34; // x20
  System_Action_o *v35; // x23

  if ( (byte_596A9FD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultComponent___c__DisplayClass11_0__SetSvtFigure_b__0__);
    sub_2213A60(&EventBuddyPointResultComponent___c__DisplayClass11_0_TypeInfo);
    byte_596A9FD = 1;
  }
  v9 = sub_2213CCC(EventBuddyPointResultComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = setupEndCallBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)setupEndCallBack, v18, v19, v20, v21, v22, v23);
  if ( (overwriteImgLimitCount & 0x80000000) == 0 )
  {
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v24, v25);
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(overwriteImgLimitCount, 0);
    goto LABEL_19;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24, v25);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v28);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  svtStandFig = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v28);
    svtStandFig = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_31:
    sub_2213CDC(svtStandFig, v11);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       (int64_t)svtStandFig[2].fields.list[1].monitor,
                       svtId,
                       0);
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v26);
  svtStandFig = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !svtStandFig )
    goto LABEL_31;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 svtStandFig,
                                 svtId,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v31, v32);
  overwriteImgLimitCount = ImageLimitCount__GetImageLimitCount(svtId, ServantLimitCountSealAfter, 0);
LABEL_28:
  svtStandFig = (ServantLimitImageMaster_o *)this->fields.svtStandFig;
  if ( !svtStandFig )
    goto LABEL_31;
  StandFigureBack__Init((StandFigureBack_o *)svtStandFig, 0);
  v34 = this->fields.svtStandFig;
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultComponent___c__DisplayClass11_0__SetSvtFigure_b__0__,
    0);
  if ( !v34 )
    goto LABEL_31;
  StandFigureBack__CreatedStandFigure(v34, svtId, overwriteImgLimitCount, 0, 0, v35, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventBuddyPointResultComponent__SetTouchEnable(
        EventBuddyPointResultComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_2213CDC(0, isEnable);
  UnityEngine_GameObject__SetActive(touchHintObj, isEnable, 0);
}


void EventBuddyPointResultComponent__Setup(
        EventBuddyPointResultComponent_o *this,
        int32_t eventId,
        UIAtlas_o *buddyUiAtlas,
        System_Action_o *setupEndCallback,
        System_Action_o *closeCallback,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Master_object; // x23
  UnityEngine_GameObject_o *touchHintObj; // x0
  UserEventServantPointEntity_o *BestServantPointEntity; // x0
  int32_t svtId; // w23
  int32_t BuddyPoint; // w0
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x1

  if ( (byte_596A9FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A9FB = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (System_String_o *)buddyUiAtlas,
    (System_String_o *)setupEndCallback,
    (int32_t)closeCallback,
    overwriteLimitCount,
    (bool)method,
    v7);
  this->fields.buddyUiAtlas = buddyUiAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buddyUiAtlas,
    (int32_t)buddyUiAtlas,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  touchHintObj = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
    touchHintObj = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_16;
  BestServantPointEntity = UserEventServantPointMaster__GetBestServantPointEntity(
                             (UserEventServantPointMaster_o *)Master_object,
                             *(_QWORD *)(touchHintObj[7].fields.m_CachedPtr + 64),
                             eventId,
                             0);
  if ( BestServantPointEntity )
  {
    svtId = BestServantPointEntity->fields.svtId;
    BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(BestServantPointEntity, 0);
    EventBuddyPointResultComponent__SetPointInfo(this, eventId, BuddyPoint, svtId, v29);
    EventBuddyPointResultComponent__SetSvtFigure(this, svtId, overwriteLimitCount, setupEndCallback, v30);
    EventBuddyPointResultComponent__SetAnimationEvent(this, v31);
    touchHintObj = this->fields.touchHintObj;
    if ( touchHintObj )
    {
      UnityEngine_GameObject__SetActive(touchHintObj, 0, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(touchHintObj, v22);
  }
}


void EventBuddyPointResultComponent___c__DisplayClass11_0___ctor(
        EventBuddyPointResultComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBuddyPointResultComponent___c__DisplayClass11_0___SetSvtFigure_b__0(
        EventBuddyPointResultComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  EventBuddyPointResultComponent___c__DisplayClass11_0_o *v2; // x19
  struct EventBuddyPointResultComponent_o *_4__this; // x20
  UIStandFigureR_o *SvtStandFigure; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x2
  struct EventBuddyPointResultComponent_o *v12; // x8
  UnityEngine_Object_o *figureR; // x20
  struct EventBuddyPointResultComponent_o *v14; // x8
  struct UIStandFigureR_o *v15; // x8
  struct System_Action_o *setupEndCallBack; // x8
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_596AA02 & 1) == 0 )
  {
    this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA02 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)_4__this->fields.svtStandFig;
  if ( !this )
    goto LABEL_16;
  SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0);
  _4__this->fields.figureR = SvtStandFigure;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.figureR,
    (int32_t)SvtStandFigure,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_16;
  figureR = (UnityEngine_Object_o *)v12->fields.figureR;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v11);
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)UnityEngine_Object__op_Inequality(figureR, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v2->fields.__4__this;
    if ( v14 )
    {
      v15 = v14->fields.figureR;
      if ( v15 )
      {
        this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)v15->fields.bodyTexture;
        if ( this )
        {
          v17.fields.r = 0.0;
          v17.fields.g = 0.0;
          v17.fields.b = 0.0;
          v17.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v17, 0);
          goto LABEL_13;
        }
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
LABEL_13:
  setupEndCallBack = v2->fields.setupEndCallBack;
  if ( setupEndCallBack )
    ((void (__fastcall *)(intptr_t, intptr_t))setupEndCallBack->fields.invoke_impl)(
      setupEndCallBack->fields.method_code,
      setupEndCallBack->fields.method);
}