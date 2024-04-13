void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SummonInfoControl_c *v4; // x8

  if ( (byte_42EC91C & 1) == 0 )
  {
    sub_B5D5C4(&SummonInfoControl_TypeInfo, v1, v2, v3);
    byte_42EC91C = 1;
  }
  SummonInfoControl_TypeInfo->static_fields->OPEN_TIME = 0.2;
  SummonInfoControl_TypeInfo->static_fields->NORMAL_SUMMON_BTN1_X = -150.0;
  v4 = SummonInfoControl_TypeInfo;
  SummonInfoControl_TypeInfo->static_fields->NORMAL_SUMMON_BTN2_X = 150.0;
  v4->static_fields->APD_SUMMON_BTN1_X = -240.0;
  v4->static_fields->APD_SUMMON_BTN2_X = 0.0;
  v4->static_fields->APD_SUMMON_BTN3_X = 240.0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_42EC8FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo, v8, v9, v10);
    byte_42EC8FE = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v11 )
    sub_B5D69C(v12, v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.freeSummon,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendPointSummon,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.stoneSummon,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.ticketSummon,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.chargeSummon,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.oneExSummon,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.summonObjInfos,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  SummonInfoControl__InitMasterData(this, v20);
}


void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_42EC919 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SummonInfoControl_ClickBase__, seKind, (_DWORD)method, v3);
    byte_42EC919 = 1;
  }
  v6 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_SummonInfoControl_ClickBase__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, seKind, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.animationCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0LL);
}


UISprite_o *__fastcall SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  if ( (byte_42EC911 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B5D5C4(
                                    &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                    (_DWORD)obj,
                                    (_DWORD)targetName,
                                    method);
    byte_42EC911 = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B5D69C(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B5D69C(this, method);
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
  struct GachaMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ConstantMaster_o *v24; // x0
  __int64 v25; // x1
  ConstantMaster_o *v26; // x20

  if ( (byte_42EC8FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_14902/*"USER_FREE_STONE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13616/*"TUTORIAL_GACHA_ID"*/, v14, v15, v16);
    byte_42EC8FF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gachaMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v24 )
    sub_B5D69C(0LL, v25);
  v26 = v24;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(v24, (System_String_o *)StringLiteral_13616/*"TUTORIAL_GACHA_ID"*/, 0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v26, (System_String_o *)StringLiteral_14902/*"USER_FREE_STONE"*/, 0LL);
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
    sub_B5D69C(v4, v5);
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x20
  SummonInfoControl___c_c *v18; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__124_0; // x21
  Il2CppObject *v21; // x22
  struct SummonInfoControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC902 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__, v11, v12, v13);
    sub_B5D5C4(&SummonInfoControl___c_TypeInfo, v14, v15, v16);
    byte_42EC902 = 1;
  }
  summonObjInfos = this->fields.summonObjInfos;
  v18 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v18 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__124_0;
  if ( !_9__124_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__124_0,
      v21,
      Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__,
      (const MethodInfo_258B320 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__);
    v22 = SummonInfoControl___c_TypeInfo->static_fields;
    v22->__9__124_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__124_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__124_0,
      (System_Int32_array **)_9__124_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !summonObjInfos )
    sub_B5D69C(v18, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)_9__124_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


void __fastcall SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  SummonInfoControl_c *v15; // x0
  TweenAlpha_o *v16; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  v5 = (UnityEngine_Component_o *)this;
  if ( (byte_42EC916 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)target, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SummonInfoControl_TypeInfo, v9, v10, v11);
    this = (SummonInfoControl_o *)sub_B5D5C4(&StringLiteral_6014/*"EndAnimation"*/, v12, v13, v14);
    byte_42EC916 = 1;
  }
  if ( !target )
    goto LABEL_17;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  target,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v15 = SummonInfoControl_TypeInfo;
  if ( (BYTE3(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v15 = SummonInfoControl_TypeInfo;
  }
  v16 = TweenAlpha__Begin(target, v15->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v16 )
    {
      v16->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v5, 0LL);
      v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B5D560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, gameObject, v18, v19, v20, v21, v22, v23);
      v24 = (System_Int32_array **)StringLiteral_6014/*"EndAnimation"*/;
      v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6014/*"EndAnimation"*/;
      sub_B5D560((BattleServantConfConponent_o *)&v16->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
      return;
    }
LABEL_17:
    sub_B5D69C(this, target);
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
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
  SummonInfoControl___c_c *v17; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__123_0; // x20
  Il2CppObject *v20; // x21
  struct SummonInfoControl___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  struct SummonInfoControl_InfoButtonLayout_o *infoButtonLayout; // x8
  UnityEngine_Transform_o *v30; // x21
  struct SummonInfoControl_InfoButtonLayout_o *v31; // x8
  __int64 v32; // x9
  __int64 v33; // x10
  __int64 v34; // x11
  struct SummonInfoControl_InfoButtonLayout_o *v35; // x8
  System_Uri_o *gameObject; // x0
  System_Uri_o *v37; // x1
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC901 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__, v11, v12, v13);
    sub_B5D5C4(&SummonInfoControl___c_TypeInfo, v14, v15, v16);
    byte_42EC901 = 1;
  }
  v17 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v17 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__123_0,
      v20,
      Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__,
      (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
    v21 = SummonInfoControl___c_TypeInfo->static_fields;
    v21->__9__123_0 = (struct System_Action_GameObject__o *)_9__123_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v21->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
  v30 = (UnityEngine_Transform_o *)summonDetailInfo;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(
                                                   this->fields.summonDetailInfo,
                                                   0LL);
  v31 = this->fields.infoButtonLayout;
  if ( !v31 || !v30 )
    goto LABEL_37;
  v32 = 36LL;
  if ( ((unsigned __int8)summonDetailInfo & 1) != 0 )
    v32 = 24LL;
  v33 = ((unsigned __int8)summonDetailInfo & 1) != 0 ? 20LL : 32LL;
  v34 = ((unsigned __int8)summonDetailInfo & 1) != 0 ? 16LL : 28LL;
  v38.fields.y = *(float *)((char *)&v31->klass + v33);
  v38.fields.x = *(float *)((char *)&v31->klass + v34);
  v38.fields.z = *(float *)((char *)&v31->klass + v32);
  UnityEngine_Transform__set_localPosition(v30, v38, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !summonDetailInfo )
    goto LABEL_37;
  summonDetailInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)summonDetailInfo,
                                                   0LL);
  v35 = this->fields.infoButtonLayout;
  if ( !v35 )
    goto LABEL_37;
  if ( !summonDetailInfo )
    goto LABEL_37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonDetailInfo, v35->fields.Buttom, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHelpInfo;
  if ( !summonDetailInfo
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        !_9__123_0)
    || (System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          (System_Uri_o *)summonDetailInfo,
          (const MethodInfo_258B334 *)Method_System_Action_GameObject__Invoke__),
        (summonDetailInfo = this->fields.summonDetailInfo) == 0LL)
    || (gameObject = (System_Uri_o *)UnityEngine_GameObject__get_gameObject(summonDetailInfo, 0LL),
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          gameObject,
          (const MethodInfo_258B334 *)Method_System_Action_GameObject__Invoke__),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL) )
  {
LABEL_37:
    sub_B5D69C(summonDetailInfo, method);
  }
  v37 = (System_Uri_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)_9__123_0,
    v37,
    (const MethodInfo_258B334 *)Method_System_Action_GameObject__Invoke__);
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
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v33; // x20

  if ( (byte_42EC91A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SummonInfoControl_OnClickDetail__, v9, v10, v11);
    sub_B5D5C4(&WebViewManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_15559/*"WEB_VIEW_TITLE_SUMMON"*/, v15, v16, v17);
    byte_42EC91A = 1;
  }
  v18 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 75) & 2) != 0 )
    v18 = (_QWORD *)sub_B5D5CC(Method_SummonInfoControl_OnClickDetail__);
  v19 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v18, v18[3]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B5D69C(v20, v21);
  id = currentSummonData->fields.id;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15559/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v33 = v31;
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(v33, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t Time; // x0
  __int64 v9; // x1
  int64_t v10; // x20
  BalanceConfig_c *v11; // x8
  __int16 v12; // w9
  int v13; // w10
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t *p_AftFreeDrawNum; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+20h] [xbp-30h]

  if ( (byte_42EC917 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42EC917 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v10 = Time;
  v11 = BalanceConfig_TypeInfo;
  v12 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v12 & 0x400) != 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
      v12 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v13 = v12 & 0x400;
  }
  else
  {
    v13 = 0;
  }
  static_fields = v11->static_fields;
  if ( v10 >= static_fields->DrawNumChangeTime )
  {
    if ( v13 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->AftFreeDrawNum;
    if ( !this )
LABEL_22:
      sub_B5D69C(Time, v9);
  }
  else
  {
    if ( v13 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->BefFreeDrawNum;
    if ( !this )
      goto LABEL_22;
  }
  SummonInfoControl__SetRequestData(this, -1, -1, -1, *p_AftFreeDrawNum, -1, -1, -1, -1, 0LL, 0, 0LL, v17);
  SummonInfoControl__ClickBase(this, 0, v16);
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
      sub_B5D69C(v3, v4);
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
    sub_B5D69C(CurrentGachaEntity, v4);
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
  int v2; // w2
  __int64 v3; // x3
  SummonInfoControl_o *v4; // x19
  int32_t *currentSummonData; // x9
  const MethodInfo *v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // [xsp+20h] [xbp-20h]

  v4 = this;
  if ( (byte_42EC918 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B5D5C4(
                                    &Method_SummonInfoControl_OnClickSinglePayExGacha__,
                                    (_DWORD)method,
                                    v2,
                                    v3);
    byte_42EC918 = 1;
  }
  if ( v4->fields.isPayExUsePossible )
  {
    currentSummonData = (int32_t *)v4->fields.currentSummonData;
    v4->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_B5D69C(this, method);
    SummonInfoControl__SetRequestData(
      v4,
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
      v9);
    SummonInfoControl__ClickBase(v4, 0, v6);
  }
  else
  {
    v7 = Method_SummonInfoControl_OnClickSinglePayExGacha__;
    if ( (*((_BYTE *)Method_SummonInfoControl_OnClickSinglePayExGacha__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B5D5CC(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
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
  sub_B5D560(
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
        sub_B5D69C(v18, v19);
      SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v20);
    }
  }
  else
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_B5D560(p_animationCallback, 0LL, (System_String_array **)v10, v11, v12, v13, v14, v15);
    ActionExtensions__Call(klass, 0LL);
  }
}


void __fastcall SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1

  if ( (byte_42EC915 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, (_DWORD)button, onOff, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EC915 = 1;
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
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B5D69C(gameObject, v10);
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
    sub_B5D69C(this, summonInfo);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0LL);
}


void __fastcall SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
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
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  System_String_o *Empty; // x1
  const MethodInfo *v21; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v24; // x4
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *v26; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v28; // x4
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *v30; // x8
  const MethodInfo *v31; // x1
  char v32; // w20
  UILabel_o *bonusSelectLabel; // x21
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *v35; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v37; // s0
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8
  struct SummonInfoControl_SummonObjParts_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  const MethodInfo *v44; // x6
  struct SummonInfoControl_SummonObjInfo_o *v45; // x8

  if ( (byte_42EC90C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12566/*"SUMMON_BONUS_SELECT_BTN_MSG"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v14, v15, v16);
    byte_42EC90C = 1;
  }
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v17);
  SummonInfoControl__SetSummonInfo_32757652(this, v18);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_33;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_23850/*"{0}"*/, v21);
  v25 = this->fields.chargeSummon;
  if ( !v25 )
    goto LABEL_33;
  v26 = v25->fields.multiPay;
  if ( !v26 )
    goto LABEL_33;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(
    this,
    v26->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
    v24);
  v29 = this->fields.chargeSummon;
  if ( !v29
    || (v30 = v29->fields.multiPay) == 0LL
    || (SummonInfoControl__SetElevenBonusInfoSingle(
          CurrentGachaEntity,
          this->fields.gachaTime,
          v30->fields.numImg,
          v30->fields.bonusInfo,
          v28),
        (CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v31)) == 0LL)
    || (CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0LL),
        !this->fields.bonusSelectLabel)
    || (v32 = (char)CurrentGachaEntity,
        (CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                       0LL)) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(CurrentGachaEntity, Empty);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v32 & 1, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v32 & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12566/*"SUMMON_BONUS_SELECT_BTN_MSG"*/, 0LL);
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
  v34 = this->fields.chargeSummon;
  if ( !v34 )
    goto LABEL_33;
  v35 = v34->fields.multiPay;
  if ( !v35 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v35->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  v37 = 0.0;
  if ( (v32 & 1) != 0 )
    v37 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v37, 0LL);
  v38 = this->fields.chargeSummon;
  if ( !v38 )
    goto LABEL_33;
  v39 = v38->fields.multiPay;
  if ( !v39 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v39->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalScale_32432716(v40, 1.0, 1.0, 0LL);
  v41 = this->fields.chargeSummon;
  if ( !v41 )
    goto LABEL_33;
  v42 = v41->fields.multiPay;
  if ( !v42 )
    goto LABEL_33;
  CurrentGachaEntity = (SummonInfoControl_o *)v42->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_33;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalPositionY(v43, 0.0, 0LL);
  v45 = this->fields.chargeSummon;
  if ( !v45 )
    goto LABEL_33;
  SummonInfoControl__SetSummonGiftDisp(this, v45->fields.multiPay, 0, 1, 0, 1, v44);
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
  if ( (byte_42EC912 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)summonObjInfo, isSingle, method);
    byte_42EC912 = 1;
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
    sub_B5D69C(this, summonObjInfo);
  v19 = *v18;
  v6->fields.currentBtnInfo = (struct UnityEngine_GameObject_o *)*v18;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.currentBtnInfo, v19, v12, v13, v14, v15, v16, v17);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjParts_o **p_onePay; // x25
  UISprite_o *numImg; // x24
  Il2CppObject *v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w23
  UnityEngine_GameObject_o *v56; // x0
  struct SummonInfoControl_SummonObjParts_o *v57; // x8
  int v58; // w23
  UISprite_o *v59; // x23
  Il2CppObject *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  const MethodInfo *v62; // x3
  UnityEngine_GameObject_o *v63; // x0
  struct SummonInfoControl_SummonObjParts_o *v64; // x8
  UISprite_o *bonusCount; // x24
  Il2CppObject *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  const MethodInfo *v69; // x3
  UISprite_o *BonusSprite; // x24
  int v71; // w27
  Il2CppObject *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  const MethodInfo *v74; // x3
  UISprite_o *v75; // x23
  Il2CppObject *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  System_String_o **v79; // x23
  const MethodInfo *v80; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  int v82; // [xsp+8h] [xbp-48h] BYREF
  int32_t v83; // [xsp+Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_42EC909 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, (_DWORD)ent, ticket, summonObjInfo);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17246/*"btn_txt_bonus_10times_plus1"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17232/*"btn_summon_bg2"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17231/*"btn_summon_bg1"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17247/*"btn_txt_bonus_1plus1"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_17250/*"btn_txt_bonus_{0}_glow"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_17248/*"btn_txt_bonus_count_{0}"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_21450/*"num1"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_17233/*"btn_summon_bg3"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_21451/*"num1_glow"*/, v44, v45, v46);
    this = (SummonInfoControl_o *)sub_B5D5C4(&StringLiteral_17249/*"btn_txt_bonus_{0}"*/, v47, v48, v49);
    byte_42EC909 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v83 = oneCount;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v53, 0LL);
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
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v56, 30.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  ent->fields.extraGroupId1,
                                  0LL);
  v57 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v58 = (int)this;
  if ( (_DWORD)this != 9 )
  {
    this = (SummonInfoControl_o *)v57->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17246/*"btn_txt_bonus_10times_plus1"*/, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPosition_32430496(v63, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0LL);
    v64 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v64->fields.singleDigit;
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
        v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v67, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        (SummonInfoControl_o *)v68,
                        v68,
                        (System_String_o *)StringLiteral_21450/*"num1"*/,
                        v69);
        v71 = 9 - v58;
        v83 = 9 - v58;
        v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17249/*"btn_txt_bonus_{0}"*/, v72, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0LL);
        v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v75 = SummonInfoControl__GetBonusSprite(
                (SummonInfoControl_o *)v73,
                v73,
                (System_String_o *)StringLiteral_21451/*"num1_glow"*/,
                v74);
        v82 = v71;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17250/*"btn_txt_bonus_{0}_glow"*/, v76, 0LL);
        if ( !v75 )
          goto LABEL_93;
        UISprite__set_spriteName(v75, (System_String_o *)this, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v77, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v78, -29.7, 0LL);
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
      v64 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    bonusCount = v64->fields.bonusCount;
    v83 = 9 - v58;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17248/*"btn_txt_bonus_count_{0}"*/, v66, 0LL);
    if ( !bonusCount )
      goto LABEL_93;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
      v79 = (System_String_o **)(ticket ? &StringLiteral_17233/*"btn_summon_bg3"*/ : &StringLiteral_17231/*"btn_summon_bg1"*/);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, *v79, 0LL);
        if ( *p_onePay )
        {
          this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
          if ( this )
          {
            UIButton__set_normalSprite((UIButton_o *)this, *v79, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_B5D69C(this, ent);
  }
  v59 = v57->fields.numImg;
  v83 = 2;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v60, 0LL);
  if ( !v59 )
    goto LABEL_93;
  UISprite__set_spriteName(v59, (System_String_o *)this, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17247/*"btn_txt_bonus_1plus1"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_32430496(v61, 0.0, -35.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17232/*"btn_summon_bg2"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
  if ( !this )
    goto LABEL_93;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17232/*"btn_summon_bg2"*/, 0LL);
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
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v62);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v80);
}


void __fastcall SummonInfoControl__SetElevenBonusInfoSingle(
        SummonInfoControl_o *this,
        int32_t multiCount,
        UISprite_o *multiNumImg,
        UISprite_o *multiBonusInfo,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t v17; // w21
  Il2CppObject *v18; // x0
  System_String_o *gameObject; // x0
  __int64 v20; // x1
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EC90A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, multiCount, (_DWORD)multiNumImg, multiBonusInfo);
    sub_B5D5C4(&System_Math_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17245/*"btn_txt_bonus_10plus1"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v14, v15, v16);
    byte_42EC90A = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = System_Math__Min_45104456(multiCount, 11, 0LL);
  v21 = v17;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v18, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0LL), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0LL)) == 0LL )
  {
    sub_B5D69C(gameObject, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v17 > 10, 0LL);
  if ( v17 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17245/*"btn_txt_bonus_10plus1"*/, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(currentBtnInfo, v11);
  }
  v15 = this->fields.isDispPayExSummon && isEnable;
  UnityEngine_GameObject__SetActive(currentBtnInfo, v15, 0LL);
}


void __fastcall SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  SummonControl_c *v29; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v32; // x1
  char v33; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  int64_t Time; // x20
  BalanceConfig_c *v39; // x8
  int64_t DrawNumChangeTime; // x21
  const MethodInfo *v41; // x3
  int32_t v42; // [xsp+0h] [xbp-40h] BYREF
  int32_t v43; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t maxNum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC903 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SummonControl_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UserGachaMaster_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6565/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v26, v27, v28);
    byte_42EC903 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  v29 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v29 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v29->static_fields->FRIEND_POINT_SUMMON_ID;
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
    || (v33 = (char)gameObject,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                        0LL)) == 0LL) )
  {
LABEL_36:
    sub_B5D69C(gameObject, v32);
  }
  UnityEngine_GameObject__SetActive(gameObject, v33 & 1, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v33 & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6565/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0LL);
    v43 = maxNum[1];
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
    v42 = maxNum[0];
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v35, v36, v37, 0LL);
    v32 = (System_String_o *)gameObject;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  else
  {
    v32 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  UILabel__set_text(freeSummonCampaignLabel, v32, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v33 & 1) == 0 && !this->fields.isFree )
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
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
  if ( this->fields.isFree )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v39 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    gameObject = this->fields.freeTxtInfoObj;
    if ( !gameObject )
      goto LABEL_36;
    DrawNumChangeTime = v39->static_fields->DrawNumChangeTime;
    UnityEngine_GameObject__SetActive(gameObject, Time < DrawNumChangeTime, 0LL);
    gameObject = this->fields.freeTenInfoObj;
    if ( !gameObject )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(gameObject, Time >= DrawNumChangeTime, 0LL);
    SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v41);
  }
  else
  {
LABEL_35:
    SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v32);
  }
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(summonHelpInfo, isDisp);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  GachaAppendMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v38; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v40; // w21
  int32_t type; // w9
  struct VaildGachaInfo_o *v42; // x8
  int32_t idx; // w9
  struct VaildGachaInfo_o *v44; // x8
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v47; // x2
  __int64 v48; // x8
  SummonInfoControl_o *v49; // x0
  SummonInfoControl_SummonObjInfo_o *v50; // x20
  struct SummonInfoControl_SummonObjInfo_o *v51; // x8
  struct SummonInfoControl_SummonObjInfo_o *v52; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v55; // x8
  struct SummonInfoControl_SummonObjParts_o *v56; // x8
  UnityEngine_GameObject_o *v57; // x0
  struct SummonInfoControl_SummonObjInfo_o *v58; // x8
  struct SummonInfoControl_SummonObjParts_o *v59; // x8
  UnityEngine_GameObject_o *v60; // x0
  struct SummonInfoControl_SummonObjInfo_o *v61; // x8
  struct SummonInfoControl_SummonObjParts_o *v62; // x8
  UnityEngine_GameObject_o *v63; // x0
  struct SummonInfoControl_SummonObjInfo_o *v64; // x8
  struct SummonInfoControl_SummonObjParts_o *v65; // x8
  UnityEngine_GameObject_o *v66; // x0
  struct SummonInfoControl_SummonObjInfo_o *v67; // x8
  struct SummonInfoControl_SummonObjParts_o *v68; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v70; // x8
  struct SummonInfoControl_SummonObjParts_o *v71; // x8
  struct SummonInfoControl_SummonObjInfo_o *v72; // x8
  struct SummonInfoControl_SummonObjParts_o *v73; // x8
  struct SummonInfoControl_SummonObjInfo_o *v74; // x8
  struct SummonInfoControl_SummonObjParts_o *v75; // x8
  const MethodInfo *v76; // x3
  struct SummonInfoControl_SummonObjInfo_o *v77; // x8
  struct SummonInfoControl_SummonObjParts_o *v78; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v80; // x8
  struct SummonInfoControl_SummonObjParts_o *v81; // x8
  UIWidget_o *v82; // x20
  int v83; // s0
  struct SummonInfoControl_SummonObjInfo_o *v87; // x8
  struct SummonInfoControl_SummonObjParts_o *v88; // x8
  UIButtonColor_o *button; // x20
  int v90; // s0
  struct SummonInfoControl_SummonObjInfo_o *v94; // x8
  struct SummonInfoControl_SummonObjParts_o *v95; // x8
  const MethodInfo *v96; // x6
  struct SummonInfoControl_SummonObjInfo_o *v97; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC90B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)gachaEnt, isTicket, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaAppendMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&SummonInfoControl_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17234/*"btn_summon_bg5"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_17292/*"btn_txt_reset"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_19687/*"img_bg_saintquartzuse3"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_22740/*"summon_txt_done"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17309/*"btn_txt_summon01"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17283/*"btn_txt_only_1"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v34, v35, v36);
    byte_42EC90B = 1;
  }
  appendEnt = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(
                                                            Master_WarQuestSelectionMaster,
                                                            gachaEnt,
                                                            &appendEnt,
                                                            0LL);
  currentSummonData = this->fields.currentSummonData;
  v40 = (int)Master_WarQuestSelectionMaster;
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
  v42 = this->fields.currentSummonData;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    idx = appendEnt->fields.idx;
    if ( !v42 )
      goto LABEL_88;
  }
  else
  {
    idx = 0;
    if ( !v42 )
      goto LABEL_88;
  }
  v42->fields.appendShopIdIndex = idx;
  v44 = this->fields.currentSummonData;
  if ( (_DWORD)Master_WarQuestSelectionMaster )
  {
    if ( !appendEnt )
      goto LABEL_88;
    drawNum = appendEnt->fields.drawNum;
    if ( !v44 )
      goto LABEL_88;
  }
  else
  {
    drawNum = 0;
    if ( !v44 )
      goto LABEL_88;
  }
  v44->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_88;
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v40 != 0, 0LL);
  this->fields.isDispPayExSummon = v40 != 0;
  this->fields.isPayExUsePossible = v40 == 2;
  v48 = 40LL;
  v49 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( isTicket )
    v48 = 48LL;
  v50 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v48);
  if ( v40 )
  {
    if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SummonInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
      v49 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
    }
    SummonInfoControl__SetButtonLocalPosX(
      v49,
      v50,
      *(float *)&v49->fields.bonusSelectLabel->fields.m_CachedPtr,
      *((float *)&v49->fields.bonusSelectLabel->fields.UnityEngine_MonoBehaviour_Fields + 1),
      v47);
    v51 = this->fields.oneExSummon;
    if ( v51 )
    {
      Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v51->fields.singleSummonInfo;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        v52 = this->fields.oneExSummon;
        if ( v52 )
        {
          single = v52->fields.single;
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
              v55 = this->fields.oneExSummon;
              if ( v55 )
              {
                v56 = v55->fields.single;
                if ( v56 )
                {
                  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v56->fields.bonusCount;
                  if ( Master_WarQuestSelectionMaster )
                  {
                    v57 = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                            0LL);
                    GameObjectExtensions__SetLocalPosition_32430604(v57, 0.0, 34.0, 0.0, 0LL);
                    v58 = this->fields.oneExSummon;
                    if ( v58 )
                    {
                      v59 = v58->fields.single;
                      if ( v59 )
                      {
                        Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v59->fields.bonusInfo;
                        if ( Master_WarQuestSelectionMaster )
                        {
                          v60 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                  0LL);
                          GameObjectExtensions__SetLocalPositionX(v60, 1.0, 0LL);
                          v61 = this->fields.oneExSummon;
                          if ( v61 )
                          {
                            v62 = v61->fields.single;
                            if ( v62 )
                            {
                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v62->fields.bonusCount;
                              if ( Master_WarQuestSelectionMaster )
                              {
                                v63 = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                        0LL);
                                GameObjectExtensions__SetLocalScaleX(v63, 1.0, 0LL);
                                v64 = this->fields.oneExSummon;
                                if ( v64 )
                                {
                                  v65 = v64->fields.single;
                                  if ( v65 )
                                  {
                                    Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v65->fields.bonusInfo;
                                    if ( Master_WarQuestSelectionMaster )
                                    {
                                      v66 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
                                      GameObjectExtensions__SetLocalScaleX(v66, 1.0, 0LL);
                                      v67 = this->fields.oneExSummon;
                                      if ( v67 )
                                      {
                                        v68 = v67->fields.single;
                                        if ( v68 )
                                        {
                                          buttonImg = v68->fields.buttonImg;
                                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          }
                                          Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                                    buttonImg,
                                                                                                    (System_String_o *)StringLiteral_17234/*"btn_summon_bg5"*/,
                                                                                                    0LL);
                                          v70 = this->fields.oneExSummon;
                                          if ( v70 )
                                          {
                                            v71 = v70->fields.single;
                                            if ( v71 )
                                            {
                                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(v71->fields.bonusCount, (System_String_o *)StringLiteral_17292/*"btn_txt_reset"*/, 0LL);
                                              v72 = this->fields.oneExSummon;
                                              if ( v72 )
                                              {
                                                v73 = v72->fields.single;
                                                if ( v73 )
                                                {
                                                  AtlasManager__SetEventSprite(
                                                    v73->fields.bonusInfo,
                                                    (System_String_o *)StringLiteral_17283/*"btn_txt_only_1"*/,
                                                    0LL);
                                                  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(this->fields.oneExSummonSingleInfoSprite, (System_String_o *)StringLiteral_19687/*"img_bg_saintquartzuse3"*/, 0LL);
                                                  v74 = this->fields.oneExSummon;
                                                  if ( v74 )
                                                  {
                                                    v75 = v74->fields.single;
                                                    if ( v75 )
                                                    {
                                                      Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v75->fields.infoLabel;
                                                      if ( Master_WarQuestSelectionMaster )
                                                      {
                                                        UILabel__set_text(
                                                          (UILabel_o *)Master_WarQuestSelectionMaster,
                                                          (System_String_o *)StringLiteral_1026/*"1"*/,
                                                          0LL);
                                                        v77 = this->fields.oneExSummon;
                                                        if ( v77 )
                                                        {
                                                          v78 = v77->fields.single;
                                                          if ( v78 )
                                                          {
                                                            numImg = v78->fields.numImg;
                                                            if ( this->fields.isPayExUsePossible )
                                                            {
                                                              SummonInfoControl__SetGachaSprite(
                                                                this,
                                                                numImg,
                                                                (System_String_o *)StringLiteral_17309/*"btn_txt_summon01"*/,
                                                                v76);
                                                            }
                                                            else
                                                            {
                                                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                                              }
                                                              Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(numImg, (System_String_o *)StringLiteral_22740/*"summon_txt_done"*/, 0LL);
                                                            }
                                                            v80 = this->fields.oneExSummon;
                                                            if ( v80 )
                                                            {
                                                              v81 = v80->fields.single;
                                                              if ( v81 )
                                                              {
                                                                v82 = (UIWidget_o *)v81->fields.buttonImg;
                                                                if ( this->fields.isPayExUsePossible )
                                                                {
                                                                  *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
                                                                  if ( !v82 )
                                                                    goto LABEL_88;
                                                                }
                                                                else
                                                                {
                                                                  *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_gray(0LL);
                                                                  if ( !v82 )
                                                                    goto LABEL_88;
                                                                }
                                                                UIWidget__set_color(
                                                                  v82,
                                                                  *(UnityEngine_Color_o *)&v83,
                                                                  0LL);
                                                                v87 = this->fields.oneExSummon;
                                                                if ( v87 )
                                                                {
                                                                  v88 = v87->fields.single;
                                                                  if ( v88 )
                                                                  {
                                                                    button = (UIButtonColor_o *)v88->fields.button;
                                                                    if ( this->fields.isPayExUsePossible )
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
                                                                      if ( !button )
                                                                        goto LABEL_88;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_gray(0LL);
                                                                      if ( !button )
                                                                        goto LABEL_88;
                                                                    }
                                                                    UIButtonColor__set_defaultColor(
                                                                      button,
                                                                      *(UnityEngine_Color_o *)&v90,
                                                                      0LL);
                                                                    v94 = this->fields.oneExSummon;
                                                                    if ( v94 )
                                                                    {
                                                                      v95 = v94->fields.single;
                                                                      if ( v95 )
                                                                      {
                                                                        Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)v95->fields.numImg;
                                                                        if ( Master_WarQuestSelectionMaster )
                                                                        {
                                                                          Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)((__int64 (__fastcall *)(GachaAppendMaster_o *, Il2CppMethodPointer))Master_WarQuestSelectionMaster->klass[1].vtable._5_ForForceDerived.method)(Master_WarQuestSelectionMaster, Master_WarQuestSelectionMaster->klass[1].vtable._6_preProcess.methodPtr);
                                                                          v97 = this->fields.oneExSummon;
                                                                          if ( v97 )
                                                                          {
                                                                            SummonInfoControl__SetSummonGiftDisp(
                                                                              this,
                                                                              v97->fields.single,
                                                                              0,
                                                                              0,
                                                                              1,
                                                                              0,
                                                                              v96);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v38);
  }
  if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v49 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v49,
    v50,
    *((float *)&v49->fields.bonusSelectLabel->klass + 1),
    *(float *)&v49->fields.bonusSelectLabel->monitor,
    v47);
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
    sub_B5D69C(CurrentGachaEntity, v5);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x20
  __int64 v24; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  int datalist; // w21
  int32_t Price; // w0
  int32_t v29; // w20
  int v30; // w0
  const MethodInfo *v31; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v33; // x4
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x20
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x4
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v43; // x4
  struct SummonInfoControl_SummonObjInfo_o *v44; // x8
  struct SummonInfoControl_SummonObjParts_o *v45; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EC904 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblUserMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Math_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v20, v21, v22);
    byte_42EC904 = 1;
  }
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AF52C4(v24);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v24 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v29 = Price;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = System_Math__Min_45104456(datalist / v29, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v30;
  if ( v30 < 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v31);
    v34 = this->fields.friendPointSummon;
    if ( v34 )
    {
      single = v34->fields.single;
      if ( single )
      {
        SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23850/*"{0}"*/, v33);
        return;
      }
    }
LABEL_27:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v31);
  v36 = this->fields.friendPointSummon;
  if ( !v36 )
    goto LABEL_27;
  multiPay = v36->fields.multiPay;
  if ( !multiPay )
    goto LABEL_27;
  numImg = multiPay->fields.numImg;
  gachaTime = this->fields.gachaTime;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_String__Format(
                                                          (System_String_o *)StringLiteral_17310/*"btn_txt_summon{0:00}"*/,
                                                          v39,
                                                          0LL);
  if ( !numImg )
    goto LABEL_27;
  UISprite__set_spriteName(numImg, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
  v41 = this->fields.friendPointSummon;
  if ( !v41 )
    goto LABEL_27;
  onePay = v41->fields.onePay;
  if ( !onePay )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    onePay->fields.infoLabel,
    this->fields.price,
    (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
    v40);
  v44 = this->fields.friendPointSummon;
  if ( !v44 )
    goto LABEL_27;
  v45 = v44->fields.multiPay;
  if ( !v45 )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    v45->fields.infoLabel,
    this->fields.gachaTime * this->fields.price,
    (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
    v43);
}


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
  if ( (byte_42EC90D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)label, price, format);
    byte_42EC90D = 1;
  }
  if ( (v6 & 0x80000000) != 0 )
    v6 = this->fields.price;
  v12 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_B5D69C(v10, v11);
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
  int32_t v16; // w24
  int32_t id; // w28
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

  v16 = warId;
  id = gachaId;
  summonType = gachaType;
  adjustStoryGachaIds = storyAdjustIds;
  v20 = gachaSubId;
  v21 = this;
  if ( (byte_42EC913 & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    v33 = ticketItemId;
    this = (SummonInfoControl_o *)sub_B5D5C4(&GachaRqParamData_TypeInfo, gachaType, gachaId, *(_QWORD *)&warId);
    ticketItemId = v33;
    v20 = gachaSubId;
    adjustStoryGachaIds = storyAdjustIds;
    byte_42EC913 = 1;
    if ( (summonType & 0x80000000) == 0 )
    {
LABEL_3:
      if ( (id & 0x80000000) == 0 )
        goto LABEL_4;
      goto LABEL_19;
    }
  }
  summonType = v21->fields.summonType;
  if ( (id & 0x80000000) == 0 )
  {
LABEL_4:
    if ( (v16 & 0x80000000) == 0 )
      goto LABEL_5;
    goto LABEL_21;
  }
LABEL_19:
  currentSummonData = v21->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_25;
  id = currentSummonData->fields.id;
  if ( (v16 & 0x80000000) == 0 )
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
  v16 = v35->fields.warId;
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
    sub_B5D69C(this, *(_QWORD *)&gachaType);
  }
LABEL_16:
  v25 = ticketItemId & ~(ticketItemId >> 31);
  v26 = (GachaRqParamData_o *)sub_B5D694(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_32419612(
    v26,
    summonType,
    id,
    v16,
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
  sub_B5D560(
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
    sub_B5D69C(this, method);
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


void __fastcall SummonInfoControl__SetSummonButtonsCollider(
        SummonInfoControl_o *this,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x20

  if ( (byte_42EC914 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__, onOff, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v9, v10, v11);
    sub_B5D5C4(&Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__, v12, v13, v14);
    sub_B5D5C4(&SummonInfoControl___c__DisplayClass149_0_TypeInfo, v15, v16, v17);
    byte_42EC914 = 1;
  }
  v18 = sub_B5D694(SummonInfoControl___c__DisplayClass149_0_TypeInfo);
  SummonInfoControl___c__DisplayClass149_0___ctor((SummonInfoControl___c__DisplayClass149_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)this,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        *(_BYTE *)(v18 + 24) = onOff,
        summonObjInfos = this->fields.summonObjInfos,
        v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v28,
          (Il2CppObject *)v18,
          Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__),
        !summonObjInfos) )
  {
    sub_B5D69C(v19, v20);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)v28,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void __fastcall SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v22; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_42EC900 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SummonInfoControl__SetSummonDispInfo_b__121_0__, v8, v9, v10);
    byte_42EC900 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v18);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL)) == 0LL )
  {
    sub_B5D69C(summonDetailInfo, v19);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL);
  *(_WORD *)&this->fields.isPayExUsePossible = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v22,
    (Il2CppObject *)this,
    Method_SummonInfoControl__SetSummonDispInfo_b__121_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v22, 0, 0LL);
  SummonInfoControl__SetUpSummonInfos(this, v23);
  SummonInfoControl__OffSetInfoBtn(this, v24);
}


// local variable allocation has failed, the output may be wrong!
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
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  System_String_o *v64; // x20
  SummonInfoControl___c_c *v65; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__143_0; // x25
  Il2CppObject *v68; // x26
  struct SummonInfoControl___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  SummonInfoControl_o *v77; // x20
  System_String_o *v78; // x20
  SummonInfoControl___c_c *v79; // x8
  struct SummonInfoControl___c_StaticFields *v80; // x9
  System_Func_char__string__o *_9__143_1; // x23
  Il2CppObject *v82; // x24
  struct SummonInfoControl___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_String_o *v91; // x20
  SummonInfoControl___c_c *v92; // x8
  struct SummonInfoControl___c_StaticFields *v93; // x9
  System_Func_char__string__o *_9__143_3; // x21
  Il2CppObject *v95; // x22
  struct SummonInfoControl___c_StaticFields *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  struct SummonInfoControl_SummonObjInfo_o *freeSummon; // x8
  UnityEngine_GameObject_o *v112; // x0
  const MethodInfo *v113; // x3
  UnityEngine_Object_o *v114; // x22
  UnityEngine_GameObject_o *v115; // x0
  const MethodInfo *v116; // x3
  UnityEngine_Object_o *v117; // x21
  UnityEngine_GameObject_o *v118; // x0
  const MethodInfo *v119; // x3
  UISprite_o *v120; // x23
  _BOOL8 v121; // x0
  System_String_o *v122; // x0
  Il2CppObject *stoneSummon; // x1
  System_String_o *v124; // x0
  int v125; // w21
  bool v126; // w1
  UnityEngine_GameObject_o *v127; // x0
  const MethodInfo *v128; // x3
  UnityEngine_Component_o *v129; // x24
  UnityEngine_GameObject_o *v130; // x0
  const MethodInfo *v131; // x3
  UnityEngine_Component_o *v132; // x23
  UnityEngine_GameObject_o *v133; // x0
  const MethodInfo *v134; // x3
  UISprite_o *v135; // x22
  UnityEngine_GameObject_o *v136; // x0
  const MethodInfo *v137; // x3
  UnityEngine_GameObject_o *v138; // x0
  const MethodInfo *v139; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v141; // x0
  System_String_o *v142; // x0
  System_String_o *v143; // x20
  SummonInfoControl___c_c *v144; // x8
  struct SummonInfoControl___c_StaticFields *v145; // x9
  System_Func_char__string__o *_9__143_2; // x23
  Il2CppObject *v147; // x24
  struct SummonInfoControl___c_StaticFields *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v158; // x0
  UnityEngine_GameObject_o *v159; // x0
  __int64 v160; // x0

  v12 = this;
  if ( (byte_42EC910 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)summonObjParts, isOnePay, isMulti);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_char__string___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_char__string___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_char__string__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__, v28, v29, v30);
    sub_B5D5C4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__, v31, v32, v33);
    sub_B5D5C4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__, v34, v35, v36);
    sub_B5D5C4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__, v37, v38, v39);
    sub_B5D5C4(&SummonInfoControl___c_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_17250/*"btn_txt_bonus_{0}_glow"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_21452/*"num2"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_21450/*"num1"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_8340/*"Item"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_21451/*"num1_glow"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_21453/*"num2_glow"*/, v58, v59, v60);
    this = (SummonInfoControl_o *)sub_B5D5C4(&StringLiteral_17249/*"btn_txt_bonus_{0}"*/, v61, v62, v63);
    byte_42EC910 = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v64 = System_Int32__ToString((int)v12 + 320, 0LL);
    v65 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v65 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v65->static_fields;
    _9__143_0 = static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)static_fields->__9;
      _9__143_0 = (System_Func_char__string__o *)sub_B5D694(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_0,
        v68,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__,
        (const MethodInfo_279D0E4 *)Method_System_Func_char__string___ctor__);
      v69 = SummonInfoControl___c_TypeInfo->static_fields;
      v69->__9__143_0 = _9__143_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v69->__9__143_0,
        (System_Int32_array **)_9__143_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                                                                 (System_Func_TSource__TResult__o *)_9__143_0,
                                                                 (const MethodInfo_1CB1290 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v76,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
    v77 = this;
    if ( !isMulti )
      goto LABEL_26;
  }
  else
  {
    v77 = 0LL;
    if ( !isMulti )
      goto LABEL_26;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v78 = System_Int32__ToString((int)v12 + 324, 0LL);
    v79 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v79 = SummonInfoControl___c_TypeInfo;
    }
    v80 = v79->static_fields;
    _9__143_1 = v80->__9__143_1;
    if ( !_9__143_1 )
    {
      if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        v80 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v82 = (Il2CppObject *)v80->__9;
      _9__143_1 = (System_Func_char__string__o *)sub_B5D694(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_1,
        v82,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__,
        (const MethodInfo_279D0E4 *)Method_System_Func_char__string___ctor__);
      v83 = SummonInfoControl___c_TypeInfo->static_fields;
      v83->__9__143_1 = _9__143_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v83->__9__143_1,
        (System_Int32_array **)_9__143_1,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
    }
    v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v78,
                                                                 (System_Func_TSource__TResult__o *)_9__143_1,
                                                                 (const MethodInfo_1CB1290 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v90,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
    v77 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v143 = System_Int32__ToString((int)v12 + 320, 0LL);
    v144 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v144 = SummonInfoControl___c_TypeInfo;
    }
    v145 = v144->static_fields;
    _9__143_2 = v145->__9__143_2;
    if ( !_9__143_2 )
    {
      if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v144);
        v145 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v147 = (Il2CppObject *)v145->__9;
      _9__143_2 = (System_Func_char__string__o *)sub_B5D694(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_2,
        v147,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__,
        (const MethodInfo_279D0E4 *)Method_System_Func_char__string___ctor__);
      v148 = SummonInfoControl___c_TypeInfo->static_fields;
      v148->__9__143_2 = _9__143_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v148->__9__143_2,
        (System_Int32_array **)_9__143_2,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
    }
    v155 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v143,
                                                                  (System_Func_TSource__TResult__o *)_9__143_2,
                                                                  (const MethodInfo_1CB1290 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v155,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v77 = this;
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
        GameObjectExtensions__SetLocalScale_32432652(gameObject, 0.9, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_151;
        v158 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v158, -6.0, 0LL);
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
        v159 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v159, 45.0, 0LL);
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
    v91 = System_Int32__ToString((int)v12 + 328, 0LL);
    v92 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v92 = SummonInfoControl___c_TypeInfo;
    }
    v93 = v92->static_fields;
    _9__143_3 = v93->__9__143_3;
    if ( !_9__143_3 )
    {
      if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v92);
        v93 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v95 = (Il2CppObject *)v93->__9;
      _9__143_3 = (System_Func_char__string__o *)sub_B5D694(System_Func_char__string__TypeInfo);
      System_Func_char__string____ctor(
        _9__143_3,
        v95,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__,
        (const MethodInfo_279D0E4 *)Method_System_Func_char__string___ctor__);
      v96 = SummonInfoControl___c_TypeInfo->static_fields;
      v96->__9__143_3 = _9__143_3;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v96->__9__143_3,
        (System_Int32_array **)_9__143_3,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
    }
    v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v91,
                                                                  (System_Func_TSource__TResult__o *)_9__143_3,
                                                                  (const MethodInfo_1CB1290 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v103,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v77 = this;
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
        v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v105, 42.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v106 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v106, -34.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_151;
        v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v107, 0.9, 0LL);
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
        v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v109, -60.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_151;
        v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v110, 0.9, 0LL);
      }
    }
  }
LABEL_58:
  if ( !v77 || (freeSummon = v77->fields.freeSummon) == 0LL )
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
    v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v127,
                                    v127,
                                    (System_String_o *)StringLiteral_21450/*"num1"*/,
                                    v128);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v129 = (UnityEngine_Component_o *)this;
    v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v130,
                                    v130,
                                    (System_String_o *)StringLiteral_21452/*"num2"*/,
                                    v131);
    if ( !v129 )
      goto LABEL_151;
    v132 = (UnityEngine_Component_o *)this;
    v133 = UnityEngine_Component__get_gameObject(v129, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v133,
                                    v133,
                                    (System_String_o *)StringLiteral_21451/*"num1_glow"*/,
                                    v134);
    if ( !v132 )
      goto LABEL_151;
    v135 = (UISprite_o *)this;
    v136 = UnityEngine_Component__get_gameObject(v132, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    (SummonInfoControl_o *)v136,
                                    v136,
                                    (System_String_o *)StringLiteral_21453/*"num2_glow"*/,
                                    v137);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v117 = (UnityEngine_Object_o *)this;
    v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    (SummonInfoControl_o *)v138,
                    v138,
                    (System_String_o *)StringLiteral_8340/*"Item"*/,
                    v139);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v129, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v132, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v135, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v121 = UnityEngine_Object__op_Inequality(v117, 0LL, 0LL);
          if ( v121 )
          {
            if ( LODWORD(v77->fields.freeSummon) )
            {
              v141 = System_String__Format(
                       (System_String_o *)StringLiteral_17249/*"btn_txt_bonus_{0}"*/,
                       (Il2CppObject *)v77->fields.friendPointSummon,
                       0LL);
              UISprite__set_spriteName((UISprite_o *)v129, v141, 0LL);
              if ( LODWORD(v77->fields.freeSummon) > 1 )
              {
                v142 = System_String__Format(
                         (System_String_o *)StringLiteral_17249/*"btn_txt_bonus_{0}"*/,
                         (Il2CppObject *)v77->fields.stoneSummon,
                         0LL);
                UISprite__set_spriteName((UISprite_o *)v132, v142, 0LL);
                if ( LODWORD(v77->fields.freeSummon) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17250/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v77->fields.friendPointSummon,
                                                  0LL);
                  if ( !v135 )
                    goto LABEL_151;
                  UISprite__set_spriteName(v135, (System_String_o *)this, 0LL);
                  if ( LODWORD(v77->fields.freeSummon) > 1 )
                  {
                    stoneSummon = (Il2CppObject *)v77->fields.stoneSummon;
                    v124 = (System_String_o *)StringLiteral_17250/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_79;
                  }
                }
              }
            }
LABEL_152:
            v160 = sub_B5D6C8(v121);
            sub_B5D668(v160, 0LL);
          }
        }
      }
    }
LABEL_82:
    v125 = 0;
    goto LABEL_83;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_151;
  v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  (SummonInfoControl_o *)v112,
                                  v112,
                                  (System_String_o *)StringLiteral_21450/*"num1"*/,
                                  v113);
  if ( !this )
    goto LABEL_151;
  v114 = (UnityEngine_Object_o *)this;
  v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  (SummonInfoControl_o *)v115,
                                  v115,
                                  (System_String_o *)StringLiteral_21451/*"num1_glow"*/,
                                  v116);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_151;
  v117 = (UnityEngine_Object_o *)this;
  v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.singleDigit, 0LL);
  v120 = SummonInfoControl__GetBonusSprite(
           (SummonInfoControl_o *)v118,
           v118,
           (System_String_o *)StringLiteral_8340/*"Item"*/,
           v119);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v120, 7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
    goto LABEL_82;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v121 = UnityEngine_Object__op_Inequality(v114, 0LL, 0LL);
  if ( !v121 )
    goto LABEL_82;
  if ( !LODWORD(v77->fields.freeSummon) )
    goto LABEL_152;
  v122 = System_String__Format(
           (System_String_o *)StringLiteral_17249/*"btn_txt_bonus_{0}"*/,
           (Il2CppObject *)v77->fields.friendPointSummon,
           0LL);
  UISprite__set_spriteName((UISprite_o *)v114, v122, 0LL);
  if ( !LODWORD(v77->fields.freeSummon) )
    goto LABEL_152;
  stoneSummon = (Il2CppObject *)v77->fields.friendPointSummon;
  v124 = (System_String_o *)StringLiteral_17250/*"btn_txt_bonus_{0}_glow"*/;
LABEL_79:
  this = (SummonInfoControl_o *)System_String__Format(v124, stoneSummon, 0LL);
  if ( !v117 )
    goto LABEL_151;
  UISprite__set_spriteName((UISprite_o *)v117, (System_String_o *)this, 0LL);
  v125 = 1;
LABEL_83:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_151;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v125 )
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
          v126 = 0;
          goto LABEL_94;
        }
      }
    }
LABEL_151:
    sub_B5D69C(this, summonObjParts);
  }
  if ( !v77 )
    goto LABEL_151;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, SLODWORD(v77->fields.freeSummon) < 2, 0LL);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_151;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  v126 = SLODWORD(v77->fields.freeSummon) > 1;
LABEL_94:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v126, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char *Instance; // x0
  __int64 v12; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v14; // x8
  char *v15; // x20
  __int64 v16; // x22
  char *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  int v21; // w8
  __int64 v22; // x0

  if ( (byte_42EC90F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EC90F = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !Instance )
    {
LABEL_31:
      sub_B5D69C(Instance, v12);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0LL);
    if ( Instance )
    {
      v14 = *((_QWORD *)Instance + 3);
      v15 = Instance;
      if ( v14 )
      {
        if ( (int)v14 >= 1 )
        {
          v16 = 0LL;
          v17 = Instance + 32;
          do
          {
            if ( (unsigned int)v16 >= (unsigned int)v14 )
            {
LABEL_32:
              v22 = sub_B5D6C8(Instance);
              sub_B5D668(v22, 0LL);
            }
            v18 = *(_QWORD *)&v17[8 * v16];
            if ( !v18 )
              goto LABEL_31;
            if ( *(_DWORD *)(v18 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v16 >= *((_DWORD *)v15 + 6) )
                goto LABEL_32;
              v19 = *(_QWORD *)&v17[8 * v16];
              if ( !v19 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v19 + 24), 0LL);
              if ( (unsigned int)v16 >= *((_DWORD *)v15 + 6) )
                goto LABEL_32;
              v20 = *(_QWORD *)&v17[8 * v16];
              if ( !v20 )
                goto LABEL_31;
              v21 = *(_DWORD *)(v20 + 20);
              switch ( v21 )
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
            LODWORD(v14) = *((_DWORD *)v15 + 6);
            ++v16;
          }
          while ( (int)v16 < (int)v14 );
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UIAtlas_o *Component_srcLineSprite; // x0
  __int64 v11; // x1

  if ( (byte_42EC91B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, (_DWORD)bannerAtlas, (_DWORD)imgName, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EC91B = 1;
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
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, imgName, 0LL),
          (Component_srcLineSprite = (UIAtlas_o *)this->fields.summonHistoryButton) == 0LL) )
    {
      sub_B5D69C(Component_srcLineSprite, v11);
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
    sub_B5D69C(this, 0LL);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_B5D560(
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


void __fastcall SummonInfoControl__SetSummonInfo_32757652(SummonInfoControl_o *this, const MethodInfo *method)
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
  GachaEntity_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t flag; // w21
  int32_t PayOneTimePrice; // w22
  SummonInfoControl_SummonInfo_o *v19; // x20
  int32_t drawNum2; // w21
  int32_t PayMultiTimePrice; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC90E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&SummonInfoControl_SummonInfo_TypeInfo, v11, v12, v13);
    byte_42EC90E = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_WarQuestSelectionMaster )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         currentSummonData->fields.id,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (GachaEntity_o *)entity;
    if ( !entity )
      goto LABEL_12;
    if ( entity->fields.priority < 1 )
    {
      v19 = 0LL;
    }
    else
    {
      flag = entity->fields.flag;
      PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
      v19 = (SummonInfoControl_SummonInfo_o *)sub_B5D694(SummonInfoControl_SummonInfo_TypeInfo);
      SummonInfoControl_SummonInfo___ctor(v19, flag, PayOneTimePrice, 1, 0LL);
      Master_WarQuestSelectionMaster = (GachaEntity_o *)entity;
      if ( !entity )
        goto LABEL_12;
    }
    if ( Master_WarQuestSelectionMaster->fields.shopId2 >= 1 )
    {
      drawNum2 = Master_WarQuestSelectionMaster->fields.drawNum2;
      PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(Master_WarQuestSelectionMaster, 0LL);
      v19 = (SummonInfoControl_SummonInfo_o *)sub_B5D694(SummonInfoControl_SummonInfo_TypeInfo);
      SummonInfoControl_SummonInfo___ctor(v19, drawNum2, PayMultiTimePrice, 2, 0LL);
    }
    if ( v19 )
    {
      this->fields.gachaTime = v19->fields.drawNum;
      this->fields.price = v19->fields.price;
      this->fields.shopIdIdx = v19->fields.shopIdIdx;
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
    sub_B5D69C(this, isEnable);
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
    sub_B5D69C(this, isEnable);
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
        sub_B5D69C(0LL, method);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x6
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  const MethodInfo *v22; // x6
  struct SummonInfoControl_SummonObjInfo_o *v23; // x8
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x1
  int gachaTime; // w8
  System_String_o *v27; // x20
  Il2CppObject *v28; // x0
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v31; // x4
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *v33; // x8
  int v34; // [xsp+Ch] [xbp-24h] BYREF

  v4 = payGachaEnt;
  v5 = this;
  if ( (byte_42EC908 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)payGachaEnt, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v6, v7, v8);
    this = (SummonInfoControl_o *)sub_B5D5C4(&StringLiteral_17310/*"btn_txt_summon{0:00}"*/, v9, v10, v11);
    byte_42EC908 = 1;
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
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_23850/*"{0}"*/, v12);
        v15 = v5->fields.stoneSummon;
        if ( v15 )
        {
          multiPay = v15->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v4, 0LL);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_23850/*"{0}"*/,
              v19);
            v21 = v5->fields.stoneSummon;
            if ( v21 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v21->fields.onePay, 1, 0, 0, 0, v20);
              v23 = v5->fields.stoneSummon;
              if ( v23 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v23->fields.multiPay, 0, 1, 0, 0, v22);
                SummonInfoControl__SetElevenBonusInfo(v5, v4, 0, v5->fields.stoneSummon, v5->fields.gachaTime, v24);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_32757652(v5, v25);
  gachaTime = v5->fields.gachaTime;
  v27 = (System_String_o *)StringLiteral_17310/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v34 = gachaTime;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  this = (SummonInfoControl_o *)System_String__Format(v27, v28, 0LL);
  v29 = v5->fields.stoneSummon;
  if ( !v29 )
    goto LABEL_21;
  single = v29->fields.single;
  if ( !single )
    goto LABEL_21;
  payGachaEnt = (GachaEntity_o *)this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)payGachaEnt, 0LL);
  v32 = v5->fields.stoneSummon;
  if ( !v32 )
    goto LABEL_21;
  v33 = v32->fields.single;
  if ( !v33 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v33->fields.infoLabel, -1, (System_String_o *)StringLiteral_23850/*"{0}"*/, v31);
}


void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v15; // x4
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *v17; // x8
  struct SummonInfoControl_SummonObjInfo_o *v18; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x6
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  const MethodInfo *v25; // x5

  if ( (byte_42EC907 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, (_DWORD)payGachaEnt, ticketNum, method);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v7, v8, v9);
    byte_42EC907 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_23850/*"{0}"*/, v12);
  v16 = this->fields.ticketSummon;
  if ( !v16 )
    goto LABEL_12;
  v17 = v16->fields.onePay;
  if ( !v17
    || (SummonInfoControl__SetPriceText(
          this,
          v17->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
          v15),
        (v18 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v18->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_23850/*"{0}"*/, v22),
        (v24 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(v10, v11);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v24->fields.multiPay, 0, 1, 0, 0, v23);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v25);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v13; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC906 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, (_DWORD)ticketNum, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42EC906 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
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
      v13 = entity->fields.num > 0;
LABEL_13:
      num = entity->fields.num;
      result = v13;
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(Master_WarQuestSelectionMaster, v10);
  }
  v13 = 0;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  _BOOL4 v17; // w21
  __int64 v18; // x8
  const MethodInfo *v19; // x6
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  int32_t v21; // w9
  const MethodInfo *v22; // x4
  struct SummonInfoControl_SummonObjInfo_o *v23; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v25; // x4
  struct SummonInfoControl_SummonObjInfo_o *v26; // x8
  struct SummonInfoControl_SummonObjParts_o *v27; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC905 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)payGachaEnt, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v9, v10, v11);
    byte_42EC905 = 1;
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
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserServantMaster__getCountWithoutMaterial(
                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                  &servantEquipSum[1],
                                                                  servantEquipSum,
                                                                  0LL);
  if ( !payGachaEnt )
    goto LABEL_23;
  v17 = haveStoneNum >= userFreeStone || (int)Master_WarQuestSelectionMaster > 10;
  v18 = 64LL;
  if ( v17 )
    v18 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v18);
  Master_WarQuestSelectionMaster = v17
                                 ? (WarQuestSelectionMaster_o *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL)
                                 : (WarQuestSelectionMaster_o *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
  v20 = this->fields.stoneSummon;
  v21 = v17 ? 2 : 1;
  this->fields.price = (int)Master_WarQuestSelectionMaster;
  this->fields.shopIdIdx = v21;
  if ( !v20
    || (SummonInfoControl__SetSummonGiftDisp(this, v20->fields.single, 0, 1, 0, 0, v19),
        (v23 = this->fields.stoneSummon) == 0LL)
    || (single = v23->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23850/*"{0}"*/, v22),
        (v26 = this->fields.stoneSummon) == 0LL)
    || (v27 = v26->fields.single) == 0LL )
  {
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v13);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_WarQuestSelectionMaster,
    this->fields.gachaTime,
    v27->fields.numImg,
    v27->fields.bonusInfo,
    v25);
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
      sub_B5D69C(SelfUserGame, v5);
    this->fields.haveStoneNum = entity->fields.stone;
    this->fields._HaveFreeStoneNum_k__BackingField = v6->fields.freeStone;
    this->fields._HaveChargeStoneNum_k__BackingField = v6->fields.chargeStone;
  }
}


GachaEntity_o *__fastcall SummonInfoControl__get_CurrentGachaEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonInfoControl_o *v4; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v4 = this;
  if ( (byte_42EC8FD & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_B5D5C4(
                                    &Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__,
                                    (_DWORD)method,
                                    v2,
                                    v3);
    byte_42EC8FD = 1;
  }
  currentSummonData = v4->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v4->fields.gachaMaster) == 0LL )
    sub_B5D69C(this, method);
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  GachaRqParamData_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  SummonInfoControl_ClickDelegate_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(GachaRqParamData_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  GachaRqParamData_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  SummonInfoControl_ClickDelegate_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, paramData, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = paramData->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(paramData, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(paramData, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(paramData, class_0, v9, v11);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v15)(paramData, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(paramData, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, paramData, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v23)(
                v31,
                paramData,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v31
                                                                              + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                              + 312))(
                v31,
                paramData,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v32)(v31, paramData, v30);
    }
  }
}


void __fastcall SummonInfoControl_InfoButtonLayout___ctor(
        SummonInfoControl_InfoButtonLayout_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712LL;
  *(_OWORD *)&this->fields.Top.fields.x = xmmword_32A05A0;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SummonInfoControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6477 & 1) == 0 )
  {
    sub_B5D5C4(&SummonInfoControl___c_TypeInfo, v1, v2, v3);
    byte_42E6477 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SummonInfoControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonInfoControl___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_42E6479 & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6479 = 1;
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
    sub_B5D69C(this, x);
  }
}


void __fastcall SummonInfoControl___c___OffSetInfoBtn_b__123_0(
        SummonInfoControl___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42E6478 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FSOffset___, (_DWORD)obj, (_DWORD)method, v3);
    this = (SummonInfoControl___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6478 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
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
    sub_B5D69C(this, obj);
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
    sub_B5D69C(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, v5->fields.onOff, 0LL);
}