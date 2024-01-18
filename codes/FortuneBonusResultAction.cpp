void __fastcall FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A84D & 1) == 0 )
  {
    sub_B2C35C(&FortuneBonusResultAction_TypeInfo, v1);
    byte_418A84D = 1;
  }
  FortuneBonusResultAction_TypeInfo->static_fields->SYSTEM_UI_LAYER_ID = 22;
  FortuneBonusResultAction_TypeInfo->static_fields->REWARD_ITEM_COUNT = 2;
}


void __fastcall FortuneBonusResultAction___ctor(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusResultAction__Awake(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_FortuneBonusResultAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CStateManager_FortuneBonusResultAction__o *fsm; // x21
  FortuneBonusResultAction_StateNone_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  FortuneBonusResultAction_StatePlay_o *v21; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x20
  FortuneBonusResultAction_StateTouchWait_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_418A845 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_FortuneBonusResultAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_FortuneBonusResultAction__add__, v3);
    sub_B2C35C(&CStateManager_FortuneBonusResultAction__TypeInfo, v4);
    sub_B2C35C(&FortuneBonusResultAction_StateNone_TypeInfo, v5);
    sub_B2C35C(&FortuneBonusResultAction_StatePlay_TypeInfo, v6);
    sub_B2C35C(&FortuneBonusResultAction_StateTouchWait_TypeInfo, v7);
    byte_418A845 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_FortuneBonusResultAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v9,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2A08354 *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v9;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    fsm = this->fields.fsm;
    v17 = (FortuneBonusResultAction_StateNone_o *)sub_B2C42C(FortuneBonusResultAction_StateNone_TypeInfo);
    FortuneBonusResultAction_StateNone___ctor(v17, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_2A08420 *)Method_CStateManager_FortuneBonusResultAction__add__);
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v21 = (FortuneBonusResultAction_StatePlay_o *)sub_B2C42C(FortuneBonusResultAction_StatePlay_TypeInfo);
    FortuneBonusResultAction_StatePlay___ctor(v21, 0LL);
    if ( !v20
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v20,
            1,
            (IState_T__o *)v21,
            (const MethodInfo_2A08420 *)Method_CStateManager_FortuneBonusResultAction__add__),
          v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v23 = (FortuneBonusResultAction_StateTouchWait_o *)sub_B2C42C(FortuneBonusResultAction_StateTouchWait_TypeInfo),
          FortuneBonusResultAction_StateTouchWait___ctor(v23, 0LL),
          !v22) )
    {
LABEL_8:
      sub_B2C434(v18, v19);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_2A08420 *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultAction__GetFortuneBonusDetailData(
        FortuneBonusResultAction_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FortuneBonusResultAction___c__DisplayClass16_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_418A848 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__, v7);
    sub_B2C35C(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo, v8);
    byte_418A848 = 1;
  }
  v9 = (FortuneBonusResultAction___c__DisplayClass16_0_o *)sub_B2C42C(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
  FortuneBonusResultAction___c__DisplayClass16_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.index = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)details,
                                                (System_Func_T__bool__o *)v14,
                                                (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultAction__GetFortuneBonusRewardData(
        FortuneBonusResultAction_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *rewards; // x8
  __int64 v4; // x9
  __int64 v6; // x0

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  rewards = fortuneBonusData->fields.rewards;
  if ( !rewards )
    return 0LL;
  v4 = *(_QWORD *)&rewards->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return rewards->m_Items[0];
}


bool __fastcall FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_418A84B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A84B = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusResultAction__Play(
        FortuneBonusResultAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  this->fields.endAction = endAct;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endAction,
    (System_Int32_array **)endAct,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v10);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  FortuneBonusResultAction__SetAnimSpeed(this, 0.0, v11);
  FortuneBonusResultAction__SetState(this, 1, v12);
}


void __fastcall FortuneBonusResultAction__PlayAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusResultAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_B2C434(0LL, v3);
  CommonEffectComponent__Init_17899744(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusResultAction__SetAnimSpeed(
        FortuneBonusResultAction_o *this,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_418A84A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A84A = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_B2C434(Item, v6);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusResultAction__SetState(
        FortuneBonusResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_FortuneBonusResultAction__o *fsm; // x0

  if ( (byte_418A84C & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_FortuneBonusResultAction__setState__, *(_QWORD *)&state);
    byte_418A84C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_FortuneBonusResultAction__setState__);
}


void __fastcall FortuneBonusResultAction__Setup(
        FortuneBonusResultAction_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  System_String_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v31; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v34; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  UISprite_o *fortuneResultSprite; // x21
  CommonUI_FortuneBonusDetailData_o *v37; // x20
  Il2CppObject *v38; // x0
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v40; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v42; // x0
  FortuneBonusResultAction___c_c *v43; // x0
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v46; // x22
  struct FortuneBonusResultAction___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UISprite_array *itemSpriteList; // x8
  __int64 v55; // x24
  unsigned int v56; // w22
  __int64 v57; // x8
  struct UISprite_array *v58; // x8
  UISprite_o *v59; // x21
  int32_t longName; // w22
  BattleServantConfConponent_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v65; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  AndroidBackKeyManager_c *v74; // x0
  __int64 v75; // x0
  int32_t iconId; // [xsp+Ch] [xbp-54h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_418A847 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, fortuneBonus);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Comparison_GiftEntity___ctor__, v11);
    sub_B2C35C(&System_Comparison_GiftEntity__TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&FortuneBonusResultAction_TypeInfo, v17);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v18);
    sub_B2C35C(&int_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v22);
    sub_B2C35C(&NGUITools_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B2C35C(&Method_FortuneBonusResultAction___c__Setup_b__14_0__, v26);
    sub_B2C35C(&FortuneBonusResultAction___c_TypeInfo, v27);
    sub_B2C35C(&StringLiteral_21225/*"omikuzi_{0}"*/, v28);
    byte_418A847 = 1;
  }
  entity = 0LL;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fortuneBonusData,
    (System_Int32_array **)fortuneBonus,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FortuneBonusResultAction__SetupAnim(this, v29);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_63;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v31);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v34);
    if ( FortuneBonusDetailData )
    {
      fortuneResultSprite = this->fields.fortuneResultSprite;
      v37 = FortuneBonusDetailData;
      iconId = FortuneBonusDetailData->fields.iconId;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_21225/*"omikuzi_{0}"*/, v38, 0LL);
      if ( !fortuneResultSprite )
        goto LABEL_63;
      UISprite__set_spriteName(fortuneResultSprite, Master_WarQuestSelectionMaster, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_63;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_WarQuestSelectionMaster, v37->fields.giftId, 0LL);
      if ( ListById )
      {
        v40 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)ListById;
        size = ListById->fields._size;
        v42 = FortuneBonusResultAction_TypeInfo;
        if ( (BYTE3(FortuneBonusResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
          v42 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v42->static_fields->REWARD_ITEM_COUNT )
        {
          v43 = FortuneBonusResultAction___c_TypeInfo;
          if ( (BYTE3(FortuneBonusResultAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo);
            v43 = FortuneBonusResultAction___c_TypeInfo;
          }
          static_fields = v43->static_fields;
          _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v43);
              static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            }
            v46 = (Il2CppObject *)static_fields->__9;
            _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_GiftEntity__TypeInfo);
            System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
              _9__14_0,
              v46,
              Method_FortuneBonusResultAction___c__Setup_b__14_0__,
              (const MethodInfo_25D8DF8 *)Method_System_Comparison_GiftEntity___ctor__);
            v47 = FortuneBonusResultAction___c_TypeInfo->static_fields;
            v47->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v47->__9__14_0,
              (System_Int32_array **)_9__14_0,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
          }
          System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
            v40,
            (System_Comparison_T__o *)_9__14_0,
            (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_63;
          v55 = 4LL;
          while ( 1 )
          {
            v56 = v55 - 4;
            if ( (int)v55 - 4 >= (signed int)itemSpriteList->max_length )
              break;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
            if ( v40->fields._size <= v56 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v57 = *((_QWORD *)&v40->fields._items->obj.klass + v55);
            if ( !v57 || !Master_WarQuestSelectionMaster )
              goto LABEL_63;
            Master_WarQuestSelectionMaster = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  *(_DWORD *)(v57 + 24),
                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v58 = this->fields.itemSpriteList;
              if ( !v58 )
                goto LABEL_63;
              if ( v56 >= v58->max_length )
              {
                v75 = sub_B2C460(Master_WarQuestSelectionMaster);
                sub_B2C400(v75, 0LL);
              }
              if ( !entity )
                goto LABEL_63;
              v59 = (UISprite_o *)*((_QWORD *)&v58->obj.klass + v55);
              longName = (int32_t)entity->fields.longName;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (System_String_o *)AtlasManager__SetItem(v59, longName, 0LL);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v55;
            if ( !itemSpriteList )
              goto LABEL_63;
          }
        }
      }
    }
  }
  p_screenTouchInfo = (BattleServantConfConponent_o *)&this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Master_WarQuestSelectionMaster = (System_String_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( Instance )
    {
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(
                           Instance,
                           (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                           0,
                           0LL);
      v65 = FortuneBonusResultAction_TypeInfo;
      if ( (BYTE3(FortuneBonusResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
        v65 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v65->static_fields->SYSTEM_UI_LAYER_ID;
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
        sub_B2C2F8(p_screenTouchInfo, Component_srcLineSprite, v68, v69, v70, v71, v72, v73);
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_B2C434(Master_WarQuestSelectionMaster, v31);
  }
LABEL_57:
  Master_WarQuestSelectionMaster = (System_String_o *)p_screenTouchInfo->klass;
  if ( !p_screenTouchInfo->klass )
    goto LABEL_63;
  Master_WarQuestSelectionMaster = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  v74 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v74 = AndroidBackKeyManager_TypeInfo;
  }
  v74->static_fields->ToastEnabled = 1;
}


void __fastcall FortuneBonusResultAction__SetupAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_418A849 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A849 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL),
          (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_B2C434(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_FortuneBonusResultAction__o *fsm; // x0

  if ( (byte_418A846 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_FortuneBonusResultAction__update__, method);
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_418A846 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2A0849C *)Method_CStateManager_FortuneBonusResultAction__update__);
}


void __fastcall FortuneBonusResultAction_StateNone___ctor(
        FortuneBonusResultAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StateNone__begin(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StateNone__end(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StateNone__update(
        FortuneBonusResultAction_StateNone_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StatePlay___ctor(
        FortuneBonusResultAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StatePlay__begin(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_B2C434(this, 0LL);
  FortuneBonusResultAction__PlayAnim(that, 0LL);
}


void __fastcall FortuneBonusResultAction_StatePlay__end(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StatePlay__update(
        FortuneBonusResultAction_StatePlay_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( this->fields.isStarted )
  {
    if ( !that )
      sub_B2C434(this, 0LL);
    if ( !FortuneBonusResultAction__IsPlayingAnim(that, 0LL) )
      FortuneBonusResultAction__SetState(that, 2, 0LL);
  }
  this->fields.isStarted = 1;
}


void __fastcall FortuneBonusResultAction_StateTouchWait___ctor(
        FortuneBonusResultAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StateTouchWait__begin(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (FortuneBonusResultAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0LL
    || (this = (FortuneBonusResultAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_B2C434(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall FortuneBonusResultAction_StateTouchWait__end(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusResultAction_StateTouchWait__update(
        FortuneBonusResultAction_StateTouchWait_o *this,
        FortuneBonusResultAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *v12; // x20
  void *screenTouchInfo; // x0
  __int64 v14; // x1
  FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  TerminalSceneComponent_o *v18; // x21
  CommonUI_o *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x22

  if ( (byte_41841DC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v4);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&CTouch_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_FortuneBonusResultAction_StateTouchWait_update__, v8);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    sub_B2C35C(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v10);
    sub_B2C35C(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v11);
    byte_41841DC = 1;
  }
  v12 = (FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B2C42C(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_32;
  v12->fields.that = that;
  p_fields = &v12->fields;
  sub_B2C2F8(&v12->fields, that);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    screenTouchInfo = AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      screenTouchInfo = AndroidBackKeyManager_TypeInfo;
    }
    **((_BYTE **)screenTouchInfo + 23) = 0;
    if ( p_fields->that )
    {
      screenTouchInfo = p_fields->that->fields.screenTouchInfo;
      if ( screenTouchInfo )
      {
        screenTouchInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)screenTouchInfo, 0LL);
        if ( screenTouchInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
          v16 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 75) & 2) != 0 )
            v16 = (_QWORD *)sub_B2C364();
          v17 = (System_Reflection_MethodBase_o *)sub_B2C340(v16, v16[3]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
            byte_4183C65 = 1;
          }
          screenTouchInfo = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            screenTouchInfo = TerminalSceneComponent_TypeInfo;
          }
          v18 = (TerminalSceneComponent_o *)**((_QWORD **)screenTouchInfo + 23);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( v18 )
          {
            TerminalSceneComponent__fadeoutBgm(v18, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v12,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
              screenTouchInfo = p_fields->that;
              if ( p_fields->that )
              {
                FortuneBonusResultAction__SetState((FortuneBonusResultAction_o *)screenTouchInfo, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B2C434(screenTouchInfo, v14);
  }
}


void __fastcall FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___ctor(
        FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct FortuneBonusResultAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B2C434(this, method);
  ActionExtensions__Call(that->fields.endAction, 0LL);
}


void __fastcall FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x0

  if ( (byte_41841DB & 1) == 0 )
  {
    sub_B2C35C(&FortuneBonusResultAction___c_TypeInfo, v1);
    byte_41841DB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(FortuneBonusResultAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall FortuneBonusResultAction___c___ctor(FortuneBonusResultAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortuneBonusResultAction___c___Setup_b__14_0(
        FortuneBonusResultAction___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall FortuneBonusResultAction___c__DisplayClass16_0___ctor(
        FortuneBonusResultAction___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortuneBonusResultAction___c__DisplayClass16_0___GetFortuneBonusDetailData_b__0(
        FortuneBonusResultAction___c__DisplayClass16_0_o *this,
        CommonUI_FortuneBonusDetailData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.idx == this->fields.index;
}