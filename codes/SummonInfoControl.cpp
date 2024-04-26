void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  SummonInfoControl_c *v1; // x8

  if ( (byte_4355E80 & 1) == 0 )
  {
    sub_B70694(&SummonInfoControl_TypeInfo);
    byte_4355E80 = 1;
  }
  SummonInfoControl_TypeInfo->static_fields->OPEN_TIME = 0.2;
  SummonInfoControl_TypeInfo->static_fields->NORMAL_SUMMON_BTN1_X = -150.0;
  v1 = SummonInfoControl_TypeInfo;
  SummonInfoControl_TypeInfo->static_fields->NORMAL_SUMMON_BTN2_X = 150.0;
  v1->static_fields->APD_SUMMON_BTN1_X = -240.0;
  v1->static_fields->APD_SUMMON_BTN2_X = 0.0;
  v1->static_fields->APD_SUMMON_BTN3_X = 240.0;
}


void __fastcall SummonInfoControl___ctor(SummonInfoControl_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonInfoControl__AssertCheck(SummonInfoControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonInfoControl__Awake(SummonInfoControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4355E62 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
    byte_4355E62 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v3 )
    sub_B7076C(v4, v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.freeSummon,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendPointSummon,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.stoneSummon,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.ticketSummon,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.chargeSummon,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v3,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.oneExSummon,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.summonObjInfos,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SummonInfoControl__InitMasterData(this, v12);
}


void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_4355E7D & 1) == 0 )
  {
    sub_B70694(&Method_SummonInfoControl_ClickBase__);
    byte_4355E7D = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B7069C(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, seKind, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    SummonInfoControl_ClickDelegate__Invoke(clickCallbackFunc, this->fields.requestData, 0LL);
}


void __fastcall SummonInfoControl__EndAnimation(SummonInfoControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.animationCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0LL);
}


UISprite_o *__fastcall SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  if ( (byte_4355E75 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4355E75 = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B7076C(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B7076C(this, method);
  return currentSummonData->fields.groupId;
}


bool __fastcall SummonInfoControl__GetIsFree(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.isFree;
}


int32_t __fastcall SummonInfoControl__GetSummonPrice(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.payGachaPrice;
}


int32_t __fastcall SummonInfoControl__GetUsrStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.haveStoneNum;
}


int32_t __fastcall SummonInfoControl__GetUsrTicketNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.ticketNum;
}


void __fastcall SummonInfoControl__InitMasterData(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct GachaMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  ConstantMaster_o *v10; // x0
  __int64 v11; // x1
  ConstantMaster_o *v12; // x20

  if ( (byte_4355E63 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_14930/*"USER_FREE_STONE"*/);
    sub_B70694(&StringLiteral_13644/*"TUTORIAL_GACHA_ID"*/);
    byte_4355E63 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = Master_WarQuestSelectionMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.gachaMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v10 )
    sub_B7076C(0LL, v11);
  v12 = v10;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(v10, (System_String_o *)StringLiteral_13644/*"TUTORIAL_GACHA_ID"*/, 0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v12, (System_String_o *)StringLiteral_14930/*"USER_FREE_STONE"*/, 0LL);
}


void __fastcall SummonInfoControl__InitStoneSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct UserGameEntity_o *usrData; // x8

  SummonInfoControl__InitSummonBtnDisp(this, method);
  SummonInfoControl__SetSummonButtonsCollider(this, 1, v3);
  usrData = this->fields.usrData;
  if ( !usrData )
    sub_B7076C(v4, v5);
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x20
  SummonInfoControl___c_c *v4; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__124_0; // x21
  Il2CppObject *v7; // x22
  struct SummonInfoControl___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355E66 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__);
    sub_B70694(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_B70694(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__);
    sub_B70694(&SummonInfoControl___c_TypeInfo);
    byte_4355E66 = 1;
  }
  summonObjInfos = this->fields.summonObjInfos;
  v4 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v4 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__124_0;
  if ( !_9__124_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__124_0,
      v7,
      Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__,
      (const MethodInfo_264C148 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__);
    v8 = SummonInfoControl___c_TypeInfo->static_fields;
    v8->__9__124_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__124_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__124_0,
      (System_Int32_array **)_9__124_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !summonObjInfos )
    sub_B7076C(v4, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)_9__124_0,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


void __fastcall SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  SummonInfoControl_c *v5; // x0
  TweenAlpha_o *v6; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4355E7A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SummonInfoControl_TypeInfo);
    this = (SummonInfoControl_o *)sub_B70694(&StringLiteral_6027/*"EndAnimation"*/);
    byte_4355E7A = 1;
  }
  if ( !target )
    goto LABEL_17;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  target,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v5 = SummonInfoControl_TypeInfo;
  if ( (BYTE3(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v5 = SummonInfoControl_TypeInfo;
  }
  v6 = TweenAlpha__Begin(target, v5->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v6 )
    {
      v6->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v4, 0LL);
      v6->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B70630((BattleServantConfConponent_o *)&v6->fields.eventReceiver, gameObject, v8, v9, v10, v11, v12, v13);
      v14 = (System_Int32_array **)StringLiteral_6027/*"EndAnimation"*/;
      v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6027/*"EndAnimation"*/;
      sub_B70630((BattleServantConfConponent_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
      return;
    }
LABEL_17:
    sub_B7076C(this, target);
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl___c_c *v3; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__123_0; // x20
  Il2CppObject *v6; // x21
  struct SummonInfoControl___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  struct SummonInfoControl_InfoButtonLayout_o *infoButtonLayout; // x8
  UnityEngine_Transform_o *v16; // x21
  struct SummonInfoControl_InfoButtonLayout_o *v17; // x8
  __int64 v18; // x9
  __int64 v19; // x10
  __int64 v20; // x11
  struct SummonInfoControl_InfoButtonLayout_o *v21; // x8
  System_Uri_o *gameObject; // x0
  System_Uri_o *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4355E65 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_GameObject__Invoke__);
    sub_B70694(&Method_System_Action_GameObject___ctor__);
    sub_B70694(&System_Action_GameObject__TypeInfo);
    sub_B70694(&Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__);
    sub_B70694(&SummonInfoControl___c_TypeInfo);
    byte_4355E65 = 1;
  }
  v3 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v3 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_GameObject__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__123_0,
      v6,
      Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__,
      (const MethodInfo_264C148 *)Method_System_Action_GameObject___ctor__);
    v7 = SummonInfoControl___c_TypeInfo->static_fields;
    v7->__9__123_0 = (struct System_Action_GameObject__o *)_9__123_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v7->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_activeSelf(summonDetailInfo, 0LL) )
  {
    summonDetailInfo = this->fields.summonDetailInfo;
    if ( !summonDetailInfo )
      goto LABEL_37;
    summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonDetailInfo, 0LL);
    infoButtonLayout = this->fields.infoButtonLayout;
    if ( !infoButtonLayout || !summonDetailInfo )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)summonDetailInfo,
      infoButtonLayout->fields.Center,
      0LL);
  }
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHelpInfo;
  if ( !summonDetailInfo )
    goto LABEL_37;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)summonDetailInfo,
                                                   0LL);
  if ( !this->fields.summonDetailInfo )
    goto LABEL_37;
  v16 = (UnityEngine_Transform_o *)summonDetailInfo;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(
                                                   this->fields.summonDetailInfo,
                                                   0LL);
  v17 = this->fields.infoButtonLayout;
  if ( !v17 || !v16 )
    goto LABEL_37;
  v18 = 36LL;
  if ( ((unsigned __int8)summonDetailInfo & 1) != 0 )
    v18 = 24LL;
  v19 = ((unsigned __int8)summonDetailInfo & 1) != 0 ? 20LL : 32LL;
  v20 = ((unsigned __int8)summonDetailInfo & 1) != 0 ? 16LL : 28LL;
  v24.fields.y = *(float *)((char *)&v17->klass + v19);
  v24.fields.x = *(float *)((char *)&v17->klass + v20);
  v24.fields.z = *(float *)((char *)&v17->klass + v18);
  UnityEngine_Transform__set_localPosition(v16, v24, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !summonDetailInfo )
    goto LABEL_37;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)summonDetailInfo,
                                                   0LL);
  v21 = this->fields.infoButtonLayout;
  if ( !v21 )
    goto LABEL_37;
  if ( !summonDetailInfo )
    goto LABEL_37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonDetailInfo, v21->fields.Buttom, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHelpInfo;
  if ( !summonDetailInfo
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        !_9__123_0)
    || (System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          (System_Uri_o *)summonDetailInfo,
          (const MethodInfo_264C15C *)Method_System_Action_GameObject__Invoke__),
        (summonDetailInfo = this->fields.summonDetailInfo) == 0LL)
    || (gameObject = (System_Uri_o *)UnityEngine_GameObject__get_gameObject(summonDetailInfo, 0LL),
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          gameObject,
          (const MethodInfo_264C15C *)Method_System_Action_GameObject__Invoke__),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL) )
  {
LABEL_37:
    sub_B7076C(summonDetailInfo, method);
  }
  v23 = (System_Uri_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)_9__123_0,
    v23,
    (const MethodInfo_264C15C *)Method_System_Action_GameObject__Invoke__);
}


void __fastcall SummonInfoControl__OnClickChargeGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t shopIdIdx; // w6
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // [xsp+20h] [xbp-20h]

  shopIdIdx = this->fields.shopIdIdx;
  this->fields.payGachaPrice = this->fields.price;
  SummonInfoControl__SetRequestData(this, -1, -1, -1, -1, -1, shopIdIdx, -1, -1, 0LL, 0, 0LL, v5);
  SummonInfoControl__ClickBase(this, 0, v4);
}


void __fastcall SummonInfoControl__OnClickDetail(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v20; // x20

  if ( (byte_4355E7E & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SummonInfoControl_OnClickDetail__);
    sub_B70694(&WebViewManager_TypeInfo);
    sub_B70694(&StringLiteral_15590/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_4355E7E = 1;
  }
  v5 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B7069C(Method_SummonInfoControl_OnClickDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B7076C(v7, v8);
  id = currentSummonData->fields.id;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15590/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v20 = v18;
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(v20, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  int64_t v5; // x20
  BalanceConfig_c *v6; // x8
  __int16 v7; // w9
  int v8; // w10
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t *p_AftFreeDrawNum; // x8
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // [xsp+20h] [xbp-30h]

  if ( (byte_4355E7B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4355E7B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v5 = Time;
  v6 = BalanceConfig_TypeInfo;
  v7 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v7 & 0x400) != 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
      v7 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v8 = v7 & 0x400;
  }
  else
  {
    v8 = 0;
  }
  static_fields = v6->static_fields;
  if ( v5 >= static_fields->DrawNumChangeTime )
  {
    if ( v8 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->AftFreeDrawNum;
    if ( !this )
LABEL_22:
      sub_B7076C(Time, v4);
  }
  else
  {
    if ( v8 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->BefFreeDrawNum;
    if ( !this )
      goto LABEL_22;
  }
  SummonInfoControl__SetRequestData(this, -1, -1, -1, *p_AftFreeDrawNum, -1, -1, -1, -1, 0LL, 0, 0LL, v12);
  SummonInfoControl__ClickBase(this, 0, v11);
}


void __fastcall SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct GachaRqParamData_o *requestData; // x8
  struct GachaRqParamData_o *v7; // x8
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct GachaRqParamData_o *v9; // x9
  const MethodInfo *v10; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0LL, 0, 0LL, v10);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (requestData->fields.gachaType = 5, (v7 = this->fields.requestData) == 0LL)
      || (v7->fields.gachaResourceNum = this->fields.gachaTime,
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || (v9 = this->fields.requestData) == 0LL )
    {
      sub_B7076C(v3, v4);
    }
    v9->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v5);
}


void __fastcall SummonInfoControl__OnClickMultiPayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0LL),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v5)) == 0LL) )
  {
    sub_B7076C(CurrentGachaEntity, v4);
  }
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    CurrentGachaEntity->fields.drawNum2,
    this->fields.payGachaPrice,
    2,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v7);
  SummonInfoControl__ClickBase(this, 0, v6);
}


void __fastcall SummonInfoControl__OnClickMutiGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    -1,
    this->fields.gachaTime * this->fields.price,
    -1,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v4);
  SummonInfoControl__ClickBase(this, 0, v3);
}


void __fastcall SummonInfoControl__OnClickSinglePayExGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  int32_t *currentSummonData; // x9
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  v2 = this;
  if ( (byte_4355E7C & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B70694(&Method_SummonInfoControl_OnClickSinglePayExGacha__);
    byte_4355E7C = 1;
  }
  if ( v2->fields.isPayExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_B7076C(this, method);
    SummonInfoControl__SetRequestData(
      v2,
      currentSummonData[28],
      -1,
      -1,
      currentSummonData[27],
      1,
      currentSummonData[26],
      -1,
      -1,
      0LL,
      1,
      0LL,
      v7);
    SummonInfoControl__ClickBase(v2, 0, v4);
  }
  else
  {
    v5 = Method_SummonInfoControl_OnClickSinglePayExGacha__;
    if ( (*((_BYTE *)Method_SummonInfoControl_OnClickSinglePayExGacha__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B7069C(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall SummonInfoControl__OnClickSinglePayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t shopIdIdx; // w6
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // [xsp+20h] [xbp-20h]

  shopIdIdx = this->fields.shopIdIdx;
  this->fields.payGachaPrice = this->fields.price;
  SummonInfoControl__SetRequestData(this, -1, -1, -1, -1, -1, shopIdIdx, -1, -1, 0LL, 0, 0LL, v5);
  SummonInfoControl__ClickBase(this, 0, v4);
}


void __fastcall SummonInfoControl__SetAlphaSummonBtn(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_animationCallback; // x20
  MethodInfo *v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *klass; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8

  p_animationCallback = (BattleServantConfConponent_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.animationCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  beforeSummonData = this->fields.beforeSummonData;
  if ( beforeSummonData
    && (((__int64 (__fastcall *)(struct VaildGachaInfo_o *, struct VaildGachaInfo_o *, Il2CppMethodPointer))beforeSummonData->klass->vtable._0_Equals.method)(
          beforeSummonData,
          this->fields.currentSummonData,
          beforeSummonData->klass->vtable._1_Finalize.methodPtr) & 1) == 0 )
  {
    SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, v10);
    if ( this->fields.isDispPayExSummon )
    {
      oneExSummon = this->fields.oneExSummon;
      if ( !oneExSummon )
        sub_B7076C(v18, v19);
      SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v20);
    }
  }
  else
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_B70630(p_animationCallback, 0LL, (System_String_array **)v10, v11, v12, v13, v14, v15);
    ActionExtensions__Call(klass, 0LL);
  }
}


void __fastcall SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4355E79 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355E79 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !button
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B7076C(gameObject, v7);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, onOff, 0LL);
  }
}


void __fastcall SummonInfoControl__SetButtonLocalPosX(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjInfo_o *summonInfo,
        float onePayX,
        float multiPayX,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UnityEngine_GameObject_o *v11; // x0

  if ( !summonInfo
    || (onePay = summonInfo->fields.onePay) == 0LL
    || (this = (SummonInfoControl_o *)onePay->fields.button) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionX(gameObject, onePayX, 0LL),
        (multiPay = summonInfo->fields.multiPay) == 0LL)
    || (this = (SummonInfoControl_o *)multiPay->fields.button) == 0LL )
  {
    sub_B7076C(this, summonInfo);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0LL);
}


void __fastcall SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  System_String_o *Empty; // x1
  const MethodInfo *v7; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v10; // x4
  struct SummonInfoControl_SummonObjInfo_o *v11; // x8
  struct SummonInfoControl_SummonObjParts_o *v12; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v14; // x4
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *v16; // x8
  const MethodInfo *v17; // x1
  char v18; // w20
  UILabel_o *bonusSelectLabel; // x21
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *v21; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v23; // s0
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x0
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x6
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8

  if ( (byte_4355E70 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    sub_B70694(&StringLiteral_12587/*"SUMMON_BONUS_SELECT_BTN_MSG"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_4355E70 = 1;
  }
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v3);
  SummonInfoControl__SetSummonInfo_33084916(this, v4);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_33;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_23922/*"{0}"*/, v7);
  v11 = this->fields.chargeSummon;
  if ( !v11 )
    goto LABEL_33;
  v12 = v11->fields.multiPay;
  if ( !v12 )
    goto LABEL_33;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(
    this,
    v12->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_23872/*"{0:#,0}"*/,
    v10);
  v15 = this->fields.chargeSummon;
  if ( !v15
    || (v16 = v15->fields.multiPay) == 0LL
    || (SummonInfoControl__SetElevenBonusInfoSingle(
          CurrentGachaEntity,
          this->fields.gachaTime,
          v16->fields.numImg,
          v16->fields.bonusInfo,
          v14),
        (CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v17)) == 0LL)
    || (CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0LL),
        !this->fields.bonusSelectLabel)
    || (v18 = (char)CurrentGachaEntity,
        (CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                       0LL)) == 0LL) )
  {
LABEL_33:
    sub_B7076C(CurrentGachaEntity, Empty);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v18 & 1, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v18 & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12587/*"SUMMON_BONUS_SELECT_BTN_MSG"*/, 0LL);
    Empty = (System_String_o *)CurrentGachaEntity;
    if ( !bonusSelectLabel )
      goto LABEL_33;
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !bonusSelectLabel )
      goto LABEL_33;
  }
  UILabel__set_text(bonusSelectLabel, Empty, 0LL);
  v20 = this->fields.chargeSummon;
  if ( !v20 )
    goto LABEL_33;
  v21 = v20->fields.multiPay;
  if ( !v21 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v21->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  v23 = 0.0;
  if ( (v18 & 1) != 0 )
    v23 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v23, 0LL);
  v24 = this->fields.chargeSummon;
  if ( !v24 )
    goto LABEL_33;
  v25 = v24->fields.multiPay;
  if ( !v25 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v25->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalScale_32499648(v26, 1.0, 1.0, 0LL);
  v27 = this->fields.chargeSummon;
  if ( !v27 )
    goto LABEL_33;
  v28 = v27->fields.multiPay;
  if ( !v28 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v28->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalPositionY(v29, 0.0, 0LL);
  v31 = this->fields.chargeSummon;
  if ( !v31 )
    goto LABEL_33;
  SummonInfoControl__SetSummonGiftDisp(this, v31->fields.multiPay, 0, 1, 0, 1, v30);
}


void __fastcall SummonInfoControl__SetCurrentSummonInfo(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        bool isSingle,
        const MethodInfo *method)
{
  SummonInfoControl_o *v6; // x19
  UnityEngine_Object_o *singleSummonInfo; // x22
  SummonInfoControl_o **p_fields; // x23
  struct UnityEngine_GameObject_o **p_multiSummonInfo; // x21
  UnityEngine_Object_o *v10; // x22
  struct UnityEngine_GameObject_o *multiSummonInfo; // t1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array ***v18; // x8
  System_Int32_array **v19; // x1

  v6 = this;
  if ( (byte_4355E76 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355E76 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_21;
  p_fields = (SummonInfoControl_o **)&summonObjInfo->fields;
  singleSummonInfo = (UnityEngine_Object_o *)summonObjInfo->fields.singleSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isSingle, 0LL);
  }
  multiSummonInfo = summonObjInfo->fields.multiSummonInfo;
  p_multiSummonInfo = &summonObjInfo->fields.multiSummonInfo;
  v10 = (UnityEngine_Object_o *)multiSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonInfoControl_o *)*p_multiSummonInfo;
    if ( !*p_multiSummonInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isSingle, 0LL);
  }
  v18 = isSingle ? (System_Int32_array ***)p_fields : (System_Int32_array ***)p_multiSummonInfo;
  if ( !v6 )
LABEL_21:
    sub_B7076C(this, summonObjInfo);
  v19 = *v18;
  v6->fields.currentBtnInfo = (struct UnityEngine_GameObject_o *)*v18;
  sub_B70630((BattleServantConfConponent_o *)&v6->fields.currentBtnInfo, v19, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
  SummonInfoControl_o *v10; // x22
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjParts_o **p_onePay; // x25
  UISprite_o *numImg; // x24
  Il2CppObject *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w23
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x2
  struct SummonInfoControl_SummonObjParts_o *v19; // x8
  int v20; // w23
  UISprite_o *v21; // x23
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x2
  struct SummonInfoControl_SummonObjParts_o *v27; // x8
  UISprite_o *bonusCount; // x24
  Il2CppObject *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  const MethodInfo *v32; // x3
  UISprite_o *BonusSprite; // x24
  int v34; // w27
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  const MethodInfo *v38; // x3
  UISprite_o *v39; // x23
  __int64 v40; // x2
  Il2CppObject *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  System_String_o **v44; // x23
  const MethodInfo *v45; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  int v47; // [xsp+8h] [xbp-48h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4355E6D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_17293/*"btn_txt_bonus_10times_plus1"*/);
    sub_B70694(&StringLiteral_17279/*"btn_summon_bg2"*/);
    sub_B70694(&StringLiteral_17278/*"btn_summon_bg1"*/);
    sub_B70694(&StringLiteral_17294/*"btn_txt_bonus_1plus1"*/);
    sub_B70694(&StringLiteral_17297/*"btn_txt_bonus_{0}_glow"*/);
    sub_B70694(&StringLiteral_17357/*"btn_txt_summon{0:00}"*/);
    sub_B70694(&StringLiteral_17295/*"btn_txt_bonus_count_{0}"*/);
    sub_B70694(&StringLiteral_21513/*"num1"*/);
    sub_B70694(&StringLiteral_17280/*"btn_summon_bg3"*/);
    sub_B70694(&StringLiteral_21514/*"num1_glow"*/);
    this = (SummonInfoControl_o *)sub_B70694(&StringLiteral_17296/*"btn_txt_bonus_{0}"*/);
    byte_4355E6D = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v48 = oneCount;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, ticket);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17357/*"btn_txt_summon{0:00}"*/, v14, 0LL);
  if ( !numImg )
    goto LABEL_93;
  UISprite__set_spriteName(numImg, (System_String_o *)this, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  if ( !ent )
    goto LABEL_93;
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_93;
  extraGroupId1 = ent->fields.extraGroupId1;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  if ( !extraGroupId1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( ticket )
      goto LABEL_87;
    goto LABEL_42;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_93;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, 30.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  ent->fields.extraGroupId1,
                                  0LL);
  v19 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v20 = (int)this;
  if ( (_DWORD)this != 9 )
  {
    this = (SummonInfoControl_o *)v19->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17293/*"btn_txt_bonus_10times_plus1"*/, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPosition_32497428(v25, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0LL);
    v27 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v27->fields.singleDigit;
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_96;
      if ( !*p_onePay )
        goto LABEL_93;
      this = (SummonInfoControl_o *)(*p_onePay)->fields.doubleDigits;
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_96:
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
        if ( !this )
          goto LABEL_93;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v30, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        (SummonInfoControl_o *)v31,
                        v31,
                        (System_String_o *)StringLiteral_21513/*"num1"*/,
                        v32);
        v34 = 9 - v20;
        v48 = 9 - v20;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v35);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17296/*"btn_txt_bonus_{0}"*/, v36, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0LL);
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v39 = SummonInfoControl__GetBonusSprite(
                (SummonInfoControl_o *)v37,
                v37,
                (System_String_o *)StringLiteral_21514/*"num1_glow"*/,
                v38);
        v47 = v34;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v40);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17297/*"btn_txt_bonus_{0}_glow"*/, v41, 0LL);
        if ( !v39 )
          goto LABEL_93;
        UISprite__set_spriteName(v39, (System_String_o *)this, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v42, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v43, -29.7, 0LL);
        goto LABEL_79;
      }
      if ( !*p_onePay )
        goto LABEL_93;
      this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v27 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    bonusCount = v27->fields.bonusCount;
    v48 = 9 - v20;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v26);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17295/*"btn_txt_bonus_count_{0}"*/, v29, 0LL);
    if ( !bonusCount )
      goto LABEL_93;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
      v44 = (System_String_o **)(ticket ? &StringLiteral_17280/*"btn_summon_bg3"*/ : &StringLiteral_17278/*"btn_summon_bg1"*/);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, *v44, 0LL);
        if ( *p_onePay )
        {
          this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
          if ( this )
          {
            UIButton__set_normalSprite((UIButton_o *)this, *v44, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_B7076C(this, ent);
  }
  v21 = v19->fields.numImg;
  v48 = 2;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v18);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17357/*"btn_txt_summon{0:00}"*/, v22, 0LL);
  if ( !v21 )
    goto LABEL_93;
  UISprite__set_spriteName(v21, (System_String_o *)this, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17294/*"btn_txt_bonus_1plus1"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_32497428(v23, 0.0, -35.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  UIWidget__SetDimensions((UIWidget_o *)this, 208, 38, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
  if ( !this )
    goto LABEL_93;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17279/*"btn_summon_bg2"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
  if ( !this )
    goto LABEL_93;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17279/*"btn_summon_bg2"*/, 0LL);
  if ( !ticket )
  {
LABEL_42:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
      if ( this )
      {
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_87;
        }
      }
    }
    goto LABEL_93;
  }
LABEL_87:
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v24);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v45);
}


void __fastcall SummonInfoControl__SetElevenBonusInfoSingle(
        SummonInfoControl_o *this,
        int32_t multiCount,
        UISprite_o *multiNumImg,
        UISprite_o *multiBonusInfo,
        const MethodInfo *method)
{
  int32_t v8; // w21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *gameObject; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4355E6E & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&StringLiteral_17292/*"btn_txt_bonus_10plus1"*/);
    sub_B70694(&StringLiteral_17357/*"btn_txt_summon{0:00}"*/);
    byte_4355E6E = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Min_45556056(multiCount, 11, 0LL);
  v13 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17357/*"btn_txt_summon{0:00}"*/, v10, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0LL), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0LL)) == 0LL )
  {
    sub_B7076C(gameObject, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v8 > 10, 0LL);
  if ( v8 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17292/*"btn_txt_bonus_10plus1"*/, 0LL);
}


void __fastcall SummonInfoControl__SetEnableSummonBtn(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct VaildGachaInfo_o *currentSummonData; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v13; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  bool v15; // w1

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.beforeSummonData,
    (System_Int32_array **)currentSummonData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v13);
  currentBtnInfo = this->fields.summonDetailInfo;
  if ( !currentBtnInfo
    || (UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL),
        (currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL)
    || (currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL), (oneExSummon = this->fields.oneExSummon) == 0LL)
    || (currentBtnInfo = oneExSummon->fields.singleSummonInfo) == 0LL )
  {
LABEL_11:
    sub_B7076C(currentBtnInfo, v11);
  }
  v15 = this->fields.isDispPayExSummon && isEnable;
  UnityEngine_GameObject__SetActive(currentBtnInfo, v15, 0LL);
}


void __fastcall SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonControl_c *v3; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v6; // x1
  char v7; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v9; // x22
  __int64 v10; // x2
  Il2CppObject *v11; // x23
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  int64_t Time; // x20
  BalanceConfig_c *v15; // x8
  int64_t DrawNumChangeTime; // x21
  const MethodInfo *v17; // x3
  int32_t v18; // [xsp+0h] [xbp-40h] BYREF
  int32_t v19; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t maxNum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355E67 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&SummonControl_TypeInfo);
    sub_B70694(&UserGachaMaster_TypeInfo);
    sub_B70694(&StringLiteral_6578/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_4355E67 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  v3 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v3 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v3->static_fields->FRIEND_POINT_SUMMON_ID;
  if ( (BYTE3(UserGachaMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                                             FRIEND_POINT_SUMMON_ID,
                                             &maxNum[1],
                                             maxNum,
                                             0LL);
  if ( !this->fields.freeSummonCampaignLabel
    || (v7 = (char)gameObject,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                        0LL)) == 0LL) )
  {
LABEL_36:
    sub_B7076C(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, v7 & 1, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v7 & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6578/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0LL);
    v19 = maxNum[1];
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v10);
    v18 = maxNum[0];
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44753704(v9, v11, v13, 0LL);
    v6 = (System_String_o *)gameObject;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  else
  {
    v6 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  UILabel__set_text(freeSummonCampaignLabel, v6, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v7 & 1) == 0 && !this->fields.isFree )
    goto LABEL_35;
  gameObject = this->fields.freeSummonCampaignNeedInfo;
  if ( !gameObject )
    goto LABEL_36;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.freeSummonCampaignNeedNum;
  if ( !gameObject )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_978/*"0"*/, 0LL);
  if ( this->fields.isFree )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v15 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    gameObject = this->fields.freeTxtInfoObj;
    if ( !gameObject )
      goto LABEL_36;
    DrawNumChangeTime = v15->static_fields->DrawNumChangeTime;
    UnityEngine_GameObject__SetActive(gameObject, Time < DrawNumChangeTime, 0LL);
    gameObject = this->fields.freeTenInfoObj;
    if ( !gameObject )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(gameObject, Time >= DrawNumChangeTime, 0LL);
    SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v17);
  }
  else
  {
LABEL_35:
    SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v6);
  }
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_B7076C(this, 0LL);
  UISprite__set_atlas(sprite, this->fields.gachaAtlas, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetHelpBtnDisp(SummonInfoControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *summonHelpInfo; // x0

  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo
    || (summonHelpInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(summonHelpInfo, 0LL)) == 0LL )
  {
    sub_B7076C(summonHelpInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonHelpInfo, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetOneTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        const MethodInfo *method)
{
  GachaAppendMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v10; // w21
  int32_t type; // w9
  struct VaildGachaInfo_o *v12; // x8
  int32_t idx; // w9
  struct VaildGachaInfo_o *v14; // x8
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  SummonInfoControl_o *v19; // x0
  SummonInfoControl_SummonObjInfo_o *v20; // x20
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  struct SummonInfoControl_SummonObjInfo_o *v37; // x8
  struct SummonInfoControl_SummonObjParts_o *v38; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v40; // x8
  struct SummonInfoControl_SummonObjParts_o *v41; // x8
  struct SummonInfoControl_SummonObjInfo_o *v42; // x8
  struct SummonInfoControl_SummonObjParts_o *v43; // x8
  struct SummonInfoControl_SummonObjInfo_o *v44; // x8
  struct SummonInfoControl_SummonObjParts_o *v45; // x8
  const MethodInfo *v46; // x3
  struct SummonInfoControl_SummonObjInfo_o *v47; // x8
  struct SummonInfoControl_SummonObjParts_o *v48; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v50; // x8
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  UIWidget_o *v52; // x20
  int v53; // s0
  struct SummonInfoControl_SummonObjInfo_o *v57; // x8
  struct SummonInfoControl_SummonObjParts_o *v58; // x8
  UIButtonColor_o *button; // x20
  int v60; // s0
  struct SummonInfoControl_SummonObjInfo_o *v64; // x8
  struct SummonInfoControl_SummonObjParts_o *v65; // x8
  const MethodInfo *v66; // x6
  struct SummonInfoControl_SummonObjInfo_o *v67; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355E6F & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&SummonInfoControl_TypeInfo);
    sub_B70694(&StringLiteral_17281/*"btn_summon_bg5"*/);
    sub_B70694(&StringLiteral_17339/*"btn_txt_reset"*/);
    sub_B70694(&StringLiteral_19746/*"img_bg_saintquartzuse3"*/);
    sub_B70694(&StringLiteral_22811/*"summon_txt_done"*/);
    sub_B70694(&StringLiteral_17356/*"btn_txt_summon01"*/);
    sub_B70694(&StringLiteral_17330/*"btn_txt_only_1"*/);
    sub_B70694(&StringLiteral_1031/*"1"*/);
    byte_4355E6F = 1;
  }
  appendEnt = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(
                                                            Master_WarQuestSelectionMaster,
                                                            gachaEnt,
                                                            &appendEnt,
                                                            0LL);
  currentSummonData = this->fields.currentSummonData;
  v10 = (int)Master_WarQuestSelectionMaster;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    type = appendEnt->fields.type;
    if ( !currentSummonData )
      goto LABEL_88;
  }
  else
  {
    type = 7;
    if ( !currentSummonData )
      goto LABEL_88;
  }
  currentSummonData->fields.appendPayType = type;
  v12 = this->fields.currentSummonData;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    idx = appendEnt->fields.idx;
    if ( !v12 )
      goto LABEL_88;
  }
  else
  {
    idx = 0;
    if ( !v12 )
      goto LABEL_88;
  }
  v12->fields.appendShopIdIndex = idx;
  v14 = this->fields.currentSummonData;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    drawNum = appendEnt->fields.drawNum;
    if ( !v14 )
      goto LABEL_88;
  }
  else
  {
    drawNum = 0;
    if ( !v14 )
      goto LABEL_88;
  }
  v14->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_88;
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v10 != 0, 0LL);
  this->fields.isDispPayExSummon = v10 != 0;
  this->fields.isPayExUsePossible = v10 == 2;
  v18 = 40LL;
  v19 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( isTicket )
    v18 = 48LL;
  v20 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v18);
  if ( v10 )
  {
    if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SummonInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
      v19 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
    }
    SummonInfoControl__SetButtonLocalPosX(
      v19,
      v20,
      *(float *)&v19->fields.bonusSelectLabel->fields.m_CachedPtr,
      *((float *)&v19->fields.bonusSelectLabel->fields.UnityEngine_MonoBehaviour_Fields + 1),
      v17);
    v21 = this->fields.oneExSummon;
    if ( v21 )
    {
      Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v21->fields.singleSummonInfo;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        v22 = this->fields.oneExSummon;
        if ( v22 )
        {
          single = v22->fields.single;
          if ( single )
          {
            Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)single->fields.button;
            if ( Master_WarQuestSelectionMaster )
            {
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                             0LL);
              GameObjectExtensions__SetLocalPositionX(
                gameObject,
                SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X,
                0LL);
              v25 = this->fields.oneExSummon;
              if ( v25 )
              {
                v26 = v25->fields.single;
                if ( v26 )
                {
                  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v26->fields.bonusCount;
                  if ( Master_WarQuestSelectionMaster )
                  {
                    v27 = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                            0LL);
                    GameObjectExtensions__SetLocalPosition_32497536(v27, 0.0, 34.0, 0.0, 0LL);
                    v28 = this->fields.oneExSummon;
                    if ( v28 )
                    {
                      v29 = v28->fields.single;
                      if ( v29 )
                      {
                        Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v29->fields.bonusInfo;
                        if ( Master_WarQuestSelectionMaster )
                        {
                          v30 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                  0LL);
                          GameObjectExtensions__SetLocalPositionX(v30, 1.0, 0LL);
                          v31 = this->fields.oneExSummon;
                          if ( v31 )
                          {
                            v32 = v31->fields.single;
                            if ( v32 )
                            {
                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v32->fields.bonusCount;
                              if ( Master_WarQuestSelectionMaster )
                              {
                                v33 = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                        0LL);
                                GameObjectExtensions__SetLocalScaleX(v33, 1.0, 0LL);
                                v34 = this->fields.oneExSummon;
                                if ( v34 )
                                {
                                  v35 = v34->fields.single;
                                  if ( v35 )
                                  {
                                    Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v35->fields.bonusInfo;
                                    if ( Master_WarQuestSelectionMaster )
                                    {
                                      v36 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
                                      GameObjectExtensions__SetLocalScaleX(v36, 1.0, 0LL);
                                      v37 = this->fields.oneExSummon;
                                      if ( v37 )
                                      {
                                        v38 = v37->fields.single;
                                        if ( v38 )
                                        {
                                          buttonImg = v38->fields.buttonImg;
                                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          }
                                          Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                                    buttonImg,
                                                                                                    (System_String_o *)StringLiteral_17281/*"btn_summon_bg5"*/,
                                                                                                    0LL);
                                          v40 = this->fields.oneExSummon;
                                          if ( v40 )
                                          {
                                            v41 = v40->fields.single;
                                            if ( v41 )
                                            {
                                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(v41->fields.bonusCount, (System_String_o *)StringLiteral_17339/*"btn_txt_reset"*/, 0LL);
                                              v42 = this->fields.oneExSummon;
                                              if ( v42 )
                                              {
                                                v43 = v42->fields.single;
                                                if ( v43 )
                                                {
                                                  AtlasManager__SetEventSprite(
                                                    v43->fields.bonusInfo,
                                                    (System_String_o *)StringLiteral_17330/*"btn_txt_only_1"*/,
                                                    0LL);
                                                  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(this->fields.oneExSummonSingleInfoSprite, (System_String_o *)StringLiteral_19746/*"img_bg_saintquartzuse3"*/, 0LL);
                                                  v44 = this->fields.oneExSummon;
                                                  if ( v44 )
                                                  {
                                                    v45 = v44->fields.single;
                                                    if ( v45 )
                                                    {
                                                      Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v45->fields.infoLabel;
                                                      if ( Master_WarQuestSelectionMaster )
                                                      {
                                                        UILabel__set_text(
                                                          (UILabel_o *)Master_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_1031/*"1"*/,
                                                          0LL);
                                                        v47 = this->fields.oneExSummon;
                                                        if ( v47 )
                                                        {
                                                          v48 = v47->fields.single;
                                                          if ( v48 )
                                                          {
                                                            numImg = v48->fields.numImg;
                                                            if ( this->fields.isPayExUsePossible )
                                                            {
                                                              SummonInfoControl__SetGachaSprite(
                                                                this,
                                                                numImg,
                                                                (System_String_o *)StringLiteral_17356/*"btn_txt_summon01"*/,
                                                                v46);
                                                            }
                                                            else
                                                            {
                                                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                                              }
                                                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(numImg, (System_String_o *)StringLiteral_22811/*"summon_txt_done"*/, 0LL);
                                                            }
                                                            v50 = this->fields.oneExSummon;
                                                            if ( v50 )
                                                            {
                                                              v51 = v50->fields.single;
                                                              if ( v51 )
                                                              {
                                                                v52 = (UIWidget_o *)v51->fields.buttonImg;
                                                                if ( this->fields.isPayExUsePossible )
                                                                {
                                                                  *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_white(0LL);
                                                                  if ( !v52 )
                                                                    goto LABEL_88;
                                                                }
                                                                else
                                                                {
                                                                  *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_gray(0LL);
                                                                  if ( !v52 )
                                                                    goto LABEL_88;
                                                                }
                                                                UIWidget__set_color(
                                                                  v52,
                                                                  *(UnityEngine_Color_o *)&v53,
                                                                  0LL);
                                                                v57 = this->fields.oneExSummon;
                                                                if ( v57 )
                                                                {
                                                                  v58 = v57->fields.single;
                                                                  if ( v58 )
                                                                  {
                                                                    button = (UIButtonColor_o *)v58->fields.button;
                                                                    if ( this->fields.isPayExUsePossible )
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
                                                                      if ( !button )
                                                                        goto LABEL_88;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_gray(0LL);
                                                                      if ( !button )
                                                                        goto LABEL_88;
                                                                    }
                                                                    UIButtonColor__set_defaultColor(
                                                                      button,
                                                                      *(UnityEngine_Color_o *)&v60,
                                                                      0LL);
                                                                    v64 = this->fields.oneExSummon;
                                                                    if ( v64 )
                                                                    {
                                                                      v65 = v64->fields.single;
                                                                      if ( v65 )
                                                                      {
                                                                        Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v65->fields.numImg;
                                                                        if ( Master_WarQuestSelectionMaster )
                                                                        {
                                                                          Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)((__int64 (__fastcall *)(GachaAppendMaster_o *, Il2CppMethodPointer))Master_WarQuestSelectionMaster->klass[1].vtable._5_ForForceDerived.method)(Master_WarQuestSelectionMaster, Master_WarQuestSelectionMaster->klass[1].vtable._6_preProcess.methodPtr);
                                                                          v67 = this->fields.oneExSummon;
                                                                          if ( v67 )
                                                                          {
                                                                            SummonInfoControl__SetSummonGiftDisp(
                                                                              this,
                                                                              v67->fields.single,
                                                                              0,
                                                                              0,
                                                                              1,
                                                                              0,
                                                                              v66);
                                                                            return;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    sub_B7076C(Master_WarQuestSelectionMaster, v8);
  }
  if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v19 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v19,
    v20,
    *((float *)&v19->fields.bonusSelectLabel->klass + 1),
    *(float *)&v19->fields.bonusSelectLabel->monitor,
    v17);
}


void __fastcall SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaEntity_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  ticketNum = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v3);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B7076C(CurrentGachaEntity, v5);
  v8 = CurrentGachaEntity;
  if ( currentSummonData->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v6);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v6) )
  {
    SummonInfoControl__TicketGacha(this, v8, ticketNum, v10);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v8, v9);
  }
}


void __fastcall SummonInfoControl__SetPointSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  int datalist; // w21
  int32_t Price; // w0
  int32_t v9; // w20
  int v10; // w0
  const MethodInfo *v11; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v13; // x4
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  __int64 v16; // x2
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x20
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x4
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v24; // x4
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *v26; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4355E68 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    sub_B70694(&StringLiteral_17357/*"btn_txt_summon{0:00}"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_4355E68 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_27;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)TblUserMaster__getUserData(
                                                          (TblUserMaster_o *)MasterData_WarQuestSelectionMaster,
                                                          usrData->fields.userId,
                                                          0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  datalist = (int)MasterData_WarQuestSelectionMaster->fields.datalist;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
  this->fields.price = Price;
  v9 = Price;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = System_Math__Min_45556056(datalist / v9, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v10;
  if ( v10 < 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v11);
    v14 = this->fields.friendPointSummon;
    if ( v14 )
    {
      single = v14->fields.single;
      if ( single )
      {
        SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23922/*"{0}"*/, v13);
        return;
      }
    }
LABEL_27:
    sub_B7076C(MasterData_WarQuestSelectionMaster, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v11);
  v17 = this->fields.friendPointSummon;
  if ( !v17 )
    goto LABEL_27;
  multiPay = v17->fields.multiPay;
  if ( !multiPay )
    goto LABEL_27;
  numImg = multiPay->fields.numImg;
  gachaTime = this->fields.gachaTime;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v16);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Format(
                                                          (System_String_o *)StringLiteral_17357/*"btn_txt_summon{0:00}"*/,
                                                          v20,
                                                          0LL);
  if ( !numImg )
    goto LABEL_27;
  UISprite__set_spriteName(numImg, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  v22 = this->fields.friendPointSummon;
  if ( !v22 )
    goto LABEL_27;
  onePay = v22->fields.onePay;
  if ( !onePay )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    onePay->fields.infoLabel,
    this->fields.price,
    (System_String_o *)StringLiteral_23872/*"{0:#,0}"*/,
    v21);
  v25 = this->fields.friendPointSummon;
  if ( !v25 )
    goto LABEL_27;
  v26 = v25->fields.multiPay;
  if ( !v26 )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    v26->fields.infoLabel,
    this->fields.gachaTime * this->fields.price,
    (System_String_o *)StringLiteral_23872/*"{0:#,0}"*/,
    v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  int32_t v6; // w21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v6 = price;
  if ( (byte_4355E71 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_4355E71 = 1;
  }
  if ( (v6 & 0x80000000) != 0 )
    v6 = this->fields.price;
  v12 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&price);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_B7076C(v10, v11);
  UILabel__set_text(label, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetRequestData(
        SummonInfoControl_o *this,
        int32_t gachaType,
        int32_t gachaId,
        int32_t warId,
        int32_t gachaTime,
        int32_t gachaResourceNum,
        int32_t shopIdIdx,
        int32_t ticketItemId,
        int32_t gachaSubId,
        System_Int32_array *storyAdjustIds,
        bool isAppendSummon,
        SelectBonus_array *selectBonusList,
        const MethodInfo *method)
{
  int32_t summonType; // w23
  System_Int32_array *adjustStoryGachaIds; // x19
  int32_t v20; // w26
  SummonInfoControl_o *v21; // x21
  int32_t v22; // w11
  struct VaildGachaInfo_o *v23; // x8
  struct VaildGachaInfo_o *v24; // x8
  int v25; // w25
  GachaRqParamData_o *v26; // x27
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w26
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct VaildGachaInfo_o *v35; // x8
  int32_t v36; // [xsp+30h] [xbp-60h]

  summonType = gachaType;
  adjustStoryGachaIds = storyAdjustIds;
  v20 = gachaSubId;
  v21 = this;
  if ( (byte_4355E77 & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    v33 = ticketItemId;
    this = (SummonInfoControl_o *)sub_B70694(&GachaRqParamData_TypeInfo);
    ticketItemId = v33;
    v20 = gachaSubId;
    adjustStoryGachaIds = storyAdjustIds;
    byte_4355E77 = 1;
    if ( (summonType & 0x80000000) == 0 )
    {
LABEL_3:
      if ( (gachaId & 0x80000000) == 0 )
        goto LABEL_4;
      goto LABEL_19;
    }
  }
  summonType = v21->fields.summonType;
  if ( (gachaId & 0x80000000) == 0 )
  {
LABEL_4:
    if ( (warId & 0x80000000) == 0 )
      goto LABEL_5;
    goto LABEL_21;
  }
LABEL_19:
  currentSummonData = v21->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_25;
  gachaId = currentSummonData->fields.id;
  if ( (warId & 0x80000000) == 0 )
  {
LABEL_5:
    if ( (gachaTime & 0x80000000) == 0 )
      goto LABEL_6;
LABEL_23:
    gachaTime = v21->fields.gachaTime;
    if ( (gachaResourceNum & 0x80000000) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
LABEL_21:
  v35 = v21->fields.currentSummonData;
  if ( !v35 )
    goto LABEL_25;
  warId = v35->fields.warId;
  if ( (gachaTime & 0x80000000) != 0 )
    goto LABEL_23;
LABEL_6:
  if ( (gachaResourceNum & 0x80000000) == 0 )
    goto LABEL_7;
LABEL_24:
  gachaResourceNum = v21->fields.price;
LABEL_7:
  if ( shopIdIdx < 0 )
    v22 = 1;
  else
    v22 = shopIdIdx;
  if ( (v20 & 0x80000000) != 0 )
  {
    v23 = v21->fields.currentSummonData;
    if ( !v23 )
      goto LABEL_25;
    v20 = v23->fields.gachaSubId;
  }
  v36 = v22;
  if ( !adjustStoryGachaIds )
  {
    v24 = v21->fields.currentSummonData;
    if ( v24 )
    {
      adjustStoryGachaIds = v24->fields.adjustStoryGachaIds;
      goto LABEL_16;
    }
LABEL_25:
    sub_B7076C(this, *(_QWORD *)&gachaType);
  }
LABEL_16:
  v25 = ticketItemId & ~(ticketItemId >> 31);
  v26 = (GachaRqParamData_o *)sub_B70764(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_32486544(
    v26,
    summonType,
    gachaId,
    warId,
    gachaTime,
    gachaResourceNum,
    v36,
    v25,
    v20,
    adjustStoryGachaIds,
    isAppendSummon,
    selectBonusList,
    0LL);
  v21->fields.requestData = v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&v21->fields.requestData,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_B7076C(this, method);
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


void __fastcall SummonInfoControl__SetSummonButtonsCollider(
        SummonInfoControl_o *this,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x20

  if ( (byte_4355E78 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__);
    sub_B70694(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_B70694(&Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__);
    sub_B70694(&SummonInfoControl___c__DisplayClass149_0_TypeInfo);
    byte_4355E78 = 1;
  }
  v5 = sub_B70764(SummonInfoControl___c__DisplayClass149_0_TypeInfo);
  SummonInfoControl___c__DisplayClass149_0___ctor((SummonInfoControl___c__DisplayClass149_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 24) = onOff,
        summonObjInfos = this->fields.summonObjInfos,
        v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__,
          (const MethodInfo_264C148 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__),
        !summonObjInfos) )
  {
    sub_B7076C(v6, v7);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)v15,
    (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void __fastcall SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_4355E64 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_SummonInfoControl__SetSummonDispInfo_b__121_0__);
    byte_4355E64 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v10);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL)) == 0LL )
  {
    sub_B7076C(summonDetailInfo, v11);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL);
  *(_WORD *)&this->fields.isPayExUsePossible = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v14,
    (Il2CppObject *)this,
    Method_SummonInfoControl__SetSummonDispInfo_b__121_0__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v14, 0, 0LL);
  SummonInfoControl__SetUpSummonInfos(this, v15);
  SummonInfoControl__OffSetInfoBtn(this, v16);
}


void __fastcall SummonInfoControl__SetSummonGiftDisp(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjParts_o *summonObjParts,
        bool isOnePay,
        bool isMulti,
        bool isSingle,
        bool isChargeSummon,
        const MethodInfo *method)
{
  SummonInfoControl_o *v12; // x22
  System_String_o *v13; // x20
  SummonInfoControl___c_c *v14; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__143_0; // x25
  Il2CppObject *v17; // x26
  struct SummonInfoControl___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  SummonInfoControl_o *v26; // x20
  System_String_o *v27; // x20
  SummonInfoControl___c_c *v28; // x8
  struct SummonInfoControl___c_StaticFields *v29; // x9
  System_Func_char__string__o *_9__143_1; // x23
  Il2CppObject *v31; // x24
  struct SummonInfoControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_String_o *v40; // x20
  SummonInfoControl___c_c *v41; // x8
  struct SummonInfoControl___c_StaticFields *v42; // x9
  System_Func_char__string__o *_9__143_3; // x21
  Il2CppObject *v44; // x22
  struct SummonInfoControl___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  struct SummonInfoControl_SummonObjInfo_o *freeSummon; // x8
  UnityEngine_GameObject_o *v61; // x0
  const MethodInfo *v62; // x3
  UnityEngine_Object_o *v63; // x22
  UnityEngine_GameObject_o *v64; // x0
  const MethodInfo *v65; // x3
  UnityEngine_Object_o *v66; // x21
  UnityEngine_GameObject_o *v67; // x0
  const MethodInfo *v68; // x3
  UISprite_o *v69; // x23
  _BOOL8 v70; // x0
  System_String_o *v71; // x0
  Il2CppObject *stoneSummon; // x1
  System_String_o *v73; // x0
  int v74; // w21
  bool v75; // w1
  UnityEngine_GameObject_o *v76; // x0
  const MethodInfo *v77; // x3
  UnityEngine_Component_o *v78; // x24
  UnityEngine_GameObject_o *v79; // x0
  const MethodInfo *v80; // x3
  UnityEngine_Component_o *v81; // x23
  UnityEngine_GameObject_o *v82; // x0
  const MethodInfo *v83; // x3
  UISprite_o *v84; // x22
  UnityEngine_GameObject_o *v85; // x0
  const MethodInfo *v86; // x3
  UnityEngine_GameObject_o *v87; // x0
  const MethodInfo *v88; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x20
  SummonInfoControl___c_c *v93; // x8
  struct SummonInfoControl___c_StaticFields *v94; // x9
  System_Func_char__string__o *_9__143_2; // x23
  Il2CppObject *v96; // x24
  struct SummonInfoControl___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  __int64 v109; // x0

  v12 = this;
  if ( (byte_4355E74 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B70694(&Method_System_Func_char__string___ctor__);
    sub_B70694(&System_Func_char__string__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__);
    sub_B70694(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__);
    sub_B70694(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__);
    sub_B70694(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__);
    sub_B70694(&SummonInfoControl___c_TypeInfo);
    sub_B70694(&StringLiteral_17297/*"btn_txt_bonus_{0}_glow"*/);
    sub_B70694(&StringLiteral_21515/*"num2"*/);
    sub_B70694(&StringLiteral_21513/*"num1"*/);
    sub_B70694(&StringLiteral_8355/*"Item"*/);
    sub_B70694(&StringLiteral_21514/*"num1_glow"*/);
    sub_B70694(&StringLiteral_21516/*"num2_glow"*/);
    this = (SummonInfoControl_o *)sub_B70694(&StringLiteral_17296/*"btn_txt_bonus_{0}"*/);
    byte_4355E74 = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v13 = System_Int32__ToString((int)v12 + 320, 0LL);
    v14 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v14 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__143_0 = static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__143_0 = (System_Func_char__string__o *)sub_B70764(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_0,
        v17,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__,
        (const MethodInfo_29A50A4 *)Method_System_Func_char__string___ctor__);
      v18 = SummonInfoControl___c_TypeInfo->static_fields;
      v18->__9__143_0 = _9__143_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v18->__9__143_0,
        (System_Int32_array **)_9__143_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                 (System_Func_TSource__TResult__o *)_9__143_0,
                                                                 (const MethodInfo_1CC1EF4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v25,
                                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
    v26 = this;
    if ( !isMulti )
      goto LABEL_26;
  }
  else
  {
    v26 = 0LL;
    if ( !isMulti )
      goto LABEL_26;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v27 = System_Int32__ToString((int)v12 + 324, 0LL);
    v28 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v28 = SummonInfoControl___c_TypeInfo;
    }
    v29 = v28->static_fields;
    _9__143_1 = v29->__9__143_1;
    if ( !_9__143_1 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v29 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)v29->__9;
      _9__143_1 = (System_Func_char__string__o *)sub_B70764(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_1,
        v31,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__,
        (const MethodInfo_29A50A4 *)Method_System_Func_char__string___ctor__);
      v32 = SummonInfoControl___c_TypeInfo->static_fields;
      v32->__9__143_1 = _9__143_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v32->__9__143_1,
        (System_Int32_array **)_9__143_1,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                                 (System_Func_TSource__TResult__o *)_9__143_1,
                                                                 (const MethodInfo_1CC1EF4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v39,
                                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
    v26 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v92 = System_Int32__ToString((int)v12 + 320, 0LL);
    v93 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v93 = SummonInfoControl___c_TypeInfo;
    }
    v94 = v93->static_fields;
    _9__143_2 = v94->__9__143_2;
    if ( !_9__143_2 )
    {
      if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        v94 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v96 = (Il2CppObject *)v94->__9;
      _9__143_2 = (System_Func_char__string__o *)sub_B70764(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_2,
        v96,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__,
        (const MethodInfo_29A50A4 *)Method_System_Func_char__string___ctor__);
      v97 = SummonInfoControl___c_TypeInfo->static_fields;
      v97->__9__143_2 = _9__143_2;
      sub_B70630(
        (BattleServantConfConponent_o *)&v97->__9__143_2,
        (System_Int32_array **)_9__143_2,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    v104 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v92,
                                                                  (System_Func_TSource__TResult__o *)_9__143_2,
                                                                  (const MethodInfo_1CC1EF4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v104,
                                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v26 = this;
    button = (UnityEngine_Object_o *)summonObjParts->fields.button;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(button, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.button;
      if ( !this )
        goto LABEL_151;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_151;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_151;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScale_32499584(gameObject, 0.9, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_151;
        v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v107, -6.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
        if ( !this )
          goto LABEL_151;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_151;
        this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !this )
          goto LABEL_151;
        this = (SummonInfoControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        if ( !this )
          goto LABEL_151;
        v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v108, 45.0, 0LL);
        if ( !isSingle )
          goto LABEL_58;
        goto LABEL_27;
      }
    }
  }
LABEL_26:
  if ( !isSingle )
    goto LABEL_58;
LABEL_27:
  if ( v12->fields.appendGiftNum )
  {
    v40 = System_Int32__ToString((int)v12 + 328, 0LL);
    v41 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v41 = SummonInfoControl___c_TypeInfo;
    }
    v42 = v41->static_fields;
    _9__143_3 = v42->__9__143_3;
    if ( !_9__143_3 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v42 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v42->__9;
      _9__143_3 = (System_Func_char__string__o *)sub_B70764(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_3,
        v44,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__,
        (const MethodInfo_29A50A4 *)Method_System_Func_char__string___ctor__);
      v45 = SummonInfoControl___c_TypeInfo->static_fields;
      v45->__9__143_3 = _9__143_3;
      sub_B70630(
        (BattleServantConfConponent_o *)&v45->__9__143_3,
        (System_Int32_array **)_9__143_3,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                                                 (System_Func_TSource__TResult__o *)_9__143_3,
                                                                 (const MethodInfo_1CC1EF4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v52,
                                    (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v26 = this;
    bonusCount = (UnityEngine_Object_o *)summonObjParts->fields.bonusCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bonusCount, 0LL, 0LL) )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
      if ( !this )
        goto LABEL_151;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_151;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v54, 42.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v55, -34.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v56, 0.9, 0LL);
      }
    }
    bonusInfo = (UnityEngine_Object_o *)summonObjParts->fields.bonusInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(bonusInfo, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
      if ( !this )
        goto LABEL_151;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_151;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_151;
        v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v58, -60.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_151;
        v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v59, 0.9, 0LL);
      }
    }
  }
LABEL_58:
  if ( !v26 || (freeSummon = v26->fields.freeSummon) == 0LL )
  {
    if ( !summonObjParts )
      goto LABEL_151;
    goto LABEL_82;
  }
  if ( !summonObjParts )
    goto LABEL_151;
  if ( (_DWORD)freeSummon != 1 )
  {
    this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
    if ( !this )
      goto LABEL_151;
    v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v76,
                                    v76,
                                    (System_String_o *)StringLiteral_21513/*"num1"*/,
                                    v77);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v78 = (UnityEngine_Component_o *)this;
    v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v79,
                                    v79,
                                    (System_String_o *)StringLiteral_21515/*"num2"*/,
                                    v80);
    if ( !v78 )
      goto LABEL_151;
    v81 = (UnityEngine_Component_o *)this;
    v82 = UnityEngine_Component__get_gameObject(v78, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v82,
                                    v82,
                                    (System_String_o *)StringLiteral_21514/*"num1_glow"*/,
                                    v83);
    if ( !v81 )
      goto LABEL_151;
    v84 = (UISprite_o *)this;
    v85 = UnityEngine_Component__get_gameObject(v81, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v85,
                                    v85,
                                    (System_String_o *)StringLiteral_21516/*"num2_glow"*/,
                                    v86);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v66 = (UnityEngine_Object_o *)this;
    v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    (SummonInfoControl_o *)v87,
                    v87,
                    (System_String_o *)StringLiteral_8355/*"Item"*/,
                    v88);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(BonusSprite, 7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v81, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v70 = UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
          if ( v70 )
          {
            if ( LODWORD(v26->fields.freeSummon) )
            {
              v90 = System_String__Format(
                      (System_String_o *)StringLiteral_17296/*"btn_txt_bonus_{0}"*/,
                      (Il2CppObject *)v26->fields.friendPointSummon,
                      0LL);
              UISprite__set_spriteName((UISprite_o *)v78, v90, 0LL);
              if ( LODWORD(v26->fields.freeSummon) > 1 )
              {
                v91 = System_String__Format(
                        (System_String_o *)StringLiteral_17296/*"btn_txt_bonus_{0}"*/,
                        (Il2CppObject *)v26->fields.stoneSummon,
                        0LL);
                UISprite__set_spriteName((UISprite_o *)v81, v91, 0LL);
                if ( LODWORD(v26->fields.freeSummon) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17297/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v26->fields.friendPointSummon,
                                                  0LL);
                  if ( !v84 )
                    goto LABEL_151;
                  UISprite__set_spriteName(v84, (System_String_o *)this, 0LL);
                  if ( LODWORD(v26->fields.freeSummon) > 1 )
                  {
                    stoneSummon = (Il2CppObject *)v26->fields.stoneSummon;
                    v73 = (System_String_o *)StringLiteral_17297/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_79;
                  }
                }
              }
            }
LABEL_152:
            v109 = sub_B70798(v70);
            sub_B70738(v109, 0LL);
          }
        }
      }
    }
LABEL_82:
    v74 = 0;
    goto LABEL_83;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_151;
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  (SummonInfoControl_o *)v61,
                                  v61,
                                  (System_String_o *)StringLiteral_21513/*"num1"*/,
                                  v62);
  if ( !this )
    goto LABEL_151;
  v63 = (UnityEngine_Object_o *)this;
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  (SummonInfoControl_o *)v64,
                                  v64,
                                  (System_String_o *)StringLiteral_21514/*"num1_glow"*/,
                                  v65);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_151;
  v66 = (UnityEngine_Object_o *)this;
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.singleDigit, 0LL);
  v69 = SummonInfoControl__GetBonusSprite((SummonInfoControl_o *)v67, v67, (System_String_o *)StringLiteral_8355/*"Item"*/, v68);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v69, 7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
    goto LABEL_82;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v70 = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
  if ( !v70 )
    goto LABEL_82;
  if ( !LODWORD(v26->fields.freeSummon) )
    goto LABEL_152;
  v71 = System_String__Format(
          (System_String_o *)StringLiteral_17296/*"btn_txt_bonus_{0}"*/,
          (Il2CppObject *)v26->fields.friendPointSummon,
          0LL);
  UISprite__set_spriteName((UISprite_o *)v63, v71, 0LL);
  if ( !LODWORD(v26->fields.freeSummon) )
    goto LABEL_152;
  stoneSummon = (Il2CppObject *)v26->fields.friendPointSummon;
  v73 = (System_String_o *)StringLiteral_17297/*"btn_txt_bonus_{0}_glow"*/;
LABEL_79:
  this = (SummonInfoControl_o *)System_String__Format(v73, stoneSummon, 0LL);
  if ( !v66 )
    goto LABEL_151;
  UISprite__set_spriteName((UISprite_o *)v66, (System_String_o *)this, 0LL);
  v74 = 1;
LABEL_83:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_151;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v74 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
      if ( this )
      {
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          v75 = 0;
          goto LABEL_94;
        }
      }
    }
LABEL_151:
    sub_B7076C(this, summonObjParts);
  }
  if ( !v26 )
    goto LABEL_151;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, SLODWORD(v26->fields.freeSummon) < 2, 0LL);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_151;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  v75 = SLODWORD(v26->fields.freeSummon) > 1;
LABEL_94:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v75, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v6; // x8
  char *v7; // x20
  __int64 v8; // x22
  char *v9; // x23
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w8
  __int64 v14; // x0

  if ( (byte_4355E73 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355E73 = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !Instance )
    {
LABEL_31:
      sub_B7076C(Instance, v4);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0LL);
    if ( Instance )
    {
      v6 = *((_QWORD *)Instance + 3);
      v7 = Instance;
      if ( v6 )
      {
        if ( (int)v6 >= 1 )
        {
          v8 = 0LL;
          v9 = Instance + 32;
          do
          {
            if ( (unsigned int)v8 >= (unsigned int)v6 )
            {
LABEL_32:
              v14 = sub_B70798(Instance);
              sub_B70738(v14, 0LL);
            }
            v10 = *(_QWORD *)&v9[8 * v8];
            if ( !v10 )
              goto LABEL_31;
            if ( *(_DWORD *)(v10 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v8 >= *((_DWORD *)v7 + 6) )
                goto LABEL_32;
              v11 = *(_QWORD *)&v9[8 * v8];
              if ( !v11 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v11 + 24), 0LL);
              if ( (unsigned int)v8 >= *((_DWORD *)v7 + 6) )
                goto LABEL_32;
              v12 = *(_QWORD *)&v9[8 * v8];
              if ( !v12 )
                goto LABEL_31;
              v13 = *(_DWORD *)(v12 + 20);
              switch ( v13 )
              {
                case 3:
                  if ( !Instance )
                    goto LABEL_31;
                  this->fields.appendGiftNum = *((_DWORD *)Instance + 7);
                  break;
                case 2:
                  if ( !Instance )
                    goto LABEL_31;
                  this->fields.shopId2GiftNum = *((_DWORD *)Instance + 7);
                  break;
                case 1:
                  if ( !Instance )
                    goto LABEL_31;
                  this->fields.shopId1GiftNum = *((_DWORD *)Instance + 7);
                  break;
              }
            }
            LODWORD(v6) = *((_DWORD *)v7 + 6);
            ++v8;
          }
          while ( (int)v8 < (int)v6 );
        }
      }
    }
  }
}


void __fastcall SummonInfoControl__SetSummonHistorySprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  UIAtlas_o *Component_srcLineSprite; // x0
  __int64 v8; // x1

  if ( (byte_4355E7F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355E7F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_srcLineSprite = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   bannerAtlas,
                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, imgName, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.summonHistoryButton) == 0LL) )
    {
      sub_B7076C(Component_srcLineSprite, v8);
    }
    UIButton__set_normalSprite((UIButton_o *)Component_srcLineSprite, imgName, 0LL);
  }
}


void __fastcall SummonInfoControl__SetSummonInfo(
        SummonInfoControl_o *this,
        VaildGachaInfo_o *gachaData,
        SummonInfoControl_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0LL;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_B7076C(this, 0LL);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentSummonData,
    (System_Int32_array **)gachaData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  SummonInfoControl__SetSummonGiftInfo(this, v16);
  SummonInfoControl__SetSummonDispInfo(this, v17);
}


void __fastcall SummonInfoControl__SetSummonInfo_33084916(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t flag; // w21
  int32_t PayOneTimePrice; // w22
  SummonInfoControl_SummonInfo_o *v8; // x20
  int32_t drawNum2; // w21
  int32_t PayMultiTimePrice; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355E72 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_B70694(&SummonInfoControl_SummonInfo_TypeInfo);
    byte_4355E72 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_WarQuestSelectionMaster )
LABEL_12:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         currentSummonData->fields.id,
         (const MethodInfo_21C049C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (GachaEntity_o *)entity;
    if ( !entity )
      goto LABEL_12;
    if ( entity->fields.priority < 1 )
    {
      v8 = 0LL;
    }
    else
    {
      flag = entity->fields.flag;
      PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
      v8 = (SummonInfoControl_SummonInfo_o *)sub_B70764(SummonInfoControl_SummonInfo_TypeInfo);
      SummonInfoControl_SummonInfo___ctor(v8, flag, PayOneTimePrice, 1, 0LL);
      Master_WarQuestSelectionMaster = (GachaEntity_o *)entity;
      if ( !entity )
        goto LABEL_12;
    }
    if ( Master_WarQuestSelectionMaster->fields.shopId2 >= 1 )
    {
      drawNum2 = Master_WarQuestSelectionMaster->fields.drawNum2;
      PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(Master_WarQuestSelectionMaster, 0LL);
      v8 = (SummonInfoControl_SummonInfo_o *)sub_B70764(SummonInfoControl_SummonInfo_TypeInfo);
      SummonInfoControl_SummonInfo___ctor(v8, drawNum2, PayMultiTimePrice, 2, 0LL);
    }
    if ( v8 )
    {
      this->fields.gachaTime = v8->fields.drawNum;
      this->fields.price = v8->fields.price;
      this->fields.shopIdIdx = v8->fields.shopIdIdx;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetTutorialBtnEnable(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  SummonInfoControl_o *v5; // x20
  bool v6; // w21

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon )
    goto LABEL_7;
  multiPay = stoneSummon->fields.multiPay;
  if ( !multiPay
    || (v5 = this, (this = (SummonInfoControl_o *)multiPay->fields.button) == 0LL)
    || (v6 = isEnable,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL),
        (this = (SummonInfoControl_o *)v5->fields.summonDetailBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v6, 0LL),
        (this = (SummonInfoControl_o *)v5->fields.summonHelpInfo) == 0LL) )
  {
LABEL_7:
    sub_B7076C(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetTutorialExeBtnEnable(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  SummonInfoControl_o *v5; // x20
  struct SummonInfoControl_SummonObjInfo_o *v7; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon
    || (onePay = stoneSummon->fields.onePay) == 0LL
    || (v5 = this, (this = (SummonInfoControl_o *)onePay->fields.button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL),
        (v7 = v5->fields.stoneSummon) == 0LL)
    || (single = v7->fields.single) == 0LL
    || (this = (SummonInfoControl_o *)single->fields.button) == 0LL )
  {
    sub_B7076C(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL);
}


void __fastcall SummonInfoControl__SetUpSummonInfos(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t summonType; // w8
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  const MethodInfo *v5; // x1

  summonType = this->fields.summonType;
  switch ( summonType )
  {
    case 1:
      SummonInfoControl__SetPaySummonInfo(this, method);
      break;
    case 7:
      SummonInfoControl__SetChargeSummonInfo(this, method);
      break;
    case 3:
      summonDetailInfo = this->fields.summonDetailInfo;
      if ( !summonDetailInfo )
        sub_B7076C(0LL, method);
      UnityEngine_GameObject__SetActive(summonDetailInfo, 0, 0LL);
      SummonInfoControl__SetFreeSummonInfo(this, v5);
      break;
  }
}


void __fastcall SummonInfoControl__StoneGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  GachaEntity_o *v4; // x20
  SummonInfoControl_o *v5; // x19
  const MethodInfo *v6; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v9; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x6
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  const MethodInfo *v16; // x6
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  int gachaTime; // w8
  System_String_o *v22; // x20
  Il2CppObject *v23; // x0
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v26; // x4
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  v4 = payGachaEnt;
  v5 = this;
  if ( (byte_4355E6C & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    this = (SummonInfoControl_o *)sub_B70694(&StringLiteral_17357/*"btn_txt_summon{0:00}"*/);
    byte_4355E6C = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  if ( v4->fields.shopId1 >= 1 && v4->fields.shopId2 > 0 )
  {
    SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 0, v3);
    v5->fields.gachaTime = v4->fields.drawNum1;
    this = (SummonInfoControl_o *)GachaEntity__getPayOneTimePrice(v4, 0LL);
    stoneSummon = v5->fields.stoneSummon;
    v5->fields.price = (int)this;
    v5->fields.shopIdIdx = 1;
    if ( stoneSummon )
    {
      onePay = stoneSummon->fields.onePay;
      if ( onePay )
      {
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_23922/*"{0}"*/, v6);
        v9 = v5->fields.stoneSummon;
        if ( v9 )
        {
          multiPay = v9->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v4, 0LL);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_23922/*"{0}"*/,
              v13);
            v15 = v5->fields.stoneSummon;
            if ( v15 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v15->fields.onePay, 1, 0, 0, 0, v14);
              v17 = v5->fields.stoneSummon;
              if ( v17 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v17->fields.multiPay, 0, 1, 0, 0, v16);
                SummonInfoControl__SetElevenBonusInfo(v5, v4, 0, v5->fields.stoneSummon, v5->fields.gachaTime, v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7076C(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_33084916(v5, v19);
  gachaTime = v5->fields.gachaTime;
  v22 = (System_String_o *)StringLiteral_17357/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v29 = gachaTime;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v20);
  this = (SummonInfoControl_o *)System_String__Format(v22, v23, 0LL);
  v24 = v5->fields.stoneSummon;
  if ( !v24 )
    goto LABEL_21;
  single = v24->fields.single;
  if ( !single )
    goto LABEL_21;
  payGachaEnt = (GachaEntity_o *)this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)payGachaEnt, 0LL);
  v27 = v5->fields.stoneSummon;
  if ( !v27 )
    goto LABEL_21;
  v28 = v27->fields.single;
  if ( !v28 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v28->fields.infoLabel, -1, (System_String_o *)StringLiteral_23922/*"{0}"*/, v26);
}


void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v12; // x4
  struct SummonInfoControl_SummonObjInfo_o *v13; // x8
  struct SummonInfoControl_SummonObjParts_o *v14; // x8
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x6
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  const MethodInfo *v22; // x5

  if ( (byte_4355E6B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_4355E6B = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_23922/*"{0}"*/, v9);
  v13 = this->fields.ticketSummon;
  if ( !v13 )
    goto LABEL_12;
  v14 = v13->fields.onePay;
  if ( !v14
    || (SummonInfoControl__SetPriceText(
          this,
          v14->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_23872/*"{0:#,0}"*/,
          v12),
        (v15 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v15->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_23922/*"{0}"*/, v19),
        (v21 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_B7076C(v7, v8);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v21->fields.multiPay, 0, 1, 0, 0, v20);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v22);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v9; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4355E6A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4355E6A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_15;
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserItemMaster__TryGetEntity(
                                                                  (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  usrData->fields.userId,
                                                                  currentSummonData->fields.ticketItemId,
                                                                  0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
    {
      v9 = entity->fields.num > 0;
LABEL_13:
      num = entity->fields.num;
      result = v9;
      goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  }
  v9 = 0;
  result = 0;
  num = 0;
  if ( entity )
    goto LABEL_13;
LABEL_14:
  *ticketNum = num;
  return result;
}


void __fastcall SummonInfoControl__TutorialGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  _BOOL4 v11; // w21
  __int64 v12; // x8
  const MethodInfo *v13; // x6
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  int32_t v15; // w9
  const MethodInfo *v16; // x4
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v19; // x4
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *v21; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355E69 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    byte_4355E69 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.stoneSummon, 1, v3);
  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon )
    goto LABEL_23;
  GameObjectExtensions__SetLocalPositionY(stoneSummon->fields.singleSummonInfo, 0.0, 0LL);
  haveStoneNum = this->fields.haveStoneNum;
  userFreeStone = this->fields.userFreeStone;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserServantMaster__getCountWithoutMaterial(
                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                  &servantEquipSum[1],
                                                                  servantEquipSum,
                                                                  0LL);
  if ( !payGachaEnt )
    goto LABEL_23;
  v11 = haveStoneNum >= userFreeStone || (int)Master_WarQuestSelectionMaster > 10;
  v12 = 64LL;
  if ( v11 )
    v12 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v12);
  Master_WarQuestSelectionMaster = v11
                                 ? (WarQuestSelectionMaster_o *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL)
                                 : (WarQuestSelectionMaster_o *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
  v14 = this->fields.stoneSummon;
  v15 = v11 ? 2 : 1;
  this->fields.price = (int)Master_WarQuestSelectionMaster;
  this->fields.shopIdIdx = v15;
  if ( !v14
    || (SummonInfoControl__SetSummonGiftDisp(this, v14->fields.single, 0, 1, 0, 0, v13),
        (v17 = this->fields.stoneSummon) == 0LL)
    || (single = v17->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23922/*"{0}"*/, v16),
        (v20 = this->fields.stoneSummon) == 0LL)
    || (v21 = v20->fields.single) == 0LL )
  {
LABEL_23:
    sub_B7076C(Master_WarQuestSelectionMaster, v7);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_WarQuestSelectionMaster,
    this->fields.gachaTime,
    v21->fields.numImg,
    v21->fields.bonusInfo,
    v19);
}


void __fastcall SummonInfoControl___SetSummonDispInfo_b__121_0(
        SummonInfoControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v5; // x1
  UserGameEntity_o *v6; // x8
  UserGameEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    v6 = entity;
    if ( !entity )
      sub_B7076C(SelfUserGame, v5);
    this->fields.haveStoneNum = entity->fields.stone;
    this->fields._HaveFreeStoneNum_k__BackingField = v6->fields.freeStone;
    this->fields._HaveChargeStoneNum_k__BackingField = v6->fields.chargeStone;
  }
}


GachaEntity_o *__fastcall SummonInfoControl__get_CurrentGachaEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v2 = this;
  if ( (byte_4355E61 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4355E61 = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0LL )
    sub_B7076C(this, method);
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonInfoControl__get_HaveChargeStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._HaveChargeStoneNum_k__BackingField;
}


int32_t __fastcall SummonInfoControl__get_HaveFreeStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._HaveFreeStoneNum_k__BackingField;
}


SummonInfoLayout_o *__fastcall SummonInfoControl__get_SummonInfoLayout(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  return this->fields.summonInfoLayout;
}


void __fastcall SummonInfoControl__set_HaveChargeStoneNum(
        SummonInfoControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HaveChargeStoneNum_k__BackingField = value;
}


void __fastcall SummonInfoControl__set_HaveFreeStoneNum(
        SummonInfoControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HaveFreeStoneNum_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl_ClickDelegate___ctor(
        SummonInfoControl_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall SummonInfoControl_ClickDelegate__BeginInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)paramData;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall SummonInfoControl_ClickDelegate__Invoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SummonInfoControl_ClickDelegate_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  GachaRqParamData_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  SummonInfoControl_ClickDelegate_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(GachaRqParamData_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  GachaRqParamData_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  SummonInfoControl_ClickDelegate_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SummonInfoControl_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, paramData);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = paramData->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B08590(paramData, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B70744(v15, v28);
              (*v24)(paramData, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(paramData, class_0, v9);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v14)(paramData, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(paramData, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, paramData, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v21)(
                v29,
                paramData,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v29
                                                                              + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                              + 312))(
                v29,
                paramData,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v30)(v29, paramData, v28);
    }
  }
}


void __fastcall SummonInfoControl_InfoButtonLayout___ctor(
        SummonInfoControl_InfoButtonLayout_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712LL;
  *(_OWORD *)&this->fields.Top.fields.x = xmmword_32E7700;
  this->fields.Buttom = UnityEngine_Vector3__get_zero(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl_SummonInfo___ctor(
        SummonInfoControl_SummonInfo_o *this,
        int32_t drawNum,
        int32_t price,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.drawNum = drawNum;
  this->fields.price = price;
  this->fields.shopIdIdx = shopIdIdx;
}


void __fastcall SummonInfoControl_SummonObjInfo___ctor(
        SummonInfoControl_SummonObjInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl_SummonObjParts___ctor(
        SummonInfoControl_SummonObjParts_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SummonInfoControl___c_StaticFields *static_fields; // x0

  if ( (byte_434F0E6 & 1) == 0 )
  {
    sub_B70694(&SummonInfoControl___c_TypeInfo);
    byte_434F0E6 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SummonInfoControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonInfoControl___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall SummonInfoControl___c___ctor(SummonInfoControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c___InitSummonBtnDisp_b__124_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_434F0E8 & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F0E8 = 1;
  }
  if ( !x )
    goto LABEL_17;
  singleSummonInfo = (UnityEngine_Object_o *)x->fields.singleSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0LL, 0LL) )
  {
    this = (SummonInfoControl___c_o *)x->fields.singleSummonInfo;
    if ( !this )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  multiSummonInfo = (UnityEngine_Object_o *)x->fields.multiSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(multiSummonInfo, 0LL, 0LL) )
  {
    this = (SummonInfoControl___c_o *)x->fields.multiSummonInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_17:
    sub_B7076C(this, x);
  }
}


void __fastcall SummonInfoControl___c___OffSetInfoBtn_b__123_0(
        SummonInfoControl___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_434F0E7 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    this = (SummonInfoControl___c_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F0E7 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonInfoControl___c_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      FSOffset__UpdateOffset((FSOffset_o *)Component_srcLineSprite, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(this, obj);
  }
}


System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__143_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__143_1(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__143_2(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__143_3(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass149_0___ctor(
        SummonInfoControl___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass149_0___SetSummonButtonsCollider_b__0(
        SummonInfoControl___c__DisplayClass149_0_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  SummonInfoControl___c__DisplayClass149_0_o *v5; // x19
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8

  if ( !x )
    goto LABEL_9;
  single = x->fields.single;
  if ( !single )
    goto LABEL_9;
  v5 = this;
  this = (SummonInfoControl___c__DisplayClass149_0_o *)this->fields.__4__this;
  if ( !this
    || (SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, single->fields.button, v5->fields.onOff, 0LL),
        (onePay = x->fields.onePay) == 0LL)
    || (this = (SummonInfoControl___c__DisplayClass149_0_o *)v5->fields.__4__this) == 0LL
    || (SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, onePay->fields.button, v5->fields.onOff, 0LL),
        (multiPay = x->fields.multiPay) == 0LL)
    || (this = (SummonInfoControl___c__DisplayClass149_0_o *)v5->fields.__4__this) == 0LL )
  {
LABEL_9:
    sub_B7076C(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, v5->fields.onOff, 0LL);
}