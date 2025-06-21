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

  if ( (byte_4B16C43 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16C43 = 1;
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
      sub_1BCB254(v4, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointResultComponent__GetFileNameFromRank(
        EventBuddyPointResultComponent_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = rank;
  if ( (byte_4B16C45 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22753/*"rank_"*/, *(_QWORD *)&rank);
    byte_4B16C45 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62450424((System_String_o *)StringLiteral_22753/*"rank_"*/, v3, 0LL);
}


void __fastcall EventBuddyPointResultComponent__OnClickScreen(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o *closeCallback; // x8

  if ( (byte_4B16C44 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventBuddyPointResultComponent_OnClickScreen__, method);
    byte_4B16C44 = 1;
  }
  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_1BCB254(0LL, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(touchHintObj, 0LL) )
  {
    v4 = Method_EventBuddyPointResultComponent_OnClickScreen__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultComponent_OnClickScreen__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_EventBuddyPointResultComponent_OnClickScreen__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
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
    sub_1BCB254(0LL, method);
  UnityEngine_GameObject__SetActive(touchHintObj, 1, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetAnimationEvent(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  struct CommonEffectActionComponent_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_4B16C42 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventBuddyPointResultComponent_FadeInFigure__, v3);
    sub_1BCAFF8(&Method_EventBuddyPointResultComponent_OnPlayEnd__, v4);
    byte_4B16C42 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v6 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_FadeInFigure__, 0LL);
  if ( !effectActionComponent
    || (CommonEffectActionComponent__SetEventAction(effectActionComponent, 1, v6, 0LL),
        v9 = this->fields.effectActionComponent,
        v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_OnPlayEnd__, 0LL),
        !v9) )
  {
    sub_1BCB254(v7, v8);
  }
  v9->fields.endAction = v10;
  sub_1BCAF9C(&v9->fields.endAction);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultComponent__SetPointInfo(
        EventBuddyPointResultComponent_o *this,
        int32_t eventId,
        int32_t point,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v13; // x1
  EventServantPointRankEntity_o *EnableEntity; // x0
  EventServantPointRankEntity_o *v15; // x21
  UILabel_o *pointLabel; // x22
  UnityEngine_Object_o *buddyUiAtlas; // x20
  UISprite_o *rankSprite; // x20
  EventBuddyPointResultComponent_o *v19; // x0
  const MethodInfo *v20; // x2

  if ( (byte_4B16C40 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    byte_4B16C40 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_18;
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(Master_object, eventId, point, svtId, 0LL);
  if ( EnableEntity )
  {
    v15 = EnableEntity;
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
                                                           v19,
                                                           v15->fields.svtPointRank,
                                                           v20);
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
      sub_1BCB254(Master_object, v13);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultComponent__SetSvtFigure(
        EventBuddyPointResultComponent_o *this,
        int32_t svtId,
        int32_t overwriteImgLimitCount,
        System_Action_o *setupEndCallBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  ServantLimitImageMaster_o *svtStandFig; // x0
  __int64 v18; // x1
  int LimitCountByImageLimitCostumeIn; // w23
  Il2CppObject *Master_object; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t ServantLimitCountSealAfter; // w22
  StandFigureBack_o *v23; // x20
  System_Action_o *v24; // x23

  if ( (byte_4B16C41 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v12);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_EventBuddyPointResultComponent___c__DisplayClass11_0__SetSvtFigure_b__0__, v14);
    sub_1BCAFF8(&EventBuddyPointResultComponent___c__DisplayClass11_0_TypeInfo, v15);
    byte_4B16C41 = 1;
  }
  v16 = (Il2CppObject *)sub_1BCB244(EventBuddyPointResultComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_31;
  v16[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v16[1]);
  v16[1].monitor = setupEndCallBack;
  sub_1BCAF9C(&v16[1].monitor);
  if ( (overwriteImgLimitCount & 0x80000000) == 0 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(overwriteImgLimitCount, 0LL);
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    byte_4B165D1 = 1;
  }
  svtStandFig = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    svtStandFig = (ServantLimitImageMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_31:
    sub_1BCB254(svtStandFig, v18);
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
  svtStandFig = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v23 = this->fields.svtStandFig;
  v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v24, v16, Method_EventBuddyPointResultComponent___c__DisplayClass11_0__SetSvtFigure_b__0__, 0LL);
  if ( !v23 )
    goto LABEL_31;
  StandFigureBack__CreatedStandFigure(v23, svtId, overwriteImgLimitCount, 0, 0, v24, 0, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetTouchEnable(
        EventBuddyPointResultComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_1BCB254(0LL, isEnable);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x23
  UnityEngine_GameObject_o *touchHintObj; // x0
  UserEventServantPointEntity_o *BestServantPointEntity; // x0
  int32_t svtId; // w23
  int32_t BuddyPoint; // w0
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x1

  if ( (byte_4B16C3F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    byte_4B16C3F = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1BCAF9C(&this->fields.closeCallback);
  this->fields.buddyUiAtlas = buddyUiAtlas;
  sub_1BCAF9C(&this->fields.buddyUiAtlas);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    byte_4B165D1 = 1;
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
    EventBuddyPointResultComponent__SetPointInfo(this, eventId, BuddyPoint, svtId, v21);
    EventBuddyPointResultComponent__SetSvtFigure(this, svtId, overwriteLimitCount, setupEndCallback, v22);
    EventBuddyPointResultComponent__SetAnimationEvent(this, v23);
    touchHintObj = this->fields.touchHintObj;
    if ( touchHintObj )
    {
      UnityEngine_GameObject__SetActive(touchHintObj, 0, 0LL);
      return;
    }
LABEL_16:
    sub_1BCB254(touchHintObj, v15);
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
  struct EventBuddyPointResultComponent_o *v4; // x8
  UnityEngine_Object_o *figureR; // x20
  struct EventBuddyPointResultComponent_o *v6; // x8
  struct UIStandFigureR_o *v7; // x8
  struct System_Action_o *setupEndCallBack; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4B16C46 & 1) == 0 )
  {
    this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16C46 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)_4__this->fields.svtStandFig;
  if ( !this )
    goto LABEL_16;
  _4__this->fields.figureR = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)sub_1BCAF9C(&_4__this->fields.figureR);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_16;
  figureR = (UnityEngine_Object_o *)v4->fields.figureR;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.__4__this;
    if ( v6 )
    {
      v7 = v6->fields.figureR;
      if ( v7 )
      {
        this = (EventBuddyPointResultComponent___c__DisplayClass11_0_o *)v7->fields.bodyTexture;
        if ( this )
        {
          v9.fields.r = 0.0;
          v9.fields.g = 0.0;
          v9.fields.b = 0.0;
          v9.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v9, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_16:
    sub_1BCB254(this, method);
  }
LABEL_13:
  setupEndCallBack = v2->fields.setupEndCallBack;
  if ( setupEndCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))setupEndCallBack->fields.m_target)(
      setupEndCallBack->fields.original_method_info,
      *(_QWORD *)&setupEndCallBack->fields.extra_arg);
}