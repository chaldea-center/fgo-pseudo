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
  struct UIStandFigureR_o *v4; // x8
  UnityEngine_Object_o *bodyTexture; // x20
  struct UIStandFigureR_o *v6; // x8
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float figureFadeInDuration; // s8
  UnityEngine_GameObject_o *v10; // x19
  float g; // s5
  float b; // s6
  float a; // s7
  float v14; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40FC588 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC588 = 1;
  }
  figureR = (UnityEngine_Object_o *)this->fields.figureR;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL) )
  {
    v4 = this->fields.figureR;
    if ( !v4 )
      goto LABEL_16;
    bodyTexture = (UnityEngine_Object_o *)v4->fields.bodyTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL) )
    {
      v6 = this->fields.figureR;
      if ( v6 )
      {
        v7 = (UnityEngine_Component_o *)v6->fields.bodyTexture;
        if ( v7 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
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
      sub_B170D4();
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
  if ( (byte_40FC58A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21610, *(_QWORD *)&rank);
    byte_40FC58A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_21610, v3, 0LL);
}


void __fastcall EventBuddyPointResultComponent__OnClickScreen(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0
  System_Action_o *closeCallback; // x0

  if ( (byte_40FC589 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC589 = 1;
  }
  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B170D4();
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(touchHintObj, 1, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetAnimationEvent(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v9; // x21
  struct CommonEffectActionComponent_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FC587 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventBuddyPointResultComponent_FadeInFigure__, v6);
    sub_B16FFC(&Method_EventBuddyPointResultComponent_OnPlayEnd__, v7);
    byte_40FC587 = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_FadeInFigure__, 0LL);
  if ( !effectActionComponent
    || (CommonEffectActionComponent__SetEventAction(effectActionComponent, 1, v9, 0LL),
        v10 = this->fields.effectActionComponent,
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_OnPlayEnd__, 0LL),
        !v10) )
  {
    sub_B170D4();
  }
  v10->fields.endAction = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.endAction,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  System_String_o *NumberFormat; // x0
  UnityEngine_Object_o *buddyUiAtlas; // x20
  UISprite_o *rankSprite; // x0
  UISprite_o *v19; // x20
  EventBuddyPointResultComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_o *FileNameFromRank; // x0
  struct UISprite_o *v23; // x0

  if ( (byte_40FC585 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FC585 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
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
    NumberFormat = LocalizationManager__GetNumberFormat(point, 0LL);
    if ( !pointLabel )
      goto LABEL_21;
    UILabel__set_text(pointLabel, NumberFormat, 0LL);
    buddyUiAtlas = (UnityEngine_Object_o *)this->fields.buddyUiAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(buddyUiAtlas, 0LL, 0LL) )
    {
      rankSprite = this->fields.rankSprite;
      if ( rankSprite )
      {
        UISprite__set_atlas(rankSprite, this->fields.buddyUiAtlas, 0LL);
        v19 = this->fields.rankSprite;
        FileNameFromRank = EventBuddyPointResultComponent__GetFileNameFromRank(v20, v14->fields.svtPointRank, v21);
        if ( v19 )
        {
          UISprite__set_spriteName(v19, FileNameFromRank, 0LL);
          v23 = this->fields.rankSprite;
          if ( v23 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
              v23,
              v23->klass->vtable._34_get_minWidth.methodPtr);
            return;
          }
        }
      }
LABEL_21:
      sub_B170D4();
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int LimitCountByImageLimitCostumeIn; // w23
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  ServantLimitImageMaster_o *v33; // x0
  int32_t ServantLimitCountSealAfter; // w22
  StandFigureBack_o *svtStandFig; // x0
  StandFigureBack_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x23

  ImageLimitCount = overwriteImgLimitCount;
  if ( (byte_40FC586 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_EventBuddyPointResultComponent___c__DisplayClass12_0__SetSvtFigure_b__0__, v14);
    sub_B16FFC(&EventBuddyPointResultComponent___c__DisplayClass12_0_TypeInfo, v15);
    byte_40FC586 = 1;
  }
  v16 = sub_B170CC(
          EventBuddyPointResultComponent___c__DisplayClass12_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&overwriteImgLimitCount,
          setupEndCallBack,
          method);
  EventBuddyPointResultComponent___c__DisplayClass12_0___ctor(
    (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_32;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = setupEndCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 24),
    (System_Int32_array **)setupEndCallBack,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_32:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       Master_WarQuestSelectionMaster,
                       UserId,
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
  v33 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !v33 )
    goto LABEL_32;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v33,
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
  svtStandFig = this->fields.svtStandFig;
  if ( !svtStandFig )
    goto LABEL_32;
  StandFigureBack__Init(svtStandFig, 0LL);
  v36 = this->fields.svtStandFig;
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v16,
    Method_EventBuddyPointResultComponent___c__DisplayClass12_0__SetSvtFigure_b__0__,
    0LL);
  if ( !v36 )
    goto LABEL_32;
  StandFigureBack__CreatedStandFigure(v36, svtId, ImageLimitCount, 0, 0, v41, 0, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetTouchEnable(
        EventBuddyPointResultComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B170D4();
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
  int64_t UserId; // x0
  UserEventServantPointEntity_o *BestServantPointEntity; // x0
  int32_t svtId; // w23
  int32_t BuddyPoint; // w0
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x1
  UnityEngine_GameObject_o *touchHintObj; // x0

  if ( (byte_40FC584 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    byte_40FC584 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)buddyUiAtlas,
    (System_String_array **)setupEndCallback,
    (System_Boolean_array **)closeCallback,
    *(System_Int32_array ***)&overwriteLimitCount,
    (System_Int32_array *)method,
    v7);
  this->fields.buddyUiAtlas = buddyUiAtlas;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  BestServantPointEntity = UserEventServantPointMaster__GetBestServantPointEntity(
                             Master_WarQuestSelectionMaster,
                             UserId,
                             eventId,
                             0LL);
  if ( BestServantPointEntity )
  {
    svtId = BestServantPointEntity->fields.svtId;
    BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(BestServantPointEntity, 0LL);
    EventBuddyPointResultComponent__SetPointInfo(this, eventId, BuddyPoint, svtId, v27);
    EventBuddyPointResultComponent__SetSvtFigure(this, svtId, overwriteLimitCount, setupEndCallback, v28);
    EventBuddyPointResultComponent__SetAnimationEvent(this, v29);
    touchHintObj = this->fields.touchHintObj;
    if ( touchHintObj )
    {
      UnityEngine_GameObject__SetActive(touchHintObj, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
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
  struct EventBuddyPointResultComponent_o *_4__this; // x20
  StandFigureBack_o *svtStandFig; // x0
  System_Int32_array **SvtStandFigure; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct EventBuddyPointResultComponent_o *v12; // x8
  UnityEngine_Object_o *figureR; // x20
  struct EventBuddyPointResultComponent_o *v14; // x8
  struct UIStandFigureR_o *v15; // x8
  UIWidget_o *bodyTexture; // x20
  int v17; // s0
  System_Action_o *setupEndCallBack; // x0

  if ( (byte_40F8B94 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8B94 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  svtStandFig = _4__this->fields.svtStandFig;
  if ( !svtStandFig )
    goto LABEL_17;
  SvtStandFigure = (System_Int32_array **)StandFigureBack__GetSvtStandFigure(svtStandFig, 0, 0LL);
  _4__this->fields.figureR = (struct UIStandFigureR_o *)SvtStandFigure;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.figureR, SvtStandFigure, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_17;
  figureR = (UnityEngine_Object_o *)v12->fields.figureR;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL) )
  {
    v14 = this->fields.__4__this;
    if ( v14 )
    {
      v15 = v14->fields.figureR;
      if ( v15 )
      {
        bodyTexture = (UIWidget_o *)v15->fields.bodyTexture;
        *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_black(0LL);
        if ( bodyTexture )
        {
          UIWidget__set_color(bodyTexture, *(UnityEngine_Color_o *)&v17, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_14:
  setupEndCallBack = this->fields.setupEndCallBack;
  if ( setupEndCallBack )
    System_Action__Invoke(setupEndCallBack, 0LL);
}