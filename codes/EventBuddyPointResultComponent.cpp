void __fastcall EventBuddyPointResultComponent___ctor(EventBuddyPointResultComponent_o *this, const MethodInfo *method)
{
  this->fields.figureFadeInDuration = 0.266;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultComponent__FadeInFigure(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figureR; // x20
  UnityEngine_Component_o *v4; // x0
  struct UIStandFigureR_o *v5; // x8
  UnityEngine_Object_o *bodyTexture; // x20
  struct UIStandFigureR_o *v7; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float figureFadeInDuration; // s8
  UnityEngine_GameObject_o *v10; // x19
  float g; // s5
  float b; // s6
  float a; // s7
  float v14; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4216E9F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216E9F = 1;
  }
  figureR = (UnityEngine_Object_o *)this->fields.figureR;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v5 = this->fields.figureR;
    if ( !v5 )
      goto LABEL_16;
    bodyTexture = (UnityEngine_Object_o *)v5->fields.bodyTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v7 = this->fields.figureR;
      if ( v7 )
      {
        v4 = (UnityEngine_Component_o *)v7->fields.bodyTexture;
        if ( v4 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
          figureFadeInDuration = this->fields.figureFadeInDuration;
          v10 = gameObject;
          white = UnityEngine_Color__get_white(0LL);
          g = white.fields.g;
          b = white.fields.b;
          a = white.fields.a;
          white.fields.g = white.fields.r;
          white.fields.b = g;
          white.fields.a = b;
          v14 = a;
          TweenColor__Begin(v10, figureFadeInDuration, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B0D97C(v4);
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
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = rank;
  if ( (byte_4216EA1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21772/*"rank_"*/, *(_QWORD *)&rank);
    byte_4216EA1 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_21772/*"rank_"*/, v3, 0LL);
}


void __fastcall EventBuddyPointResultComponent__OnClickScreen(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0
  System_Action_o *closeCallback; // x0

  if ( (byte_4216EA0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216EA0 = 1;
  }
  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B0D97C(0LL);
  if ( UnityEngine_GameObject__get_activeInHierarchy(touchHintObj, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    closeCallback = this->fields.closeCallback;
    if ( closeCallback )
      System_Action__Invoke(closeCallback, 0LL);
  }
}


void __fastcall EventBuddyPointResultComponent__OnPlayEnd(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(touchHintObj, 1, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetAnimationEvent(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  struct CommonEffectActionComponent_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4216E9E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventBuddyPointResultComponent_FadeInFigure__, v4);
    sub_B0D8A4(&Method_EventBuddyPointResultComponent_OnPlayEnd__, v5);
    byte_4216E9E = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_FadeInFigure__, 0LL);
  if ( !effectActionComponent
    || (CommonEffectActionComponent__SetEventAction(effectActionComponent, 1, v7, 0LL),
        v9 = this->fields.effectActionComponent,
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_OnPlayEnd__, 0LL),
        !v9) )
  {
    sub_B0D97C(v8);
  }
  v9->fields.endAction = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.endAction,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  EventServantPointRankEntity_o *EnableEntity; // x0
  EventServantPointRankEntity_o *v14; // x21
  UILabel_o *pointLabel; // x22
  UnityEngine_Object_o *buddyUiAtlas; // x20
  UISprite_o *rankSprite; // x20
  EventBuddyPointResultComponent_o *v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4216E9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216E9C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                   Master_WarQuestSelectionMaster,
                   eventId,
                   point,
                   svtId,
                   0LL);
  if ( EnableEntity )
  {
    v14 = EnableEntity;
    pointLabel = this->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)LocalizationManager__GetNumberFormat(point, 0LL);
    if ( !pointLabel )
      goto LABEL_21;
    UILabel__set_text(pointLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    buddyUiAtlas = (UnityEngine_Object_o *)this->fields.buddyUiAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(buddyUiAtlas, 0LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)this->fields.rankSprite;
      if ( Master_WarQuestSelectionMaster )
      {
        UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.buddyUiAtlas, 0LL);
        rankSprite = this->fields.rankSprite;
        Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)EventBuddyPointResultComponent__GetFileNameFromRank(
                                                                            v18,
                                                                            v14->fields.svtPointRank,
                                                                            v19);
        if ( rankSprite )
        {
          UISprite__set_spriteName(rankSprite, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
          Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)this->fields.rankSprite;
          if ( Master_WarQuestSelectionMaster )
          {
            ((void (__fastcall *)(EventServantPointRankMaster_o *, Il2CppMethodPointer))Master_WarQuestSelectionMaster->klass[1].vtable._5_ForForceDerived.method)(
              Master_WarQuestSelectionMaster,
              Master_WarQuestSelectionMaster->klass[1].vtable._6_preProcess.methodPtr);
            return;
          }
        }
      }
LABEL_21:
      sub_B0D97C(Master_WarQuestSelectionMaster);
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
  int32_t ImageLimitCount; // w22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  ServantLimitImageMaster_o *UserId; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int LimitCountByImageLimitCostumeIn; // w23
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t ServantLimitCountSealAfter; // w22
  StandFigureBack_o *svtStandFig; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x23

  ImageLimitCount = overwriteImgLimitCount;
  if ( (byte_4216E9D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_EventBuddyPointResultComponent___c__DisplayClass12_0__SetSvtFigure_b__0__, v14);
    sub_B0D8A4(&EventBuddyPointResultComponent___c__DisplayClass12_0_TypeInfo, v15);
    byte_4216E9D = 1;
  }
  v16 = sub_B0D974(
          EventBuddyPointResultComponent___c__DisplayClass12_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&overwriteImgLimitCount);
  EventBuddyPointResultComponent___c__DisplayClass12_0___ctor(
    (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_32;
  *(_QWORD *)(v16 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v16 + 24) = setupEndCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 24),
    (System_Int32_array **)setupEndCallBack,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( (ImageLimitCount & 0x80000000) == 0 )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(ImageLimitCount, 0LL);
    goto LABEL_18;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (ServantLimitImageMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_32:
    sub_B0D97C(UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       Master_WarQuestSelectionMaster,
                       (int64_t)UserId,
                       svtId,
                       0LL);
  if ( !EntityDefinitely )
  {
    LimitCountByImageLimitCostumeIn = 0;
    goto LABEL_21;
  }
  LimitCountByImageLimitCostumeIn = EntityDefinitely->fields.maxLimitCount;
  ImageLimitCount = 0;
LABEL_18:
  if ( LimitCountByImageLimitCostumeIn > 10 )
    goto LABEL_29;
LABEL_21:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !UserId )
    goto LABEL_32;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 UserId,
                                 svtId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, ServantLimitCountSealAfter, 0LL);
LABEL_29:
  UserId = (ServantLimitImageMaster_o *)this->fields.svtStandFig;
  if ( !UserId )
    goto LABEL_32;
  StandFigureBack__Init((StandFigureBack_o *)UserId, 0LL);
  svtStandFig = this->fields.svtStandFig;
  v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v16,
    Method_EventBuddyPointResultComponent___c__DisplayClass12_0__SetSvtFigure_b__0__,
    0LL);
  if ( !svtStandFig )
    goto LABEL_32;
  StandFigureBack__CreatedStandFigure(svtStandFig, svtId, ImageLimitCount, 0, 0, v37, 0, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetTouchEnable(
        EventBuddyPointResultComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B0D97C(0LL);
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
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // x23
  UnityEngine_GameObject_o *UserId; // x0
  UserEventServantPointEntity_o *BestServantPointEntity; // x0
  int32_t svtId; // w23
  int32_t BuddyPoint; // w0
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x1

  if ( (byte_4216E9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    byte_4216E9B = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)buddyUiAtlas,
    (System_String_array **)setupEndCallback,
    (System_Boolean_array **)closeCallback,
    *(System_Int32_array ***)&overwriteLimitCount,
    (System_Int32_array *)method,
    v7);
  this->fields.buddyUiAtlas = buddyUiAtlas;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.buddyUiAtlas,
    (System_Int32_array **)buddyUiAtlas,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (UnityEngine_GameObject_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  BestServantPointEntity = UserEventServantPointMaster__GetBestServantPointEntity(
                             Master_WarQuestSelectionMaster,
                             (int64_t)UserId,
                             eventId,
                             0LL);
  if ( BestServantPointEntity )
  {
    svtId = BestServantPointEntity->fields.svtId;
    BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(BestServantPointEntity, 0LL);
    EventBuddyPointResultComponent__SetPointInfo(this, eventId, BuddyPoint, svtId, v27);
    EventBuddyPointResultComponent__SetSvtFigure(this, svtId, overwriteLimitCount, setupEndCallback, v28);
    EventBuddyPointResultComponent__SetAnimationEvent(this, v29);
    UserId = this->fields.touchHintObj;
    if ( UserId )
    {
      UnityEngine_GameObject__SetActive(UserId, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(UserId);
  }
}


void __fastcall EventBuddyPointResultComponent___c__DisplayClass12_0___ctor(
        EventBuddyPointResultComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultComponent___c__DisplayClass12_0___SetSvtFigure_b__0(
        EventBuddyPointResultComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  EventBuddyPointResultComponent___c__DisplayClass12_0_o *v2; // x19
  struct EventBuddyPointResultComponent_o *_4__this; // x20
  UIStandFigureR_o *SvtStandFigure; // x0
  struct EventBuddyPointResultComponent_o *v5; // x8
  UnityEngine_Object_o *figureR; // x20
  struct EventBuddyPointResultComponent_o *v7; // x8
  struct UIStandFigureR_o *v8; // x8
  UIWidget_o *bodyTexture; // x20
  int v10; // s0
  System_Action_o *setupEndCallBack; // x0

  v2 = this;
  if ( (byte_4211B18 & 1) == 0 )
  {
    this = (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211B18 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)_4__this->fields.svtStandFig;
  if ( !this )
    goto LABEL_17;
  SvtStandFigure = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  _4__this->fields.figureR = SvtStandFigure;
  sub_B0D840(&_4__this->fields.figureR, SvtStandFigure);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_17;
  figureR = (UnityEngine_Object_o *)v5->fields.figureR;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v2->fields.__4__this;
    if ( v7 )
    {
      v8 = v7->fields.figureR;
      if ( v8 )
      {
        bodyTexture = (UIWidget_o *)v8->fields.bodyTexture;
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_black(0LL);
        if ( bodyTexture )
        {
          UIWidget__set_color(bodyTexture, *(UnityEngine_Color_o *)&v10, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B0D97C(this);
  }
LABEL_14:
  setupEndCallBack = v2->fields.setupEndCallBack;
  if ( setupEndCallBack )
    System_Action__Invoke(setupEndCallBack, 0LL);
}