void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonInfoControl_c *v2; // x8

  if ( (byte_40FD492 & 1) == 0 )
  {
    sub_B16FFC(&SummonInfoControl_TypeInfo, v1);
    byte_40FD492 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1

  if ( (byte_40FD474 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo, v7);
    byte_40FD474 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v8 )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.freeSummon,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.friendPointSummon,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.stoneSummon,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.ticketSummon,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.chargeSummon,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.oneExSummon,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.summonObjInfos,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SummonInfoControl__InitMasterData(this, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40FD48F & 1) == 0 )
  {
    sub_B16FFC(&Method_SummonInfoControl_ClickBase__, *(_QWORD *)&seKind);
    byte_40FD48F = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.animationCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0LL);
}


UISprite_o *__fastcall SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD487 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    byte_40FD487 = 1;
  }
  if ( !obj
    || (transform = UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (v7 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, targetName, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(v7, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         gameObject,
                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B170D4();
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
  ConstantMaster_o *v15; // x20

  if ( (byte_40FD475 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_14684, v5);
    sub_B16FFC(&StringLiteral_13404, v6);
    byte_40FD475 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = Master_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gachaMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v14 )
    sub_B170D4();
  v15 = v14;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(v14, (System_String_o *)StringLiteral_13404, 0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v15, (System_String_o *)StringLiteral_14684, 0LL);
}


void __fastcall SummonInfoControl__InitStoneSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UserGameEntity_o *usrData; // x8

  SummonInfoControl__InitSummonBtnDisp(this, method);
  SummonInfoControl__SetSummonButtonsCollider(this, 1, v3);
  usrData = this->fields.usrData;
  if ( !usrData )
    sub_B170D4();
  this->fields.haveStoneNum = usrData->fields.stone;
  this->fields._HaveFreeStoneNum_k__BackingField = usrData->fields.freeStone;
  this->fields._HaveChargeStoneNum_k__BackingField = usrData->fields.chargeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x20
  SummonInfoControl___c_c *v11; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__124_0; // x21
  Il2CppObject *v14; // x22
  struct SummonInfoControl___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD478 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__, method);
    sub_B16FFC(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v7);
    sub_B16FFC(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__, v8);
    sub_B16FFC(&SummonInfoControl___c_TypeInfo, v9);
    byte_40FD478 = 1;
  }
  summonObjInfos = this->fields.summonObjInfos;
  v11 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v11 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__124_0;
  if ( !_9__124_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__124_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_SummonInfoControl_SummonObjInfo__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__124_0,
      v14,
      Method_SummonInfoControl___c__InitSummonBtnDisp_b__124_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__);
    v15 = SummonInfoControl___c_TypeInfo->static_fields;
    v15->__9__124_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__124_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__124_0,
      (System_Int32_array **)_9__124_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !summonObjInfos )
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)_9__124_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


void __fastcall SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  SummonInfoControl_c *v9; // x0
  TweenAlpha_o *v10; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FD48C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&SummonInfoControl_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5918, v7);
    byte_40FD48C = 1;
  }
  if ( !target )
    goto LABEL_17;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              target,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
    Component_srcLineSprite,
    Component_srcLineSprite->klass[1]._1.declaringType,
    0.0);
  v9 = SummonInfoControl_TypeInfo;
  if ( (BYTE3(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v9 = SummonInfoControl_TypeInfo;
  }
  v10 = TweenAlpha__Begin(target, v9->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
  {
    if ( v10 )
    {
      v10->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B16F98((BattleServantConfConponent_o *)&v10->fields.eventReceiver, gameObject, v12, v13, v14, v15, v16, v17);
      v18 = (System_Int32_array **)StringLiteral_5918;
      v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5918;
      sub_B16F98((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v18, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SummonInfoControl___c_c *v10; // x0
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__123_0; // x20
  Il2CppObject *v13; // x21
  struct SummonInfoControl___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SummonInfoControl_InfoButtonLayout_o *infoButtonLayout; // x8
  UnityEngine_Component_o *summonHelpInfo; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x21
  bool activeSelf; // w0
  struct SummonInfoControl_InfoButtonLayout_o *v29; // x8
  __int64 v30; // x9
  __int64 v31; // x10
  __int64 v32; // x11
  UnityEngine_Component_o *summonHistoryButton; // x0
  UnityEngine_Transform_o *v34; // x0
  struct SummonInfoControl_InfoButtonLayout_o *v35; // x8
  UnityEngine_Component_o *v36; // x0
  System_Uri_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  System_Uri_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  System_Uri_o *v41; // x1
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD477 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject__Invoke__, method);
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, v6);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v7);
    sub_B16FFC(&Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__, v8);
    sub_B16FFC(&SummonInfoControl___c_TypeInfo, v9);
    byte_40FD477 = 1;
  }
  v10 = SummonInfoControl___c_TypeInfo;
  if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v10 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_GameObject__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__123_0,
      v13,
      Method_SummonInfoControl___c__OffSetInfoBtn_b__123_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
    v14 = SummonInfoControl___c_TypeInfo->static_fields;
    v14->__9__123_0 = (struct System_Action_GameObject__o *)_9__123_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_activeSelf(summonDetailInfo, 0LL) )
  {
    v22 = this->fields.summonDetailInfo;
    if ( !v22 )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform(v22, 0LL);
    infoButtonLayout = this->fields.infoButtonLayout;
    if ( !infoButtonLayout || !transform )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition(transform, infoButtonLayout->fields.Center, 0LL);
  }
  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo )
    goto LABEL_37;
  v26 = UnityEngine_Component__get_transform(summonHelpInfo, 0LL);
  if ( !this->fields.summonDetailInfo )
    goto LABEL_37;
  v27 = v26;
  activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.summonDetailInfo, 0LL);
  v29 = this->fields.infoButtonLayout;
  if ( !v29 || !v27 )
    goto LABEL_37;
  v30 = 36LL;
  if ( activeSelf )
    v30 = 24LL;
  v31 = activeSelf ? 20LL : 32LL;
  v32 = activeSelf ? 16LL : 28LL;
  v42.fields.y = *(float *)((char *)&v29->klass + v31);
  v42.fields.x = *(float *)((char *)&v29->klass + v32);
  v42.fields.z = *(float *)((char *)&v29->klass + v30);
  UnityEngine_Transform__set_localPosition(v27, v42, 0LL);
  summonHistoryButton = (UnityEngine_Component_o *)this->fields.summonHistoryButton;
  if ( !summonHistoryButton )
    goto LABEL_37;
  v34 = UnityEngine_Component__get_transform(summonHistoryButton, 0LL);
  v35 = this->fields.infoButtonLayout;
  if ( !v35 )
    goto LABEL_37;
  if ( !v34 )
    goto LABEL_37;
  UnityEngine_Transform__set_localPosition(v34, v35->fields.Buttom, 0LL);
  v36 = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !v36
    || (gameObject = (System_Uri_o *)UnityEngine_Component__get_gameObject(v36, 0LL), !_9__123_0)
    || (System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          gameObject,
          (const MethodInfo_24B7324 *)Method_System_Action_GameObject__Invoke__),
        (v38 = this->fields.summonDetailInfo) == 0LL)
    || (v39 = (System_Uri_o *)UnityEngine_GameObject__get_gameObject(v38, 0LL),
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)_9__123_0,
          v39,
          (const MethodInfo_24B7324 *)Method_System_Action_GameObject__Invoke__),
        (v40 = (UnityEngine_Component_o *)this->fields.summonHistoryButton) == 0LL) )
  {
LABEL_37:
    sub_B170D4();
  }
  v41 = (System_Uri_o *)UnityEngine_Component__get_gameObject(v40, 0LL);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)_9__123_0,
    v41,
    (const MethodInfo_24B7324 *)Method_System_Action_GameObject__Invoke__);
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
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v22; // x20

  if ( (byte_40FD490 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SummonInfoControl_OnClickDetail__, v6);
    sub_B16FFC(&WebViewManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15307, v8);
    byte_40FD490 = 1;
  }
  v9 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B17004(Method_SummonInfoControl_OnClickDetail__);
  v10 = (System_Reflection_MethodBase_o *)sub_B16FE0(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B170D4();
  id = currentSummonData->fields.id;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15307, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v22 = v20;
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView(v22, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x20
  BalanceConfig_c *v5; // x8
  __int16 v6; // w9
  int v7; // w10
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t *p_AftFreeDrawNum; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD48D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FD48D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v5 = BalanceConfig_TypeInfo;
  v6 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v6 & 0x400) != 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
      v6 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v7 = v6 & 0x400;
  }
  else
  {
    v7 = 0;
  }
  static_fields = v5->static_fields;
  if ( Time >= static_fields->DrawNumChangeTime )
  {
    if ( v7 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->AftFreeDrawNum;
    if ( !this )
LABEL_22:
      sub_B170D4();
  }
  else
  {
    if ( v7 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->BefFreeDrawNum;
    if ( !this )
      goto LABEL_22;
  }
  SummonInfoControl__SetRequestData(this, -1, -1, -1, *p_AftFreeDrawNum, -1, -1, -1, -1, 0LL, 0, 0LL, v11);
  SummonInfoControl__ClickBase(this, 0, v10);
}


void __fastcall SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct GachaRqParamData_o *requestData; // x8
  struct GachaRqParamData_o *v5; // x8
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct GachaRqParamData_o *v7; // x9
  const MethodInfo *v8; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0LL, 0, 0LL, v8);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (requestData->fields.gachaType = 5, (v5 = this->fields.requestData) == 0LL)
      || (v5->fields.gachaResourceNum = this->fields.gachaTime,
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || (v7 = this->fields.requestData) == 0LL )
    {
      sub_B170D4();
    }
    v7->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v3);
}


void __fastcall SummonInfoControl__OnClickMultiPayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v4; // x1
  GachaEntity_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0LL),
        (v5 = SummonInfoControl__get_CurrentGachaEntity(this, v4)) == 0LL) )
  {
    sub_B170D4();
  }
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    v5->fields.drawNum2,
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
  struct VaildGachaInfo_o *currentSummonData; // x9
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  if ( (byte_40FD48E & 1) == 0 )
  {
    sub_B16FFC(&Method_SummonInfoControl_OnClickSinglePayExGacha__, method);
    byte_40FD48E = 1;
  }
  if ( this->fields.isPayExUsePossible )
  {
    currentSummonData = this->fields.currentSummonData;
    this->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_B170D4();
    SummonInfoControl__SetRequestData(
      this,
      currentSummonData->fields.appendPayType,
      -1,
      -1,
      currentSummonData->fields.appendDrawNum,
      1,
      currentSummonData->fields.appendShopIdIndex,
      -1,
      -1,
      0LL,
      1,
      0LL,
      v7);
    SummonInfoControl__ClickBase(this, 0, v4);
  }
  else
  {
    v5 = Method_SummonInfoControl_OnClickSinglePayExGacha__;
    if ( (*((_BYTE *)Method_SummonInfoControl_OnClickSinglePayExGacha__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
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
  const MethodInfo *v18; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8

  p_animationCallback = (BattleServantConfConponent_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_B16F98(
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
        sub_B170D4();
      SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v18);
    }
  }
  else
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_B16F98(p_animationCallback, 0LL, (System_String_array **)v10, v11, v12, v13, v14, v15);
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
  UnityEngine_Collider_o *Component_srcLineSprite; // x0

  if ( (byte_40FD48B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, button);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FD48B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)button, 0LL, 0LL) )
  {
    if ( !button
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL
      || (Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                gameObject,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Collider__set_enabled(Component_srcLineSprite, onOff, 0LL);
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
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0

  if ( !summonInfo
    || (onePay = summonInfo->fields.onePay) == 0LL
    || (button = (UnityEngine_Component_o *)onePay->fields.button) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(button, 0LL),
        GameObjectExtensions__SetLocalPositionX(gameObject, onePayX, 0LL),
        (multiPay = summonInfo->fields.multiPay) == 0LL)
    || (v12 = (UnityEngine_Component_o *)multiPay->fields.button) == 0LL )
  {
    sub_B170D4();
  }
  v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
  GameObjectExtensions__SetLocalPositionX(v13, multiPayX, 0LL);
}


void __fastcall SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v12; // x4
  struct SummonInfoControl_SummonObjInfo_o *v13; // x8
  struct SummonInfoControl_SummonObjParts_o *v14; // x8
  struct UserGameEntity_o *usrData; // x9
  SummonInfoControl_o *v16; // x0
  const MethodInfo *v17; // x4
  struct SummonInfoControl_SummonObjInfo_o *v18; // x8
  struct SummonInfoControl_SummonObjParts_o *v19; // x8
  const MethodInfo *v20; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  bool HasFlag; // w0
  bool v23; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *Empty; // x1
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  UnityEngine_Component_o *numImg; // x0
  UnityEngine_GameObject_o *v30; // x0
  float v31; // s0
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *v33; // x8
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *v35; // x0
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *v37; // x8
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  const MethodInfo *v40; // x6
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8

  if ( (byte_40FD482 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&string_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_23445, v4);
    sub_B16FFC(&StringLiteral_12363, v5);
    sub_B16FFC(&StringLiteral_23395, v6);
    byte_40FD482 = 1;
  }
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v7);
  SummonInfoControl__SetSummonInfo_31121664(this, v8);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_33;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_23445, v9);
  v13 = this->fields.chargeSummon;
  if ( !v13 )
    goto LABEL_33;
  v14 = v13->fields.multiPay;
  if ( !v14 )
    goto LABEL_33;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_33;
  SummonInfoControl__SetPriceText(
    this,
    v14->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_23395,
    v12);
  v18 = this->fields.chargeSummon;
  if ( !v18
    || (v19 = v18->fields.multiPay) == 0LL
    || (SummonInfoControl__SetElevenBonusInfoSingle(
          v16,
          this->fields.gachaTime,
          v19->fields.numImg,
          v19->fields.bonusInfo,
          v17),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v20)) == 0LL)
    || (HasFlag = GachaEntity__HasFlag(CurrentGachaEntity, 8, 0LL), !this->fields.bonusSelectLabel)
    || (v23 = HasFlag,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                        0LL)) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, v23, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( v23 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12363, 0LL);
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
  v27 = this->fields.chargeSummon;
  if ( !v27 )
    goto LABEL_33;
  v28 = v27->fields.multiPay;
  if ( !v28 )
    goto LABEL_33;
  numImg = (UnityEngine_Component_o *)v28->fields.numImg;
  if ( !numImg )
    goto LABEL_33;
  v30 = UnityEngine_Component__get_gameObject(numImg, 0LL);
  v31 = 0.0;
  if ( v23 )
    v31 = -3.0;
  GameObjectExtensions__SetLocalPositionY(v30, v31, 0LL);
  v32 = this->fields.chargeSummon;
  if ( !v32 )
    goto LABEL_33;
  v33 = v32->fields.multiPay;
  if ( !v33 )
    goto LABEL_33;
  button = (UnityEngine_Component_o *)v33->fields.button;
  if ( !button )
    goto LABEL_33;
  v35 = UnityEngine_Component__get_gameObject(button, 0LL);
  GameObjectExtensions__SetLocalScale_27422188(v35, 1.0, 1.0, 0LL);
  v36 = this->fields.chargeSummon;
  if ( !v36 )
    goto LABEL_33;
  v37 = v36->fields.multiPay;
  if ( !v37 )
    goto LABEL_33;
  v38 = (UnityEngine_Component_o *)v37->fields.button;
  if ( !v38 )
    goto LABEL_33;
  v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
  GameObjectExtensions__SetLocalPositionY(v39, 0.0, 0LL);
  v41 = this->fields.chargeSummon;
  if ( !v41 )
    goto LABEL_33;
  SummonInfoControl__SetSummonGiftDisp(this, v41->fields.multiPay, 0, 1, 0, 1, v40);
}


void __fastcall SummonInfoControl__SetCurrentSummonInfo(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        bool isSingle,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x22
  SummonInfoControl_SummonObjInfo_Fields *p_fields; // x23
  UnityEngine_GameObject_o **p_multiSummonInfo; // x21
  UnityEngine_Object_o *v10; // x22
  struct UnityEngine_GameObject_o *multiSummonInfo; // t1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_GameObject_o **v18; // x8
  struct UnityEngine_GameObject_o *v19; // x1

  if ( (byte_40FD488 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, summonObjInfo);
    byte_40FD488 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_21;
  p_fields = &summonObjInfo->fields;
  singleSummonInfo = (UnityEngine_Object_o *)summonObjInfo->fields.singleSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0LL, 0LL) )
  {
    if ( !p_fields->singleSummonInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(p_fields->singleSummonInfo, isSingle, 0LL);
  }
  multiSummonInfo = summonObjInfo->fields.multiSummonInfo;
  p_multiSummonInfo = &summonObjInfo->fields.multiSummonInfo;
  v10 = (UnityEngine_Object_o *)multiSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    if ( !*p_multiSummonInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(*p_multiSummonInfo, !isSingle, 0LL);
  }
  v18 = isSingle ? (struct UnityEngine_GameObject_o **)p_fields : p_multiSummonInfo;
  if ( !this )
LABEL_21:
    sub_B170D4();
  v19 = *v18;
  this->fields.currentBtnInfo = *v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentBtnInfo,
    (System_Int32_array **)v19,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
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
  System_String_o *v28; // x0
  UnityEngine_Component_o *bonusInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bonusCount; // x0
  int32_t extraGroupId1; // w23
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  WebViewManager_o *Instance; // x0
  UserGachaExtraCountMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ExtraCount; // w0
  struct SummonInfoControl_SummonObjParts_o *v41; // x8
  int32_t v42; // w23
  UISprite_o *v43; // x23
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UISprite_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UIWidget_o *v51; // x0
  UISprite_o *v52; // x0
  UIButton_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UISprite_o *v59; // x0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UIWidget_o *v62; // x0
  struct SummonInfoControl_SummonObjParts_o *v63; // x8
  UISprite_o *v64; // x24
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  UnityEngine_Component_o *singleDigit; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Component_o *doubleDigits; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Component_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Component_o *remaining; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  const MethodInfo *v79; // x3
  UISprite_o *BonusSprite; // x24
  int v81; // w27
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  const MethodInfo *v85; // x3
  UISprite_o *v86; // x23
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UnityEngine_Component_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_Component_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UISprite_o *buttonImg; // x0
  System_String_o **v94; // x23
  UIButton_o *button; // x0
  SummonInfoControl_o *v96; // x0
  const MethodInfo *v97; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UnityEngine_Component_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  int v101; // [xsp+8h] [xbp-48h] BYREF
  int32_t v102; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FD47F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, ent);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_16971, v13);
    sub_B16FFC(&StringLiteral_16957, v14);
    sub_B16FFC(&StringLiteral_16956, v15);
    sub_B16FFC(&StringLiteral_16972, v16);
    sub_B16FFC(&StringLiteral_16975, v17);
    sub_B16FFC(&StringLiteral_17034, v18);
    sub_B16FFC(&StringLiteral_16973, v19);
    sub_B16FFC(&StringLiteral_21084, v20);
    sub_B16FFC(&StringLiteral_16958, v21);
    sub_B16FFC(&StringLiteral_21085, v22);
    sub_B16FFC(&StringLiteral_16974, v23);
    byte_40FD47F = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v102 = oneCount;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  v28 = System_String__Format((System_String_o *)StringLiteral_17034, v27, 0LL);
  if ( !numImg )
    goto LABEL_93;
  UISprite__set_spriteName(numImg, v28, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  bonusInfo = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
  if ( !bonusInfo )
    goto LABEL_93;
  gameObject = UnityEngine_Component__get_gameObject(bonusInfo, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  if ( !ent )
    goto LABEL_93;
  if ( !*p_onePay )
    goto LABEL_93;
  bonusCount = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusCount;
  if ( !bonusCount )
    goto LABEL_93;
  extraGroupId1 = ent->fields.extraGroupId1;
  v33 = UnityEngine_Component__get_gameObject(bonusCount, 0LL);
  if ( !v33 )
    goto LABEL_93;
  if ( !extraGroupId1 )
  {
    UnityEngine_GameObject__SetActive(v33, 0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    v55 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
    if ( !v55 )
      goto LABEL_93;
    v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
    if ( !v56 )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive(v56, 0, 0LL);
    if ( ticket )
      goto LABEL_87;
    goto LABEL_42;
  }
  UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v34 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusCount;
  if ( !v34 )
    goto LABEL_93;
  v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
  GameObjectExtensions__SetLocalPositionY(v35, 30.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v36 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
  if ( !v36 )
    goto LABEL_93;
  v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
  if ( !v37 )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_WarQuestSelectionMaster = (UserGachaExtraCountMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_93;
  ExtraCount = UserGachaExtraCountMaster__getExtraCount(
                 MasterData_WarQuestSelectionMaster,
                 ent->fields.extraGroupId1,
                 0LL);
  v41 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v42 = ExtraCount;
  if ( ExtraCount != 9 )
  {
    v59 = v41->fields.bonusInfo;
    if ( !v59 )
      goto LABEL_93;
    UISprite__set_spriteName(v59, (System_String_o *)StringLiteral_16971, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    v60 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
    if ( !v60 )
      goto LABEL_93;
    v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
    GameObjectExtensions__SetLocalPosition_27419968(v61, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    v62 = (UIWidget_o *)(*p_onePay)->fields.bonusInfo;
    if ( !v62 )
      goto LABEL_93;
    UIWidget__SetDimensions(v62, 244, 38, 0LL);
    v63 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      singleDigit = (UnityEngine_Component_o *)v63->fields.singleDigit;
      if ( !singleDigit )
        goto LABEL_93;
      v68 = UnityEngine_Component__get_gameObject(singleDigit, 0LL);
      if ( !v68 )
        goto LABEL_93;
      if ( UnityEngine_GameObject__get_activeSelf(v68, 0LL) )
        goto LABEL_96;
      if ( !*p_onePay )
        goto LABEL_93;
      doubleDigits = (UnityEngine_Component_o *)(*p_onePay)->fields.doubleDigits;
      if ( !doubleDigits )
        goto LABEL_93;
      v70 = UnityEngine_Component__get_gameObject(doubleDigits, 0LL);
      if ( !v70 )
        goto LABEL_93;
      if ( UnityEngine_GameObject__get_activeSelf(v70, 0LL) )
      {
LABEL_96:
        if ( !*p_onePay )
          goto LABEL_93;
        v71 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusCount;
        if ( !v71 )
          goto LABEL_93;
        v72 = UnityEngine_Component__get_gameObject(v71, 0LL);
        if ( !v72 )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive(v72, 0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        remaining = (UnityEngine_Component_o *)(*p_onePay)->fields.remaining;
        if ( !remaining )
          goto LABEL_93;
        v74 = UnityEngine_Component__get_gameObject(remaining, 0LL);
        if ( !v74 )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive(v74, 1, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        v75 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
        if ( !v75 )
          goto LABEL_93;
        v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
        GameObjectExtensions__SetLocalPositionX(v76, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        v77 = (UnityEngine_Component_o *)(*p_onePay)->fields.remaining;
        if ( !v77 )
          goto LABEL_93;
        v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        (SummonInfoControl_o *)v78,
                        v78,
                        (System_String_o *)StringLiteral_21084,
                        v79);
        v81 = 9 - v42;
        v102 = 9 - v42;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
        v83 = System_String__Format((System_String_o *)StringLiteral_16974, v82, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, v83, 0LL);
        v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v86 = SummonInfoControl__GetBonusSprite(
                (SummonInfoControl_o *)v84,
                v84,
                (System_String_o *)StringLiteral_21085,
                v85);
        v101 = v81;
        v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
        v88 = System_String__Format((System_String_o *)StringLiteral_16975, v87, 0LL);
        if ( !v86 )
          goto LABEL_93;
        UISprite__set_spriteName(v86, v88, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        v89 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
        if ( !v89 )
          goto LABEL_93;
        v90 = UnityEngine_Component__get_gameObject(v89, 0LL);
        GameObjectExtensions__SetLocalScaleX(v90, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        v91 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
        if ( !v91 )
          goto LABEL_93;
        v92 = UnityEngine_Component__get_gameObject(v91, 0LL);
        GameObjectExtensions__SetLocalPositionX(v92, -29.7, 0LL);
        goto LABEL_79;
      }
      if ( !*p_onePay )
        goto LABEL_93;
      v99 = (UnityEngine_Component_o *)(*p_onePay)->fields.remaining;
      if ( !v99 )
        goto LABEL_93;
      v100 = UnityEngine_Component__get_gameObject(v99, 0LL);
      if ( !v100 )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive(v100, 0, 0LL);
      v63 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    v64 = v63->fields.bonusCount;
    v102 = 9 - v42;
    v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
    v66 = System_String__Format((System_String_o *)StringLiteral_16973, v65, 0LL);
    if ( !v64 )
      goto LABEL_93;
    UISprite__set_spriteName(v64, v66, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      buttonImg = (*p_onePay)->fields.buttonImg;
      v94 = (System_String_o **)(ticket ? &StringLiteral_16958 : &StringLiteral_16956);
      if ( buttonImg )
      {
        UISprite__set_spriteName(buttonImg, *v94, 0LL);
        if ( *p_onePay )
        {
          button = (*p_onePay)->fields.button;
          if ( button )
          {
            UIButton__set_normalSprite(button, *v94, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_B170D4();
  }
  v43 = v41->fields.numImg;
  v102 = 2;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  v45 = System_String__Format((System_String_o *)StringLiteral_17034, v44, 0LL);
  if ( !v43 )
    goto LABEL_93;
  UISprite__set_spriteName(v43, v45, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v46 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusCount;
  if ( !v46 )
    goto LABEL_93;
  v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
  if ( !v47 )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(v47, 0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v48 = (*p_onePay)->fields.bonusInfo;
  if ( !v48 )
    goto LABEL_93;
  UISprite__set_spriteName(v48, (System_String_o *)StringLiteral_16972, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v49 = (UnityEngine_Component_o *)(*p_onePay)->fields.bonusInfo;
  if ( !v49 )
    goto LABEL_93;
  v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v50, 0.0, -35.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v51 = (UIWidget_o *)(*p_onePay)->fields.bonusInfo;
  if ( !v51 )
    goto LABEL_93;
  UIWidget__SetDimensions(v51, 208, 38, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v52 = (*p_onePay)->fields.buttonImg;
  if ( !v52 )
    goto LABEL_93;
  UISprite__set_spriteName(v52, (System_String_o *)StringLiteral_16957, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  v53 = (*p_onePay)->fields.button;
  if ( !v53 )
    goto LABEL_93;
  UIButton__set_normalSprite(v53, (System_String_o *)StringLiteral_16957, 0LL);
  if ( !ticket )
  {
LABEL_42:
    if ( *p_onePay )
    {
      v57 = (UnityEngine_Component_o *)(*p_onePay)->fields.remaining;
      if ( v57 )
      {
        v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
        if ( v58 )
        {
          UnityEngine_GameObject__SetActive(v58, 0, 0LL);
          goto LABEL_87;
        }
      }
    }
    goto LABEL_93;
  }
LABEL_87:
  SummonInfoControl__SetOneTimeExButton(this, ent, ticket, v54);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    v96,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v97);
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
  System_String_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD480 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&multiCount);
    sub_B16FFC(&System_Math_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16970, v9);
    sub_B16FFC(&StringLiteral_17034, v10);
    byte_40FD480 = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_44418752(multiCount, 11, 0LL);
  v15 = v11;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = System_String__Format((System_String_o *)StringLiteral_17034, v12, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, v13, 0LL), !multiBonusInfo)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)multiBonusInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, v11 > 10, 0LL);
  if ( v11 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_16970, 0LL);
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
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_Component_o *summonHistoryButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  UnityEngine_GameObject_o *singleSummonInfo; // x0
  bool v18; // w1

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_B16F98(
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
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v12);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, isEnable, 0LL),
        (summonHistoryButton = (UnityEngine_Component_o *)this->fields.summonHistoryButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(summonHistoryButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, isEnable, 0LL), (oneExSummon = this->fields.oneExSummon) == 0LL)
    || (singleSummonInfo = oneExSummon->fields.singleSummonInfo) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  v18 = this->fields.isDispPayExSummon && isEnable;
  UnityEngine_GameObject__SetActive(singleSummonInfo, v18, 0LL);
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
  bool v13; // w0
  bool v14; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x1
  const MethodInfo *v21; // x1
  UnityEngine_GameObject_o *freeSummonCampaignNeedInfo; // x0
  UnityEngine_GameObject_o *v23; // x0
  UILabel_o *freeSummonCampaignNeedNum; // x0
  int64_t Time; // x20
  BalanceConfig_c *v26; // x8
  UnityEngine_GameObject_o *freeTxtInfoObj; // x0
  int64_t DrawNumChangeTime; // x21
  UnityEngine_GameObject_o *freeTenInfoObj; // x0
  const MethodInfo *v30; // x3
  int32_t v31; // [xsp+0h] [xbp-40h] BYREF
  int32_t v32; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t maxNum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD479 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&SummonControl_TypeInfo, v6);
    sub_B16FFC(&UserGachaMaster_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_6462, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_951, v10);
    byte_40FD479 = 1;
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
  v13 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &maxNum[1], maxNum, 0LL);
  if ( !this->fields.freeSummonCampaignLabel
    || (v14 = v13,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                        0LL)) == 0LL) )
  {
LABEL_36:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, v14, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( v14 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6462, 0LL);
    v32 = maxNum[1];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v31 = maxNum[0];
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v20 = System_String__Format_43739268(v17, v18, v19, 0LL);
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  else
  {
    v20 = (System_String_o *)StringLiteral_1;
    if ( !freeSummonCampaignLabel )
      goto LABEL_36;
  }
  UILabel__set_text(freeSummonCampaignLabel, v20, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( !v14 && !this->fields.isFree )
    goto LABEL_35;
  freeSummonCampaignNeedInfo = this->fields.freeSummonCampaignNeedInfo;
  if ( !freeSummonCampaignNeedInfo )
    goto LABEL_36;
  v23 = UnityEngine_GameObject__get_gameObject(freeSummonCampaignNeedInfo, 0LL);
  if ( !v23 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(v23, 1, 0LL);
  freeSummonCampaignNeedNum = this->fields.freeSummonCampaignNeedNum;
  if ( !freeSummonCampaignNeedNum )
    goto LABEL_36;
  UILabel__set_text(freeSummonCampaignNeedNum, (System_String_o *)StringLiteral_951, 0LL);
  if ( this->fields.isFree )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    freeTxtInfoObj = this->fields.freeTxtInfoObj;
    if ( !freeTxtInfoObj )
      goto LABEL_36;
    DrawNumChangeTime = v26->static_fields->DrawNumChangeTime;
    UnityEngine_GameObject__SetActive(freeTxtInfoObj, Time < DrawNumChangeTime, 0LL);
    freeTenInfoObj = this->fields.freeTenInfoObj;
    if ( !freeTenInfoObj )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(freeTenInfoObj, Time >= DrawNumChangeTime, 0LL);
    SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v30);
  }
  else
  {
LABEL_35:
    SummonInfoControl__SetPointSummonInfo(this, v21);
  }
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_B170D4();
  UISprite__set_atlas(sprite, this->fields.gachaAtlas, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
}


void __fastcall SummonInfoControl__SetHelpBtnDisp(SummonInfoControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *summonHelpInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo || (gameObject = UnityEngine_Component__get_gameObject(summonHelpInfo, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
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
  int32_t AppendSummonState; // w0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t v20; // w21
  int32_t type; // w9
  struct VaildGachaInfo_o *v22; // x8
  int32_t idx; // w9
  struct VaildGachaInfo_o *v24; // x8
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  UnityEngine_GameObject_o *singleSummonInfo; // x0
  const MethodInfo *v28; // x2
  __int64 v29; // x8
  SummonInfoControl_o *v30; // x0
  SummonInfoControl_SummonObjInfo_o *v31; // x20
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  UnityEngine_Component_o *bonusCount; // x0
  UnityEngine_GameObject_o *v41; // x0
  struct SummonInfoControl_SummonObjInfo_o *v42; // x8
  struct SummonInfoControl_SummonObjParts_o *v43; // x8
  UnityEngine_Component_o *bonusInfo; // x0
  UnityEngine_GameObject_o *v45; // x0
  struct SummonInfoControl_SummonObjInfo_o *v46; // x8
  struct SummonInfoControl_SummonObjParts_o *v47; // x8
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  struct SummonInfoControl_SummonObjInfo_o *v50; // x8
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct SummonInfoControl_SummonObjInfo_o *v54; // x8
  struct SummonInfoControl_SummonObjParts_o *v55; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v57; // x8
  struct SummonInfoControl_SummonObjParts_o *v58; // x8
  struct SummonInfoControl_SummonObjInfo_o *v59; // x8
  struct SummonInfoControl_SummonObjParts_o *v60; // x8
  struct SummonInfoControl_SummonObjInfo_o *v61; // x8
  struct SummonInfoControl_SummonObjParts_o *v62; // x8
  UILabel_o *infoLabel; // x0
  const MethodInfo *v64; // x3
  struct SummonInfoControl_SummonObjInfo_o *v65; // x8
  struct SummonInfoControl_SummonObjParts_o *v66; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v68; // x8
  struct SummonInfoControl_SummonObjParts_o *v69; // x8
  UIWidget_o *v70; // x20
  int v71; // s0
  struct SummonInfoControl_SummonObjInfo_o *v75; // x8
  struct SummonInfoControl_SummonObjParts_o *v76; // x8
  UIButtonColor_o *v77; // x20
  int v78; // s0
  struct SummonInfoControl_SummonObjInfo_o *v82; // x8
  struct SummonInfoControl_SummonObjParts_o *v83; // x8
  struct UISprite_o *v84; // x0
  const MethodInfo *v85; // x6
  struct SummonInfoControl_SummonObjInfo_o *v86; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD481 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, gachaEnt);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaAppendMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&SummonInfoControl_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16959, v10);
    sub_B16FFC(&StringLiteral_17017, v11);
    sub_B16FFC(&StringLiteral_19368, v12);
    sub_B16FFC(&StringLiteral_22344, v13);
    sub_B16FFC(&StringLiteral_17033, v14);
    sub_B16FFC(&StringLiteral_17008, v15);
    sub_B16FFC(&StringLiteral_1004, v16);
    byte_40FD481 = 1;
  }
  appendEnt = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaAppendMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_88;
  AppendSummonState = GachaAppendMaster__GetAppendSummonState(Master_WarQuestSelectionMaster, gachaEnt, &appendEnt, 0LL);
  currentSummonData = this->fields.currentSummonData;
  v20 = AppendSummonState;
  if ( AppendSummonState )
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
  if ( AppendSummonState )
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
  if ( AppendSummonState )
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
  singleSummonInfo = oneExSummon->fields.singleSummonInfo;
  if ( !singleSummonInfo )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(singleSummonInfo, v20 != 0, 0LL);
  this->fields.isDispPayExSummon = v20 != 0;
  this->fields.isPayExUsePossible = v20 == 2;
  v29 = 40LL;
  v30 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( isTicket )
    v29 = 48LL;
  v31 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v29);
  if ( v20 )
  {
    if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SummonInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
      v30 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
    }
    SummonInfoControl__SetButtonLocalPosX(
      v30,
      v31,
      *(float *)&v30->fields.bonusSelectLabel->fields.m_CachedPtr,
      *((float *)&v30->fields.bonusSelectLabel->fields.UnityEngine_MonoBehaviour_Fields + 1),
      v28);
    v32 = this->fields.oneExSummon;
    if ( v32 )
    {
      v33 = v32->fields.singleSummonInfo;
      if ( v33 )
      {
        UnityEngine_GameObject__SetActive(v33, 1, 0LL);
        v34 = this->fields.oneExSummon;
        if ( v34 )
        {
          single = v34->fields.single;
          if ( single )
          {
            button = (UnityEngine_Component_o *)single->fields.button;
            if ( button )
            {
              gameObject = UnityEngine_Component__get_gameObject(button, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                gameObject,
                SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X,
                0LL);
              v38 = this->fields.oneExSummon;
              if ( v38 )
              {
                v39 = v38->fields.single;
                if ( v39 )
                {
                  bonusCount = (UnityEngine_Component_o *)v39->fields.bonusCount;
                  if ( bonusCount )
                  {
                    v41 = UnityEngine_Component__get_gameObject(bonusCount, 0LL);
                    GameObjectExtensions__SetLocalPosition_27420076(v41, 0.0, 34.0, 0.0, 0LL);
                    v42 = this->fields.oneExSummon;
                    if ( v42 )
                    {
                      v43 = v42->fields.single;
                      if ( v43 )
                      {
                        bonusInfo = (UnityEngine_Component_o *)v43->fields.bonusInfo;
                        if ( bonusInfo )
                        {
                          v45 = UnityEngine_Component__get_gameObject(bonusInfo, 0LL);
                          GameObjectExtensions__SetLocalPositionX(v45, 1.0, 0LL);
                          v46 = this->fields.oneExSummon;
                          if ( v46 )
                          {
                            v47 = v46->fields.single;
                            if ( v47 )
                            {
                              v48 = (UnityEngine_Component_o *)v47->fields.bonusCount;
                              if ( v48 )
                              {
                                v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
                                GameObjectExtensions__SetLocalScaleX(v49, 1.0, 0LL);
                                v50 = this->fields.oneExSummon;
                                if ( v50 )
                                {
                                  v51 = v50->fields.single;
                                  if ( v51 )
                                  {
                                    v52 = (UnityEngine_Component_o *)v51->fields.bonusInfo;
                                    if ( v52 )
                                    {
                                      v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
                                      GameObjectExtensions__SetLocalScaleX(v53, 1.0, 0LL);
                                      v54 = this->fields.oneExSummon;
                                      if ( v54 )
                                      {
                                        v55 = v54->fields.single;
                                        if ( v55 )
                                        {
                                          buttonImg = v55->fields.buttonImg;
                                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          }
                                          AtlasManager__SetEventSprite(
                                            buttonImg,
                                            (System_String_o *)StringLiteral_16959,
                                            0LL);
                                          v57 = this->fields.oneExSummon;
                                          if ( v57 )
                                          {
                                            v58 = v57->fields.single;
                                            if ( v58 )
                                            {
                                              AtlasManager__SetEventSprite(
                                                v58->fields.bonusCount,
                                                (System_String_o *)StringLiteral_17017,
                                                0LL);
                                              v59 = this->fields.oneExSummon;
                                              if ( v59 )
                                              {
                                                v60 = v59->fields.single;
                                                if ( v60 )
                                                {
                                                  AtlasManager__SetEventSprite(
                                                    v60->fields.bonusInfo,
                                                    (System_String_o *)StringLiteral_17008,
                                                    0LL);
                                                  AtlasManager__SetEventSprite(
                                                    this->fields.oneExSummonSingleInfoSprite,
                                                    (System_String_o *)StringLiteral_19368,
                                                    0LL);
                                                  v61 = this->fields.oneExSummon;
                                                  if ( v61 )
                                                  {
                                                    v62 = v61->fields.single;
                                                    if ( v62 )
                                                    {
                                                      infoLabel = v62->fields.infoLabel;
                                                      if ( infoLabel )
                                                      {
                                                        UILabel__set_text(
                                                          infoLabel,
                                                          (System_String_o *)StringLiteral_1004,
                                                          0LL);
                                                        v65 = this->fields.oneExSummon;
                                                        if ( v65 )
                                                        {
                                                          v66 = v65->fields.single;
                                                          if ( v66 )
                                                          {
                                                            numImg = v66->fields.numImg;
                                                            if ( this->fields.isPayExUsePossible )
                                                            {
                                                              SummonInfoControl__SetGachaSprite(
                                                                this,
                                                                numImg,
                                                                (System_String_o *)StringLiteral_17033,
                                                                v64);
                                                            }
                                                            else
                                                            {
                                                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                                                              {
                                                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                                              }
                                                              AtlasManager__SetEventSprite(
                                                                numImg,
                                                                (System_String_o *)StringLiteral_22344,
                                                                0LL);
                                                            }
                                                            v68 = this->fields.oneExSummon;
                                                            if ( v68 )
                                                            {
                                                              v69 = v68->fields.single;
                                                              if ( v69 )
                                                              {
                                                                v70 = (UIWidget_o *)v69->fields.buttonImg;
                                                                if ( this->fields.isPayExUsePossible )
                                                                {
                                                                  *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_white(0LL);
                                                                  if ( !v70 )
                                                                    goto LABEL_88;
                                                                }
                                                                else
                                                                {
                                                                  *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_gray(0LL);
                                                                  if ( !v70 )
                                                                    goto LABEL_88;
                                                                }
                                                                UIWidget__set_color(
                                                                  v70,
                                                                  *(UnityEngine_Color_o *)&v71,
                                                                  0LL);
                                                                v75 = this->fields.oneExSummon;
                                                                if ( v75 )
                                                                {
                                                                  v76 = v75->fields.single;
                                                                  if ( v76 )
                                                                  {
                                                                    v77 = (UIButtonColor_o *)v76->fields.button;
                                                                    if ( this->fields.isPayExUsePossible )
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v78 = UnityEngine_Color__get_white(0LL);
                                                                      if ( !v77 )
                                                                        goto LABEL_88;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(UnityEngine_Color_o *)&v78 = UnityEngine_Color__get_gray(0LL);
                                                                      if ( !v77 )
                                                                        goto LABEL_88;
                                                                    }
                                                                    UIButtonColor__set_defaultColor(
                                                                      v77,
                                                                      *(UnityEngine_Color_o *)&v78,
                                                                      0LL);
                                                                    v82 = this->fields.oneExSummon;
                                                                    if ( v82 )
                                                                    {
                                                                      v83 = v82->fields.single;
                                                                      if ( v83 )
                                                                      {
                                                                        v84 = v83->fields.numImg;
                                                                        if ( v84 )
                                                                        {
                                                                          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v84->klass->vtable._33_MakePixelPerfect.method)(
                                                                            v84,
                                                                            v84->klass->vtable._34_get_minWidth.methodPtr);
                                                                          v86 = this->fields.oneExSummon;
                                                                          if ( v86 )
                                                                          {
                                                                            SummonInfoControl__SetSummonGiftDisp(
                                                                              this,
                                                                              v86->fields.single,
                                                                              0,
                                                                              0,
                                                                              1,
                                                                              0,
                                                                              v85);
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
    sub_B170D4();
  }
  if ( (WORD1(SummonInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v30 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v30,
    v31,
    *((float *)&v30->fields.bonusSelectLabel->klass + 1),
    *(float *)&v30->fields.bonusSelectLabel->monitor,
    v28);
}


void __fastcall SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v5; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaEntity_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  ticketNum = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v3);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_B170D4();
  v7 = CurrentGachaEntity;
  if ( currentSummonData->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v5);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v5) )
  {
    SummonInfoControl__TicketGacha(this, v7, ticketNum, v9);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v7, v8);
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
  DataManager_o *v11; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  TblUserEntity_o *UserData; // x0
  const MethodInfo *v15; // x1
  int32_t friendPoint; // w21
  GachaEntity_o *CurrentGachaEntity; // x0
  int32_t Price; // w0
  int32_t v19; // w20
  int v20; // w0
  const MethodInfo *v21; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v23; // x4
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  struct SummonInfoControl_SummonObjInfo_o *v26; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x4
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v34; // x4
  struct SummonInfoControl_SummonObjInfo_o *v35; // x8
  struct SummonInfoControl_SummonObjParts_o *v36; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD47A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&System_Math_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_B16FFC(&StringLiteral_23445, v6);
    sub_B16FFC(&StringLiteral_17034, v7);
    sub_B16FFC(&StringLiteral_23395, v8);
    byte_40FD47A = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(v10);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11 )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v11,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_27;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  UserData = TblUserMaster__getUserData(MasterData_WarQuestSelectionMaster, usrData->fields.userId, 0LL);
  if ( !UserData )
    goto LABEL_27;
  friendPoint = UserData->fields.friendPoint;
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v15);
  if ( !CurrentGachaEntity )
    goto LABEL_27;
  Price = GachaEntity__getPrice(CurrentGachaEntity, 0LL);
  this->fields.price = Price;
  v19 = Price;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = System_Math__Min_44418752(friendPoint / v19, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v20;
  if ( v20 < 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v21);
    v24 = this->fields.friendPointSummon;
    if ( v24 )
    {
      single = v24->fields.single;
      if ( single )
      {
        SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23445, v23);
        return;
      }
    }
LABEL_27:
    sub_B170D4();
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v21);
  v26 = this->fields.friendPointSummon;
  if ( !v26 )
    goto LABEL_27;
  multiPay = v26->fields.multiPay;
  if ( !multiPay )
    goto LABEL_27;
  numImg = multiPay->fields.numImg;
  gachaTime = this->fields.gachaTime;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
  v30 = System_String__Format((System_String_o *)StringLiteral_17034, v29, 0LL);
  if ( !numImg )
    goto LABEL_27;
  UISprite__set_spriteName(numImg, v30, 0LL);
  v32 = this->fields.friendPointSummon;
  if ( !v32 )
    goto LABEL_27;
  onePay = v32->fields.onePay;
  if ( !onePay )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    onePay->fields.infoLabel,
    this->fields.price,
    (System_String_o *)StringLiteral_23395,
    v31);
  v35 = this->fields.friendPointSummon;
  if ( !v35 )
    goto LABEL_27;
  v36 = v35->fields.multiPay;
  if ( !v36 )
    goto LABEL_27;
  SummonInfoControl__SetPriceText(
    this,
    v36->fields.infoLabel,
    this->fields.gachaTime * this->fields.price,
    (System_String_o *)StringLiteral_23395,
    v34);
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
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD483 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, label);
    byte_40FD483 = 1;
  }
  if ( (price & 0x80000000) != 0 )
    price = this->fields.price;
  v11 = price;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_B170D4();
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
  int32_t v15; // w22
  int32_t v16; // w24
  int32_t id; // w28
  int32_t summonType; // w23
  System_Int32_array *adjustStoryGachaIds; // x19
  int32_t v20; // w26
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

  v15 = gachaTime;
  v16 = warId;
  id = gachaId;
  summonType = gachaType;
  adjustStoryGachaIds = storyAdjustIds;
  v20 = gachaSubId;
  if ( (byte_40FD489 & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    v33 = ticketItemId;
    sub_B16FFC(&GachaRqParamData_TypeInfo, *(_QWORD *)&gachaType);
    ticketItemId = v33;
    v20 = gachaSubId;
    adjustStoryGachaIds = storyAdjustIds;
    byte_40FD489 = 1;
    if ( (summonType & 0x80000000) == 0 )
    {
LABEL_3:
      if ( (id & 0x80000000) == 0 )
        goto LABEL_4;
      goto LABEL_19;
    }
  }
  summonType = this->fields.summonType;
  if ( (id & 0x80000000) == 0 )
  {
LABEL_4:
    if ( (v16 & 0x80000000) == 0 )
      goto LABEL_5;
    goto LABEL_21;
  }
LABEL_19:
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_25;
  id = currentSummonData->fields.id;
  if ( (v16 & 0x80000000) == 0 )
  {
LABEL_5:
    if ( (v15 & 0x80000000) == 0 )
      goto LABEL_6;
LABEL_23:
    v15 = this->fields.gachaTime;
    if ( (gachaResourceNum & 0x80000000) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
LABEL_21:
  v35 = this->fields.currentSummonData;
  if ( !v35 )
    goto LABEL_25;
  v16 = v35->fields.warId;
  if ( (v15 & 0x80000000) != 0 )
    goto LABEL_23;
LABEL_6:
  if ( (gachaResourceNum & 0x80000000) == 0 )
    goto LABEL_7;
LABEL_24:
  gachaResourceNum = this->fields.price;
LABEL_7:
  if ( shopIdIdx < 0 )
    v22 = 1;
  else
    v22 = shopIdIdx;
  if ( (v20 & 0x80000000) != 0 )
  {
    v23 = this->fields.currentSummonData;
    if ( !v23 )
      goto LABEL_25;
    v20 = v23->fields.gachaSubId;
  }
  v36 = v22;
  if ( !adjustStoryGachaIds )
  {
    v24 = this->fields.currentSummonData;
    if ( v24 )
    {
      adjustStoryGachaIds = v24->fields.adjustStoryGachaIds;
      goto LABEL_16;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_16:
  v25 = ticketItemId & ~(ticketItemId >> 31);
  v26 = (GachaRqParamData_o *)sub_B170CC(
                                GachaRqParamData_TypeInfo,
                                *(_QWORD *)&gachaType,
                                *(_QWORD *)&gachaId,
                                *(_QWORD *)&warId,
                                *(_QWORD *)&gachaTime);
  GachaRqParamData___ctor_27410472(
    v26,
    summonType,
    id,
    v16,
    v15,
    gachaResourceNum,
    v36,
    v25,
    v20,
    adjustStoryGachaIds,
    isAppendSummon,
    selectBonusList,
    0LL);
  this->fields.requestData = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestData,
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *summonObjInfos; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x20

  if ( (byte_40FD48A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__, onOff);
    sub_B16FFC(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v8);
    sub_B16FFC(&Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__, v9);
    sub_B16FFC(&SummonInfoControl___c__DisplayClass149_0_TypeInfo, v10);
    byte_40FD48A = 1;
  }
  v11 = sub_B170CC(SummonInfoControl___c__DisplayClass149_0_TypeInfo, onOff, method, v3, v4);
  SummonInfoControl___c__DisplayClass149_0___ctor((SummonInfoControl___c__DisplayClass149_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_BYTE *)(v11 + 24) = onOff,
        summonObjInfos = this->fields.summonObjInfos,
        v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_SummonInfoControl_SummonObjInfo__TypeInfo,
                                                                                     v19,
                                                                                     v20,
                                                                                     v21,
                                                                                     v22),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v23,
          (Il2CppObject *)v11,
          Method_SummonInfoControl___c__DisplayClass149_0__SetSummonButtonsCollider_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_SummonInfoControl_SummonObjInfo___ctor__),
        !summonObjInfos) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)summonObjInfos,
    (System_Action_T__o *)v23,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
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
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_Component_o *summonHistoryButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_int__o *v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_40FD476 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_SummonInfoControl__SetSummonDispInfo_b__121_0__, v4);
    byte_40FD476 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_B16F98(
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
        (summonHistoryButton = (UnityEngine_Component_o *)this->fields.summonHistoryButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(summonHistoryButton, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  *(_WORD *)&this->fields.isPayExUsePossible = 0;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v17, v18, v19, v20);
  System_Action_int____ctor(
    v21,
    (Il2CppObject *)this,
    Method_SummonInfoControl__SetSummonDispInfo_b__121_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(v16, v21, 0, 0LL);
  SummonInfoControl__SetUpSummonInfos(this, v22);
  SummonInfoControl__OffSetInfoBtn(this, v23);
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_String_o *v34; // x20
  SummonInfoControl___c_c *v35; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__143_0; // x25
  Il2CppObject *v38; // x26
  struct SummonInfoControl___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_String_o *v52; // x20
  SummonInfoControl___c_c *v53; // x8
  struct SummonInfoControl___c_StaticFields *v54; // x9
  System_Func_char__string__o *_9__143_1; // x23
  Il2CppObject *v56; // x24
  struct SummonInfoControl___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_String_o *v69; // x20
  SummonInfoControl___c_c *v70; // x8
  struct SummonInfoControl___c_StaticFields *v71; // x9
  System_Func_char__string__o *_9__143_3; // x21
  Il2CppObject *v73; // x22
  struct SummonInfoControl___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v82; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_Component_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_Component_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_Component_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Component_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  __int64 v99; // x8
  UnityEngine_Component_o *singleDigit; // x0
  UnityEngine_GameObject_o *v101; // x0
  const MethodInfo *v102; // x3
  UnityEngine_Component_o *v103; // x0
  UnityEngine_Object_o *v104; // x22
  UnityEngine_GameObject_o *v105; // x0
  const MethodInfo *v106; // x3
  UISprite_o *v107; // x0
  UnityEngine_Object_o *v108; // x21
  UnityEngine_GameObject_o *v109; // x0
  const MethodInfo *v110; // x3
  UISprite_o *v111; // x23
  _BOOL8 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  System_String_o *v115; // x0
  Il2CppObject *v116; // x1
  System_String_o *v117; // x0
  System_String_o *v118; // x0
  int v119; // w21
  UnityEngine_Component_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  UnityEngine_Component_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  bool v124; // w1
  UnityEngine_Component_o *v125; // x0
  UnityEngine_Component_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x0
  const MethodInfo *v128; // x3
  UISprite_o *BonusSprite; // x0
  UnityEngine_Component_o *v130; // x24
  UnityEngine_GameObject_o *v131; // x0
  const MethodInfo *v132; // x3
  UISprite_o *v133; // x0
  UnityEngine_Component_o *v134; // x23
  UnityEngine_GameObject_o *v135; // x0
  const MethodInfo *v136; // x3
  UISprite_o *v137; // x0
  UISprite_o *v138; // x22
  UnityEngine_GameObject_o *v139; // x0
  const MethodInfo *v140; // x3
  UISprite_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  const MethodInfo *v143; // x3
  UISprite_o *v144; // x25
  System_String_o *v145; // x0
  System_String_o *v146; // x0
  System_String_o *v147; // x0
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  System_String_o *v152; // x20
  SummonInfoControl___c_c *v153; // x8
  struct SummonInfoControl___c_StaticFields *v154; // x9
  System_Func_char__string__o *_9__143_2; // x23
  Il2CppObject *v156; // x24
  struct SummonInfoControl___c_StaticFields *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v164; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v165; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_Component_o *v167; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  UnityEngine_Component_o *v171; // x0
  UnityEngine_GameObject_o *v172; // x0
  UnityEngine_Component_o *doubleDigits; // x0
  UnityEngine_GameObject_o *v174; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v177; // x0

  if ( (byte_40FD486 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, summonObjParts);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_char__string___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v14);
    sub_B16FFC(&Method_System_Func_char__string___ctor__, v15);
    sub_B16FFC(&System_Func_char__string__TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__, v18);
    sub_B16FFC(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__, v19);
    sub_B16FFC(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__, v20);
    sub_B16FFC(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__, v21);
    sub_B16FFC(&SummonInfoControl___c_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_16975, v23);
    sub_B16FFC(&StringLiteral_21086, v24);
    sub_B16FFC(&StringLiteral_21084, v25);
    sub_B16FFC(&StringLiteral_8227, v26);
    sub_B16FFC(&StringLiteral_21085, v27);
    sub_B16FFC(&StringLiteral_21087, v28);
    sub_B16FFC(&StringLiteral_16974, v29);
    byte_40FD486 = 1;
  }
  if ( isOnePay && this->fields.shopId1GiftNum )
  {
    v34 = System_Int32__ToString((int)this + 320, 0LL);
    v35 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v35 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__143_0 = static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__143_0 = (System_Func_char__string__o *)sub_B170CC(System_Func_char__string__TypeInfo, v30, v31, v32, v33);
      System_Func_char__string____ctor(
        _9__143_0,
        v38,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_0__,
        (const MethodInfo_2B64924 *)Method_System_Func_char__string___ctor__);
      v39 = SummonInfoControl___c_TypeInfo->static_fields;
      v39->__9__143_0 = _9__143_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v39->__9__143_0,
        (System_Int32_array **)_9__143_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                                 (System_Func_TSource__TResult__o *)_9__143_0,
                                                                 (const MethodInfo_19BEDB8 *)Method_System_Linq_Enumerable_Select_char__string___);
    v47 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v46,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !isMulti )
      goto LABEL_26;
  }
  else
  {
    v47 = 0LL;
    if ( !isMulti )
      goto LABEL_26;
  }
  if ( this->fields.shopId2GiftNum )
  {
    v52 = System_Int32__ToString((int)this + 324, 0LL);
    v53 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v53 = SummonInfoControl___c_TypeInfo;
    }
    v54 = v53->static_fields;
    _9__143_1 = v54->__9__143_1;
    if ( !_9__143_1 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v54 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)v54->__9;
      _9__143_1 = (System_Func_char__string__o *)sub_B170CC(System_Func_char__string__TypeInfo, v48, v49, v50, v51);
      System_Func_char__string____ctor(
        _9__143_1,
        v56,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_1__,
        (const MethodInfo_2B64924 *)Method_System_Func_char__string___ctor__);
      v57 = SummonInfoControl___c_TypeInfo->static_fields;
      v57->__9__143_1 = _9__143_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v57->__9__143_1,
        (System_Int32_array **)_9__143_1,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                                                 (System_Func_TSource__TResult__o *)_9__143_1,
                                                                 (const MethodInfo_19BEDB8 *)Method_System_Linq_Enumerable_Select_char__string___);
    v47 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v64,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  }
  else if ( this->fields.shopId1GiftNum && isChargeSummon )
  {
    v152 = System_Int32__ToString((int)this + 320, 0LL);
    v153 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v153 = SummonInfoControl___c_TypeInfo;
    }
    v154 = v153->static_fields;
    _9__143_2 = v154->__9__143_2;
    if ( !_9__143_2 )
    {
      if ( (BYTE3(v153->vtable._0_Equals.methodPtr) & 4) != 0 && !v153->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v153);
        v154 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v156 = (Il2CppObject *)v154->__9;
      _9__143_2 = (System_Func_char__string__o *)sub_B170CC(System_Func_char__string__TypeInfo, v148, v149, v150, v151);
      System_Func_char__string____ctor(
        _9__143_2,
        v156,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_2__,
        (const MethodInfo_2B64924 *)Method_System_Func_char__string___ctor__);
      v157 = SummonInfoControl___c_TypeInfo->static_fields;
      v157->__9__143_2 = _9__143_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v157->__9__143_2,
        (System_Int32_array **)_9__143_2,
        v158,
        v159,
        v160,
        v161,
        v162,
        v163);
    }
    v164 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v152,
                                                                  (System_Func_TSource__TResult__o *)_9__143_2,
                                                                  (const MethodInfo_19BEDB8 *)Method_System_Linq_Enumerable_Select_char__string___);
    v165 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
             v164,
             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v47 = v165;
    button = (UnityEngine_Object_o *)summonObjParts->fields.button;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
    {
      v167 = (UnityEngine_Component_o *)summonObjParts->fields.button;
      if ( !v167 )
        goto LABEL_151;
      gameObject = UnityEngine_Component__get_gameObject(v167, 0LL);
      if ( !gameObject )
        goto LABEL_151;
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
      {
        v169 = (UnityEngine_Component_o *)summonObjParts->fields.button;
        if ( !v169 )
          goto LABEL_151;
        v170 = UnityEngine_Component__get_gameObject(v169, 0LL);
        GameObjectExtensions__SetLocalScale_27422124(v170, 0.9, 0LL);
        v171 = (UnityEngine_Component_o *)summonObjParts->fields.button;
        if ( !v171 )
          goto LABEL_151;
        v172 = UnityEngine_Component__get_gameObject(v171, 0LL);
        GameObjectExtensions__SetLocalPositionY(v172, -6.0, 0LL);
        doubleDigits = (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits;
        if ( !doubleDigits )
          goto LABEL_151;
        v174 = UnityEngine_Component__get_gameObject(doubleDigits, 0LL);
        if ( !v174 )
          goto LABEL_151;
        transform = UnityEngine_GameObject__get_transform(v174, 0LL);
        if ( !transform )
          goto LABEL_151;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
        if ( !parent )
          goto LABEL_151;
        v177 = UnityEngine_Component__get_gameObject(parent, 0LL);
        GameObjectExtensions__SetLocalPositionY(v177, 45.0, 0LL);
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
  if ( this->fields.appendGiftNum )
  {
    v69 = System_Int32__ToString((int)this + 328, 0LL);
    v70 = SummonInfoControl___c_TypeInfo;
    if ( (BYTE3(SummonInfoControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v70 = SummonInfoControl___c_TypeInfo;
    }
    v71 = v70->static_fields;
    _9__143_3 = v71->__9__143_3;
    if ( !_9__143_3 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v71 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v73 = (Il2CppObject *)v71->__9;
      _9__143_3 = (System_Func_char__string__o *)sub_B170CC(System_Func_char__string__TypeInfo, v65, v66, v67, v68);
      System_Func_char__string____ctor(
        _9__143_3,
        v73,
        Method_SummonInfoControl___c__SetSummonGiftDisp_b__143_3__,
        (const MethodInfo_2B64924 *)Method_System_Func_char__string___ctor__);
      v74 = SummonInfoControl___c_TypeInfo->static_fields;
      v74->__9__143_3 = _9__143_3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v74->__9__143_3,
        (System_Int32_array **)_9__143_3,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__string_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v69,
                                                                 (System_Func_TSource__TResult__o *)_9__143_3,
                                                                 (const MethodInfo_19BEDB8 *)Method_System_Linq_Enumerable_Select_char__string___);
    v82 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v81,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_151;
    v47 = v82;
    bonusCount = (UnityEngine_Object_o *)summonObjParts->fields.bonusCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bonusCount, 0LL, 0LL) )
    {
      v84 = (UnityEngine_Component_o *)summonObjParts->fields.bonusCount;
      if ( !v84 )
        goto LABEL_151;
      v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
      if ( !v85 )
        goto LABEL_151;
      if ( UnityEngine_GameObject__get_activeSelf(v85, 0LL) )
      {
        v86 = (UnityEngine_Component_o *)summonObjParts->fields.bonusCount;
        if ( !v86 )
          goto LABEL_151;
        v87 = UnityEngine_Component__get_gameObject(v86, 0LL);
        GameObjectExtensions__SetLocalPositionX(v87, 42.0, 0LL);
        v88 = (UnityEngine_Component_o *)summonObjParts->fields.bonusCount;
        if ( !v88 )
          goto LABEL_151;
        v89 = UnityEngine_Component__get_gameObject(v88, 0LL);
        GameObjectExtensions__SetLocalPositionY(v89, -34.0, 0LL);
        v90 = (UnityEngine_Component_o *)summonObjParts->fields.bonusCount;
        if ( !v90 )
          goto LABEL_151;
        v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
        GameObjectExtensions__SetLocalScaleX(v91, 0.9, 0LL);
      }
    }
    bonusInfo = (UnityEngine_Object_o *)summonObjParts->fields.bonusInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bonusInfo, 0LL, 0LL) )
    {
      v93 = (UnityEngine_Component_o *)summonObjParts->fields.bonusInfo;
      if ( !v93 )
        goto LABEL_151;
      v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
      if ( !v94 )
        goto LABEL_151;
      if ( UnityEngine_GameObject__get_activeSelf(v94, 0LL) )
      {
        v95 = (UnityEngine_Component_o *)summonObjParts->fields.bonusInfo;
        if ( !v95 )
          goto LABEL_151;
        v96 = UnityEngine_Component__get_gameObject(v95, 0LL);
        GameObjectExtensions__SetLocalPositionX(v96, -60.0, 0LL);
        v97 = (UnityEngine_Component_o *)summonObjParts->fields.bonusInfo;
        if ( !v97 )
          goto LABEL_151;
        v98 = UnityEngine_Component__get_gameObject(v97, 0LL);
        GameObjectExtensions__SetLocalScaleX(v98, 0.9, 0LL);
      }
    }
  }
LABEL_58:
  if ( !v47 || (v99 = *(_QWORD *)&v47->max_length) == 0 )
  {
    if ( !summonObjParts )
      goto LABEL_151;
    goto LABEL_82;
  }
  if ( !summonObjParts )
    goto LABEL_151;
  if ( (_DWORD)v99 != 1 )
  {
    v126 = (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits;
    if ( !v126 )
      goto LABEL_151;
    v127 = UnityEngine_Component__get_gameObject(v126, 0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    (SummonInfoControl_o *)v127,
                    v127,
                    (System_String_o *)StringLiteral_21084,
                    v128);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v130 = (UnityEngine_Component_o *)BonusSprite;
    v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    v133 = SummonInfoControl__GetBonusSprite(
             (SummonInfoControl_o *)v131,
             v131,
             (System_String_o *)StringLiteral_21086,
             v132);
    if ( !v130 )
      goto LABEL_151;
    v134 = (UnityEngine_Component_o *)v133;
    v135 = UnityEngine_Component__get_gameObject(v130, 0LL);
    v137 = SummonInfoControl__GetBonusSprite(
             (SummonInfoControl_o *)v135,
             v135,
             (System_String_o *)StringLiteral_21085,
             v136);
    if ( !v134 )
      goto LABEL_151;
    v138 = v137;
    v139 = UnityEngine_Component__get_gameObject(v134, 0LL);
    v141 = SummonInfoControl__GetBonusSprite(
             (SummonInfoControl_o *)v139,
             v139,
             (System_String_o *)StringLiteral_21087,
             v140);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_151;
    v108 = (UnityEngine_Object_o *)v141;
    v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.doubleDigits, 0LL);
    v144 = SummonInfoControl__GetBonusSprite(
             (SummonInfoControl_o *)v142,
             v142,
             (System_String_o *)StringLiteral_8227,
             v143);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(v144, 7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v130, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v134, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v138, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v112 = UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
          if ( v112 )
          {
            if ( v47->max_length )
            {
              v145 = System_String__Format((System_String_o *)StringLiteral_16974, (Il2CppObject *)v47->m_Items[0], 0LL);
              UISprite__set_spriteName((UISprite_o *)v130, v145, 0LL);
              if ( v47->max_length > 1 )
              {
                v146 = System_String__Format(
                         (System_String_o *)StringLiteral_16974,
                         (Il2CppObject *)v47->m_Items[1],
                         0LL);
                UISprite__set_spriteName((UISprite_o *)v134, v146, 0LL);
                if ( v47->max_length )
                {
                  v147 = System_String__Format(
                           (System_String_o *)StringLiteral_16975,
                           (Il2CppObject *)v47->m_Items[0],
                           0LL);
                  if ( !v138 )
                    goto LABEL_151;
                  UISprite__set_spriteName(v138, v147, 0LL);
                  if ( v47->max_length > 1 )
                  {
                    v116 = (Il2CppObject *)v47->m_Items[1];
                    v117 = (System_String_o *)StringLiteral_16975;
                    goto LABEL_79;
                  }
                }
              }
            }
LABEL_152:
            sub_B17100(v112, v113, v114);
            sub_B170A0();
          }
        }
      }
    }
LABEL_82:
    v119 = 0;
    goto LABEL_83;
  }
  singleDigit = (UnityEngine_Component_o *)summonObjParts->fields.singleDigit;
  if ( !singleDigit )
    goto LABEL_151;
  v101 = UnityEngine_Component__get_gameObject(singleDigit, 0LL);
  v103 = (UnityEngine_Component_o *)SummonInfoControl__GetBonusSprite(
                                      (SummonInfoControl_o *)v101,
                                      v101,
                                      (System_String_o *)StringLiteral_21084,
                                      v102);
  if ( !v103 )
    goto LABEL_151;
  v104 = (UnityEngine_Object_o *)v103;
  v105 = UnityEngine_Component__get_gameObject(v103, 0LL);
  v107 = SummonInfoControl__GetBonusSprite(
           (SummonInfoControl_o *)v105,
           v105,
           (System_String_o *)StringLiteral_21085,
           v106);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_151;
  v108 = (UnityEngine_Object_o *)v107;
  v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonObjParts->fields.singleDigit, 0LL);
  v111 = SummonInfoControl__GetBonusSprite(
           (SummonInfoControl_o *)v109,
           v109,
           (System_String_o *)StringLiteral_8227,
           v110);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v111, 7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
    goto LABEL_82;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v112 = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
  if ( !v112 )
    goto LABEL_82;
  if ( !v47->max_length )
    goto LABEL_152;
  v115 = System_String__Format((System_String_o *)StringLiteral_16974, (Il2CppObject *)v47->m_Items[0], 0LL);
  UISprite__set_spriteName((UISprite_o *)v104, v115, 0LL);
  if ( !v47->max_length )
    goto LABEL_152;
  v116 = (Il2CppObject *)v47->m_Items[0];
  v117 = (System_String_o *)StringLiteral_16975;
LABEL_79:
  v118 = System_String__Format(v117, v116, 0LL);
  if ( !v108 )
    goto LABEL_151;
  UISprite__set_spriteName((UISprite_o *)v108, v118, 0LL);
  v119 = 1;
LABEL_83:
  v120 = (UnityEngine_Component_o *)summonObjParts->fields.singleDigit;
  if ( !v120 )
    goto LABEL_151;
  v121 = UnityEngine_Component__get_gameObject(v120, 0LL);
  if ( !v119 )
  {
    if ( v121 )
    {
      UnityEngine_GameObject__SetActive(v121, 0, 0LL);
      v125 = (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits;
      if ( v125 )
      {
        v123 = UnityEngine_Component__get_gameObject(v125, 0LL);
        if ( v123 )
        {
          v124 = 0;
          goto LABEL_94;
        }
      }
    }
LABEL_151:
    sub_B170D4();
  }
  if ( !v47 )
    goto LABEL_151;
  if ( !v121 )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive(v121, (signed int)v47->max_length < 2, 0LL);
  v122 = (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits;
  if ( !v122 )
    goto LABEL_151;
  v123 = UnityEngine_Component__get_gameObject(v122, 0LL);
  if ( !v123 )
    goto LABEL_151;
  v124 = (signed int)v47->max_length > 1;
LABEL_94:
  UnityEngine_GameObject__SetActive(v123, v124, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  GachaExtraGiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  char *ListGachaExtraGift; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  char *v12; // x20
  __int64 v13; // x22
  char *v14; // x23
  __int64 v15; // x8
  WebViewManager_o *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  int v19; // w8

  if ( (byte_40FD485 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD485 = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (GachaExtraGiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !MasterData_WarQuestSelectionMaster )
    {
LABEL_31:
      sub_B170D4();
    }
    ListGachaExtraGift = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                                   MasterData_WarQuestSelectionMaster,
                                   currentSummonData->fields.id,
                                   0LL);
    if ( ListGachaExtraGift )
    {
      v11 = *((_QWORD *)ListGachaExtraGift + 3);
      v12 = ListGachaExtraGift;
      if ( v11 )
      {
        if ( (int)v11 >= 1 )
        {
          v13 = 0LL;
          v14 = ListGachaExtraGift + 32;
          do
          {
            if ( (unsigned int)v13 >= (unsigned int)v11 )
            {
LABEL_32:
              sub_B17100(ListGachaExtraGift, v9, v10);
              sub_B170A0();
            }
            v15 = *(_QWORD *)&v14[8 * v13];
            if ( !v15 )
              goto LABEL_31;
            if ( *(_DWORD *)(v15 + 36) == 1 )
            {
              v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v16 )
                goto LABEL_31;
              ListGachaExtraGift = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v16,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v13 >= *((_DWORD *)v12 + 6) )
                goto LABEL_32;
              v17 = *(_QWORD *)&v14[8 * v13];
              if ( !v17 || !ListGachaExtraGift )
                goto LABEL_31;
              ListGachaExtraGift = (char *)GiftMaster__getDataById(
                                             (GiftMaster_o *)ListGachaExtraGift,
                                             *(_DWORD *)(v17 + 24),
                                             0LL);
              if ( (unsigned int)v13 >= *((_DWORD *)v12 + 6) )
                goto LABEL_32;
              v18 = *(_QWORD *)&v14[8 * v13];
              if ( !v18 )
                goto LABEL_31;
              v19 = *(_DWORD *)(v18 + 20);
              switch ( v19 )
              {
                case 3:
                  if ( !ListGachaExtraGift )
                    goto LABEL_31;
                  this->fields.appendGiftNum = *((_DWORD *)ListGachaExtraGift + 7);
                  break;
                case 2:
                  if ( !ListGachaExtraGift )
                    goto LABEL_31;
                  this->fields.shopId2GiftNum = *((_DWORD *)ListGachaExtraGift + 7);
                  break;
                case 1:
                  if ( !ListGachaExtraGift )
                    goto LABEL_31;
                  this->fields.shopId1GiftNum = *((_DWORD *)ListGachaExtraGift + 7);
                  break;
              }
            }
            LODWORD(v11) = *((_DWORD *)v12 + 6);
            ++v13;
          }
          while ( (int)v13 < (int)v11 );
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *summonHistorySprite; // x0
  UIButton_o *summonHistoryButton; // x0

  if ( (byte_40FD491 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, bannerAtlas);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FD491 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL) )
  {
    if ( !bannerAtlas
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      bannerAtlas,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, (UIAtlas_o *)Component_srcLineSprite, 0LL),
          (summonHistorySprite = this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName(summonHistorySprite, imgName, 0LL),
          (summonHistoryButton = this->fields.summonHistoryButton) == 0LL) )
    {
      sub_B170D4();
    }
    UIButton__set_normalSprite(summonHistoryButton, imgName, 0LL);
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
    sub_B170D4();
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_B16F98(
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


void __fastcall SummonInfoControl__SetSummonInfo_31121664(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaEntity_o *v8; // x0
  int32_t flag; // w21
  int32_t PayOneTimePrice; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  SummonInfoControl_SummonInfo_o *v15; // x20
  int32_t drawNum2; // w21
  int32_t PayMultiTimePrice; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD484 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&SummonInfoControl_SummonInfo_TypeInfo, v5);
    byte_40FD484 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_WarQuestSelectionMaster )
LABEL_12:
    sub_B170D4();
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         currentSummonData->fields.id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
  {
    v8 = (GachaEntity_o *)entity;
    if ( !entity )
      goto LABEL_12;
    if ( entity->fields.priority < 1 )
    {
      v15 = 0LL;
    }
    else
    {
      flag = entity->fields.flag;
      PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
      v15 = (SummonInfoControl_SummonInfo_o *)sub_B170CC(SummonInfoControl_SummonInfo_TypeInfo, v11, v12, v13, v14);
      SummonInfoControl_SummonInfo___ctor(v15, flag, PayOneTimePrice, 1, 0LL);
      v8 = (GachaEntity_o *)entity;
      if ( !entity )
        goto LABEL_12;
    }
    if ( v8->fields.shopId2 >= 1 )
    {
      drawNum2 = v8->fields.drawNum2;
      PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v8, 0LL);
      v15 = (SummonInfoControl_SummonInfo_o *)sub_B170CC(SummonInfoControl_SummonInfo_TypeInfo, v18, v19, v20, v21);
      SummonInfoControl_SummonInfo___ctor(v15, drawNum2, PayMultiTimePrice, 2, 0LL);
    }
    if ( v15 )
    {
      this->fields.gachaTime = v15->fields.drawNum;
      this->fields.price = v15->fields.price;
      this->fields.shopIdIdx = v15->fields.shopIdIdx;
    }
  }
}


void __fastcall SummonInfoControl__SetTutorialBtnEnable(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UnityEngine_Behaviour_o *button; // x0
  bool v7; // w21
  UnityEngine_Behaviour_o *summonDetailBtn; // x0
  UnityEngine_Behaviour_o *summonHelpInfo; // x0

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon
    || (multiPay = stoneSummon->fields.multiPay) == 0LL
    || (button = (UnityEngine_Behaviour_o *)multiPay->fields.button) == 0LL
    || (v7 = isEnable,
        UnityEngine_Behaviour__set_enabled(button, isEnable, 0LL),
        (summonDetailBtn = (UnityEngine_Behaviour_o *)this->fields.summonDetailBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(summonDetailBtn, v7, 0LL),
        (summonHelpInfo = (UnityEngine_Behaviour_o *)this->fields.summonHelpInfo) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(summonHelpInfo, isEnable, 0LL);
}


void __fastcall SummonInfoControl__SetTutorialExeBtnEnable(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  UnityEngine_Behaviour_o *button; // x0
  struct SummonInfoControl_SummonObjInfo_o *v8; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_Behaviour_o *v10; // x0

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon
    || (onePay = stoneSummon->fields.onePay) == 0LL
    || (button = (UnityEngine_Behaviour_o *)onePay->fields.button) == 0LL
    || (UnityEngine_Behaviour__set_enabled(button, isEnable, 0LL), (v8 = this->fields.stoneSummon) == 0LL)
    || (single = v8->fields.single) == 0LL
    || (v10 = (UnityEngine_Behaviour_o *)single->fields.button) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(v10, isEnable, 0LL);
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
        sub_B170D4();
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t PayOneTimePrice; // w0
  const MethodInfo *v9; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v12; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x6
  struct SummonInfoControl_SummonObjInfo_o *v18; // x8
  const MethodInfo *v19; // x6
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x1
  int32_t gachaTime; // w8
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  System_String_o *v29; // x1
  UISprite_o *numImg; // x0
  const MethodInfo *v31; // x4
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *v33; // x8
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD47E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, payGachaEnt);
    sub_B16FFC(&StringLiteral_23445, v6);
    sub_B16FFC(&StringLiteral_17034, v7);
    byte_40FD47E = 1;
  }
  if ( !payGachaEnt )
    goto LABEL_21;
  if ( payGachaEnt->fields.shopId1 >= 1 && payGachaEnt->fields.shopId2 > 0 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, this->fields.stoneSummon, 0, v3);
    this->fields.gachaTime = payGachaEnt->fields.drawNum1;
    PayOneTimePrice = GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
    stoneSummon = this->fields.stoneSummon;
    this->fields.price = PayOneTimePrice;
    this->fields.shopIdIdx = 1;
    if ( stoneSummon )
    {
      onePay = stoneSummon->fields.onePay;
      if ( onePay )
      {
        SummonInfoControl__SetPriceText(this, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_23445, v9);
        v12 = this->fields.stoneSummon;
        if ( v12 )
        {
          multiPay = v12->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL);
            SummonInfoControl__SetPriceText(
              this,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_23445,
              v16);
            v18 = this->fields.stoneSummon;
            if ( v18 )
            {
              SummonInfoControl__SetSummonGiftDisp(this, v18->fields.onePay, 1, 0, 0, 0, v17);
              v20 = this->fields.stoneSummon;
              if ( v20 )
              {
                SummonInfoControl__SetSummonGiftDisp(this, v20->fields.multiPay, 0, 1, 0, 0, v19);
                SummonInfoControl__SetElevenBonusInfo(
                  this,
                  payGachaEnt,
                  0,
                  this->fields.stoneSummon,
                  this->fields.gachaTime,
                  v21);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_31121664(this, v22);
  gachaTime = this->fields.gachaTime;
  v24 = (System_String_o *)StringLiteral_17034;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v34 = gachaTime;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v26 = System_String__Format(v24, v25, 0LL);
  v27 = this->fields.stoneSummon;
  if ( !v27 )
    goto LABEL_21;
  single = v27->fields.single;
  if ( !single )
    goto LABEL_21;
  v29 = v26;
  numImg = single->fields.numImg;
  if ( !numImg )
    goto LABEL_21;
  UISprite__set_spriteName(numImg, v29, 0LL);
  v32 = this->fields.stoneSummon;
  if ( !v32 )
    goto LABEL_21;
  v33 = v32->fields.single;
  if ( !v33 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(this, v33->fields.infoLabel, -1, (System_String_o *)StringLiteral_23445, v31);
}


void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v11; // x4
  struct SummonInfoControl_SummonObjInfo_o *v12; // x8
  struct SummonInfoControl_SummonObjParts_o *v13; // x8
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x6
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  const MethodInfo *v21; // x5

  if ( (byte_40FD47D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23445, payGachaEnt);
    sub_B16FFC(&StringLiteral_23395, v7);
    byte_40FD47D = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_23445, v8);
  v12 = this->fields.ticketSummon;
  if ( !v12 )
    goto LABEL_12;
  v13 = v12->fields.onePay;
  if ( !v13
    || (SummonInfoControl__SetPriceText(
          this,
          v13->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_23395,
          v11),
        (v14 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v14->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_23445, v18),
        (v20 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  SummonInfoControl__SetSummonGiftDisp(this, v20->fields.multiPay, 0, 1, 0, 0, v19);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v21);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v9; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD47C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, ticketNum);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FD47C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_15;
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  if ( UserItemMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         usrData->fields.userId,
         currentSummonData->fields.ticketItemId,
         0LL) )
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
    sub_B170D4();
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  _BOOL4 v12; // w8
  int v13; // w21
  __int64 v14; // x8
  int32_t v15; // w0
  const MethodInfo *v16; // x6
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  int32_t v18; // w9
  const MethodInfo *v19; // x4
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  SummonInfoControl_o *v22; // x0
  const MethodInfo *v23; // x4
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD47B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, payGachaEnt);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_23445, v7);
    byte_40FD47B = 1;
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
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  v12 = UserServantMaster__getCountWithoutMaterial(
          Master_WarQuestSelectionMaster,
          &servantEquipSum[1],
          servantEquipSum,
          0LL) > 10;
  if ( !payGachaEnt )
    goto LABEL_23;
  v13 = haveStoneNum >= userFreeStone || v12;
  v14 = 64LL;
  if ( v13 )
    v14 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v14);
  v15 = (v13 & 1) != 0
      ? GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL)
      : GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
  v17 = this->fields.stoneSummon;
  v18 = v13 ? 2 : 1;
  this->fields.price = v15;
  this->fields.shopIdIdx = v18;
  if ( !v17
    || (SummonInfoControl__SetSummonGiftDisp(this, v17->fields.single, 0, 1, 0, 0, v16),
        (v20 = this->fields.stoneSummon) == 0LL)
    || (single = v20->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_23445, v19),
        (v24 = this->fields.stoneSummon) == 0LL)
    || (v25 = v24->fields.single) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    v22,
    this->fields.gachaTime,
    v25->fields.numImg,
    v25->fields.bonusInfo,
    v23);
}


void __fastcall SummonInfoControl___SetSummonDispInfo_b__121_0(
        SummonInfoControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x8
  UserGameEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    v4 = entity;
    if ( !entity )
      sub_B170D4();
    this->fields.haveStoneNum = entity->fields.stone;
    this->fields._HaveFreeStoneNum_k__BackingField = v4->fields.freeStone;
    this->fields._HaveChargeStoneNum_k__BackingField = v4->fields.chargeStone;
  }
}


GachaEntity_o *__fastcall SummonInfoControl__get_CurrentGachaEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct GachaMaster_o *gachaMaster; // x0

  if ( (byte_40FD473 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, method);
    byte_40FD473 = 1;
  }
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || (gachaMaster = this->fields.gachaMaster) == 0LL )
    sub_B170D4();
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gachaMaster,
                            currentSummonData->fields.id,
                            (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, paramData, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  v23 = sub_AAFEF8(paramData, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B170AC(v15, v28);
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
                  v14 = sub_AAFEF8(paramData, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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
  *(_OWORD *)&this->fields.Top.fields.x = xmmword_31333B0;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A90 & 1) == 0 )
  {
    sub_B16FFC(&SummonInfoControl___c_TypeInfo, v1);
    byte_40F7A90 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SummonInfoControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SummonInfoControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *multiSummonInfo; // x20
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_40F7A92 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F7A92 = 1;
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
    v5 = x->fields.singleSummonInfo;
    if ( !v5 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
  }
  multiSummonInfo = (UnityEngine_Object_o *)x->fields.multiSummonInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(multiSummonInfo, 0LL, 0LL) )
  {
    v7 = x->fields.multiSummonInfo;
    if ( v7 )
    {
      UnityEngine_GameObject__SetActive(v7, 0, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
}


void __fastcall SummonInfoControl___c___OffSetInfoBtn_b__123_0(
        SummonInfoControl___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FSOffset_o *Component_srcLineSprite; // x19

  if ( (byte_40F7A91 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FSOffset___, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F7A91 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (FSOffset_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            obj,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      FSOffset__UpdateOffset(Component_srcLineSprite, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
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
  SummonInfoControl_o *_4__this; // x0
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  SummonInfoControl_o *v8; // x0
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  SummonInfoControl_o *v10; // x0

  if ( !x )
    goto LABEL_9;
  single = x->fields.single;
  if ( !single
    || (_4__this = this->fields.__4__this) == 0LL
    || (SummonInfoControl__SetButtonCollider(_4__this, single->fields.button, this->fields.onOff, 0LL),
        (onePay = x->fields.onePay) == 0LL)
    || (v8 = this->fields.__4__this) == 0LL
    || (SummonInfoControl__SetButtonCollider(v8, onePay->fields.button, this->fields.onOff, 0LL),
        (multiPay = x->fields.multiPay) == 0LL)
    || (v10 = this->fields.__4__this) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  SummonInfoControl__SetButtonCollider(v10, multiPay->fields.button, this->fields.onOff, 0LL);
}