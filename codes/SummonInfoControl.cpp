void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonInfoControl_c *v2; // x8

  if ( (byte_418AE16 & 1) == 0 )
  {
    sub_B2C35C(&SummonInfoControl_TypeInfo, v1);
    byte_418AE16 = 1;
  }
  SummonInfoControl_TypeInfo->static_fields->OPEN_TIME = 0.2;
  SummonInfoControl_TypeInfo->static_fields->NORMAL_SUMMON_BTN1_X = -150.0;
  v2 = SummonInfoControl_TypeInfo;
  SummonInfoControl_TypeInfo->static_fields->NORMAL_SUMMON_BTN2_X = 150.0;
  v2->static_fields->APD_SUMMON_BTN1_X = -240.0;
  v2->static_fields->APD_SUMMON_BTN2_X = 0.0;
  v2->static_fields->APD_SUMMON_BTN3_X = 240.0;
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_418ADF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo, v4);
    byte_418ADF8 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v5 )
    sub_B2C434(v6, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.freeSummon,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendPointSummon,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.stoneSummon,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.ticketSummon,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.chargeSummon,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.oneExSummon,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.summonObjInfos,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SummonInfoControl__InitMasterData(this, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_418AE13 & 1) == 0 )
  {
    sub_B2C35C(&Method_SummonInfoControl_ClickBase__, *(_QWORD *)&seKind);
    byte_418AE13 = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B2C364(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animationCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0LL);
}


UISprite_o *__fastcall SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  if ( (byte_418AE0B & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    byte_418AE0B = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B2C434(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct GachaMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ConstantMaster_o *v14; // x0
  __int64 v15; // x1
  ConstantMaster_o *v16; // x20

  if ( (byte_418ADF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_14744/*"USER_FREE_STONE"*/, v5);
    sub_B2C35C(&StringLiteral_13460/*"TUTORIAL_GACHA_ID"*/, v6);
    byte_418ADF9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.gachaMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v14 )
    sub_B2C434(0LL, v15);
  v16 = v14;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(v14, (System_String_o *)StringLiteral_13460/*"TUTORIAL_GACHA_ID"*/, 0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v16, (System_String_o *)StringLiteral_14744/*"USER_FREE_STONE"*/, 0LL);
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
    sub_B2C434(v4, v5);
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x20
  SummonInfoControl___c_c *v8; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__124_0; // x21
  Il2CppObject *v11; // x22
  struct SummonInfoControl___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418ADFC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__, method);
    sub_B2C35C(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v4);
    sub_B2C35C(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__, v5);
    sub_B2C35C(&SummonInfoControl___c_TypeInfo, v6);
    byte_418ADFC = 1;
  }
  summonObjInfos = this->fields.summonObjInfos;
  v8 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v8 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__124_0;
  if ( !_9__124_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__124_0,
      v11,
      Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__);
    v12 = SummonInfoControl___c_TypeInfo->static_fields;
    v12->__9__124_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__124_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__124_0,
      (System_Int32_array **)_9__124_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !summonObjInfos )
    sub_B2C434(v8, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)_9__124_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


void __fastcall SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SummonInfoControl_c *v8; // x0
  TweenAlpha_o *v9; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_418AE10 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SummonInfoControl_TypeInfo, v6);
    this = (SummonInfoControl_o *)sub_B2C35C(&StringLiteral_5935/*"EndAnimation"*/, v7);
    byte_418AE10 = 1;
  }
  if ( !target )
    goto LABEL_17;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  target,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v8 = SummonInfoControl_TypeInfo;
  if ( (BYTE3(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v8 = SummonInfoControl_TypeInfo;
  }
  v9 = TweenAlpha__Begin(target, v8->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v9 )
    {
      v9->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v4, 0LL);
      v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.eventReceiver, gameObject, v11, v12, v13, v14, v15, v16);
      v17 = (System_Int32_array **)StringLiteral_5935/*"EndAnimation"*/;
      v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5935/*"EndAnimation"*/;
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
      return;
    }
LABEL_17:
    sub_B2C434(this, target);
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SummonInfoControl___c_c *v7; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__123_0; // x20
  Il2CppObject *v10; // x21
  struct SummonInfoControl___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  struct SummonInfoControl_InfoButtonLayout_o *infoButtonLayout; // x8
  UnityEngine_Transform_o *v20; // x21
  struct SummonInfoControl_InfoButtonLayout_o *v21; // x8
  __int64 v22; // x9
  __int64 v23; // x10
  __int64 v24; // x11
  struct SummonInfoControl_InfoButtonLayout_o *v25; // x8
  System_Uri_o *gameObject; // x0
  System_Uri_o *v27; // x1
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418ADFB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject__Invoke__, method);
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, v3);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v4);
    sub_B2C35C(&Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__, v5);
    sub_B2C35C(&SummonInfoControl___c_TypeInfo, v6);
    byte_418ADFB = 1;
  }
  v7 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v7 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__123_0,
      v10,
      Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
    v11 = SummonInfoControl___c_TypeInfo->static_fields;
    v11->__9__123_0 = (struct System_Action_GameObject__o *)_9__123_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v11->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  v20 = (UnityEngine_Transform_o *)summonDetailInfo;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(
                                                   this->fields.summonDetailInfo,
                                                   0LL);
  v21 = this->fields.infoButtonLayout;
  if ( !v21 || !v20 )
    goto LABEL_37;
  v22 = 36LL;
  if ( ((unsigned __int8)summonDetailInfo & 1) != 0 )
    v22 = 24LL;
  v23 = ((unsigned __int8)summonDetailInfo & 1) != 0 ? 20LL : 32LL;
  v24 = ((unsigned __int8)summonDetailInfo & 1) != 0 ? 16LL : 28LL;
  v28.fields.y = *(float *)((char *)&v21->klass + v23);
  v28.fields.x = *(float *)((char *)&v21->klass + v24);
  v28.fields.z = *(float *)((char *)&v21->klass + v22);
  UnityEngine_Transform__set_localPosition(v20, v28, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !summonDetailInfo )
    goto LABEL_37;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)summonDetailInfo,
                                                   0LL);
  v25 = this->fields.infoButtonLayout;
  if ( !v25 )
    goto LABEL_37;
  if ( !summonDetailInfo )
    goto LABEL_37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonDetailInfo, v25->fields.Buttom, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHelpInfo;
  if ( !summonDetailInfo
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        !_9__123_0)
    || (System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          (System_Uri_o *)summonDetailInfo,
          (const MethodInfo_24BBAEC *)Method_System_Action_GameObject__Invoke__),
        (summonDetailInfo = this->fields.summonDetailInfo) == 0LL)
    || (gameObject = (System_Uri_o *)UnityEngine_GameObject__get_gameObject(summonDetailInfo, 0LL),
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          gameObject,
          (const MethodInfo_24BBAEC *)Method_System_Action_GameObject__Invoke__),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL) )
  {
LABEL_37:
    sub_B2C434(summonDetailInfo, method);
  }
  v27 = (System_Uri_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)_9__123_0,
    v27,
    (const MethodInfo_24BBAEC *)Method_System_Action_GameObject__Invoke__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *v22; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v24; // x20

  if ( (byte_418AE14 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SummonInfoControl_OnClickDetail__, v6);
    sub_B2C35C(&WebViewManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_15369/*"WEB_VIEW_TITLE_SUMMON"*/, v8);
    byte_418AE14 = 1;
  }
  v9 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B2C364(Method_SummonInfoControl_OnClickDetail__);
  v10 = (System_Reflection_MethodBase_o *)sub_B2C340(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B2C434(v11, v12);
  id = currentSummonData->fields.id;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15369/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v24 = v22;
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(v24, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  __int64 v5; // x1
  int64_t v6; // x20
  BalanceConfig_c *v7; // x8
  __int16 v8; // w9
  int v9; // w10
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t *p_AftFreeDrawNum; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // [xsp+20h] [xbp-30h]

  if ( (byte_418AE11 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_418AE11 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v6 = Time;
  v7 = BalanceConfig_TypeInfo;
  v8 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v8 & 0x400) != 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
      v8 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v9 = v8 & 0x400;
  }
  else
  {
    v9 = 0;
  }
  static_fields = v7->static_fields;
  if ( v6 >= static_fields->DrawNumChangeTime )
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->AftFreeDrawNum;
    if ( !this )
LABEL_22:
      sub_B2C434(Time, v5);
  }
  else
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->BefFreeDrawNum;
    if ( !this )
      goto LABEL_22;
  }
  SummonInfoControl__SetRequestData(this, -1, -1, -1, *p_AftFreeDrawNum, -1, -1, -1, -1, 0LL, 0, 0LL, v13);
  SummonInfoControl__ClickBase(this, 0, v12);
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
      sub_B2C434(v3, v4);
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
    sub_B2C434(CurrentGachaEntity, v4);
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
  if ( (byte_418AE12 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B2C35C(&Method_SummonInfoControl_OnClickSinglePayExGacha__, method);
    byte_418AE12 = 1;
  }
  if ( v2->fields.isPayExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_B2C434(this, method);
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
      v5 = (_QWORD *)sub_B2C364(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
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
  sub_B2C2F8(
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
        sub_B2C434(v18, v19);
      SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v20);
    }
  }
  else
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_B2C2F8(p_animationCallback, 0LL, (System_String_array **)v10, v11, v12, v13, v14, v15);
    ActionExtensions__Call(klass, 0LL);
  }
}


void __fastcall SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  if ( (byte_418AE0F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, button);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418AE0F = 1;
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
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B2C434(gameObject, v8);
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
    sub_B2C434(this, summonInfo);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0LL);
}


void __fastcall SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  System_String_o *Empty; // x1
  const MethodInfo *v11; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v14; // x4
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *v16; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v18; // x4
  struct SummonInfoControl_SummonObjInfo_o *v19; // x8
  struct SummonInfoControl_SummonObjParts_o *v20; // x8
  const MethodInfo *v21; // x1
  char v22; // w20
  UILabel_o *bonusSelectLabel; // x21
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v27; // s0
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x6
  struct SummonInfoControl_SummonObjInfo_o *v35; // x8

  if ( (byte_418AE06 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&string_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v4);
    sub_B2C35C(&StringLiteral_12418/*"SUMMON_BONUS_SELECT_BTN_MSG"*/, v5);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v6);
    byte_418AE06 = 1;
  }
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v7);
  SummonInfoControl__SetSummonInfo_31103648(this, v8);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_33;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_23539/*"{0}"*/, v11);
  v15 = this->fields.chargeSummon;
  if ( !v15 )
    goto LABEL_33;
  v16 = v15->fields.multiPay;
  if ( !v16 )
    goto LABEL_33;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(
    this,
    v16->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_23489/*"{0:#,0}"*/,
    v14);
  v19 = this->fields.chargeSummon;
  if ( !v19
    || (v20 = v19->fields.multiPay) == 0LL
    || (SummonInfoControl__SetElevenBonusInfoSingle(
          CurrentGachaEntity,
          this->fields.gachaTime,
          v20->fields.numImg,
          v20->fields.bonusInfo,
          v18),
        (CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v21)) == 0LL)
    || (CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0LL),
        !this->fields.bonusSelectLabel)
    || (v22 = (char)CurrentGachaEntity,
        (CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                       0LL)) == 0LL) )
  {
LABEL_33:
    sub_B2C434(CurrentGachaEntity, Empty);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v22 & 1, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v22 & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12418/*"SUMMON_BONUS_SELECT_BTN_MSG"*/, 0LL);
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
  v24 = this->fields.chargeSummon;
  if ( !v24 )
    goto LABEL_33;
  v25 = v24->fields.multiPay;
  if ( !v25 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v25->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  v27 = 0.0;
  if ( (v22 & 1) != 0 )
    v27 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v27, 0LL);
  v28 = this->fields.chargeSummon;
  if ( !v28 )
    goto LABEL_33;
  v29 = v28->fields.multiPay;
  if ( !v29 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v29->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalScale_31328144(v30, 1.0, 1.0, 0LL);
  v31 = this->fields.chargeSummon;
  if ( !v31 )
    goto LABEL_33;
  v32 = v31->fields.multiPay;
  if ( !v32 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v32->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalPositionY(v33, 0.0, 0LL);
  v35 = this->fields.chargeSummon;
  if ( !v35 )
    goto LABEL_33;
  SummonInfoControl__SetSummonGiftDisp(this, v35->fields.multiPay, 0, 1, 0, 1, v34);
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
  if ( (byte_418AE0C & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, summonObjInfo);
    byte_418AE0C = 1;
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
    sub_B2C434(this, summonObjInfo);
  v19 = *v18;
  v6->fields.currentBtnInfo = (struct UnityEngine_GameObject_o *)*v18;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.currentBtnInfo, v19, v12, v13, v14, v15, v16, v17);
}


void __fastcall SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
  SummonInfoControl_o *v10; // x22
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
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjParts_o **p_onePay; // x25
  UISprite_o *numImg; // x24
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w23
  UnityEngine_GameObject_o *v30; // x0
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  int v32; // w23
  UISprite_o *v33; // x23
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x3
  UnityEngine_GameObject_o *v37; // x0
  struct SummonInfoControl_SummonObjParts_o *v38; // x8
  UISprite_o *bonusCount; // x24
  Il2CppObject *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  const MethodInfo *v43; // x3
  UISprite_o *BonusSprite; // x24
  int v45; // w27
  Il2CppObject *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x3
  UISprite_o *v49; // x23
  Il2CppObject *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  System_String_o **v53; // x23
  const MethodInfo *v54; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  int v56; // [xsp+8h] [xbp-48h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_418AE03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, ent);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_17037/*"btn_txt_bonus_10times_plus1"*/, v13);
    sub_B2C35C(&StringLiteral_17023/*"btn_summon_bg2"*/, v14);
    sub_B2C35C(&StringLiteral_17022/*"btn_summon_bg1"*/, v15);
    sub_B2C35C(&StringLiteral_17038/*"btn_txt_bonus_1plus1"*/, v16);
    sub_B2C35C(&StringLiteral_17041/*"btn_txt_bonus_{0}_glow"*/, v17);
    sub_B2C35C(&StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v18);
    sub_B2C35C(&StringLiteral_17039/*"btn_txt_bonus_count_{0}"*/, v19);
    sub_B2C35C(&StringLiteral_21172/*"num1"*/, v20);
    sub_B2C35C(&StringLiteral_17024/*"btn_summon_bg3"*/, v21);
    sub_B2C35C(&StringLiteral_21173/*"num1_glow"*/, v22);
    this = (SummonInfoControl_o *)sub_B2C35C(&StringLiteral_17040/*"btn_txt_bonus_{0}"*/, v23);
    byte_418AE03 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v57 = oneCount;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v27, 0LL);
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
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v30, 30.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  ent->fields.extraGroupId1,
                                  0LL);
  v31 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v32 = (int)this;
  if ( (_DWORD)this != 9 )
  {
    this = (SummonInfoControl_o *)v31->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17037/*"btn_txt_bonus_10times_plus1"*/, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPosition_31325924(v37, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0LL);
    v38 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v38->fields.singleDigit;
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
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v41, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        (SummonInfoControl_o *)v42,
                        v42,
                        (System_String_o *)StringLiteral_21172/*"num1"*/,
                        v43);
        v45 = 9 - v32;
        v57 = 9 - v32;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17040/*"btn_txt_bonus_{0}"*/, v46, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0LL);
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v49 = SummonInfoControl__GetBonusSprite(
                (SummonInfoControl_o *)v47,
                v47,
                (System_String_o *)StringLiteral_21173/*"num1_glow"*/,
                v48);
        v56 = v45;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17041/*"btn_txt_bonus_{0}_glow"*/, v50, 0LL);
        if ( !v49 )
          goto LABEL_93;
        UISprite__set_spriteName(v49, (System_String_o *)this, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v51, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v52, -29.7, 0LL);
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
      v38 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    bonusCount = v38->fields.bonusCount;
    v57 = 9 - v32;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17039/*"btn_txt_bonus_count_{0}"*/, v40, 0LL);
    if ( !bonusCount )
      goto LABEL_93;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
      v53 = (System_String_o **)(ticket ? &StringLiteral_17024/*"btn_summon_bg3"*/ : &StringLiteral_17022/*"btn_summon_bg1"*/);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, *v53, 0LL);
        if ( *p_onePay )
        {
          this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
          if ( this )
          {
            UIButton__set_normalSprite((UIButton_o *)this, *v53, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_B2C434(this, ent);
  }
  v33 = v31->fields.numImg;
  v57 = 2;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v34, 0LL);
  if ( !v33 )
    goto LABEL_93;
  UISprite__set_spriteName(v33, (System_String_o *)this, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17038/*"btn_txt_bonus_1plus1"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v35, 0.0, -35.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17023/*"btn_summon_bg2"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
  if ( !this )
    goto LABEL_93;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17023/*"btn_summon_bg2"*/, 0LL);
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
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v36);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v54);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetElevenBonusInfoSingle(
        SummonInfoControl_o *this,
        int32_t multiCount,
        UISprite_o *multiNumImg,
        UISprite_o *multiBonusInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w21
  Il2CppObject *v12; // x0
  System_String_o *gameObject; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418AE04 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&multiCount);
    sub_B2C35C(&System_Math_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_17036/*"btn_txt_bonus_10plus1"*/, v9);
    sub_B2C35C(&StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v10);
    byte_418AE04 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_44967328(multiCount, 11, 0LL);
  v15 = v11;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v12, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0LL), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0LL)) == 0LL )
  {
    sub_B2C434(gameObject, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11 > 10, 0LL);
  if ( v11 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17036/*"btn_txt_bonus_10plus1"*/, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(currentBtnInfo, v11);
  }
  v15 = this->fields.isDispPayExSummon && isEnable;
  UnityEngine_GameObject__SetActive(currentBtnInfo, v15, 0LL);
}


void __fastcall SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SummonControl_c *v11; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v14; // x1
  char v15; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  int64_t Time; // x20
  BalanceConfig_c *v21; // x8
  int64_t DrawNumChangeTime; // x21
  const MethodInfo *v23; // x3
  int32_t v24; // [xsp+0h] [xbp-40h] BYREF
  int32_t v25; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t maxNum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418ADFD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&SummonControl_TypeInfo, v6);
    sub_B2C35C(&UserGachaMaster_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_6486/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v10);
    byte_418ADFD = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  v11 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v11 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v11->static_fields->FRIEND_POINT_SUMMON_ID;
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
    || (v15 = (char)gameObject,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                        0LL)) == 0LL) )
  {
LABEL_36:
    sub_B2C434(gameObject, v14);
  }
  UnityEngine_GameObject__SetActive(gameObject, v15 & 1, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v15 & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6486/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0LL);
    v25 = maxNum[1];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v24 = maxNum[0];
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v17, v18, v19, 0LL);
    v14 = (System_String_o *)gameObject;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  UILabel__set_text(freeSummonCampaignLabel, v14, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v15 & 1) == 0 && !this->fields.isFree )
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
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_953/*"0"*/, 0LL);
  if ( this->fields.isFree )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v21 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    gameObject = this->fields.freeTxtInfoObj;
    if ( !gameObject )
      goto LABEL_36;
    DrawNumChangeTime = v21->static_fields->DrawNumChangeTime;
    UnityEngine_GameObject__SetActive(gameObject, Time < DrawNumChangeTime, 0LL);
    gameObject = this->fields.freeTenInfoObj;
    if ( !gameObject )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(gameObject, Time >= DrawNumChangeTime, 0LL);
    SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v23);
  }
  else
  {
LABEL_35:
    SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v14);
  }
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(summonHelpInfo, isDisp);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  GachaAppendMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v20; // w21
  int32_t type; // w9
  struct VaildGachaInfo_o *v22; // x8
  int32_t idx; // w9
  struct VaildGachaInfo_o *v24; // x8
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  SummonInfoControl_o *v29; // x0
  SummonInfoControl_SummonObjInfo_o *v30; // x20
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v35; // x8
  struct SummonInfoControl_SummonObjParts_o *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8
  struct SummonInfoControl_SummonObjParts_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  struct SummonInfoControl_SummonObjInfo_o *v44; // x8
  struct SummonInfoControl_SummonObjParts_o *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  struct SummonInfoControl_SummonObjInfo_o *v47; // x8
  struct SummonInfoControl_SummonObjParts_o *v48; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v50; // x8
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  struct SummonInfoControl_SummonObjInfo_o *v52; // x8
  struct SummonInfoControl_SummonObjParts_o *v53; // x8
  struct SummonInfoControl_SummonObjInfo_o *v54; // x8
  struct SummonInfoControl_SummonObjParts_o *v55; // x8
  const MethodInfo *v56; // x3
  struct SummonInfoControl_SummonObjInfo_o *v57; // x8
  struct SummonInfoControl_SummonObjParts_o *v58; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v60; // x8
  struct SummonInfoControl_SummonObjParts_o *v61; // x8
  UIWidget_o *v62; // x20
  int v63; // s0
  struct SummonInfoControl_SummonObjInfo_o *v67; // x8
  struct SummonInfoControl_SummonObjParts_o *v68; // x8
  UIButtonColor_o *button; // x20
  int v70; // s0
  struct SummonInfoControl_SummonObjInfo_o *v74; // x8
  struct SummonInfoControl_SummonObjParts_o *v75; // x8
  const MethodInfo *v76; // x6
  struct SummonInfoControl_SummonObjInfo_o *v77; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AE05 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, gachaEnt);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaAppendMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&SummonInfoControl_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_17025/*"btn_summon_bg5"*/, v10);
    sub_B2C35C(&StringLiteral_17083/*"btn_txt_reset"*/, v11);
    sub_B2C35C(&StringLiteral_19442/*"img_bg_saintquartzuse3"*/, v12);
    sub_B2C35C(&StringLiteral_22436/*"summon_txt_done"*/, v13);
    sub_B2C35C(&StringLiteral_17099/*"btn_txt_summon01"*/, v14);
    sub_B2C35C(&StringLiteral_17074/*"btn_txt_only_1"*/, v15);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v16);
    byte_418AE05 = 1;
  }
  appendEnt = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(
                                                            Master_WarQuestSelectionMaster,
                                                            gachaEnt,
                                                            &appendEnt,
                                                            0LL);
  currentSummonData = this->fields.currentSummonData;
  v20 = (int)Master_WarQuestSelectionMaster;
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
  v22 = this->fields.currentSummonData;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    idx = appendEnt->fields.idx;
    if ( !v22 )
      goto LABEL_88;
  }
  else
  {
    idx = 0;
    if ( !v22 )
      goto LABEL_88;
  }
  v22->fields.appendShopIdIndex = idx;
  v24 = this->fields.currentSummonData;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    drawNum = appendEnt->fields.drawNum;
    if ( !v24 )
      goto LABEL_88;
  }
  else
  {
    drawNum = 0;
    if ( !v24 )
      goto LABEL_88;
  }
  v24->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_88;
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v20 != 0, 0LL);
  this->fields.isDispPayExSummon = v20 != 0;
  this->fields.isPayExUsePossible = v20 == 2;
  v28 = 40LL;
  v29 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( isTicket )
    v28 = 48LL;
  v30 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v28);
  if ( v20 )
  {
    if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SummonInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
      v29 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
    }
    SummonInfoControl__SetButtonLocalPosX(
      v29,
      v30,
      *(float *)&v29->fields.bonusSelectLabel->fields.m_CachedPtr,
      *((float *)&v29->fields.bonusSelectLabel->fields.UnityEngine_MonoBehaviour_Fields + 1),
      v27);
    v31 = this->fields.oneExSummon;
    if ( v31 )
    {
      Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v31->fields.singleSummonInfo;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        v32 = this->fields.oneExSummon;
        if ( v32 )
        {
          single = v32->fields.single;
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
              v35 = this->fields.oneExSummon;
              if ( v35 )
              {
                v36 = v35->fields.single;
                if ( v36 )
                {
                  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v36->fields.bonusCount;
                  if ( Master_WarQuestSelectionMaster )
                  {
                    v37 = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                            0LL);
                    GameObjectExtensions__SetLocalPosition_31326032(v37, 0.0, 34.0, 0.0, 0LL);
                    v38 = this->fields.oneExSummon;
                    if ( v38 )
                    {
                      v39 = v38->fields.single;
                      if ( v39 )
                      {
                        Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v39->fields.bonusInfo;
                        if ( Master_WarQuestSelectionMaster )
                        {
                          v40 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                  0LL);
                          GameObjectExtensions__SetLocalPositionX(v40, 1.0, 0LL);
                          v41 = this->fields.oneExSummon;
                          if ( v41 )
                          {
                            v42 = v41->fields.single;
                            if ( v42 )
                            {
                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v42->fields.bonusCount;
                              if ( Master_WarQuestSelectionMaster )
                              {
                                v43 = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                        0LL);
                                GameObjectExtensions__SetLocalScaleX(v43, 1.0, 0LL);
                                v44 = this->fields.oneExSummon;
                                if ( v44 )
                                {
                                  v45 = v44->fields.single;
                                  if ( v45 )
                                  {
                                    Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v45->fields.bonusInfo;
                                    if ( Master_WarQuestSelectionMaster )
                                    {
                                      v46 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
                                      GameObjectExtensions__SetLocalScaleX(v46, 1.0, 0LL);
                                      v47 = this->fields.oneExSummon;
                                      if ( v47 )
                                      {
                                        v48 = v47->fields.single;
                                        if ( v48 )
                                        {
                                          buttonImg = v48->fields.buttonImg;
                                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          }
                                          Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                                    buttonImg,
                                                                                                    (System_String_o *)StringLiteral_17025/*"btn_summon_bg5"*/,
                                                                                                    0LL);
                                          v50 = this->fields.oneExSummon;
                                          if ( v50 )
                                          {
                                            v51 = v50->fields.single;
                                            if ( v51 )
                                            {
                                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(v51->fields.bonusCount, (System_String_o *)StringLiteral_17083/*"btn_txt_reset"*/, 0LL);
                                              v52 = this->fields.oneExSummon;
                                              if ( v52 )
                                              {
                                                v53 = v52->fields.single;
                                                if ( v53 )
                                                {
                                                  AtlasManager__SetEventSprite(
                                                    v53->fields.bonusInfo,
                                                    (System_String_o *)StringLiteral_17074/*"btn_txt_only_1"*/,
                                                    0LL);
                                                  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(this->fields.oneExSummonSingleInfoSprite, (System_String_o *)StringLiteral_19442/*"img_bg_saintquartzuse3"*/, 0LL);
                                                  v54 = this->fields.oneExSummon;
                                                  if ( v54 )
                                                  {
                                                    v55 = v54->fields.single;
                                                    if ( v55 )
                                                    {
                                                      Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v55->fields.infoLabel;
                                                      if ( Master_WarQuestSelectionMaster )
                                                      {
                                                        UILabel__set_text(
                                                          (UILabel_o *)Master_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_1006/*"1"*/,
                                                          0LL);
                                                        v57 = this->fields.oneExSummon;
                                                        if ( v57 )
                                                        {
                                                          v58 = v57->fields.single;
                                                          if ( v58 )
                                                          {
                                                            numImg = v58->fields.numImg;
                                                            if ( this->fields.isPayExUsePossible )
                                                            {
                                                              SummonInfoControl__SetGachaSprite(
                                                                this,
                                                                numImg,
                                                                (System_String_o *)StringLiteral_17099/*"btn_txt_summon01"*/,
                                                                v56);
                                                            }
                                                            else
                                                            {
                                                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                                              }
                                                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(numImg, (System_String_o *)StringLiteral_22436/*"summon_txt_done"*/, 0LL);
                                                            }
                                                            v60 = this->fields.oneExSummon;
                                                            if ( v60 )
                                                            {
                                                              v61 = v60->fields.single;
                                                              if ( v61 )
                                                              {
                                                                v62 = (UIWidget_o *)v61->fields.buttonImg;
                                                                if ( this->fields.isPayExUsePossible )
                                                                {
                                                                  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
                                                                  if ( !v62 )
                                                                    goto LABEL_88;
                                                                }
                                                                else
                                                                {
                                                                  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_gray(0LL);
                                                                  if ( !v62 )
                                                                    goto LABEL_88;
                                                                }
                                                                UIWidget__set_color(
                                                                  v62,
                                                                  *(UnityEngine_Color_o *)&v63,
                                                                  0LL);
                                                                v67 = this->fields.oneExSummon;
                                                                if ( v67 )
                                                                {
                                                                  v68 = v67->fields.single;
                                                                  if ( v68 )
                                                                  {
                                                                    button = (UIButtonColor_o *)v68->fields.button;
                                                                    if ( this->fields.isPayExUsePossible )
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
                                                                      if ( !button )
                                                                        goto LABEL_88;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_gray(0LL);
                                                                      if ( !button )
                                                                        goto LABEL_88;
                                                                    }
                                                                    UIButtonColor__set_defaultColor(
                                                                      button,
                                                                      *(UnityEngine_Color_o *)&v70,
                                                                      0LL);
                                                                    v74 = this->fields.oneExSummon;
                                                                    if ( v74 )
                                                                    {
                                                                      v75 = v74->fields.single;
                                                                      if ( v75 )
                                                                      {
                                                                        Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v75->fields.numImg;
                                                                        if ( Master_WarQuestSelectionMaster )
                                                                        {
                                                                          Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)((__int64 (__fastcall *)(GachaAppendMaster_o *, Il2CppMethodPointer))Master_WarQuestSelectionMaster->klass[1].vtable._5_ForForceDerived.method)(Master_WarQuestSelectionMaster, Master_WarQuestSelectionMaster->klass[1].vtable._6_preProcess.methodPtr);
                                                                          v77 = this->fields.oneExSummon;
                                                                          if ( v77 )
                                                                          {
                                                                            SummonInfoControl__SetSummonGiftDisp(
                                                                              this,
                                                                              v77->fields.single,
                                                                              0,
                                                                              0,
                                                                              1,
                                                                              0,
                                                                              v76);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v18);
  }
  if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v29 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v29,
    v30,
    *((float *)&v29->fields.bonusSelectLabel->klass + 1),
    *(float *)&v29->fields.bonusSelectLabel->monitor,
    v27);
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
    sub_B2C434(CurrentGachaEntity, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  int datalist; // w21
  int32_t Price; // w0
  int32_t v15; // w20
  int v16; // w0
  const MethodInfo *v17; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v19; // x4
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x20
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x4
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v29; // x4
  struct SummonInfoControl_SummonObjInfo_o *v30; // x8
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418ADFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&System_Math_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v6);
    sub_B2C35C(&StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v7);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v8);
    byte_418ADFE = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(v10);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v10 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v15 = Price;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Min_44967328(datalist / v15, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v16;
  if ( v16 < 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v17);
    v20 = this->fields.friendPointSummon;
    if ( v20 )
    {
      single = v20->fields.single;
      if ( single )
      {
        SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23539/*"{0}"*/, v19);
        return;
      }
    }
LABEL_27:
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v17);
  v22 = this->fields.friendPointSummon;
  if ( !v22 )
    goto LABEL_27;
  multiPay = v22->fields.multiPay;
  if ( !multiPay )
    goto LABEL_27;
  numImg = multiPay->fields.numImg;
  gachaTime = this->fields.gachaTime;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Format(
                                                          (System_String_o *)StringLiteral_17100/*"btn_txt_summon{0:00}"*/,
                                                          v25,
                                                          0LL);
  if ( !numImg )
    goto LABEL_27;
  UISprite__set_spriteName(numImg, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  v27 = this->fields.friendPointSummon;
  if ( !v27 )
    goto LABEL_27;
  onePay = v27->fields.onePay;
  if ( !onePay )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    onePay->fields.infoLabel,
    this->fields.price,
    (System_String_o *)StringLiteral_23489/*"{0:#,0}"*/,
    v26);
  v30 = this->fields.friendPointSummon;
  if ( !v30 )
    goto LABEL_27;
  v31 = v30->fields.multiPay;
  if ( !v31 )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    v31->fields.infoLabel,
    this->fields.gachaTime * this->fields.price,
    (System_String_o *)StringLiteral_23489/*"{0:#,0}"*/,
    v29);
}


void __fastcall SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418AE07 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, label);
    byte_418AE07 = 1;
  }
  if ( (price & 0x80000000) != 0 )
    price = this->fields.price;
  v12 = price;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_B2C434(v10, v11);
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
  if ( (byte_418AE0D & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    v33 = ticketItemId;
    this = (SummonInfoControl_o *)sub_B2C35C(&GachaRqParamData_TypeInfo, *(_QWORD *)&gachaType);
    ticketItemId = v33;
    v20 = gachaSubId;
    adjustStoryGachaIds = storyAdjustIds;
    byte_418AE0D = 1;
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
    sub_B2C434(this, *(_QWORD *)&gachaType);
  }
LABEL_16:
  v25 = ticketItemId & ~(ticketItemId >> 31);
  v26 = (GachaRqParamData_o *)sub_B2C42C(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_31316164(
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
  sub_B2C2F8(
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
    sub_B2C434(this, method);
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetSummonButtonsCollider(
        SummonInfoControl_o *this,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x20

  if ( (byte_418AE0E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__, onOff);
    sub_B2C35C(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v6);
    sub_B2C35C(&Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__, v7);
    sub_B2C35C(&SummonInfoControl___c__DisplayClass149_0_TypeInfo, v8);
    byte_418AE0E = 1;
  }
  v9 = sub_B2C42C(SummonInfoControl___c__DisplayClass149_0_TypeInfo);
  SummonInfoControl___c__DisplayClass149_0___ctor((SummonInfoControl___c__DisplayClass149_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17),
        *(_BYTE *)(v9 + 24) = onOff,
        summonObjInfos = this->fields.summonObjInfos,
        v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__),
        !summonObjInfos) )
  {
    sub_B2C434(v10, v11);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)v19,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void __fastcall SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v16; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_418ADFA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_SummonInfoControl__SetSummonDispInfo_b__121_0__, v4);
    byte_418ADFA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v12);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL)) == 0LL )
  {
    sub_B2C434(summonDetailInfo, v13);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL);
  *(_WORD *)&this->fields.isPayExUsePossible = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v16,
    (Il2CppObject *)this,
    Method_SummonInfoControl__SetSummonDispInfo_b__121_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v16, 0, 0LL);
  SummonInfoControl__SetUpSummonInfos(this, v17);
  SummonInfoControl__OffSetInfoBtn(this, v18);
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
  __int64 v29; // x1
  System_String_o *v30; // x20
  SummonInfoControl___c_c *v31; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__143_0; // x25
  Il2CppObject *v34; // x26
  struct SummonInfoControl___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  SummonInfoControl_o *v43; // x20
  System_String_o *v44; // x20
  SummonInfoControl___c_c *v45; // x8
  struct SummonInfoControl___c_StaticFields *v46; // x9
  System_Func_char__string__o *_9__143_1; // x23
  Il2CppObject *v48; // x24
  struct SummonInfoControl___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_String_o *v57; // x20
  SummonInfoControl___c_c *v58; // x8
  struct SummonInfoControl___c_StaticFields *v59; // x9
  System_Func_char__string__o *_9__143_3; // x21
  Il2CppObject *v61; // x22
  struct SummonInfoControl___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  struct SummonInfoControl_SummonObjInfo_o *freeSummon; // x8
  UnityEngine_GameObject_o *v78; // x0
  const MethodInfo *v79; // x3
  UnityEngine_Object_o *v80; // x22
  UnityEngine_GameObject_o *v81; // x0
  const MethodInfo *v82; // x3
  UnityEngine_Object_o *v83; // x21
  UnityEngine_GameObject_o *v84; // x0
  const MethodInfo *v85; // x3
  UISprite_o *v86; // x23
  _BOOL8 v87; // x0
  System_String_o *v88; // x0
  Il2CppObject *stoneSummon; // x1
  System_String_o *v90; // x0
  int v91; // w21
  bool v92; // w1
  UnityEngine_GameObject_o *v93; // x0
  const MethodInfo *v94; // x3
  UnityEngine_Component_o *v95; // x24
  UnityEngine_GameObject_o *v96; // x0
  const MethodInfo *v97; // x3
  UnityEngine_Component_o *v98; // x23
  UnityEngine_GameObject_o *v99; // x0
  const MethodInfo *v100; // x3
  UISprite_o *v101; // x22
  UnityEngine_GameObject_o *v102; // x0
  const MethodInfo *v103; // x3
  UnityEngine_GameObject_o *v104; // x0
  const MethodInfo *v105; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  System_String_o *v109; // x20
  SummonInfoControl___c_c *v110; // x8
  struct SummonInfoControl___c_StaticFields *v111; // x9
  System_Func_char__string__o *_9__143_2; // x23
  Il2CppObject *v113; // x24
  struct SummonInfoControl___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  __int64 v126; // x0

  v12 = this;
  if ( (byte_418AE0A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, summonObjParts);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_char__string___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v14);
    sub_B2C35C(&Method_System_Func_char__string___ctor__, v15);
    sub_B2C35C(&System_Func_char__string__TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__, v18);
    sub_B2C35C(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__, v19);
    sub_B2C35C(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__, v20);
    sub_B2C35C(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__, v21);
    sub_B2C35C(&SummonInfoControl___c_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_17041/*"btn_txt_bonus_{0}_glow"*/, v23);
    sub_B2C35C(&StringLiteral_21174/*"num2"*/, v24);
    sub_B2C35C(&StringLiteral_21172/*"num1"*/, v25);
    sub_B2C35C(&StringLiteral_8256/*"Item"*/, v26);
    sub_B2C35C(&StringLiteral_21173/*"num1_glow"*/, v27);
    sub_B2C35C(&StringLiteral_21175/*"num2_glow"*/, v28);
    this = (SummonInfoControl_o *)sub_B2C35C(&StringLiteral_17040/*"btn_txt_bonus_{0}"*/, v29);
    byte_418AE0A = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v30 = System_Int32__ToString((int)v12 + 320, 0LL);
    v31 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v31 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__143_0 = static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__143_0 = (System_Func_char__string__o *)sub_B2C42C(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_0,
        v34,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__,
        (const MethodInfo_270B9E8 *)Method_System_Func_char__string___ctor__);
      v35 = SummonInfoControl___c_TypeInfo->static_fields;
      v35->__9__143_0 = _9__143_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v35->__9__143_0,
        (System_Int32_array **)_9__143_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                 (System_Func_TSource__TResult__o *)_9__143_0,
                                                                 (const MethodInfo_1A94FDC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v42,
                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
    v43 = this;
    if ( !isMulti )
      goto LABEL_26;
  }
  else
  {
    v43 = 0LL;
    if ( !isMulti )
      goto LABEL_26;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v44 = System_Int32__ToString((int)v12 + 324, 0LL);
    v45 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v45 = SummonInfoControl___c_TypeInfo;
    }
    v46 = v45->static_fields;
    _9__143_1 = v46->__9__143_1;
    if ( !_9__143_1 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v46 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)v46->__9;
      _9__143_1 = (System_Func_char__string__o *)sub_B2C42C(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_1,
        v48,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__,
        (const MethodInfo_270B9E8 *)Method_System_Func_char__string___ctor__);
      v49 = SummonInfoControl___c_TypeInfo->static_fields;
      v49->__9__143_1 = _9__143_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v49->__9__143_1,
        (System_Int32_array **)_9__143_1,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                                                                 (System_Func_TSource__TResult__o *)_9__143_1,
                                                                 (const MethodInfo_1A94FDC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v56,
                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
    v43 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v109 = System_Int32__ToString((int)v12 + 320, 0LL);
    v110 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v110 = SummonInfoControl___c_TypeInfo;
    }
    v111 = v110->static_fields;
    _9__143_2 = v111->__9__143_2;
    if ( !_9__143_2 )
    {
      if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110);
        v111 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v113 = (Il2CppObject *)v111->__9;
      _9__143_2 = (System_Func_char__string__o *)sub_B2C42C(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_2,
        v113,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__,
        (const MethodInfo_270B9E8 *)Method_System_Func_char__string___ctor__);
      v114 = SummonInfoControl___c_TypeInfo->static_fields;
      v114->__9__143_2 = _9__143_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v114->__9__143_2,
        (System_Int32_array **)_9__143_2,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
    }
    v121 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v109,
                                                                  (System_Func_TSource__TResult__o *)_9__143_2,
                                                                  (const MethodInfo_1A94FDC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v121,
                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v43 = this;
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
        GameObjectExtensions__SetLocalScale_31328080(gameObject, 0.9, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_151;
        v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v124, -6.0, 0LL);
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
        v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v125, 45.0, 0LL);
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
    v57 = System_Int32__ToString((int)v12 + 328, 0LL);
    v58 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v58 = SummonInfoControl___c_TypeInfo;
    }
    v59 = v58->static_fields;
    _9__143_3 = v59->__9__143_3;
    if ( !_9__143_3 )
    {
      if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        v59 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v61 = (Il2CppObject *)v59->__9;
      _9__143_3 = (System_Func_char__string__o *)sub_B2C42C(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_3,
        v61,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__,
        (const MethodInfo_270B9E8 *)Method_System_Func_char__string___ctor__);
      v62 = SummonInfoControl___c_TypeInfo->static_fields;
      v62->__9__143_3 = _9__143_3;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v62->__9__143_3,
        (System_Int32_array **)_9__143_3,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
    }
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                                                                 (System_Func_TSource__TResult__o *)_9__143_3,
                                                                 (const MethodInfo_1A94FDC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v69,
                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v43 = this;
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
        v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v71, 42.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v72, -34.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v73, 0.9, 0LL);
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
        v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v75, -60.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_151;
        v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v76, 0.9, 0LL);
      }
    }
  }
LABEL_58:
  if ( !v43 || (freeSummon = v43->fields.freeSummon) == 0LL )
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
    v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v93,
                                    v93,
                                    (System_String_o *)StringLiteral_21172/*"num1"*/,
                                    v94);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v95 = (UnityEngine_Component_o *)this;
    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v96,
                                    v96,
                                    (System_String_o *)StringLiteral_21174/*"num2"*/,
                                    v97);
    if ( !v95 )
      goto LABEL_151;
    v98 = (UnityEngine_Component_o *)this;
    v99 = UnityEngine_Component__get_gameObject(v95, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v99,
                                    v99,
                                    (System_String_o *)StringLiteral_21173/*"num1_glow"*/,
                                    v100);
    if ( !v98 )
      goto LABEL_151;
    v101 = (UISprite_o *)this;
    v102 = UnityEngine_Component__get_gameObject(v98, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v102,
                                    v102,
                                    (System_String_o *)StringLiteral_21175/*"num2_glow"*/,
                                    v103);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v83 = (UnityEngine_Object_o *)this;
    v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    (SummonInfoControl_o *)v104,
                    v104,
                    (System_String_o *)StringLiteral_8256/*"Item"*/,
                    v105);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v95, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v98, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v101, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v87 = UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
          if ( v87 )
          {
            if ( LODWORD(v43->fields.freeSummon) )
            {
              v107 = System_String__Format(
                       (System_String_o *)StringLiteral_17040/*"btn_txt_bonus_{0}"*/,
                       (Il2CppObject *)v43->fields.friendPointSummon,
                       0LL);
              UISprite__set_spriteName((UISprite_o *)v95, v107, 0LL);
              if ( LODWORD(v43->fields.freeSummon) > 1 )
              {
                v108 = System_String__Format(
                         (System_String_o *)StringLiteral_17040/*"btn_txt_bonus_{0}"*/,
                         (Il2CppObject *)v43->fields.stoneSummon,
                         0LL);
                UISprite__set_spriteName((UISprite_o *)v98, v108, 0LL);
                if ( LODWORD(v43->fields.freeSummon) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17041/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v43->fields.friendPointSummon,
                                                  0LL);
                  if ( !v101 )
                    goto LABEL_151;
                  UISprite__set_spriteName(v101, (System_String_o *)this, 0LL);
                  if ( LODWORD(v43->fields.freeSummon) > 1 )
                  {
                    stoneSummon = (Il2CppObject *)v43->fields.stoneSummon;
                    v90 = (System_String_o *)StringLiteral_17041/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_79;
                  }
                }
              }
            }
LABEL_152:
            v126 = sub_B2C460(v87);
            sub_B2C400(v126, 0LL);
          }
        }
      }
    }
LABEL_82:
    v91 = 0;
    goto LABEL_83;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_151;
  v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  (SummonInfoControl_o *)v78,
                                  v78,
                                  (System_String_o *)StringLiteral_21172/*"num1"*/,
                                  v79);
  if ( !this )
    goto LABEL_151;
  v80 = (UnityEngine_Object_o *)this;
  v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  (SummonInfoControl_o *)v81,
                                  v81,
                                  (System_String_o *)StringLiteral_21173/*"num1_glow"*/,
                                  v82);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_151;
  v83 = (UnityEngine_Object_o *)this;
  v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.singleDigit, 0LL);
  v86 = SummonInfoControl__GetBonusSprite((SummonInfoControl_o *)v84, v84, (System_String_o *)StringLiteral_8256/*"Item"*/, v85);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v86, 7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
    goto LABEL_82;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v87 = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
  if ( !v87 )
    goto LABEL_82;
  if ( !LODWORD(v43->fields.freeSummon) )
    goto LABEL_152;
  v88 = System_String__Format(
          (System_String_o *)StringLiteral_17040/*"btn_txt_bonus_{0}"*/,
          (Il2CppObject *)v43->fields.friendPointSummon,
          0LL);
  UISprite__set_spriteName((UISprite_o *)v80, v88, 0LL);
  if ( !LODWORD(v43->fields.freeSummon) )
    goto LABEL_152;
  stoneSummon = (Il2CppObject *)v43->fields.friendPointSummon;
  v90 = (System_String_o *)StringLiteral_17041/*"btn_txt_bonus_{0}_glow"*/;
LABEL_79:
  this = (SummonInfoControl_o *)System_String__Format(v90, stoneSummon, 0LL);
  if ( !v83 )
    goto LABEL_151;
  UISprite__set_spriteName((UISprite_o *)v83, (System_String_o *)this, 0LL);
  v91 = 1;
LABEL_83:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_151;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v91 )
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
          v92 = 0;
          goto LABEL_94;
        }
      }
    }
LABEL_151:
    sub_B2C434(this, summonObjParts);
  }
  if ( !v43 )
    goto LABEL_151;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, SLODWORD(v43->fields.freeSummon) < 2, 0LL);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_151;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  v92 = SLODWORD(v43->fields.freeSummon) > 1;
LABEL_94:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v92, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  char *Instance; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v8; // x8
  char *v9; // x20
  __int64 v10; // x22
  char *v11; // x23
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  int v15; // w8
  __int64 v16; // x0

  if ( (byte_418AE09 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AE09 = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !Instance )
    {
LABEL_31:
      sub_B2C434(Instance, v6);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0LL);
    if ( Instance )
    {
      v8 = *((_QWORD *)Instance + 3);
      v9 = Instance;
      if ( v8 )
      {
        if ( (int)v8 >= 1 )
        {
          v10 = 0LL;
          v11 = Instance + 32;
          do
          {
            if ( (unsigned int)v10 >= (unsigned int)v8 )
            {
LABEL_32:
              v16 = sub_B2C460(Instance);
              sub_B2C400(v16, 0LL);
            }
            v12 = *(_QWORD *)&v11[8 * v10];
            if ( !v12 )
              goto LABEL_31;
            if ( *(_DWORD *)(v12 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v10 >= *((_DWORD *)v9 + 6) )
                goto LABEL_32;
              v13 = *(_QWORD *)&v11[8 * v10];
              if ( !v13 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v13 + 24), 0LL);
              if ( (unsigned int)v10 >= *((_DWORD *)v9 + 6) )
                goto LABEL_32;
              v14 = *(_QWORD *)&v11[8 * v10];
              if ( !v14 )
                goto LABEL_31;
              v15 = *(_DWORD *)(v14 + 20);
              switch ( v15 )
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
            LODWORD(v8) = *((_DWORD *)v9 + 6);
            ++v10;
          }
          while ( (int)v10 < (int)v8 );
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
  __int64 v7; // x1
  UIAtlas_o *Component_srcLineSprite; // x0
  __int64 v9; // x1

  if ( (byte_418AE15 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, bannerAtlas);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418AE15 = 1;
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
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, imgName, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.summonHistoryButton) == 0LL) )
    {
      sub_B2C434(Component_srcLineSprite, v9);
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
    sub_B2C434(this, 0LL);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_B2C2F8(
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


void __fastcall SummonInfoControl__SetSummonInfo_31103648(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  GachaEntity_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t flag; // w21
  int32_t PayOneTimePrice; // w22
  SummonInfoControl_SummonInfo_o *v11; // x20
  int32_t drawNum2; // w21
  int32_t PayMultiTimePrice; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AE08 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&SummonInfoControl_SummonInfo_TypeInfo, v5);
    byte_418AE08 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_WarQuestSelectionMaster )
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         currentSummonData->fields.id,
         (const MethodInfo_24E412C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (GachaEntity_o *)entity;
    if ( !entity )
      goto LABEL_12;
    if ( entity->fields.priority < 1 )
    {
      v11 = 0LL;
    }
    else
    {
      flag = entity->fields.flag;
      PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
      v11 = (SummonInfoControl_SummonInfo_o *)sub_B2C42C(SummonInfoControl_SummonInfo_TypeInfo);
      SummonInfoControl_SummonInfo___ctor(v11, flag, PayOneTimePrice, 1, 0LL);
      Master_WarQuestSelectionMaster = (GachaEntity_o *)entity;
      if ( !entity )
        goto LABEL_12;
    }
    if ( Master_WarQuestSelectionMaster->fields.shopId2 >= 1 )
    {
      drawNum2 = Master_WarQuestSelectionMaster->fields.drawNum2;
      PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(Master_WarQuestSelectionMaster, 0LL);
      v11 = (SummonInfoControl_SummonInfo_o *)sub_B2C42C(SummonInfoControl_SummonInfo_TypeInfo);
      SummonInfoControl_SummonInfo___ctor(v11, drawNum2, PayMultiTimePrice, 2, 0LL);
    }
    if ( v11 )
    {
      this->fields.gachaTime = v11->fields.drawNum;
      this->fields.price = v11->fields.price;
      this->fields.shopIdIdx = v11->fields.shopIdIdx;
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
    sub_B2C434(this, isEnable);
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
    sub_B2C434(this, isEnable);
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
        sub_B2C434(0LL, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v11; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x6
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  const MethodInfo *v18; // x6
  struct SummonInfoControl_SummonObjInfo_o *v19; // x8
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x1
  int gachaTime; // w8
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v27; // x4
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  int v30; // [xsp+Ch] [xbp-24h] BYREF

  v4 = payGachaEnt;
  v5 = this;
  if ( (byte_418AE02 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, payGachaEnt);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v6);
    this = (SummonInfoControl_o *)sub_B2C35C(&StringLiteral_17100/*"btn_txt_summon{0:00}"*/, v7);
    byte_418AE02 = 1;
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
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_23539/*"{0}"*/, v8);
        v11 = v5->fields.stoneSummon;
        if ( v11 )
        {
          multiPay = v11->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v4, 0LL);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_23539/*"{0}"*/,
              v15);
            v17 = v5->fields.stoneSummon;
            if ( v17 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v17->fields.onePay, 1, 0, 0, 0, v16);
              v19 = v5->fields.stoneSummon;
              if ( v19 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v19->fields.multiPay, 0, 1, 0, 0, v18);
                SummonInfoControl__SetElevenBonusInfo(v5, v4, 0, v5->fields.stoneSummon, v5->fields.gachaTime, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_31103648(v5, v21);
  gachaTime = v5->fields.gachaTime;
  v23 = (System_String_o *)StringLiteral_17100/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v30 = gachaTime;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  this = (SummonInfoControl_o *)System_String__Format(v23, v24, 0LL);
  v25 = v5->fields.stoneSummon;
  if ( !v25 )
    goto LABEL_21;
  single = v25->fields.single;
  if ( !single )
    goto LABEL_21;
  payGachaEnt = (GachaEntity_o *)this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)payGachaEnt, 0LL);
  v28 = v5->fields.stoneSummon;
  if ( !v28 )
    goto LABEL_21;
  v29 = v28->fields.single;
  if ( !v29 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v29->fields.infoLabel, -1, (System_String_o *)StringLiteral_23539/*"{0}"*/, v27);
}


void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v13; // x4
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  struct SummonInfoControl_SummonObjParts_o *v15; // x8
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x6
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  const MethodInfo *v23; // x5

  if ( (byte_418AE01 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, payGachaEnt);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v7);
    byte_418AE01 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_23539/*"{0}"*/, v10);
  v14 = this->fields.ticketSummon;
  if ( !v14 )
    goto LABEL_12;
  v15 = v14->fields.onePay;
  if ( !v15
    || (SummonInfoControl__SetPriceText(
          this,
          v15->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_23489/*"{0:#,0}"*/,
          v13),
        (v16 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v16->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_23539/*"{0}"*/, v20),
        (v22 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_B2C434(v8, v9);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v22->fields.multiPay, 0, 1, 0, 0, v21);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v23);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v10; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418AE00 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, ticketNum);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_418AE00 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
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
      v10 = entity->fields.num > 0;
LABEL_13:
      num = entity->fields.num;
      result = v10;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  }
  v10 = 0;
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
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  _BOOL4 v13; // w21
  __int64 v14; // x8
  const MethodInfo *v15; // x6
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  int32_t v17; // w9
  const MethodInfo *v18; // x4
  struct SummonInfoControl_SummonObjInfo_o *v19; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v21; // x4
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  struct SummonInfoControl_SummonObjParts_o *v23; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418ADFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, payGachaEnt);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v7);
    byte_418ADFF = 1;
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
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserServantMaster__getCountWithoutMaterial(
                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                  &servantEquipSum[1],
                                                                  servantEquipSum,
                                                                  0LL);
  if ( !payGachaEnt )
    goto LABEL_23;
  v13 = haveStoneNum >= userFreeStone || (int)Master_WarQuestSelectionMaster > 10;
  v14 = 64LL;
  if ( v13 )
    v14 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v14);
  Master_WarQuestSelectionMaster = v13
                                 ? (WarQuestSelectionMaster_o *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL)
                                 : (WarQuestSelectionMaster_o *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
  v16 = this->fields.stoneSummon;
  v17 = v13 ? 2 : 1;
  this->fields.price = (int)Master_WarQuestSelectionMaster;
  this->fields.shopIdIdx = v17;
  if ( !v16
    || (SummonInfoControl__SetSummonGiftDisp(this, v16->fields.single, 0, 1, 0, 0, v15),
        (v19 = this->fields.stoneSummon) == 0LL)
    || (single = v19->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23539/*"{0}"*/, v18),
        (v22 = this->fields.stoneSummon) == 0LL)
    || (v23 = v22->fields.single) == 0LL )
  {
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_WarQuestSelectionMaster,
    this->fields.gachaTime,
    v23->fields.numImg,
    v23->fields.bonusInfo,
    v21);
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
      sub_B2C434(SelfUserGame, v5);
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
  if ( (byte_418ADF7 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B2C35C(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, method);
    byte_418ADF7 = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0LL )
    sub_B2C434(this, method);
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall SummonInfoControl_ClickDelegate__Invoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SummonInfoControl_ClickDelegate_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  GachaRqParamData_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  SummonInfoControl_ClickDelegate_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(GachaRqParamData_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  GachaRqParamData_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  SummonInfoControl_ClickDelegate_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SummonInfoControl_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, paramData, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = paramData->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(paramData, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(paramData, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(paramData, class_0, v10, v12);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v16)(paramData, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(paramData, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, paramData, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v24)(
                v32,
                paramData,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v32
                                                                              + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                              + 312))(
                v32,
                paramData,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v33)(v32, paramData, v31);
    }
  }
}


void __fastcall SummonInfoControl_InfoButtonLayout___ctor(
        SummonInfoControl_InfoButtonLayout_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712LL;
  *(_OWORD *)&this->fields.Top.fields.x = xmmword_319E5F0;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SummonInfoControl___c_StaticFields *static_fields; // x0

  if ( (byte_41847C1 & 1) == 0 )
  {
    sub_B2C35C(&SummonInfoControl___c_TypeInfo, v1);
    byte_41847C1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SummonInfoControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonInfoControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41847C3 & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_41847C3 = 1;
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
    sub_B2C434(this, x);
  }
}


void __fastcall SummonInfoControl___c___OffSetInfoBtn_b__123_0(
        SummonInfoControl___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_41847C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FSOffset___, obj);
    this = (SummonInfoControl___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41847C2 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
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
    sub_B2C434(this, obj);
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
    sub_B2C434(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, v5->fields.onOff, 0LL);
}