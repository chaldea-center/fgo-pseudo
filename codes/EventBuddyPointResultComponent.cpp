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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *figureR; // x20
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  struct UIStandFigureR_o *v8; // x8
  UnityEngine_Object_o *bodyTexture; // x20
  struct UIStandFigureR_o *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float figureFadeInDuration; // s8
  UnityEngine_GameObject_o *v13; // x19
  float g; // s5
  float b; // s6
  float a; // s7
  float v17; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42EB100 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB100 = 1;
  }
  figureR = (UnityEngine_Object_o *)this->fields.figureR;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v8 = this->fields.figureR;
    if ( !v8 )
      goto LABEL_16;
    bodyTexture = (UnityEngine_Object_o *)v8->fields.bodyTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(bodyTexture, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v10 = this->fields.figureR;
      if ( v10 )
      {
        v6 = (UnityEngine_Component_o *)v10->fields.bodyTexture;
        if ( v6 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
          figureFadeInDuration = this->fields.figureFadeInDuration;
          v13 = gameObject;
          white = UnityEngine_Color__get_white(0LL);
          g = white.fields.g;
          b = white.fields.b;
          a = white.fields.a;
          white.fields.g = white.fields.r;
          white.fields.b = g;
          white.fields.a = b;
          v17 = a;
          TweenColor__Begin(v13, figureFadeInDuration, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B5D69C(v6, v7);
    }
  }
}


System_String_o *__fastcall EventBuddyPointResultComponent__GetFileNameFromRank(
        EventBuddyPointResultComponent_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = rank;
  if ( (byte_42EB102 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21995/*"rank_"*/, rank, (_DWORD)method, v3);
    byte_42EB102 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_21995/*"rank_"*/, v4, 0LL);
}


void __fastcall EventBuddyPointResultComponent__OnClickScreen(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *touchHintObj; // x0
  System_Action_o *closeCallback; // x0

  if ( (byte_42EB101 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB101 = 1;
  }
  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(touchHintObj, 1, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetAnimationEvent(
        EventBuddyPointResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonEffectActionComponent_o *effectActionComponent; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct CommonEffectActionComponent_o *v15; // x20
  System_Action_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EB0FF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventBuddyPointResultComponent_FadeInFigure__, v5, v6, v7);
    sub_B5D5C4(&Method_EventBuddyPointResultComponent_OnPlayEnd__, v8, v9, v10);
    byte_42EB0FF = 1;
  }
  effectActionComponent = this->fields.effectActionComponent;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_FadeInFigure__, 0LL);
  if ( !effectActionComponent
    || (CommonEffectActionComponent__SetEventAction(effectActionComponent, 1, v12, 0LL),
        v15 = this->fields.effectActionComponent,
        v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_EventBuddyPointResultComponent_OnPlayEnd__, 0LL),
        !v15) )
  {
    sub_B5D69C(v13, v14);
  }
  v15->fields.endAction = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v15->fields.endAction,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultComponent__SetPointInfo(
        EventBuddyPointResultComponent_o *this,
        int32_t eventId,
        int32_t point,
        int32_t svtId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  EventServantPointRankEntity_o *EnableEntity; // x0
  EventServantPointRankEntity_o *v21; // x21
  UILabel_o *pointLabel; // x22
  UnityEngine_Object_o *buddyUiAtlas; // x20
  UISprite_o *rankSprite; // x20
  EventBuddyPointResultComponent_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_42EB0FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, eventId, point, *(_QWORD *)&svtId);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42EB0FD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
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
    v21 = EnableEntity;
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
                                                                            v25,
                                                                            v21->fields.svtPointRank,
                                                                            v26);
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v19);
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
  int32_t ImageLimitCount; // w22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x21
  ServantLimitImageMaster_o *UserId; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int LimitCountByImageLimitCostumeIn; // w23
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t ServantLimitCountSealAfter; // w22
  StandFigureBack_o *svtStandFig; // x20
  System_Action_o *v50; // x23

  ImageLimitCount = overwriteImgLimitCount;
  if ( (byte_42EB0FE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, svtId, overwriteImgLimitCount, setupEndCallBack);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventBuddyPointResultComponent___c__DisplayClass12_0__SetSvtFigure_b__0__, v24, v25, v26);
    sub_B5D5C4(&EventBuddyPointResultComponent___c__DisplayClass12_0_TypeInfo, v27, v28, v29);
    byte_42EB0FE = 1;
  }
  v30 = sub_B5D694(EventBuddyPointResultComponent___c__DisplayClass12_0_TypeInfo);
  EventBuddyPointResultComponent___c__DisplayClass12_0___ctor(
    (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_32;
  *(_QWORD *)(v30 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 24) = setupEndCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v30 + 24),
    (System_Int32_array **)setupEndCallBack,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (ServantLimitImageMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_32:
    sub_B5D69C(UserId, v32);
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
  UserId = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v30,
    Method_EventBuddyPointResultComponent___c__DisplayClass12_0__SetSvtFigure_b__0__,
    0LL);
  if ( !svtStandFig )
    goto LABEL_32;
  StandFigureBack__CreatedStandFigure(svtStandFig, svtId, ImageLimitCount, 0, 0, v50, 0, 0LL);
}


void __fastcall EventBuddyPointResultComponent__SetTouchEnable(
        EventBuddyPointResultComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchHintObj; // x0

  touchHintObj = this->fields.touchHintObj;
  if ( !touchHintObj )
    sub_B5D69C(0LL, isEnable);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // x23
  UnityEngine_GameObject_o *UserId; // x0
  __int64 v28; // x1
  UserEventServantPointEntity_o *BestServantPointEntity; // x0
  int32_t svtId; // w23
  int32_t BuddyPoint; // w0
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x1

  if ( (byte_42EB0FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_UserEventServantPointMaster___,
      eventId,
      (_DWORD)buddyUiAtlas,
      setupEndCallback);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    byte_42EB0FC = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)buddyUiAtlas,
    (System_String_array **)setupEndCallback,
    (System_Boolean_array **)closeCallback,
    *(System_Int32_array ***)&overwriteLimitCount,
    (System_Int32_array *)method,
    v7);
  this->fields.buddyUiAtlas = buddyUiAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.buddyUiAtlas,
    (System_Int32_array **)buddyUiAtlas,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
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
    EventBuddyPointResultComponent__SetPointInfo(this, eventId, BuddyPoint, svtId, v32);
    EventBuddyPointResultComponent__SetSvtFigure(this, svtId, overwriteLimitCount, setupEndCallback, v33);
    EventBuddyPointResultComponent__SetAnimationEvent(this, v34);
    UserId = this->fields.touchHintObj;
    if ( UserId )
    {
      UnityEngine_GameObject__SetActive(UserId, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(UserId, v28);
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
  int v2; // w2
  __int64 v3; // x3
  EventBuddyPointResultComponent___c__DisplayClass12_0_o *v4; // x19
  struct EventBuddyPointResultComponent_o *_4__this; // x20
  struct EventBuddyPointResultComponent_o *v6; // x8
  UnityEngine_Object_o *figureR; // x20
  struct EventBuddyPointResultComponent_o *v8; // x8
  struct UIStandFigureR_o *v9; // x8
  UIWidget_o *bodyTexture; // x20
  int v11; // s0
  System_Action_o *setupEndCallBack; // x0

  v4 = this;
  if ( (byte_42E64EC & 1) == 0 )
  {
    this = (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)sub_B5D5C4(
                                                                       &UnityEngine_Object_TypeInfo,
                                                                       (_DWORD)method,
                                                                       v2,
                                                                       v3);
    byte_42E64EC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)_4__this->fields.svtStandFig;
  if ( !this )
    goto LABEL_17;
  _4__this->fields.figureR = StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0LL);
  sub_B5D560(&_4__this->fields.figureR);
  v6 = v4->fields.__4__this;
  if ( !v6 )
    goto LABEL_17;
  figureR = (UnityEngine_Object_o *)v6->fields.figureR;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventBuddyPointResultComponent___c__DisplayClass12_0_o *)UnityEngine_Object__op_Inequality(figureR, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v4->fields.__4__this;
    if ( v8 )
    {
      v9 = v8->fields.figureR;
      if ( v9 )
      {
        bodyTexture = (UIWidget_o *)v9->fields.bodyTexture;
        *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_black(0LL);
        if ( bodyTexture )
        {
          UIWidget__set_color(bodyTexture, *(UnityEngine_Color_o *)&v11, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_17:
    sub_B5D69C(this, method);
  }
LABEL_14:
  setupEndCallBack = v4->fields.setupEndCallBack;
  if ( setupEndCallBack )
    System_Action__Invoke(setupEndCallBack, 0LL);
}