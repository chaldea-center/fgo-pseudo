void __fastcall FortuneBonusResultAction___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDD0 & 1) == 0 )
  {
    sub_B5D5C4(&FortuneBonusResultAction_TypeInfo, v1, v2, v3);
    byte_42EBDD0 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct CStateManager_FortuneBonusResultAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CStateManager_FortuneBonusResultAction__o *fsm; // x21
  FortuneBonusResultAction_StateNone_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  FortuneBonusResultAction_StatePlay_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  FortuneBonusResultAction_StateTouchWait_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_42EBDC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_FortuneBonusResultAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_FortuneBonusResultAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_FortuneBonusResultAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&FortuneBonusResultAction_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&FortuneBonusResultAction_StatePlay_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&FortuneBonusResultAction_StateTouchWait_TypeInfo, v17, v18, v19);
    byte_42EBDC8 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_FortuneBonusResultAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v21,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2BB2630 *)Method_CStateManager_FortuneBonusResultAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusResultAction__o *)v21;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    fsm = this->fields.fsm;
    v29 = (FortuneBonusResultAction_StateNone_o *)sub_B5D694(FortuneBonusResultAction_StateNone_TypeInfo);
    FortuneBonusResultAction_StateNone___ctor(v29, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_FortuneBonusResultAction__add__);
    v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v33 = (FortuneBonusResultAction_StatePlay_o *)sub_B5D694(FortuneBonusResultAction_StatePlay_TypeInfo);
    FortuneBonusResultAction_StatePlay___ctor(v33, 0LL);
    if ( !v32
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v32,
            1,
            (IState_T__o *)v33,
            (const MethodInfo_2BB26FC *)Method_CStateManager_FortuneBonusResultAction__add__),
          v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v35 = (FortuneBonusResultAction_StateTouchWait_o *)sub_B5D694(FortuneBonusResultAction_StateTouchWait_TypeInfo),
          FortuneBonusResultAction_StateTouchWait___ctor(v35, 0LL),
          !v34) )
    {
LABEL_8:
      sub_B5D69C(v30, v31);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      2,
      (IState_T__o *)v35,
      (const MethodInfo_2BB26FC *)Method_CStateManager_FortuneBonusResultAction__add__);
    FortuneBonusResultAction__SetState(this, 0, v36);
  }
}


CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultAction__GetFortuneBonusDetailData(
        FortuneBonusResultAction_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  FortuneBonusResultAction___c__DisplayClass16_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42EBDCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__, v12, v13, v14);
    sub_B5D5C4(&FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo, v15, v16, v17);
    byte_42EBDCB = 1;
  }
  v18 = (FortuneBonusResultAction___c__DisplayClass16_0_o *)sub_B5D694(FortuneBonusResultAction___c__DisplayClass16_0_TypeInfo);
  FortuneBonusResultAction___c__DisplayClass16_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.index = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_FortuneBonusResultAction___c__DisplayClass16_0__GetFortuneBonusDetailData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)details,
                                                (System_Func_T__bool__o *)v23,
                                                (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return rewards->m_Items[0];
}


bool __fastcall FortuneBonusResultAction__IsPlayingAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *v8; // x0

  if ( (byte_42EBDCE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDCE = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v8 = this->fields.anim;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Animation__IsPlaying(v8, this->fields.animationName, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v10);
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
    sub_B5D69C(0LL, v3);
  CommonEffectComponent__Init_18130176(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusResultAction__SetAnimSpeed(
        FortuneBonusResultAction_o *this,
        float speed,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *anim; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_42EBDCD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EBDCD = 1;
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
      sub_B5D69C(Item, v8);
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
  __int64 v3; // x3
  struct CStateManager_FortuneBonusResultAction__o *fsm; // x0

  if ( (byte_42EBDCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_FortuneBonusResultAction__setState__, state, (_DWORD)method, v3);
    byte_42EBDCF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_FortuneBonusResultAction__setState__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  const MethodInfo *v67; // x1
  System_String_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v69; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8
  CommonUI_FortuneBonusRewardData_o *FortuneBonusRewardData; // x0
  const MethodInfo *v72; // x2
  CommonUI_FortuneBonusDetailData_o *FortuneBonusDetailData; // x0
  UISprite_o *fortuneResultSprite; // x21
  CommonUI_FortuneBonusDetailData_o *v75; // x20
  Il2CppObject *v76; // x0
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v78; // x20
  int32_t size; // w21
  FortuneBonusResultAction_c *v80; // x0
  FortuneBonusResultAction___c_c *v81; // x0
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v84; // x22
  struct FortuneBonusResultAction___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct UISprite_array *itemSpriteList; // x8
  __int64 v93; // x24
  unsigned int v94; // w22
  __int64 v95; // x8
  struct UISprite_array *v96; // x8
  UISprite_o *v97; // x21
  int32_t longName; // w22
  BattleServantConfConponent_o *p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x19
  FortuneBonusResultAction_c *v103; // x8
  int32_t SYSTEM_UI_LAYER_ID; // w21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  AndroidBackKeyManager_c *v112; // x0
  __int64 v113; // x0
  int32_t iconId; // [xsp+Ch] [xbp-54h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42EBDCA & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)fortuneBonus, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Comparison_GiftEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Comparison_GiftEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v28, v29, v30);
    sub_B5D5C4(&FortuneBonusResultAction_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v34, v35, v36);
    sub_B5D5C4(&int_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v46, v47, v48);
    sub_B5D5C4(&NGUITools_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v55, v56, v57);
    sub_B5D5C4(&Method_FortuneBonusResultAction___c__Setup_b__14_0__, v58, v59, v60);
    sub_B5D5C4(&FortuneBonusResultAction___c_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_21504/*"omikuzi_{0}"*/, v64, v65, v66);
    byte_42EBDCA = 1;
  }
  entity = 0LL;
  this->fields.fortuneBonusData = fortuneBonus;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fortuneBonusData,
    (System_Int32_array **)fortuneBonus,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  FortuneBonusResultAction__SetupAnim(this, v67);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    goto LABEL_63;
  commonEffectComponent->fields.isEndless = 1;
  FortuneBonusRewardData = FortuneBonusResultAction__GetFortuneBonusRewardData(this, v69);
  if ( FortuneBonusRewardData )
  {
    FortuneBonusDetailData = FortuneBonusResultAction__GetFortuneBonusDetailData(
                               this,
                               FortuneBonusRewardData->fields.idx,
                               v72);
    if ( FortuneBonusDetailData )
    {
      fortuneResultSprite = this->fields.fortuneResultSprite;
      v75 = FortuneBonusDetailData;
      iconId = FortuneBonusDetailData->fields.iconId;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_21504/*"omikuzi_{0}"*/, v76, 0LL);
      if ( !fortuneResultSprite )
        goto LABEL_63;
      UISprite__set_spriteName(fortuneResultSprite, Master_WarQuestSelectionMaster, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_63;
      ListById = GiftMaster__GetListById((GiftMaster_o *)Master_WarQuestSelectionMaster, v75->fields.giftId, 0LL);
      if ( ListById )
      {
        v78 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)ListById;
        size = ListById->fields._size;
        v80 = FortuneBonusResultAction_TypeInfo;
        if ( (BYTE3(FortuneBonusResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
          v80 = FortuneBonusResultAction_TypeInfo;
        }
        if ( size >= v80->static_fields->REWARD_ITEM_COUNT )
        {
          v81 = FortuneBonusResultAction___c_TypeInfo;
          if ( (BYTE3(FortuneBonusResultAction___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FortuneBonusResultAction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FortuneBonusResultAction___c_TypeInfo);
            v81 = FortuneBonusResultAction___c_TypeInfo;
          }
          static_fields = v81->static_fields;
          _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v81);
              static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
            }
            v84 = (Il2CppObject *)static_fields->__9;
            _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GiftEntity__TypeInfo);
            System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
              _9__14_0,
              v84,
              Method_FortuneBonusResultAction___c__Setup_b__14_0__,
              (const MethodInfo_249B1FC *)Method_System_Comparison_GiftEntity___ctor__);
            v85 = FortuneBonusResultAction___c_TypeInfo->static_fields;
            v85->__9__14_0 = (struct System_Comparison_GiftEntity__o *)_9__14_0;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v85->__9__14_0,
              (System_Int32_array **)_9__14_0,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
          }
          System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
            v78,
            (System_Comparison_T__o *)_9__14_0,
            (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
          itemSpriteList = this->fields.itemSpriteList;
          if ( !itemSpriteList )
            goto LABEL_63;
          v93 = 4LL;
          while ( 1 )
          {
            v94 = v93 - 4;
            if ( (int)v93 - 4 >= (signed int)itemSpriteList->max_length )
              break;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
            if ( v78->fields._size <= v94 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v95 = *((_QWORD *)&v78->fields._items->obj.klass + v93);
            if ( !v95 || !Master_WarQuestSelectionMaster )
              goto LABEL_63;
            Master_WarQuestSelectionMaster = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  *(_DWORD *)(v95 + 24),
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
            {
              v96 = this->fields.itemSpriteList;
              if ( !v96 )
                goto LABEL_63;
              if ( v94 >= v96->max_length )
              {
                v113 = sub_B5D6C8(Master_WarQuestSelectionMaster);
                sub_B5D668(v113, 0LL);
              }
              if ( !entity )
                goto LABEL_63;
              v97 = (UISprite_o *)*((_QWORD *)&v96->obj.klass + v93);
              longName = (int32_t)entity->fields.longName;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (System_String_o *)AtlasManager__SetItem(v97, longName, 0LL);
            }
            itemSpriteList = this->fields.itemSpriteList;
            ++v93;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v103 = FortuneBonusResultAction_TypeInfo;
      if ( (BYTE3(FortuneBonusResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortuneBonusResultAction_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortuneBonusResultAction_TypeInfo);
        v103 = FortuneBonusResultAction_TypeInfo;
      }
      SYSTEM_UI_LAYER_ID = v103->static_fields->SYSTEM_UI_LAYER_ID;
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(ScreeenTouchInfo, SYSTEM_UI_LAYER_ID, 0LL);
      if ( ScreeenTouchInfo )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           ScreeenTouchInfo,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        p_screenTouchInfo->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
        sub_B5D560(p_screenTouchInfo, Component_srcLineSprite, v106, v107, v108, v109, v110, v111);
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_B5D69C(Master_WarQuestSelectionMaster, v69);
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
  v112 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v112 = AndroidBackKeyManager_TypeInfo;
  }
  v112->static_fields->ToastEnabled = 1;
}


void __fastcall FortuneBonusResultAction__SetupAnim(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_42EBDCC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDCC = 1;
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
      sub_B5D69C(Item, v6);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusResultAction__Update(FortuneBonusResultAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CStateManager_FortuneBonusResultAction__o *fsm; // x0

  if ( (byte_42EBDC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_FortuneBonusResultAction__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42EBDC9 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_FortuneBonusResultAction__update__);
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
    sub_B5D69C(this, 0LL);
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
      sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *v29; // x20
  void *screenTouchInfo; // x0
  __int64 v31; // x1
  FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  int v35; // w2
  __int64 v36; // x3
  TerminalSceneComponent_o *v37; // x21
  CommonUI_o *Instance; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v40; // x22

  if ( (byte_42E56DF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CTouch_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_FortuneBonusResultAction_StateTouchWait_update__, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v23, v24, v25);
    sub_B5D5C4(&FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v26, v27, v28);
    byte_42E56DF = 1;
  }
  v29 = (FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B5D694(FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_32;
  v29->fields.that = that;
  p_fields = &v29->fields;
  sub_B5D560(&v29->fields);
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
          v33 = Method_FortuneBonusResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_FortuneBonusResultAction_StateTouchWait_update__ + 75) & 2) != 0 )
            v33 = (_QWORD *)sub_B5D5CC(Method_FortuneBonusResultAction_StateTouchWait_update__);
          v34 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v33, v33[3]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v31, v35, v36);
            byte_42E4B1E = 1;
          }
          screenTouchInfo = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            screenTouchInfo = TerminalSceneComponent_TypeInfo;
          }
          v37 = (TerminalSceneComponent_o *)**((_QWORD **)screenTouchInfo + 23);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( v37 )
          {
            TerminalSceneComponent__fadeoutBgm(v37, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v40,
              (Il2CppObject *)v29,
              Method_FortuneBonusResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v40, 0LL);
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
    sub_B5D69C(screenTouchInfo, v31);
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.endAction, 0LL);
}


void __fastcall FortuneBonusResultAction___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FortuneBonusResultAction___c_StaticFields *static_fields; // x0

  if ( (byte_42E56DE & 1) == 0 )
  {
    sub_B5D5C4(&FortuneBonusResultAction___c_TypeInfo, v1, v2, v3);
    byte_42E56DE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FortuneBonusResultAction___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FortuneBonusResultAction___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortuneBonusResultAction___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
  return n->fields.idx == this->fields.index;
}