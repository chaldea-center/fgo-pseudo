void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  if ( (byte_42AD63F & 1) == 0 )
  {
    sub_B52984(&BattleSequenceManager_TypeInfo);
    byte_42AD63F = 1;
  }
  BattleSequenceManager_TypeInfo->static_fields->defaultForceObi_16_9 = 1;
  BattleSequenceManager_TypeInfo->static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v9; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v10; // x20
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_42AD63E & 1) == 0 )
  {
    sub_B52984(&BattlePerformance_BattleUIPanel___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Object___ctor___68515696);
    sub_B52984(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_B52984(&System_Collections_Generic_List_Action__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Object__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_B52984(&Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C);
    sub_B52984(&StringLiteral_9452/*"N_{0}{1}"*/);
    byte_42AD63E = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Array_o *)sub_B5299C(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v11.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v3, v11, 0LL);
  this->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v3;
  sub_B52920(&this->fields.FadeTargetPanelIndexs);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v4;
  sub_B52920(&this->fields.ReleaseSoundNames);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v5;
  sub_B52920(&this->fields.DelayInvokeMethodList);
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9452/*"N_{0}{1}"*/;
  sub_B52920(&this->fields.PosNodeFormatNP);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Object___ctor___68515696);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v6;
  sub_B52920(&this->fields.npEndDeleteObjects);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v7;
  sub_B52920(&this->fields.battleTargetList);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B52920(&this->fields.createdObjects);
  v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v9,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_B52920(&this->fields.playAudioSyncGroupIndexDict);
  v10 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v10,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v10;
  sub_B52920(&this->fields.playedAudioGroupIdHash);
  this->fields.nowTargetAlpha = 1.0;
  this->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)sub_B5299C(UnityEngine_GameObject___TypeInfo, 3LL);
  sub_B52920(&this->fields.saveWaitEnemy);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AD622 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23382/*"wait"*/);
    byte_42AD622 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !actor )
      sub_B52A5C(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_32597900(actor, (System_String_o *)StringLiteral_23382/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      clear = UnityEngine_Color__get_clear(0LL);
      BattleActorControl__ChangeShadowColor(actor, clear, 0.3, 0LL);
    }
    black = UnityEngine_Color__get_black(0LL);
    BattleActorControl__SetMaterialColor(actor, black, 0.0, 0LL);
  }
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_42AD638 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Contains_string___);
    byte_42AD638 = 1;
  }
  if ( System_String__Equals_44627072(bgmName, this->fields.BackupBgmName, 0LL) )
  {
    return 0;
  }
  else
  {
    intactBgmList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.intactBgmList;
    return !intactBgmList
        || !intactBgmList[1].monitor
        || !System_Linq_Enumerable__Contains_string_(
              intactBgmList,
              this->fields.BackupBgmName,
              (const MethodInfo_1B5C2A8 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure(
        BattleSequenceManager_o *this,
        WellFired_USFGOPlayCutInBase_o *baseCutInEvent,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( !baseCutInEvent )
    sub_B52A5C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_20150348(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_20150348(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass77_0_o *v7; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v11; // x21
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v15; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v19; // x24

  if ( (byte_42AD60A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
    byte_42AD60A = 1;
  }
  v7 = (BattleSequenceManager___c__DisplayClass77_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass77_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.obj = obj;
  sub_B52920(&v7->fields.obj);
  v7->fields.onComplete = onComplete;
  sub_B52920(&v7->fields.onComplete);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_17;
  v11 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_17;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v11 )
    goto LABEL_17;
  this->fields.standFigure = StandFigureManager__CreateMeshLocal(v11, (UnityEngine_GameObject_o *)Instance, 0LL);
  p_standFigure = &this->fields.standFigure;
  sub_B52920(&this->fields.standFigure);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)*p_standFigure;
    if ( *p_standFigure )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      Instance = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(
                                              this->fields.loadStandFigureId,
                                              this->fields.loadStandFigureLimitCount,
                                              0LL);
      if ( gameObject )
      {
        UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
        Instance = (UnityEngine_Component_o *)*p_standFigure;
        if ( *p_standFigure )
        {
          UIStandFigureRender__SetDepth((UIStandFigureRender_o *)Instance, 0.0, 0LL);
          v15 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v15 )
            return UIStandFigureM__SetCharacter_40849396(
                     v15,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v19,
                     1,
                     0LL);
        }
      }
    }
LABEL_17:
    sub_B52A5C(Instance, v9);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o **p_BackupBgmName; // x20
  System_String_o *v5; // x21
  __int64 Instance; // x0
  __int64 v7; // x1
  System_String_o *BgmName; // x0
  const MethodInfo *v9; // x3
  BgmPlayArgsGroup_o *v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  float v14; // s0
  double v15; // d0
  int32_t v16; // w21
  const MethodInfo_2172180 *v17; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  System_Object_array *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v24; // x8
  struct BattlePerformance_o *v25; // x8
  BattleSequenceManager_c *v26; // x0
  Il2CppObject *v27; // x21
  __int64 v28; // x1
  Il2CppObject *v29; // x21
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Hashtable_o *v34; // x0
  System_String_o *v35; // x19
  __int64 v36; // x0
  __int64 v37; // x0
  int v38; // [xsp+4h] [xbp-7Ch] BYREF
  System_Nullable_long__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v43; // 0:x1.8
  System_Nullable_float__o v44; // 0:x2.8
  System_Nullable_long__o v45; // 0:x0.16

  if ( (byte_42AD623 & 1) == 0 )
  {
    sub_B52984(&BattleSequenceManager_TypeInfo);
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_B52984(&Method_System_Nullable_float___ctor__);
    sub_B52984(&Method_System_Nullable_long___ctor__);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_10005/*"OnChangeBgmVolume"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42AD623 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  changeFieldAfter = this->fields.changeFieldAfter;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( changeFieldAfter )
  {
    this->fields.BackupBgmName = BattleActionData_AfterChangeField__GetPriorityBgmName(
                                   changeFieldAfter,
                                   this->fields.performance,
                                   this->fields.BackupBgmName,
                                   0LL);
    sub_B52920(&this->fields.BackupBgmName);
  }
  v5 = *p_BackupBgmName;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0LL);
  if ( !System_String__op_Inequality(v5, BgmName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Instance = sub_B5299C(object___TypeInfo, 8LL);
    if ( !Instance )
      goto LABEL_81;
    v19 = (System_Object_array *)Instance;
    v20 = StringLiteral_19056/*"from"*/;
    if ( StringLiteral_19056/*"from"*/ )
    {
      v20 = sub_B52A44(StringLiteral_19056/*"from"*/, v19->obj.klass->_1.element_class);
      if ( !v20 )
        goto LABEL_82;
      v21 = StringLiteral_19056/*"from"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v19->max_length )
      goto LABEL_80;
    v19->m_Items[0] = (Il2CppObject *)v21;
    sub_B52920(v19->m_Items);
    v26 = BattleSequenceManager_TypeInfo;
    if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v26 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v39.fields.value = v26->static_fields->NoblePhantasmBgmVolumeRate;
    v20 = j_il2cpp_value_box_0(float_TypeInfo, &v39);
    v27 = (Il2CppObject *)v20;
    if ( !v20 || (v20 = sub_B52A44(v20, v19->obj.klass->_1.element_class)) != 0 )
    {
      if ( v19->max_length <= 1 )
        goto LABEL_80;
      v19->m_Items[1] = v27;
      sub_B52920(&v19->m_Items[1]);
      v20 = StringLiteral_22904/*"to"*/;
      if ( StringLiteral_22904/*"to"*/ )
      {
        v20 = sub_B52A44(StringLiteral_22904/*"to"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_82;
        v28 = StringLiteral_22904/*"to"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v19->max_length <= 2 )
        goto LABEL_80;
      v19->m_Items[2] = (Il2CppObject *)v28;
      sub_B52920(&v19->m_Items[2]);
      LODWORD(fadeTime.fields.value) = 1;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &fadeTime);
      v29 = (Il2CppObject *)v20;
      if ( !v20 || (v20 = sub_B52A44(v20, v19->obj.klass->_1.element_class)) != 0 )
      {
        if ( v19->max_length <= 3 )
          goto LABEL_80;
        v19->m_Items[3] = v29;
        sub_B52920(&v19->m_Items[3]);
        v20 = StringLiteral_22867/*"time"*/;
        if ( StringLiteral_22867/*"time"*/ )
        {
          v20 = sub_B52A44(StringLiteral_22867/*"time"*/, v19->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_82;
          v30 = StringLiteral_22867/*"time"*/;
        }
        else
        {
          v30 = 0LL;
        }
        if ( v19->max_length <= 4 )
          goto LABEL_80;
        v19->m_Items[4] = (Il2CppObject *)v30;
        sub_B52920(&v19->m_Items[4]);
        v38 = 1056964608;
        v20 = j_il2cpp_value_box_0(float_TypeInfo, &v38);
        v31 = (Il2CppObject *)v20;
        if ( !v20 || (v20 = sub_B52A44(v20, v19->obj.klass->_1.element_class)) != 0 )
        {
          if ( v19->max_length <= 5 )
            goto LABEL_80;
          v19->m_Items[5] = v31;
          sub_B52920(&v19->m_Items[5]);
          v20 = StringLiteral_21442/*"onupdate"*/;
          if ( StringLiteral_21442/*"onupdate"*/ )
          {
            v20 = sub_B52A44(StringLiteral_21442/*"onupdate"*/, v19->obj.klass->_1.element_class);
            if ( !v20 )
              goto LABEL_82;
            v32 = StringLiteral_21442/*"onupdate"*/;
          }
          else
          {
            v32 = 0LL;
          }
          if ( v19->max_length <= 6 )
            goto LABEL_80;
          v19->m_Items[6] = (Il2CppObject *)v32;
          sub_B52920(&v19->m_Items[6]);
          v20 = StringLiteral_10005/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10005/*"OnChangeBgmVolume"*/ )
          {
            v33 = 0LL;
LABEL_70:
            if ( v19->max_length > 7 )
            {
              v19->m_Items[7] = (Il2CppObject *)v33;
              sub_B52920(&v19->m_Items[7]);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v34 = iTween__Hash(v19, 0LL);
              iTween__ValueTo(gameObject, v34, 0LL);
              return;
            }
LABEL_80:
            v36 = sub_B52A88(v20);
            sub_B52A28(v36, 0LL);
          }
          v20 = sub_B52A44(StringLiteral_10005/*"OnChangeBgmVolume"*/, v19->obj.klass->_1.element_class);
          if ( v20 )
          {
            v33 = StringLiteral_10005/*"OnChangeBgmVolume"*/;
            goto LABEL_70;
          }
        }
      }
    }
LABEL_82:
    v37 = sub_B52A7C();
    sub_B52A28(v37, 0LL);
  }
  Instance = BattleSequenceManager__ExistBackupBgmPlayGroup(
               this,
               this->fields.changeFieldAfter != 0LL,
               this->fields.BackupBgmName,
               v9);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( Instance )
    {
      Instance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)Instance, 0LL);
      if ( Instance )
      {
        v10 = (BgmPlayArgsGroup_o *)Instance;
        Instance = *(_QWORD *)(Instance + 16);
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v40,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          while ( 1 )
          {
            v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v40,
                    (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v11 )
              break;
            current = v40.fields.current;
            if ( !v40.fields.current )
              sub_B52A5C(v11, v12);
            v14 = (float)(__int64)v40.fields.current[2].klass + -800.0;
            if ( v14 == INFINITY )
              v15 = -INFINITY;
            else
              v15 = v14;
            v16 = UnityEngine_Mathf__Max_41525284(0, (int)v15, 0LL);
            fadeTime = 0LL;
            p_fadeTime = (System_Nullable_float__o)&fadeTime;
            System_Nullable_float____ctor(
              p_fadeTime,
              0.5,
              (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&v45.fields.has_value = v16;
            v39.fields.value = 0LL;
            *(_QWORD *)&v39.fields.has_value = 0LL;
            v45.fields.value = (int64_t)&v39;
            System_Nullable_long____ctor(v45, Method_System_Nullable_long___ctor__, v17);
            v44 = fadeTime;
            v43 = 0LL;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v43, v44, v39, 0LL);
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v40,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_24800484(v10, 0LL, 0LL);
          return;
        }
      }
    }
LABEL_81:
    sub_B52A5C(Instance, v7);
  }
  if ( this->fields.changeFieldAfter )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_81;
    logic = (UnityEngine_Object_o *)performance->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v24 = this->fields.performance;
      if ( v24 )
      {
        Instance = (__int64)v24->fields.logic;
        if ( Instance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)Instance, 0LL, 0LL);
          v25 = this->fields.performance;
          if ( v25 )
          {
            Instance = (__int64)v25->fields.logic;
            if ( Instance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)Instance, 0.5, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_81;
    }
  }
  v35 = *p_BackupBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v35, 0LL);
}


bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass140_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x20

  if ( (byte_42AD63A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_B52984(&Method_System_Func_BgmPlayArgs__bool___ctor__);
    sub_B52984(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass140_0_TypeInfo);
    byte_42AD63A = 1;
  }
  v7 = (BattleSequenceManager___c__DisplayClass140_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass140_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass140_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.checkBgmName = checkBgmName;
  sub_B52920(&v7->fields);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                               backupBgmPlayArgsGroup,
                                                               0LL);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BgmPlayArgs__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v11,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_1B52544 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x19
  struct BattlePerformance_BattleUIPanel_array *FadeTargetPanelIndexs; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v14; // x8
  __int64 v15; // x0

  v6 = this;
  if ( (byte_42AD61A & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD61A = 1;
  }
  FadeTargetPanelIndexs = v6->fields.FadeTargetPanelIndexs;
  v6->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_25;
  v8 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v15 = sub_B52A88(this);
        sub_B52A28(v15, 0LL);
      }
      this = (BattleSequenceManager_o *)v6->fields.performance;
      if ( !this )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        (BattlePerformance_o *)this,
                                        FadeTargetPanelIndexs->m_Items[v9 + 1],
                                        0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(Panel, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Panel )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Panel, 0LL);
        this = (BattleSequenceManager_o *)TweenAlpha__Begin(gameObject, time, targetAlpha, 0LL);
      }
      LODWORD(v8) = FadeTargetPanelIndexs->max_length;
      if ( (__int64)++v9 >= (int)v8 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B52A5C(this, method);
  }
LABEL_15:
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_25;
  root_drop = (UnityEngine_Object_o *)performance->fields.root_drop;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(root_drop, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v6->fields.performance;
    if ( !v14 )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)v14->fields.root_drop;
    if ( !this )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, targetAlpha == 1.0, 0LL);
  }
}


UIStandFigureM_o *__fastcall BattleSequenceManager__FetchMeshPrefab(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  if ( this->fields.chrId == svtId
    && this->fields.actorLimitImgCount == limitImgCnt
    && this->fields.faceType == faceType
    || this->fields.loadStandFigureId == svtId
    && this->fields.loadStandFigureLimitCount == limitImgCnt
    && this->fields.faceType == faceType )
  {
    return this->fields.standFigure;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall BattleSequenceManager__FixSyncGroupRandomAudioPlayIndex(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *sequence,
        System_String_o *syncGroupName,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass74_0_o *v6; // x22
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  BattleSequenceManager___c_c *v10; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_0; // x23
  Il2CppObject *v13; // x24
  struct BattleSequenceManager___c_StaticFields *v14; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  BattleSequenceManager___c_c *v18; // x0
  struct BattleSequenceManager___c_StaticFields *v19; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_2; // x19
  Il2CppObject *v21; // x22
  struct BattleSequenceManager___c_StaticFields *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AD609 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_B52984(&Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
    sub_B52984(&Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_B52984(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_B52984(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_B52984(&Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
    sub_B52984(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_B52984(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_B52984(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__);
    sub_B52984(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
    sub_B52984(&BattleSequenceManager___c_TypeInfo);
    byte_42AD609 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v6 = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass74_0___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_31;
  v6->fields.syncGroupName = syncGroupName;
  sub_B52920(&v6->fields);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_31;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                        sequence,
                                                        (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v9 )
    goto LABEL_31;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v7,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v10 = BattleSequenceManager___c_TypeInfo;
  if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v10 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__74_0,
      v13,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    v14 = BattleSequenceManager___c_TypeInfo->static_fields;
    v14->__9__74_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__74_0;
    sub_B52920(&v14->__9__74_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__74_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v9,
          (System_Func_T__bool__o *)v15,
          (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    v7 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                          sequence,
                                                          (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v16 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        v7,
        (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v17 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                             sequence,
                                                             (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        v17,
        (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v18 = BattleSequenceManager___c_TypeInfo;
      if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v18 = BattleSequenceManager___c_TypeInfo;
      }
      v19 = v18->static_fields;
      _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v19->__9__74_2;
      if ( !_9__74_2 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v19 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)v19->__9;
        _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__74_2,
          v21,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__,
          (const MethodInfo_2483370 *)Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
        v22 = BattleSequenceManager___c_TypeInfo->static_fields;
        v22->__9__74_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__74_2;
        sub_B52920(&v22->__9__74_2);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
        (System_Comparison_T__o *)_9__74_2,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v24.fields.current )
          sub_B52A5C(0LL, v23);
      }
      while ( (((__int64 (*)(void))v24.fields.current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_31:
    sub_B52A5C(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleSequenceManager__GetOverwritedCutInLimitCount(
        BattleSequenceManager_o *this,
        int32_t curLimCnt,
        int32_t svtId,
        int32_t defLimCnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  int32_t ServantId; // w0

  if ( (byte_42AD60D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD60D = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit(Component_srcLineSprite, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_srcLineSprite, 0LL);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_srcLineSprite, 0LL);
      return curLimCnt;
    }
    goto LABEL_16;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B52A5C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_srcLineSprite, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 *v8; // x8
  Il2CppObject *v9; // x22
  WebViewManager_o *Instance; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AD62D & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_B52984(&StringLiteral_6036/*"Enemy"*/);
    sub_B52984(&StringLiteral_10778/*"Player"*/);
    byte_42AD62D = 1;
  }
  v8 = &StringLiteral_6036/*"Enemy"*/;
  if ( !isEnemy )
    v8 = &StringLiteral_10778/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v15 = pos;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v12 = System_String__Format_44563852(format, v9, v11, 0LL);
  if ( !Instance )
    sub_B52A5C(v12, v13);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v12, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass121_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_42AD62E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_B52984(&Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
    sub_B52984(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass121_0_TypeInfo);
    byte_42AD62E = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass121_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass121_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass121_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.posIndex = posIndex;
  battleTargetList = this->fields.battleTargetList;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)battleTargetList,
                                        (System_Predicate_T__o *)v9,
                                        (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0LL);
LABEL_9:
    sub_B52A5C(v6, v7);
  }
  return result;
}


bool __fastcall BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  System_String_o *fixedVoice; // x1

  *fxdVoice = 0LL;
  sub_B52920(fxdVoice);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_B52920(fxdVoice);
  return 1;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42AD639 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD639 = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0LL) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(actor, 0LL, 0LL) )
    return 0;
  v8 = this->fields.actor;
  if ( !v8 )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_18:
    sub_B52A5C(v8, v7);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_srcLineSprite, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *webView; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  if ( (byte_42AD63B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_42AD63B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v2 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_21;
  webView = (UnityEngine_Object_o *)v2->fields.webView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(webView, 0LL, 0LL) )
    return 0;
  v2 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_21;
  v2 = (WebViewManager_o *)v2->fields.webView;
  if ( !v2 )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v2,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = (WebViewManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B52A5C(v2, v3);
  return LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) == 0;
}


bool __fastcall BattleSequenceManager__IsReleaseSound(
        BattleSequenceManager_o *this,
        System_String_o *soundName,
        const MethodInfo *method)
{
  return !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, soundName, 0LL);
}


bool __fastcall BattleSequenceManager__IsSameBattleBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(bgmName, this->fields.BackupBgmName, 0LL);
}


bool __fastcall BattleSequenceManager__IsTimeAccelerateNow(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( (byte_42AD63D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD63D = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return !UnityEngine_Object__op_Equality(performance, 0LL, 0LL)
      && BattleSequenceManager__get_isAuthTDAccelerate(this, v4);
}


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *IsNullOrEmpty; // x0
  __int64 v8; // x1

  if ( (byte_42AD60B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AD60B = 1;
  }
  IsNullOrEmpty = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(bgmName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( callback )
    {
      System_Action__Invoke(callback, 0LL);
      return;
    }
LABEL_11:
    sub_B52A5C(IsNullOrEmpty, v8);
  }
  IsNullOrEmpty = this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
    (EventMissionProgressRequest_Argument_ProgressData_o *)bgmName,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(bgmName, callback, 1, 0LL);
}


void __fastcall BattleSequenceManager__LoadEndStandFigure(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x22
  __int64 v8; // x1
  UIStandFigureRender_o *v9; // x0

  if ( (byte_42AD60C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD60C = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_B52A5C(0LL, v8);
    UIStandFigureRender__SetActive(v9, 0, 0LL);
  }
  if ( onComplete )
    BattleSequenceManager_onGameObjectLoadComplete__Invoke(onComplete, obj, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__MultiTargetBossPositioning(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *CoreObj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *monitor; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  srcLineSprite_o *v14; // x21
  __int64 *v15; // x8
  struct BattlePerformance_o *v16; // x9
  System_String_o *v17; // x19
  BattleData_o *v18; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AD629 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_18453/*"en_Parts_Up01"*/);
    sub_B52984(&StringLiteral_18452/*"en_Parts_Under01"*/);
    byte_42AD629 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0LL, 0LL) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) == 0 )
    {
      v8 = this->fields.performance;
      if ( !v8 )
        goto LABEL_61;
      data = (UnityEngine_Object_o *)v8->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        v10 = this->fields.performance;
        if ( !v10 )
          goto LABEL_61;
        v11 = v10->fields.data;
        if ( !v11 )
          goto LABEL_61;
        if ( v11->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_61;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              CoreObj,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)monitor & 1) == 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_61;
            monitor = (UnityEngine_GameObject_o *)Component_srcLineSprite[18].monitor;
            if ( !monitor )
              goto LABEL_61;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)monitor, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                monitor = this->fields.SingleTarget;
                if ( !monitor )
                  goto LABEL_61;
                v14 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        monitor,
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v14,
                                                        0LL,
                                                        0LL);
                if ( ((unsigned __int8)monitor & 1) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_61;
                  if ( LOBYTE(v14[3].fields.mcTweenAlphaP) )
                  {
                    monitor = *(UnityEngine_GameObject_o **)&v14[3].fields.mtIsUpdate;
                    if ( !monitor )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)monitor, 0LL) )
                      goto LABEL_43;
                    monitor = *(UnityEngine_GameObject_o **)&v14[3].fields.mtIsUpdate;
                    if ( !monitor )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)monitor, 0LL) )
                    {
LABEL_43:
                      monitor = *(UnityEngine_GameObject_o **)&v14[3].fields.mtIsUpdate;
                      if ( !monitor )
                        goto LABEL_61;
                      monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                              (BattleServantData_o *)monitor,
                                                              0LL);
                      if ( ((unsigned __int8)monitor & 1) != 0 )
                      {
                        v15 = &StringLiteral_18453/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        monitor = *(UnityEngine_GameObject_o **)&v14[3].fields.mtIsUpdate;
                        if ( !monitor )
                          goto LABEL_61;
                        monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                (BattleServantData_o *)monitor,
                                                                0LL);
                        if ( ((unsigned __int8)monitor & 1) == 0 )
                          return 0;
                        v15 = &StringLiteral_18452/*"en_Parts_Under01"*/;
                      }
                      v16 = this->fields.performance;
                      if ( !v16 )
                        goto LABEL_61;
                      v17 = (System_String_o *)*v15;
                      v18 = v16->fields.data;
                      monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_srcLineSprite,
                                                              0LL);
                      if ( !v18 )
                        goto LABEL_61;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v18,
                                                                    (UnityEngine_Transform_o *)monitor,
                                                                    v17,
                                                                    0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL);
                        if ( monitor )
                        {
                          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)monitor,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v23 = v20;
                            v24 = v21;
                            v25 = v22;
                            monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    TransformChild,
                                                                    0LL);
                            if ( monitor )
                            {
                              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)monitor, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                      0LL);
                              if ( monitor )
                              {
                                v31.fields.x = v23 - x;
                                v31.fields.y = v24 - y;
                                v31.fields.z = v25 - z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)monitor, v31, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_61:
                        sub_B52A5C(monitor, v7);
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
  return 0;
}


void __fastcall BattleSequenceManager__OnBgChanged(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  BattleSequenceManager_o *v3; // x19
  System_Action_o *BgChangedCallback; // x0
  struct System_Action_o **p_BgChangedCallback; // x19

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0LL) )
    sub_B52A5C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = &v3->fields.BgChangedCallback;
    System_Action__Invoke(BgChangedCallback, 0LL);
    *p_BgChangedCallback = 0LL;
    sub_B52920(p_BgChangedCallback);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v10; // x19
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  __int64 v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  System_String_o *v28; // x20
  float v29; // s9
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0

  if ( (byte_42AD61E & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AD61E = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v6 )
      sub_B52A5C(0LL, v7);
    klass = v6->klass;
    v10 = v6;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v8);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v10,
            *(_QWORD *)(p_method + 8));
    if ( !v16 )
      sub_B52A5C(0LL, v14);
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
      {
        v18 = 0LL;
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
            goto LABEL_16;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_16:
        v20 = sub_AEB880(v16, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
        break;
      v22 = *(_QWORD *)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
      {
        v23 = 0LL;
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          ++v23;
          v24 += 4;
          if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
            goto LABEL_23;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_23:
        v25 = sub_AEB880(v16, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v21);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v16, *(_QWORD *)(v25 + 8));
      if ( !v27 )
        sub_B52A5C(0LL, v26);
      v28 = *(System_String_o **)(v27 + 16);
      v29 = *(float *)(v27 + 24);
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v28, v29 * newValue, 0LL);
    }
    v30 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_34;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_34:
      v33 = sub_AEB880(v16, System_IDisposable_TypeInfo, 0LL, v21);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v16, *(_QWORD *)(v33 + 8));
  }
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *actorCamera; // x20
  srcLineSprite_o *v5; // x1
  const MethodInfo *v6; // x2
  __int64 transform; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  Il2CppObject *v15; // x20
  int v16; // w20
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v19; // x21
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v21; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v24; // x10
  unsigned __int64 v25; // x22
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v27; // x21
  struct System_Collections_Generic_List_bool__o *v28; // x27
  char *v29; // x8
  int v30; // w27
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v33; // x24
  __int64 v34; // x25
  unsigned __int64 v35; // x9
  unsigned __int64 v36; // x26
  UnityEngine_Object_o *v37; // x21
  struct BattlePerformance_o *v38; // x9
  struct UnityEngine_GameObject_array *v39; // x8
  unsigned int *v40; // x27
  __int64 v41; // x21
  struct BattlePerformance_o *v42; // x8
  struct UnityEngine_GameObject_array *v43; // x24
  __int64 v44; // x8
  unsigned __int64 v45; // x25
  UnityEngine_Object_o *v46; // x21
  struct System_Collections_Generic_List_bool__o *v47; // x28
  char *v48; // x8
  int v49; // w28
  UnityEngine_Object_o *v50; // x21
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v52; // x8
  struct BattlePerformance_o *v53; // x8
  struct UnityEngine_GameObject_array *v54; // x22
  __int64 v55; // x8
  unsigned __int64 v56; // x24
  UnityEngine_Object_o *v57; // x21
  BattleActorControl_o *v58; // x0
  const MethodInfo *v59; // x2
  struct BattlePerformance_o *v60; // x8
  struct UnityEngine_GameObject_array *v61; // x22
  __int64 v62; // x8
  unsigned __int64 v63; // x24
  UnityEngine_Object_o *v64; // x21
  BattleActorControl_o *v65; // x0
  const MethodInfo *v66; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v69; // x2
  UnityEngine_Camera_o *v70; // x21
  int32_t cullingMask; // w22
  char v72; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v74; // w22
  char v75; // w0
  struct BattlePerformance_o *v76; // x8
  UnityEngine_Object_o *v77; // x21
  bool v78; // w0
  struct BattlePerformance_o *v79; // x8
  BattlePerformance_o *v80; // x20
  int32_t v81; // w21
  int32_t CurrentGroundType; // w0
  __int64 v83; // x0
  __int64 v84; // x0
  struct UnityEngine_GameObject_o **v85; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+8h] [xbp-B8h] BYREF
  int v87[2]; // [xsp+20h] [xbp-A0h]
  int v88; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42AD620 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_USSequencer__Invoke__);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&CommonUI_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_B52984(&StringLiteral_9654/*"NoblePhantasm/CutIns"*/);
    sub_B52984(&StringLiteral_2800/*"Battle2D"*/);
    byte_42AD620 = 1;
  }
  entity = 0LL;
  memset(&v90, 0, sizeof(v90));
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  this->fields.IsPlaying = 0;
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v3);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_195;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_195;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v6);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v8);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v9);
  BattleSequenceManager__restoreBattleActorTransform(this, v10);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_195;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v11) )
    BattleSequenceManager__CrossFadeBgm(this, v12);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v12);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_195;
  transform = (__int64)performance->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__loadEffectStatus((BattleActionCamera_o *)transform, 0LL);
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v90 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v90,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v90.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
    }
  }
  v87[0] = 208;
  v88 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v90,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  v88 = 0;
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_Object__Clear__);
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v89 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v89,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v15 = v89.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)v15, 0LL);
    }
  }
  v87[0] = 284;
  v16 = ++v88;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v89,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v16 && v87[v16 - 1] == 284 )
    v88 = v16 - 1;
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v19 = (UnityEngine_Object_o *)*p_seqObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v19, 0LL);
    *p_seqObject = 0LL;
    sub_B52920(&this->fields.seqObject);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_195;
  v21 = this->fields.performance;
  v85 = &this->fields.seqObject;
  if ( !v21 )
    goto LABEL_195;
  p_actorlist = v21->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_195;
  e_actorlist = v21->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_195;
  v24 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v24 )
  {
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v25 < max_length )
      {
        v27 = (UnityEngine_Object_o *)p_actorlist->m_Items[v25];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v28 = this->fields.ActorActiveList;
          if ( !v28 )
            goto LABEL_195;
          if ( v25 >= (unsigned int)v28->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( !v27 )
            goto LABEL_195;
          v29 = (char *)v28->fields._items + v25;
          v30 = (unsigned __int8)v29[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, v29[32] != 0, 0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v27,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_195;
            transform = (__int64)Component_srcLineSprite[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v30 != 0, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v25 >= (int)max_length )
          goto LABEL_88;
      }
LABEL_196:
      v83 = sub_B52A88(transform);
      sub_B52A28(v83, 0LL);
    }
    LODWORD(v25) = 0;
LABEL_88:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_195;
    v33 = 4LL;
    v34 = 8LL;
    while ( 1 )
    {
      v35 = saveWaitEnemy->max_length;
      v36 = v33 - 4;
      if ( v33 - 4 >= (int)v35 )
        break;
      if ( v36 >= v35 )
        goto LABEL_196;
      v37 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v33);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v38 = this->fields.performance;
        if ( !v38 )
          goto LABEL_195;
        v39 = this->fields.saveWaitEnemy;
        if ( !v39 )
          goto LABEL_195;
        if ( v36 >= v39->max_length )
          goto LABEL_196;
        v40 = (unsigned int *)v38->fields.e_actorlist;
        if ( !v40 )
          goto LABEL_195;
        v41 = *((_QWORD *)&v39->obj.klass + v33);
        if ( v41 )
        {
          transform = sub_B52A44(v41, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
          if ( !transform )
          {
            v84 = sub_B52A7C();
            sub_B52A28(v84, 0LL);
          }
        }
        if ( v36 >= v40[6] )
          goto LABEL_196;
        *(_QWORD *)&v40[v34] = v41;
        sub_B52920(&v40[v34]);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v33;
      v34 += 2LL;
      if ( !saveWaitEnemy )
        goto LABEL_195;
    }
    v42 = this->fields.performance;
    if ( !v42 )
      goto LABEL_195;
    v43 = v42->fields.e_actorlist;
    if ( !v43 )
      goto LABEL_195;
    v44 = *(_QWORD *)&v43->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = 0LL;
      while ( v45 < (unsigned int)v44 )
      {
        v46 = (UnityEngine_Object_o *)v43->m_Items[v45];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v47 = this->fields.ActorActiveList;
          if ( !v47 )
            goto LABEL_195;
          if ( v47->fields._size <= (unsigned int)(v25 + v45) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( !v46 )
            goto LABEL_195;
          v48 = (char *)v47->fields._items + (int)v25 + (int)v45;
          v49 = (unsigned __int8)v48[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, v48[32] != 0, 0LL);
          v50 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v46,
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v50 )
              goto LABEL_195;
            transform = (__int64)v50[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v49 != 0, 0LL);
          }
        }
        LODWORD(v44) = v43->max_length;
        if ( (__int64)++v45 >= (int)v44 )
          goto LABEL_127;
      }
      goto LABEL_196;
    }
LABEL_127:
    v21 = this->fields.performance;
    if ( !v21 )
      goto LABEL_195;
  }
  data = (UnityEngine_Object_o *)v21->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v52 = this->fields.performance;
    if ( !v52 )
      goto LABEL_195;
    transform = (__int64)v52->fields.data;
    if ( !transform )
      goto LABEL_195;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0LL);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0LL);
  v53 = this->fields.performance;
  if ( !v53 )
    goto LABEL_195;
  v54 = v53->fields.p_actorlist;
  if ( !v54 )
    goto LABEL_195;
  v55 = *(_QWORD *)&v54->max_length;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    while ( v56 < (unsigned int)v55 )
    {
      v57 = (UnityEngine_Object_o *)v54->m_Items[v56];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v57 )
          goto LABEL_195;
        v58 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v57,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v58, v59);
      }
      LODWORD(v55) = v54->max_length;
      if ( (__int64)++v56 >= (int)v55 )
        goto LABEL_149;
    }
    goto LABEL_196;
  }
LABEL_149:
  v60 = this->fields.performance;
  if ( !v60 )
    goto LABEL_195;
  v61 = v60->fields.e_actorlist;
  if ( !v61 )
    goto LABEL_195;
  v62 = *(_QWORD *)&v61->max_length;
  if ( (int)v62 >= 1 )
  {
    v63 = 0LL;
    while ( v63 < (unsigned int)v62 )
    {
      v64 = (UnityEngine_Object_o *)v61->m_Items[v63];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v64 )
          goto LABEL_195;
        v65 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v64,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v65, v66);
      }
      LODWORD(v62) = v61->max_length;
      if ( (__int64)++v63 >= (int)v62 )
        goto LABEL_161;
    }
    goto LABEL_196;
  }
LABEL_161:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    transform = (__int64)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_195;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0LL);
    *p_standFigure = 0LL;
    sub_B52920(&this->fields.standFigure);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v69) )
    BattleSequenceManager__ReleaseCpk(this, (const MethodInfo *)v5);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v70 = this->fields.actorCamera;
  if ( !v70 )
    goto LABEL_195;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v72 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2800/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v70, (1 << v72) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_195;
  v74 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v75 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2800/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v74 & ~(1 << v75), 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v76 = this->fields.performance;
  if ( !v76 )
    goto LABEL_195;
  transform = (__int64)v76->fields.bgPerf;
  if ( !transform )
    goto LABEL_195;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( this->fields.OnCompleteActorCallback )
  {
    v77 = (UnityEngine_Object_o *)*v85;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v78 = UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
    v5 = 0LL;
    if ( v78 )
    {
      transform = (__int64)*v85;
      if ( !*v85 )
        goto LABEL_195;
      v5 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             (UnityEngine_GameObject_o *)transform,
             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    }
    transform = (__int64)this->fields.OnCompleteActorCallback;
    if ( transform )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)transform,
        (System_Uri_o *)v5,
        (const MethodInfo_2627794 *)Method_System_Action_USSequencer__Invoke__);
      goto LABEL_184;
    }
LABEL_195:
    sub_B52A5C(transform, v5);
  }
LABEL_184:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9654/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_195;
  *(_BYTE *)(transform + 129) = 0;
  v79 = this->fields.performance;
  if ( !v79 )
    goto LABEL_195;
  transform = (__int64)v79->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v80 = this->fields.performance;
  if ( !v80 )
    goto LABEL_195;
  transform = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_195;
  v81 = transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v80, v81, CurrentGroundType, 0, 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__releaseChangeBgAssets((BattlePerformance_o *)transform, 0LL);
}


void __fastcall BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v5; // x0
  __int64 v6; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v7; // x20
  __int64 v8; // x3
  Il2CppClass *klass; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v10; // x19
  unsigned __int64 v11; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  __int64 v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x3
  BattleSequenceManager___c__DisplayClass111_0_o *v22; // x21
  __int64 v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x23
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo_2172180 *v31; // x3
  BgmPlayArgs_o *args; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  System_Nullable_long__o v39; // [xsp+8h] [xbp-68h] BYREF
  __int64 v40; // [xsp+18h] [xbp-58h]
  System_Nullable_float__o v41; // 0:x1.8
  System_Nullable_float__o v42; // 0:x2.8
  System_Nullable_long__o v43; // 0:x0.16

  if ( (byte_42AD625 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_B52984(&Method_System_Func_BgmPlayArgs__bool___ctor__);
    sub_B52984(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Nullable_long___ctor__);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass111_0_TypeInfo);
    byte_42AD625 = 1;
  }
  HIDWORD(v40) = 0;
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v3 )
    {
      v4 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(v3, 0LL);
      v5 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                               v4,
                                                                                               (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(this->fields.backupBgmPlayArgsGroup, 0LL)) == 0LL) )
      {
        sub_B52A5C(v5, v6);
      }
      klass = v5->obj.klass;
      v10 = v5;
      if ( *(_WORD *)&v5->obj.klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v11;
          p_offset += 4;
          if ( v11 >= *(unsigned __int16 *)&v5->obj.klass->_2.bitflags1 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_AEB880(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v8);
      }
      v16 = (*(__int64 (__fastcall **)(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *, _QWORD))p_method)(
              v10,
              *(_QWORD *)(p_method + 8));
      if ( !v16 )
        sub_B52A5C(0LL, v14);
      while ( 1 )
      {
        v17 = *(_QWORD *)v16;
        if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
        {
          v18 = 0LL;
          v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v18;
            v19 += 4;
            if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
              goto LABEL_21;
          }
          v20 = v17 + 16LL * *v19 + 312;
        }
        else
        {
LABEL_21:
          v20 = sub_AEB880(v16, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
          break;
        v22 = (BattleSequenceManager___c__DisplayClass111_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass111_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass111_0___ctor(v22, 0LL);
        v24 = *(_QWORD *)v16;
        if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
        {
          v25 = 0LL;
          v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v25;
            v26 += 4;
            if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
              goto LABEL_28;
          }
          v27 = v24 + 16LL * *v26 + 312;
        }
        else
        {
LABEL_28:
          v27 = sub_AEB880(v16, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v23);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v16, *(_QWORD *)(v27 + 8));
        if ( !v22 )
          sub_B52A5C(v28, v28);
        v22->fields.args = (struct BgmPlayArgs_o *)v28;
        sub_B52920(&v22->fields);
        v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v29,
          (Il2CppObject *)v22,
          Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_BgmPlayArgs__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           v7,
                                                                           (System_Func_T__bool__o *)v29,
                                                                           (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          *(_QWORD *)&v43.fields.has_value = USFGOActorBattleActionEventConditional_OverwriteParamCondition[1].klass;
        else
          *(_QWORD *)&v43.fields.has_value = 0LL;
        args = v22->fields.args;
        v39.fields.value = 0LL;
        *(_QWORD *)&v39.fields.has_value = 0LL;
        v43.fields.value = (int64_t)&v39;
        System_Nullable_long____ctor(v43, Method_System_Nullable_long___ctor__, v31);
        if ( !args )
          sub_B52A5C(v33, v34);
        v41 = 0LL;
        v42 = 0LL;
        BgmPlayArgs__Update(args, v41, v42, v39, 0LL);
      }
      v40 = 0x1000000A3LL;
      v35 = *(_QWORD *)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
      {
        v36 = 0LL;
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
            goto LABEL_41;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_41:
        v38 = sub_AEB880(v16, System_IDisposable_TypeInfo, 0LL, v21);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v16, *(_QWORD *)(v38 + 8));
      if ( (_DWORD)v40 == 163 )
        v40 = 163LL;
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_42AD621 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD621 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_B52A5C(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x20
  System_String_o *v8; // x0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x20
  System_Action_o *v10; // x21
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AD626 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleSequenceManager__ReleaseCpk_b__112_0__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Action__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&StringLiteral_9656/*"NoblePhantasm_"*/);
    byte_42AD626 = 1;
  }
  v11 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v11 = overwriteSvtVoiceId;
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_9656/*"NoblePhantasm_"*/, v8, 0LL);
  if ( !ReleaseSoundNames
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__),
        DelayInvokeMethodList = this->fields.DelayInvokeMethodList,
        v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__112_0__, 0LL),
        !DelayInvokeMethodList) )
  {
LABEL_9:
    sub_B52A5C(Instance, v4);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DelayInvokeMethodList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Action__Add__);
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.fixedVoice = 0LL;
  sub_B52920(&this->fields.fixedVoice);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.intactBgmList = 0LL;
  sub_B52920(&this->fields.intactBgmList);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD624 & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    byte_42AD624 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  this->fields.backupBgmPlayArgsGroup = BgmManager__ExportPlayArgsGroup(0LL);
  sub_B52920(&this->fields.backupBgmPlayArgsGroup);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v7; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v9; // x20
  System_String_o **v10; // x8
  __int64 v11; // x9
  __int64 v12; // x25
  System_String_o *v13; // x21
  unsigned __int64 v14; // x26
  unsigned int v15; // w8
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x23
  int v20; // s0
  struct BattlePerformance_o *v23; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v27; // s9
  int v28; // s2
  unsigned int v29; // s0
  float v30; // s1
  struct BattlePerformance_o *v31; // x8
  struct BattleData_o *data; // x8
  __int64 v33; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AD62A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_B52984(&StringLiteral_9450/*"N_Enemy2"*/);
    sub_B52984(&StringLiteral_9451/*"N_Player2"*/);
    byte_42AD62A = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_61;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_srcLineSprite,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_srcLineSprite )
    goto LABEL_61;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_srcLineSprite,
                                         0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0LL) )
    return;
  v7 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_61;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        actor,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_61;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[19].monitor) != 0) != (LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) != 0)
                           ? &StringLiteral_9450/*"N_Enemy2"*/
                           : &StringLiteral_9451/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_61;
  v11 = 296LL;
  if ( LOBYTE(actor[19].monitor) )
    v11 = 304LL;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_61:
    sub_B52A5C(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0LL;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
      {
        v33 = sub_B52A88(actor);
        sub_B52A28(v33, 0LL);
      }
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v13,
                                              0LL);
        if ( !v16 )
          goto LABEL_61;
        v18 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !v18 )
          goto LABEL_61;
        v19 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(v18, 0LL);
        if ( !v19 )
          goto LABEL_61;
        UnityEngine_Transform__set_position(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = this->fields.performance;
        if ( !v23 )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)v23->fields.data;
        if ( !actor )
          goto LABEL_61;
        if ( BYTE6(actor[29].klass) && LOBYTE(v9[19].monitor) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_61;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0LL);
            if ( !actor )
              goto LABEL_61;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0LL);
            y = position.fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            v27 = (unsigned int)UnityEngine_Transform__get_position(v18, 0LL);
            *(UnityEngine_Vector3_o *)(&v28 - 2) = UnityEngine_Transform__get_position(v18, 0LL);
            if ( !transform )
              goto LABEL_61;
            v29 = v27;
            v30 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v28 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_61;
          UnityEngine_GameObject__SetActive(v16, 0, 0LL);
          v31 = this->fields.performance;
          if ( !v31 )
            goto LABEL_61;
          data = v31->fields.data;
          if ( !data )
            goto LABEL_61;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v9[19].monitor) )
            UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        }
      }
      v15 = *(_DWORD *)(v12 + 24);
      ++v14;
    }
    while ( (__int64)v14 < (int)v15 );
  }
}


void __fastcall BattleSequenceManager__SetAfterChangeField(
        BattleSequenceManager_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_B52A5C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_B52920(&this->fields.changeFieldAfter);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v6; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v8; // x8

  v4 = this;
  if ( (byte_42AD636 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    this = (BattleSequenceManager_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_42AD636 = 1;
  }
  battleTargetList = v4->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_20;
  v6 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v8 = battleTargetList->fields._items->m_Items[v6];
    if ( v8 )
    {
      this = (BattleSequenceManager_o *)v8->fields.targetActor;
      if ( this )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        else
          BattleActorControl__setAuraFlip((BattleActorControl_o *)this, (bool)this[1].fields.seqObject, 0LL);
        battleTargetList = v4->fields.battleTargetList;
        ++v6;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_20;
  }
  if ( isReset )
  {
    this = (BattleSequenceManager_o *)v4->fields.actor;
    if ( this )
    {
      this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)this,
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( this )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        return;
      }
    }
LABEL_20:
    sub_B52A5C(this, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.fixedVoice = voiceId;
  sub_B52920(&this->fields.fixedVoice);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AD637 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD637 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  this->fields.intactBgmList = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  sub_B52920(&this->fields.intactBgmList);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetMultiTargetBattleEnemy(
        BattleSequenceManager_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v11; // x19
  int v12; // s0

  v4 = this;
  if ( (byte_42AD628 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD628 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_25;
  data = performance->fields.data;
  if ( !data )
    goto LABEL_25;
  if ( !data->fields.isMultiTargetBattle )
    return;
  if ( !targetActor )
    goto LABEL_25;
  if ( !targetActor->fields.isEnemy )
    return;
  this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_25;
  this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUp((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
    if ( !this )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUnder((BattleServantData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
  }
  v7 = v4->fields.performance;
  if ( !v7 || (this = (BattleSequenceManager_o *)v7->fields.data) == 0LL )
LABEL_25:
    sub_B52A5C(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v9 = v4->fields.performance;
    if ( v9 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v9->fields.root_field, 0LL);
        if ( PartsActor )
        {
          transform = UnityEngine_Component__get_transform(PartsActor, 0LL);
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)targetActor,
                                              0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            v11 = UnityEngine_Component__get_transform(PartsActor, 0LL);
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
            if ( v11 )
            {
              UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_25;
  }
}


void __fastcall BattleSequenceManager__SetPreLoadStandFigureData(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  this->fields.loadStandFigureId = svtId;
  this->fields.loadStandFigureLimitCount = limitImgCnt;
  this->fields.faceType = faceType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        bool isStart,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v10; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v12; // x8
  struct BattleActorControl_o *targetActor; // x8

  if ( (byte_42AD60F & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_42AD60F = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               actor,
                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          Component_srcLineSprite,
          (BattleFBXComponent_o *)Component_srcLineSprite,
          isStart,
          v7),
        (battleTargetList = this->fields.battleTargetList) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(actor, isStart);
  }
  v10 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v10 >= size )
      break;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v12 = battleTargetList->fields._items->m_Items[v10];
    if ( v12 )
    {
      targetActor = v12->fields.targetActor;
      if ( targetActor )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          targetActor->fields.fbxcomponent,
          isStart,
          v8);
        battleTargetList = this->fields.battleTargetList;
        ++v10;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_12;
  }
}


void __fastcall BattleSequenceManager__SetTempShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        BattleFBXComponent_o *fbx,
        bool isStart,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42AD610 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16321/*"_y0"*/);
    byte_42AD610 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v6 )
  {
    if ( !fbx )
      sub_B52A5C(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16321/*"_y0"*/, 0LL);
      else
        BattleFBXComponent__RevertShaderFloatProperty(fbx, 0LL);
    }
  }
}


void __fastcall BattleSequenceManager__SetupDemoActor(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_array *playerList,
        UnityEngine_GameObject_array *enemyList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *seqObject; // x0
  WellFired_USSequencer_o *Component_srcLineSprite; // x20
  unsigned __int64 v9; // x27
  unsigned __int64 v10; // x26
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  unsigned __int64 max_length; // x8
  __int64 v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x21
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x8
  __int64 v23; // x0
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AD60E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1855/*"Actors/Actor"*/);
    byte_42AD60E = 1;
  }
  v24 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_29:
    sub_B52A5C(seqObject, playerList);
  Component_srcLineSprite = (WellFired_USSequencer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0LL;
  do
  {
    v10 = v9 + 1;
    v24 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v24, 0LL);
    v12 = System_String__Concat_44568316((System_String_o *)StringLiteral_1855/*"Actors/Actor"*/, v11, 0LL);
    v14 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v12,
                                    Component_srcLineSprite,
                                    v12,
                                    v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_29;
      max_length = playerList->max_length;
      if ( (__int64)v9 < (int)max_length )
      {
        if ( v9 >= max_length )
        {
LABEL_30:
          v23 = sub_B52A88(seqObject);
          sub_B52A28(v23, 0LL);
        }
        seqObject = playerList->m_Items[v9];
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v14 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v14,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v9;
  }
  while ( v10 - 1 < 2 );
  v16 = 4LL;
  do
  {
    v24 = v16;
    v17 = System_Int32__ToString((int32_t)&v24, 0LL);
    v18 = System_String__Concat_44568316((System_String_o *)StringLiteral_1855/*"Actors/Actor"*/, v17, 0LL);
    v20 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v18,
                                    Component_srcLineSprite,
                                    v18,
                                    v19);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = v16 - 4;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_29;
      v22 = enemyList->max_length;
      if ( (__int64)v21 < (int)v22 )
      {
        if ( v21 >= v22 )
          goto LABEL_30;
        seqObject = (UnityEngine_GameObject_o *)*((_QWORD *)&enemyList->obj.klass + v16);
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v20 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v20,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v16;
  }
  while ( v21 < 2 );
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass114_0_o *v3; // x22
  __int64 v4; // x1
  void *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  BattleActionData_o *klass; // x24
  System_Collections_Generic_HashSet_int__o *v8; // x25
  void **p_targetList; // x21
  int v10; // w8
  void *v11; // x25
  unsigned int v12; // w20
  __int64 v13; // x8
  int v14; // w8
  void *v15; // x25
  unsigned int v16; // w20
  __int64 v17; // x8
  int v18; // w8
  void *v19; // x25
  unsigned int v20; // w20
  __int64 v21; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *moveToSubMemberList; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x25
  int mcTweenAlphaP_low; // w20
  System_Collections_Generic_HashSet_int__o *v25; // x22
  int v26; // w27
  int i; // w28
  __int64 v28; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v32; // x1
  srcLineSprite_o *v33; // x0
  __int64 v34; // x1
  int32_t v35; // w21
  int v36; // w25
  int v37; // w8
  struct UnityEngine_GameObject_o *v38; // x21
  BattleActorControl_o *v39; // x23
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  BattlePerformance_o *v42; // x0
  int32_t v43; // w20
  UnityEngine_Object_o *v44; // x21
  _BOOL8 v45; // x0
  __int64 v46; // x1
  BattleActorControl_o *v47; // x22
  BattleSequenceManager_BattleTarget_o *v48; // x21
  __int64 v49; // x1
  BattlePerformance_o *v50; // x0
  __int64 ServantPosIndex; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  int v55; // w25
  __int64 v56; // x0
  int v57; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v58; // [xsp+18h] [xbp-98h] BYREF
  int v59[3]; // [xsp+30h] [xbp-80h]
  int v60; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42AD627 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    sub_B52984(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_B52984(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
    byte_42AD627 = 1;
  }
  memset(&j, 0, sizeof(j));
  v60 = 0;
  v3 = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass114_0___ctor(v3, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_B52920(&this->fields.SingleTarget);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_83;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_srcLineSprite )
    goto LABEL_83;
  klass = (BattleActionData_o *)Component_srcLineSprite[3].klass;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( !v3 )
    goto LABEL_83;
  v3->fields.targetList = v8;
  p_targetList = (void **)&v3->fields.targetList;
  sub_B52920(&v3->fields);
  if ( !klass )
    goto LABEL_83;
  actor = BattleActionData__getDamageList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v10 = *((_DWORD *)actor + 6);
  v11 = actor;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < v10 )
    {
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      if ( !v13 )
        goto LABEL_83;
      v4 = *(unsigned int *)(v13 + 28);
      if ( (_DWORD)v4 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v4,
                          (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_20;
    }
LABEL_84:
    v56 = sub_B52A88(actor);
    sub_B52A28(v56, 0LL);
  }
LABEL_20:
  actor = BattleActionData__getBuffList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v14 = *((_DWORD *)actor + 6);
  v15 = actor;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      v17 = *((_QWORD *)v15 + (int)v16 + 4);
      if ( !v17 )
        goto LABEL_83;
      v4 = *(unsigned int *)(v17 + 40);
      if ( (_DWORD)v4 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v4,
                          (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        goto LABEL_29;
    }
    goto LABEL_84;
  }
LABEL_29:
  actor = BattleActionData__getHealList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v18 = *((_DWORD *)actor + 6);
  v19 = actor;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = *((_QWORD *)v19 + (int)v20 + 4);
      if ( !v21 )
        goto LABEL_83;
      v4 = *(unsigned int *)(v21 + 28);
      if ( (_DWORD)v4 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v4,
                          (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        goto LABEL_38;
    }
    goto LABEL_84;
  }
LABEL_38:
  moveToSubMemberList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)klass->fields.moveToSubMemberList;
  if ( moveToSubMemberList )
  {
    v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v23,
      (Il2CppObject *)v3,
      Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      moveToSubMemberList,
      (System_Action_T__o *)v23,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
  }
  mcTweenAlphaP_low = LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  actor = *p_targetList;
  if ( !*p_targetList )
    goto LABEL_83;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v58,
    (System_Collections_Generic_HashSet_int__o *)actor,
    (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v57 = 0;
  j = v58;
  v26 = 0;
LABEL_42:
  for ( i = v26; ; ++i )
  {
    v26 = i;
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      break;
    performance = this->fields.performance;
    if ( !performance )
      sub_B52A5C(0LL, v28);
    current = (int32_t)j.fields._current;
    ServantGameObject = BattlePerformance__getServantGameObject(performance, (int32_t)j.fields._current, 0LL);
    if ( !ServantGameObject )
      sub_B52A5C(0LL, v32);
    v33 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ServantGameObject,
            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !v33 )
      sub_B52A5C(0LL, v34);
    if ( (mcTweenAlphaP_low != 0) == (LOBYTE(v33[3].fields.mcTweenAlphaP) != 0) )
    {
      ++v57;
      goto LABEL_42;
    }
    if ( !v25 )
      sub_B52A5C(v33, v34);
    System_Collections_Generic_HashSet_int___Add(
      v25,
      current,
      (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v59[0] = 391;
  v60 = 1;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v60 = 0;
  if ( v57 && i == 1 )
  {
    *p_targetList = v25;
    sub_B52920(p_targetList);
  }
  actor = *p_targetList;
  if ( !*p_targetList )
LABEL_83:
    sub_B52A5C(actor, v4);
  if ( *((_DWORD *)actor + 8) == 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v58,
      (System_Collections_Generic_HashSet_int__o *)actor,
      (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v35 = -1;
    for ( j = v58;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          v35 = (int32_t)j.fields._current )
    {
      ;
    }
    v59[0] = 486;
    v36 = ++v60;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &j,
      (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v59[v36 - 1] == 486 )
      {
        --v36;
        v60 = v37;
      }
    }
    actor = this->fields.performance;
    if ( !actor )
      goto LABEL_83;
    actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v35, 0LL);
    if ( !actor )
      goto LABEL_83;
    v38 = (struct UnityEngine_GameObject_o *)actor;
    v39 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)actor,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this->fields.SingleTarget = v38;
    sub_B52920(&this->fields.SingleTarget);
    BattleSequenceManager__SetMultiTargetBattleEnemy(this, v39, v40);
    if ( !v25 )
      goto LABEL_83;
  }
  else
  {
    v36 = 0;
    if ( !v25 )
      goto LABEL_83;
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v58,
    v25,
    (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  j = v58;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    v42 = this->fields.performance;
    if ( !v42 )
      sub_B52A5C(0LL, v41);
    v43 = (int32_t)j.fields._current;
    v44 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(v42, (int32_t)j.fields._current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
    if ( !v45 )
    {
      if ( !v44 )
        sub_B52A5C(v45, v46);
      v47 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v44,
                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      v48 = (BattleSequenceManager_BattleTarget_o *)sub_B52A54(BattleSequenceManager_BattleTarget_TypeInfo);
      BattleSequenceManager_BattleTarget___ctor(v48, 0LL);
      v50 = this->fields.performance;
      if ( !v50 )
        sub_B52A5C(0LL, v49);
      ServantPosIndex = BattlePerformance__getServantPosIndex(v50, v43, 0LL);
      if ( !v48 )
        sub_B52A5C(ServantPosIndex, v52);
      BattleSequenceManager_BattleTarget__setup(v48, v47, ServantPosIndex, 0LL);
      battleTargetList = this->fields.battleTargetList;
      if ( !battleTargetList )
        sub_B52A5C(0LL, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)battleTargetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    }
  }
  v59[v36] = 651;
  v55 = ++v60;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v55 && v59[v55 - 1] == 651 )
    v60 = v55 - 1;
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B52A5C(0LL, method);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v7; // x8

  v4 = this;
  if ( (byte_42AD61D & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD61D = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_12;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(infoComp, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.performance;
    if ( v7 )
    {
      this = (BattleSequenceManager_o *)v7->fields.infoComp;
      if ( this )
      {
        BattleInformationComponent__SwitchPopupFullScreen((BattleInformationComponent_o *)this, isFullScreen, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(this, isFullScreen);
  }
}


void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x19
  BattleSequenceManager_o *v6; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v12; // x4
  BaseMonoBehaviour_o *v13; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *monitor; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *npEndDeleteObjects; // x22
  int v19; // w22
  UnityEngine_Transform_o *v20; // x0
  WellFired_USTimelineContainer_o *v21; // x0

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_42AD62C & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD62C = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_40;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_40;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_40;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v5,
                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
      Component_WebViewObject = (UnityEngine_Object_o *)v6->fields.defaultSyncSetting;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_40;
      if ( BattleSyncTransformComponent__get_IsNotExecSync(
             (BattleSyncTransformComponent_o *)Component_WebViewObject,
             0LL) )
      {
        return;
      }
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v9);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v13 )
          goto LABEL_40;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        monitor = (UnityEngine_Transform_o *)v13[11].monitor;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v12);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v13,
                                            dummyActorPrefab,
                                            monitor,
                                            TargetFieldPosNode,
                                            0LL);
        if ( !this )
          goto LABEL_40;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0LL);
        if ( !this )
          goto LABEL_40;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          npEndDeleteObjects,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Object__Add__);
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      v20 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_UIWidget_(
                                          v20,
                                          (const MethodInfo_1A4184C *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_40;
      v21 = (WellFired_USTimelineContainer_o *)BattleSyncTransformComponent__SetTarget(
                                                 (BattleSyncTransformComponent_o *)this,
                                                 (UnityEngine_Transform_o *)TargetPosIndexTransform,
                                                 (BattleSyncTransformComponent_o *)Component_WebViewObject,
                                                 0LL);
      if ( v19 )
      {
        tlcont = v21;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)tlcont,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Object__Add__);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_40:
      sub_B52A5C(this, tlcont);
    }
  }
}


void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *klass; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  System_Collections_ICollection_o *Components_iTween; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  void *v15; // x8
  unsigned __int64 v16; // x25
  NoblePhantasmTargetOverwriteTransform_o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AD63C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD63C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  battleTargetList = this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v18 )
        break;
      if ( !v22.fields.current )
        sub_B52A5C(v18, v19);
      monitor = (UnityEngine_Object_o *)v22.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v7 )
      {
        if ( !monitor )
          sub_B52A5C(v7, v8);
        klass = (UnityEngine_Object_o *)monitor[1].klass;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        {
          v11 = (UnityEngine_GameObject_o *)monitor[1].klass;
          if ( !v11 )
            sub_B52A5C(0LL, v10);
          Components_iTween = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                    v11,
                                                                    (const MethodInfo_1B7B464 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_iTween, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_iTween )
              sub_B52A5C(IsNullOrEmpty, v14);
            v15 = Components_iTween[1].monitor;
            if ( (int)v15 >= 1 )
            {
              v16 = 0LL;
              do
              {
                if ( v16 >= (unsigned int)v15 )
                {
                  v20 = sub_B52A88(IsNullOrEmpty);
                  sub_B52A28(v20, 0LL);
                }
                v17 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_iTween[2].klass + v16);
                if ( isOverwrite )
                {
                  if ( !v17 )
                    sub_B52A5C(0LL, v14);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v17, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v17 )
                    sub_B52A5C(0LL, v14);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v17, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v15) = Components_iTween[1].monitor;
                ++v16;
              }
              while ( (__int64)v16 < (int)v15 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  }
}


void __fastcall BattleSequenceManager__TdDelayEnd(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleSequenceManager__CrossFadeBgm(this, method);
  BattleSequenceManager__ReleaseCpk(this, v3);
}


void __fastcall BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  float delayInvokeTimer; // s8
  __int64 v4; // x1
  float v5; // s0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD607 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_42AD607 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v5 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v5;
    if ( v5 <= 0.0 )
    {
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_13;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v7,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DelayInvokeMethodList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v7,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v7.fields.current )
          System_Action__Invoke((System_Action_o *)v7.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v7,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
LABEL_13:
        sub_B52A5C(DelayInvokeMethodList, v4);
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)DelayInvokeMethodList,
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_Action__Clear__);
    }
  }
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBG(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, int32_t, int32_t, Il2CppMethodPointer))changeFieldAfter->klass->vtable._4_SetTakeOverBG.method)(
      changeFieldAfter,
      id,
      type,
      changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.methodPtr);
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, System_String_o *, _QWORD, void *))changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.method)(
      changeFieldAfter,
      bgmName,
      0LL,
      changeFieldAfter->klass[1]._1.image);
}


System_Collections_IEnumerator_o *__fastcall BattleSequenceManager__WaitEndSequence(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager__WaitEndSequence_d__105_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_42AD61F & 1) == 0 )
  {
    sub_B52984(&BattleSequenceManager__WaitEndSequence_d__105_TypeInfo);
    byte_42AD61F = 1;
  }
  v3 = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B52A54(BattleSequenceManager__WaitEndSequence_d__105_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__105___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__112_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD640 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_42AD640 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ReleaseSoundNames,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v7.fields.current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v7.fields.current, 0LL) )
    {
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v6);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
LABEL_12:
    sub_B52A5C(ReleaseSoundNames, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)ReleaseSoundNames,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattleSequenceManager__addServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_42AD612 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42AD612 = 1;
  }
  FlagRequestNumber = System_String__Concat_44568316((System_String_o *)StringLiteral_16011/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_19033752((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B52A5C(FlagRequestNumber, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__changeBg(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  BattlePerformance_o *performance; // x22
  System_Action_o *v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_42AD61B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleSequenceManager_OnBgChanged__);
    byte_42AD61B = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_B52920(&this->fields.BgChangedCallback);
  performance = this->fields.performance;
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_B52A5C(v21, v22);
  v23.fields.z = v13;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  v23.fields.x = v15;
  v23.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v23, v24, 1, parentCamera, v20, 0LL);
}


bool __fastcall BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_42AD614 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42AD614 = 1;
  }
  FlagRequestNumber = System_String__Concat_44568316((System_String_o *)StringLiteral_16011/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( !(_DWORD)FlagRequestNumber )
    return (char)FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance
    || (v12 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0LL) )
  {
LABEL_9:
    sub_B52A5C(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_42AD631 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_42AD631 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
         (System_Xml_XmlQualifiedName_o *)groupName,
         (const MethodInfo_2F102FC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               playAudioSyncGroupIndexDict,
               groupName,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_B52A5C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD633 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_42AD633 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  bool v5; // w8
  BattleActorControl_o *result; // x0
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42AD603 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD603 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.actor;
    if ( !v7 )
      sub_B52A5C(0LL, v4);
    return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v7,
                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  }
  return result;
}


bool __fastcall BattleSequenceManager__get_ExistChangeFieldAfter(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0LL;
}


bool __fastcall BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  UnityEngine_Object_o *v5; // x20
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42AD606 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_42AD606 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v7);
  return BYTE1(Instance[1].fields.basePanel) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_42AD604 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD604 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0LL )
LABEL_16:
    sub_B52A5C(v4, v5);
  return v10->fields.systemflg_acceleration > 1;
}


bool __fastcall BattleSequenceManager__get_IsDemoMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.DemoMode;
}


float __fastcall BattleSequenceManager__get_NowTargetAlpha(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.nowTargetAlpha;
}


BattlePerformance_o *__fastcall BattleSequenceManager__get_Performance(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.performance;
}


int32_t __fastcall BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool __fastcall BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  void *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v11; // x20
  struct BattlePerformance_o *v13; // x8

  if ( (byte_42AD605 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD605 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_30;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (void *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    goto LABEL_25;
  Component_srcLineSprite = this->fields.actor;
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)Component_srcLineSprite,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_30;
  nowAction = v9->fields.nowAction;
  v11 = (BattleServantData_o *)*((_QWORD *)Component_srcLineSprite + 55);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v11 )
LABEL_30:
    sub_B52A5C(Component_srcLineSprite, v5);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_srcLineSprite + 55), 0LL) )
    return 0;
  Component_srcLineSprite = (void *)BattleServantData__IsFixNpFastSpeed(v11, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    return 1;
LABEL_25:
  v13 = this->fields.performance;
  if ( !v13 )
    goto LABEL_30;
  Component_srcLineSprite = v13->fields.data;
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  if ( *((_BYTE *)Component_srcLineSprite + 635) )
    return 0;
  return BattleData__IsHighSpeedOption((BattleData_o *)Component_srcLineSprite, 0LL);
}


void __fastcall BattleSequenceManager__init(
        BattleSequenceManager_o *this,
        BattlePerformance_o *performance,
        UnityEngine_GameObject_o *actor,
        UnityEngine_GameObject_array *players,
        UnityEngine_GameObject_array *enemies,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *bg,
        const MethodInfo *method)
{
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v18; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v19; // x20

  if ( (byte_42AD619 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_42AD619 = 1;
  }
  this->fields.performance = performance;
  sub_B52920(&this->fields.performance);
  this->fields.actor = actor;
  sub_B52920(&this->fields.actor);
  this->fields.playerActors = players;
  sub_B52920(&this->fields.playerActors);
  this->fields.enemyActors = enemies;
  sub_B52920(&this->fields.enemyActors);
  this->fields.actorCamera = camera;
  sub_B52920(&this->fields.actorCamera);
  if ( !performance
    || (this->fields.effectCamera = performance->fields.middleCamera,
        sub_B52920(&this->fields.effectCamera),
        this->fields.cutInCamera = performance->fields.cutIncamera,
        sub_B52920(&this->fields.cutInCamera),
        (actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera) == 0LL)
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
    sub_B52A5C(actorCamera, v16);
  }
  this->fields.originalCameraRoot = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  sub_B52920(&this->fields.originalCameraRoot);
  this->fields.bgObject = bg;
  sub_B52920(&this->fields.bgObject);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v17);
  v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v18,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v18;
  sub_B52920(&this->fields.playAudioSyncGroupIndexDict);
  v19 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v19,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v19;
  sub_B52920(&this->fields.playedAudioGroupIdHash);
}


bool __fastcall BattleSequenceManager__isFixedWithNoVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_String_o *fixedVoice; // x8

  fixedVoice = this->fields.fixedVoice;
  return fixedVoice && fixedVoice->fields.m_stringLength == 0;
}


bool __fastcall BattleSequenceManager__isNotPlaySoundLimitCount(
        BattleSequenceManager_o *this,
        System_Int32_array *limitCounts,
        const MethodInfo *method)
{
  if ( (byte_42AD634 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AD634 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_42AD616 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1851/*"Actor"*/);
    sub_B52984(&StringLiteral_16451/*"animCamLoc"*/);
    byte_42AD616 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_1851/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16451/*"animCamLoc"*/, 0LL);
}


void __fastcall BattleSequenceManager__loadSequence(
        BattleSequenceManager_o *this,
        int32_t chrId,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t treasureDeviceLv,
        int32_t npChargeStage,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass73_0_o *v17; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v19; // x1
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_42AD608 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass73_0_TypeInfo);
    sub_B52984(&StringLiteral_9654/*"NoblePhantasm/CutIns"*/);
    byte_42AD608 = 1;
  }
  v17 = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B52A54(BattleSequenceManager___c__DisplayClass73_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass73_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  v17->fields.__4__this = this;
  sub_B52920(&v17->fields);
  v17->fields.onComplete = onComplete;
  v17->fields.chrId = chrId;
  v17->fields.limitCount = limitCount;
  v17->fields.treasureDeviceId = treasureDeviceId;
  v17->fields.treasureDeviceLv = treasureDeviceLv;
  v17->fields.npChargeStage = npChargeStage;
  v17->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  sub_B52920(&v17->fields.onComplete);
  actor = this->fields.actor;
  this->fields.chrId = v17->fields.chrId;
  this->fields.limitCount = v17->fields.limitCount;
  this->fields.treasureDeviceId = v17->fields.treasureDeviceId;
  this->fields.overwriteSvtVoiceId = v17->fields.overwriteSvtVoiceId;
  if ( !actor
    || (v17->fields.battleActor = (struct BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   actor,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        sub_B52920(&v17->fields.battleActor),
        (actor = (UnityEngine_GameObject_o *)v17->fields.battleActor) == 0LL)
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v17->fields.chrId,
        (actor = (UnityEngine_GameObject_o *)v17->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9654/*"NoblePhantasm/CutIns"*/, v20, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__play(
        BattleSequenceManager_o *this,
        bool isOpponent,
        bool isDemoMode,
        System_Action_USSequencer__o *callback,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v7; // x19
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  UnityEngine_Object_o *seqObject; // x23
  int32_t NPSeqIdFromCachedAssetName; // w0
  int32_t chrId; // w24
  int32_t v13; // w23
  struct BattlePerformance_o *v14; // x8
  struct BattlePerformance_o *v15; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v18; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v20; // w24
  char v21; // w0
  System_Collections_Generic_List_bool__o *v22; // x24
  System_Collections_Generic_List_bool__o **p_ActorActiveList; // x23
  struct BattlePerformance_o *v24; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x21
  UnityEngine_Object_o *v28; // x24
  System_Collections_Generic_List_bool__o *v29; // x25
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v31; // x2
  struct BattlePerformance_o *v32; // x8
  struct UnityEngine_GameObject_array *v33; // x27
  __int64 v34; // x8
  unsigned __int64 v35; // x28
  UnityEngine_Object_o *v36; // x24
  BattleSequenceManager_o *v37; // x0
  const MethodInfo *v38; // x2
  unsigned int *v39; // x22
  unsigned int *v40; // x0
  struct BattlePerformance_o *v41; // x8
  struct UnityEngine_GameObject_array *v42; // x8
  __int64 v43; // x0
  const MethodInfo_300469C *v44; // x2
  bool v45; // w1
  System_Collections_Generic_List_bool__o *v46; // x25
  UnityEngine_GameObject_o *gameObject; // x21
  BattleSequenceManager_o *v48; // x22
  __int64 v49; // x1
  BattleSequenceManager_o *v50; // x23
  __int64 v51; // x1
  BattleSequenceManager_c *v52; // x0
  BattleSequenceManager_o *v53; // x23
  __int64 v54; // x1
  BattleSequenceManager_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x1
  System_Collections_Hashtable_o *v58; // x0
  const MethodInfo *v59; // x2
  WellFired_USSequencer_o *v60; // x21
  struct UnityEngine_GameObject_array **p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v63; // x24
  System_Delegate_o *v64; // x0
  const MethodInfo *v65; // x2
  __int64 v66; // x0
  __int64 v67; // x0
  BattleSequenceManager_o *v68; // x0
  BattleActorControl_o *v69; // x1
  const MethodInfo *v70; // x2
  bool v71; // [xsp+Ch] [xbp-74h]
  System_Action_USSequencer__o *v72; // [xsp+10h] [xbp-70h]
  unsigned int **p_saveWaitEnemy; // [xsp+18h] [xbp-68h]
  int v74; // [xsp+24h] [xbp-5Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-58h] BYREF
  int v76; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_42AD61C & 1) == 0 )
  {
    sub_B52984(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_B52984(&BattleSequenceManager_TypeInfo);
    sub_B52984(&CommonUI_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_bool__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_bool___ctor___68502952);
    sub_B52984(&System_Collections_Generic_List_bool__TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_B52984(&StringLiteral_12954/*"ShowNobleInfo"*/);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_10005/*"OnChangeBgmVolume"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_2800/*"Battle2D"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    this = (BattleSequenceManager_o *)sub_B52984(&iTween_TypeInfo);
    byte_42AD61C = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_128;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_128;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)sub_B5299C(
                                                                      UnityEngine_GameObject___TypeInfo,
                                                                      e_actorlist->max_length);
  p_saveWaitEnemy = (unsigned int **)&v7->fields.saveWaitEnemy;
  sub_B52920(&v7->fields.saveWaitEnemy);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NPSeqIdFromCachedAssetName = ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(0LL);
    chrId = v7->fields.chrId;
    v13 = NPSeqIdFromCachedAssetName;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, v13, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( **(_BYTE **)&this->fields.faceType )
      {
        if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_12954/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v14 = v7->fields.performance;
    if ( !v14 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v14->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v15 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v15 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v15->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_128;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v18 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2800/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v18), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_128;
    v20 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v21 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2800/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v21) | v20, 0LL);
    v22 = (System_Collections_Generic_List_bool__o *)sub_B52A54(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v22,
      (const MethodInfo_3003938 *)Method_System_Collections_Generic_List_bool___ctor___68502952);
    v7->fields.ActorActiveList = v22;
    p_ActorActiveList = &v7->fields.ActorActiveList;
    sub_B52920(&v7->fields.ActorActiveList);
    v24 = v7->fields.performance;
    if ( !v24 )
      goto LABEL_128;
    p_actorlist = v24->fields.p_actorlist;
    v71 = isDemoMode;
    v72 = callback;
    if ( !p_actorlist )
      goto LABEL_128;
    v26 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( v27 < (unsigned int)v26 )
      {
        v28 = (UnityEngine_Object_o *)p_actorlist->m_Items[v27];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
        v29 = *p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v28, 0LL);
          if ( !v29 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            v29,
            (unsigned __int8)this & 1,
            (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__);
          Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)v28,
                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            Component_srcLineSprite,
            (BattleActorControl_o *)Component_srcLineSprite,
            v31);
        }
        else
        {
          if ( !v29 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            *p_ActorActiveList,
            0,
            (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__);
        }
        LODWORD(v26) = p_actorlist->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_47;
      }
LABEL_129:
      v66 = sub_B52A88(this);
      sub_B52A28(v66, 0LL);
    }
LABEL_47:
    v32 = v7->fields.performance;
    if ( !v32 )
      goto LABEL_128;
    v33 = v32->fields.e_actorlist;
    if ( !v33 )
      goto LABEL_128;
    v34 = *(_QWORD *)&v33->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( v35 < (unsigned int)v34 )
      {
        v36 = (UnityEngine_Object_o *)v33->m_Items[v35];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_128;
          v37 = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)v36,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(v37, (BattleActorControl_o *)v37, v38);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v36,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_128;
          this = *(BattleSequenceManager_o **)&this[1].fields.IsPlaying;
          if ( !this )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v39 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_128;
            this = (BattleSequenceManager_o *)sub_B52A44(v36, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
            if ( !this )
              goto LABEL_130;
            if ( v35 >= v39[6] )
              goto LABEL_129;
            v40 = &v39[2 * v35];
            *((_QWORD *)v40 + 4) = v36;
            sub_B52920(v40 + 8);
            v41 = v7->fields.performance;
            if ( !v41 )
              goto LABEL_128;
            v42 = v41->fields.e_actorlist;
            if ( !v42 )
              goto LABEL_128;
            if ( v35 >= v42->max_length )
              goto LABEL_129;
            v43 = (__int64)v42 + 8 * v35;
            *(_QWORD *)(v43 + 32) = 0LL;
            sub_B52920(v43 + 32);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v36, 0, 0LL);
            this = (BattleSequenceManager_o *)*p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_128;
            v44 = (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__;
            v45 = 1;
          }
          else
          {
            v46 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v36,
                                                0LL);
            if ( !v46 )
              goto LABEL_128;
            v44 = (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__;
            v45 = (unsigned __int8)this & 1;
            this = (BattleSequenceManager_o *)v46;
          }
        }
        else
        {
          this = (BattleSequenceManager_o *)*p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_128;
          v44 = (const MethodInfo_300469C *)Method_System_Collections_Generic_List_bool__Add__;
          v45 = 0;
        }
        System_Collections_Generic_List_bool___Add((System_Collections_Generic_List_bool__o *)this, v45, v44);
        LODWORD(v34) = v33->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_73;
      }
      goto LABEL_129;
    }
LABEL_73:
    if ( !v71 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_B5299C(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_128;
    v48 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19056/*"from"*/;
    if ( StringLiteral_19056/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_B52A44(StringLiteral_19056/*"from"*/, v48->klass->_1.element_class);
      if ( !this )
        goto LABEL_130;
      v49 = StringLiteral_19056/*"from"*/;
    }
    else
    {
      v49 = 0LL;
    }
    if ( !LODWORD(v48->fields.sequenceManager) )
      goto LABEL_129;
    *(_QWORD *)&v48->fields.servantId = v49;
    sub_B52920(&v48->fields.servantId);
    v76 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
    v50 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_B52A44(this, v48->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v48->fields.sequenceManager) <= 1 )
        goto LABEL_129;
      *(_QWORD *)&v48->fields.testNpPer = v50;
      sub_B52920(&v48->fields.testNpPer);
      this = (BattleSequenceManager_o *)StringLiteral_22904/*"to"*/;
      if ( StringLiteral_22904/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_B52A44(StringLiteral_22904/*"to"*/, v48->klass->_1.element_class);
        if ( !this )
          goto LABEL_130;
        v51 = StringLiteral_22904/*"to"*/;
      }
      else
      {
        v51 = 0LL;
      }
      if ( LODWORD(v48->fields.sequenceManager) <= 2 )
        goto LABEL_129;
      v48->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v51;
      sub_B52920(&v48->fields.FadeTargetPanelIndexs);
      v52 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v52 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v52->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v53 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_B52A44(this, v48->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v48->fields.sequenceManager) <= 3 )
          goto LABEL_129;
        *(_QWORD *)&v48->fields.IsPlaying = v53;
        sub_B52920(&v48->fields.IsPlaying);
        this = (BattleSequenceManager_o *)StringLiteral_22867/*"time"*/;
        if ( StringLiteral_22867/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_B52A44(StringLiteral_22867/*"time"*/, v48->klass->_1.element_class);
          if ( !this )
            goto LABEL_130;
          v54 = StringLiteral_22867/*"time"*/;
        }
        else
        {
          v54 = 0LL;
        }
        if ( LODWORD(v48->fields.sequenceManager) <= 4 )
          goto LABEL_129;
        v48->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v54;
        sub_B52920(&v48->fields.ReleaseSoundNames);
        v74 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v74);
        v55 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_B52A44(this, v48->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v48->fields.sequenceManager) <= 5 )
            goto LABEL_129;
          v48->fields.performance = (struct BattlePerformance_o *)v55;
          sub_B52920(&v48->fields.performance);
          this = (BattleSequenceManager_o *)StringLiteral_21442/*"onupdate"*/;
          if ( StringLiteral_21442/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_B52A44(StringLiteral_21442/*"onupdate"*/, v48->klass->_1.element_class);
            if ( !this )
              goto LABEL_130;
            v56 = StringLiteral_21442/*"onupdate"*/;
          }
          else
          {
            v56 = 0LL;
          }
          if ( LODWORD(v48->fields.sequenceManager) <= 6 )
            goto LABEL_129;
          v48->fields.seqObject = (struct UnityEngine_GameObject_o *)v56;
          sub_B52920(&v48->fields.seqObject);
          this = (BattleSequenceManager_o *)StringLiteral_10005/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10005/*"OnChangeBgmVolume"*/ )
          {
            v57 = 0LL;
LABEL_112:
            if ( LODWORD(v48->fields.sequenceManager) <= 7 )
              goto LABEL_129;
            v48->fields.actor = (struct UnityEngine_GameObject_o *)v57;
            sub_B52920(&v48->fields.actor);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v58 = iTween__Hash((System_Object_array *)v48, 0LL);
            iTween__ValueTo(gameObject, v58, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              v7->fields.BackupBgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              sub_B52920(&v7->fields.BackupBgmName);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v59);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v60 = (WellFired_USSequencer_o *)this;
                    p_playerActors = &this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v63 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_B52A54(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v63,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v64 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v63, 0LL);
                    if ( v64
                      && (WellFired_USSequencer_PlaybackDelegate_c *)v64->klass != WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                    {
                      v68 = (BattleSequenceManager_o *)sub_B52D50(v64);
                      BattleSequenceManager__PrevPlayTargetActorProc(v68, v69, v70);
                    }
                    else
                    {
                      v60->fields.PlaybackFinished = (struct WellFired_USSequencer_PlaybackDelegate_o *)v64;
                      sub_B52920(p_playerActors);
                      v7->fields.OnCompleteActorCallback = v72;
                      sub_B52920(&v7->fields.OnCompleteActorCallback);
                      WellFired_USSequencer__Play(v60, 0LL);
                      if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CommonUI_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                      }
                      if ( CommonUI__GetForceObi_16_9(0LL) )
                        BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v65);
                    }
                    return;
                  }
                }
              }
            }
LABEL_128:
            sub_B52A5C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_B52A44(StringLiteral_10005/*"OnChangeBgmVolume"*/, v48->klass->_1.element_class);
          if ( this )
          {
            v57 = StringLiteral_10005/*"OnChangeBgmVolume"*/;
            goto LABEL_112;
          }
        }
      }
    }
LABEL_130:
    v67 = sub_B52A7C();
    sub_B52A28(v67, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v5; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v9; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v11; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x4
  VoiceMaster_o *v14; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v17; // x4
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  __int64 v20; // x0

  if ( (byte_42AD635 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Voice_TypeInfo);
    byte_42AD635 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_35;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_srcLineSprite,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_35;
    if ( LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) )
      return;
    v5 = *(_QWORD *)&Component_srcLineSprite[3].fields.mtIsUpdate;
    if ( !v5 )
      goto LABEL_35;
    if ( !*(_DWORD *)(v5 + 308) && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_srcLineSprite, 0LL) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v7 = this->fields.performance;
        if ( !v7 )
          goto LABEL_35;
        data = (UnityEngine_Object_o *)v7->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v9);
          if ( PlayedSoundList )
          {
            v11 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)actor,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v14 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Voice_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  }
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v14, chrId, FileName, v17);
                }
                v18 = *(_QWORD *)&v11->max_length;
                if ( (int)v18 >= 1 )
                {
                  v19 = 0LL;
                  do
                  {
                    if ( v19 >= (unsigned int)v18 )
                    {
                      v20 = sub_B52A88(MasterData_WarQuestSelectionMaster);
                      sub_B52A28(v20, 0LL);
                    }
                    BattleSequenceManager__addServantVoicePlayed(this, v14, this->fields.chrId, v11->m_Items[v19], v13);
                    LODWORD(v18) = v11->max_length;
                    ++v19;
                  }
                  while ( (__int64)v19 < (int)v18 );
                }
                return;
              }
LABEL_35:
              sub_B52A5C(actor, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleSequenceManager__removeServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_42AD613 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42AD613 = 1;
  }
  FlagRequestNumber = System_String__Concat_44568316((System_String_o *)StringLiteral_16011/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B52A5C(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AD630 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_42AD630 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B52A5C(0LL, v4);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v5.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
LABEL_11:
    sub_B52A5C(battleTargetList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)battleTargetList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager__searchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        BattleBuffData_o *buffData,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  int32_t limitCount; // w22
  UnityEngine_Object_o *Manager__loadNoblePhantasmEffect; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x0
  UnityEngine_Object_o *v15; // x19
  bool v16; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42AD617 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&StringLiteral_2793/*"Battle/Prefab/"*/);
    byte_42AD617 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               seqIdFromMstTDSeqWeight,
                                                               0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Manager__loadNoblePhantasmEffect, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v12,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v13 = System_String__Concat_44568316((System_String_o *)StringLiteral_2793/*"Battle/Prefab/"*/, name, 0LL);
  v14 = UnityEngine_Resources__Load(v13, 0LL);
  if ( v14 )
  {
    if ( (UnityEngine_GameObject_c *)v14->klass == UnityEngine_GameObject_TypeInfo )
      v15 = v14;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  result = 0LL;
  if ( v16 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v15;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v12,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v24; // x1
  WellFired_USTimelineContainer_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x1
  int v28; // w8
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x8
  __int64 v32; // x19
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-50h]

  if ( (byte_42AD618 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AD618 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_B52A5C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v13);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_39;
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v18 = (UnityEngine_Component_o *)sub_B52D50(v18);
LABEL_39:
      sub_B52A5C(v18, v19);
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      sub_B52A5C(0LL, v22);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v25 = (WellFired_USTimelineContainer_o *)Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B52A5C(0LL, v24);
    v26 = *(System_String_o **)&Component_srcLineSprite->fields.mtIsUpdate;
    v27 = System_String__Concat_44568316((System_String_o *)StringLiteral_886/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(v26, v27, 0LL) )
    {
      v28 = 93;
      goto LABEL_27;
    }
  }
  v25 = 0LL;
  v28 = 91;
LABEL_27:
  v37 = v28;
  v29 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v29 )
  {
    v31 = *(_QWORD *)v29;
    v32 = v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_32;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_32:
      v35 = sub_AEB880(v29, System_IDisposable_TypeInfo, 0LL, v30);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  if ( v37 == 91 )
    return 0LL;
  return v25;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_42AD632 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_42AD632 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    playAudioSyncGroupIndexDict,
    (System_Xml_XmlQualifiedName_o *)groupName,
    value,
    (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_B52A5C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)playAudioSyncGroupIndexDict,
    (WarBoardAIRoute_RouteData_o *)playSoundId,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void __fastcall BattleSequenceManager__set_NowTargetAlpha(
        BattleSequenceManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__setup(
        BattleSequenceManager_o *this,
        System_Action_o *callback,
        bool isDemoMode,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 seqObject; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x19
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  WellFired_USTimelineContainer_o *v13; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  struct UnityEngine_GameObject_o *sequenceManager; // x23
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x23
  __int64 v17; // x27
  __int64 v18; // x23
  struct BattlePerformance_o *performance; // x8
  __int64 v20; // x27
  Il2CppObject *CutInPrefab; // x23
  float v22; // s8
  float y; // s9
  float z; // s10
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float w; // s7
  float v29; // s4
  float v30; // s5
  float v31; // s6
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  int v34; // w8
  __int64 v35; // x22
  int v36; // w19
  UnityEngine_Object_o *v37; // x27
  __int64 v38; // x8
  __int64 v39; // x26
  unsigned __int64 v40; // x25
  __int64 v41; // x28
  System_String_o *name; // x0
  _DWORD *monitor; // x8
  int32_t v44; // w23
  System_String_o *v45; // x0
  __int64 v46; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x1
  System_String_o *v48; // x0
  __int64 v49; // x9
  __int64 v50; // x0
  int32_t treasureDeviceId; // w27
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *Manager__loadNoblePhantasmEffect; // x23
  __int64 v54; // x9
  __int64 v55; // x28
  UnityEngine_Transform_o *v56; // x23
  int v57; // s0
  System_String_o *v60; // x0
  __int64 v61; // x9
  System_String_o **v62; // x23
  __int64 v63; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  BattleSequenceManager_o *v65; // x0
  const MethodInfo *v66; // x3
  WellFired_USTimelineContainer_o *v67; // x0
  Il2CppObject *current; // x23
  _BOOL8 v69; // x0
  __int64 v70; // x1
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v72; // x1
  void *v73; // x24
  int v74; // w8
  int i; // w23
  WellFired_USTimelineEvent_o *v76; // x0
  _QWORD *v77; // x25
  __int64 v78; // x8
  unsigned __int64 v79; // x28
  __int64 v80; // x26
  System_String_o *v81; // x0
  __int64 v82; // x9
  __int64 v83; // x0
  __int64 v84; // x1
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v86; // x1
  __int64 v87; // x3
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *v89; // x8
  unsigned __int64 v90; // x10
  System_Collections_IEnumerator_c **v91; // x11
  __int64 v92; // x0
  UnityEngine_Component_o *v93; // x0
  __int64 v94; // x1
  __int64 v95; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v97; // x1
  srcLineSprite_o *v98; // x0
  __int64 v99; // x1
  srcLineSprite_o *v100; // x25
  System_String_o *v101; // x0
  __int64 v102; // x1
  System_String_o *v103; // x0
  __int64 v104; // x1
  System_String_o *v105; // x0
  System_String_o *v106; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v108; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v111; // x3
  __int64 v112; // x0
  __int64 v113; // x3
  __int64 v114; // x8
  __int64 v115; // x24
  unsigned __int64 v116; // x10
  int *v117; // x11
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x3
  System_Collections_IEnumerator_o *v121; // x23
  System_Collections_IEnumerator_c *v122; // x8
  unsigned __int64 v123; // x10
  int32_t *v124; // x11
  BattleSequenceManager_o *v125; // x24
  __int64 v126; // x0
  __int64 v127; // x3
  System_Collections_IEnumerator_c *v128; // x8
  unsigned __int64 v129; // x10
  System_Collections_IEnumerator_c **v130; // x11
  __int64 v131; // x0
  UnityEngine_Component_o *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x9
  UnityEngine_GameObject_o *v135; // x0
  __int64 v136; // x1
  srcLineSprite_o *v137; // x0
  __int64 v138; // x1
  WellFired_USTimelineContainer_o *v139; // x24
  System_String_o *v140; // x0
  __int64 v141; // x1
  System_String_o *affectedObjectPath; // x0
  System_String_o *v143; // x25
  int v144; // w26
  System_String_o *v145; // x0
  __int64 v146; // x1
  System_String_o *v147; // x0
  char v148; // w27
  System_String_o *v149; // x0
  __int64 v150; // x1
  System_String_o *v151; // x0
  UnityEngine_Component_o *v152; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v154; // x0
  __int64 v155; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v157; // x1
  UnityEngine_Transform_o *v158; // x25
  System_String_o *v159; // x0
  System_String_o *v160; // x0
  UnityEngine_Transform_o *v161; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v163; // x1
  System_String_o *v164; // x0
  bool v165; // w0
  __int64 v166; // x1
  __int64 *v167; // x8
  System_String_o *v168; // x0
  bool v169; // w0
  System_String_o *v170; // x26
  UnityEngine_GameObject_o *v171; // x0
  System_String_o *v172; // x25
  UnityEngine_Transform_o *v173; // x0
  __int64 v174; // x1
  UnityEngine_Object_o *v175; // x27
  _BOOL8 v176; // x0
  __int64 v177; // x1
  __int64 v178; // x1
  __int64 v179; // x3
  System_Collections_IEnumerator_o *v180; // x27
  System_Collections_IEnumerator_c *v181; // x8
  unsigned __int64 v182; // x10
  int32_t *v183; // x11
  __int64 v184; // x0
  __int64 v185; // x3
  System_Collections_IEnumerator_c *v186; // x8
  unsigned __int64 v187; // x10
  System_Collections_IEnumerator_c **v188; // x11
  __int64 v189; // x0
  UnityEngine_Component_o *v190; // x0
  __int64 v191; // x1
  UnityEngine_Object_o *v192; // x28
  __int64 v193; // x9
  UnityEngine_Object_o *v194; // x0
  __int64 v195; // x1
  System_String_o *v196; // x0
  __int64 v197; // x1
  System_String_o *v198; // x0
  int v199; // w8
  System_String_o *v200; // x0
  _BOOL8 v201; // x0
  const MethodInfo *v202; // x2
  __int64 v203; // x1
  __int64 v204; // x1
  int32_t v205; // w26
  __int64 v206; // x0
  __int64 v207; // x3
  __int64 v208; // x27
  __int64 v209; // x8
  unsigned __int64 v210; // x10
  int *v211; // x11
  __int64 v212; // x0
  System_String_o *v213; // x27
  System_String_o *v214; // x0
  __int64 v215; // x1
  System_String_o *v216; // x27
  System_Char_array *v217; // x0
  System_String_array *v218; // x0
  __int64 v219; // x1
  __int64 v220; // x1
  System_String_o *v221; // x27
  UnityEngine_GameObject_o *v222; // x0
  __int64 v223; // x1
  UnityEngine_Transform_o *v224; // x26
  System_String_o *v225; // x0
  System_String_o *v226; // x0
  __int64 v227; // x1
  System_String_o *v228; // x0
  UnityEngine_Transform_o *v229; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v230; // x26
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v231; // x0
  _BOOL8 v232; // x0
  __int64 v233; // x1
  System_String_o *v234; // x0
  __int64 v235; // x1
  System_String_o *v236; // x1
  _BOOL8 v237; // x0
  __int64 v238; // x1
  BattleBuffData_o *v239; // x3
  const MethodInfo *v240; // x5
  _DWORD *v241; // x8
  int32_t v242; // w4
  __int64 v243; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v244; // x0
  __int64 v245; // x0
  __int64 v246; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v248; // x1
  UnityEngine_Transform_o *v249; // x0
  UnityEngine_Transform_o *v250; // x0
  __int64 v251; // x1
  float v252; // s8
  float v253; // s9
  float v254; // s10
  __int64 v255; // x1
  UnityEngine_Transform_o *v256; // x27
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v258; // x0
  UnityEngine_Transform_o *v259; // x0
  __int64 v260; // x1
  BattleSequenceManager_o *v261; // x0
  const MethodInfo *v262; // x4
  int32_t v263; // w25
  UnityEngine_Transform_o *v264; // x0
  __int64 v265; // x1
  UnityEngine_Transform_o *v266; // x0
  System_String_o *v267; // x0
  __int64 v268; // x1
  System_String_o *v269; // x0
  System_String_o *v270; // x0
  const MethodInfo *v271; // x3
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  WarBoardControlPlayTalkUiComponent_array *EventCount; // x0
  __int64 v275; // x1
  WarBoardControlPlayTalkUiComponent_array *v276; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v279; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v281; // x0
  __int64 v282; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v283; // x27
  System_String_o *v284; // x0
  __int64 v285; // x9
  _BOOL8 v286; // x0
  __int64 v287; // x1
  UnityEngine_Component_o *v288; // x0
  int32_t layer; // w25
  __int64 v290; // x3
  __int64 v291; // x8
  __int64 v292; // x23
  unsigned __int64 v293; // x10
  int *v294; // x11
  __int64 v295; // x0
  __int64 v296; // x1
  _DWORD *v297; // x8
  UnityEngine_Object_o *v298; // x21
  struct BattlePerformance_o *v299; // x8
  UnityEngine_Object_o *data; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t chrId; // w22
  VoiceMaster_o *v303; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v305; // x4
  int32_t v306; // w22
  System_String_o *v307; // x0
  const MethodInfo *v308; // x4
  _DWORD *v309; // x8
  int v310; // w20
  BalanceConfig_c *v311; // x0
  int32_t v312; // w20
  System_String_o *v313; // x0
  const MethodInfo *v314; // x4
  __int64 v315; // x0
  __int64 v316; // x0
  __int64 v317; // x0
  __int64 v318; // x0
  __int64 v319; // x0
  __int64 v320; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+0h] [xbp-140h]
  System_String_o *itema; // [xsp+0h] [xbp-140h]
  WellFired_USSequencer_o *seq; // [xsp+8h] [xbp-138h]
  char seqa; // [xsp+8h] [xbp-138h]
  __int64 v325; // [xsp+10h] [xbp-130h]
  int v326; // [xsp+10h] [xbp-130h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v328; // [xsp+20h] [xbp-120h]
  BattleSequenceManager_o *v329; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_T__o v330[2]; // [xsp+30h] [xbp-110h] BYREF
  int v331; // [xsp+68h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o m; // [xsp+70h] [xbp-D0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v334; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v335; // [xsp+B0h] [xbp-90h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v339; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42AD611 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_B52984(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_USTimelineContainer__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
    sub_B52984(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654696);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    sub_B52984(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_B52984(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_B52984(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_B52984(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_B52984(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_B52984(&Voice_TypeInfo);
    sub_B52984(&StringLiteral_894/*"/Actor/chr/"*/);
    sub_B52984(&StringLiteral_2802/*"BattleBG"*/);
    sub_B52984(&StringLiteral_901/*"/BattleActors/"*/);
    sub_B52984(&StringLiteral_2804/*"BattleCamera"*/);
    sub_B52984(&StringLiteral_2806/*"BattleCutIn"*/);
    sub_B52984(&StringLiteral_14866/*"USFGOSetCameraEvent"*/);
    sub_B52984(&StringLiteral_1851/*"Actor"*/);
    sub_B52984(&StringLiteral_16997/*"body_level_"*/);
    sub_B52984(&StringLiteral_896/*"/Actor/chr/weapon_level_"*/);
    sub_B52984(&StringLiteral_895/*"/Actor/chr/body_level_"*/);
    sub_B52984(&StringLiteral_6381/*"FGOSequenceManager"*/);
    sub_B52984(&StringLiteral_898/*"/AllEffects/"*/);
    sub_B52984(&StringLiteral_17546/*"chr(Clone)"*/);
    sub_B52984(&StringLiteral_3515/*"Cameras/BattleCamera"*/);
    sub_B52984(&StringLiteral_14864/*"USFGOChangeBgEvent"*/);
    sub_B52984(&StringLiteral_913/*"/BattleCamera"*/);
    sub_B52984(&StringLiteral_916/*"/CutIns/"*/);
    sub_B52984(&StringLiteral_2800/*"Battle2D"*/);
    sub_B52984(&StringLiteral_915/*"/Cameras/BattleCamera"*/);
    sub_B52984(&StringLiteral_16451/*"animCamLoc"*/);
    sub_B52984(&StringLiteral_23453/*"weapon_level_"*/);
    sub_B52984(&StringLiteral_617/*"(Clone)"*/);
    sub_B52984(&StringLiteral_14863/*"USFGOAttachToParentEvent"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_893/*"/Actor/chr"*/);
    sub_B52984(&StringLiteral_14862/*"USFGOAnimationCameraEvent"*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    sub_B52984(&StringLiteral_14865/*"USFGOPlayCutInEvent"*/);
    byte_42AD611 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v335, 0, sizeof(v335));
  memset(&v334, 0, sizeof(v334));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  v331 = 0;
  seqObject = (__int64)this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_437;
  Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)seqObject,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v10 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  Component_srcLineSprite,
                                  (WellFired_USSequencer_o *)Component_srcLineSprite,
                                  (System_String_o *)StringLiteral_1851/*"Actor"*/,
                                  v9);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( v11 )
  {
    seqObject = (__int64)this->fields.actor;
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v10 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v10,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  v13 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)v11,
          (WellFired_USSequencer_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_6381/*"FGOSequenceManager"*/,
          v12);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v328 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v328,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_437;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)v10;
  seq = (WellFired_USSequencer_o *)Component_srcLineSprite;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)seqObject,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v329 = this;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
  {
    sequenceManager = this->fields.sequenceManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)sequenceManager,
                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v13 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(v13, (UnityEngine_Transform_o *)seqObject, 0LL);
    createdObjects = this->fields.createdObjects;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v13, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !createdObjects )
      goto LABEL_437;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)createdObjects,
      (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v13, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_437;
    v17 = seqObject;
    *(_QWORD *)(seqObject + 24) = this->fields.actorCamera;
    v18 = seqObject + 24;
    sub_B52920(seqObject + 24);
    *(_QWORD *)(v18 + 8) = this->fields.effectCamera;
    sub_B52920(v18 + 8);
    *(_QWORD *)(v18 + 16) = this->fields.cutInCamera;
    sub_B52920(v18 + 16);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_437;
    *(_QWORD *)(v17 + 88) = performance->fields.fadeObject;
    v20 = v17 + 88;
    sub_B52920(v20);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v22 = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    identity = UnityEngine_Quaternion__get_identity(0LL);
    v25 = identity.fields.x;
    v26 = identity.fields.y;
    v27 = identity.fields.z;
    w = identity.fields.w;
    identity.fields.x = v22;
    identity.fields.y = y;
    identity.fields.z = z;
    identity.fields.w = v25;
    v29 = v26;
    v30 = v27;
    v31 = w;
    *(_QWORD *)(v20 - 24) = UnityEngine_Object__Instantiate_object_(
                              CutInPrefab,
                              *(UnityEngine_Vector3_o *)&identity.fields.x,
                              *(UnityEngine_Quaternion_o *)&identity.fields.w,
                              (const MethodInfo_1F71444 *)Method_UnityEngine_Object_Instantiate_GameObject____68654696);
    sub_B52920(v20 - 24);
    seqObject = *(_QWORD *)(v20 - 24);
    if ( !seqObject )
      goto LABEL_437;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v32);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v33);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                           (UnityEngine_Component_o *)v13,
                           1,
                           (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_437;
    v34 = *(_DWORD *)(seqObject + 24);
    v35 = seqObject;
    if ( v34 >= 1 )
    {
      v36 = 0;
      v37 = 0LL;
      v325 = seqObject;
      while ( 1 )
      {
        if ( v36 >= (unsigned int)v34 )
        {
LABEL_441:
          v317 = sub_B52A88(seqObject);
          sub_B52A28(v317, 0LL);
        }
        seqObject = *(_QWORD *)(v35 + 8LL * v36 + 32);
        if ( !seqObject )
          goto LABEL_437;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_437;
        v38 = *(_QWORD *)(seqObject + 24);
        v39 = seqObject;
        if ( (int)v38 >= 1 )
          break;
LABEL_95:
        v35 = v325;
        ++v36;
        v34 = *(_DWORD *)(v325 + 24);
        if ( v36 >= v34 )
          goto LABEL_96;
      }
      v40 = 0LL;
      while ( 1 )
      {
        if ( v40 >= (unsigned int)v38 )
          goto LABEL_441;
        v41 = *(_QWORD *)(v39 + 32 + 8 * v40);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v41 )
            goto LABEL_437;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14862/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !x )
                  goto LABEL_437;
                monitor = x[18].monitor;
                if ( !monitor )
                  goto LABEL_437;
                v44 = monitor[180];
              }
              else
              {
                v44 = 0;
              }
              treasureDeviceId = this->fields.treasureDeviceId;
              limitCount = this->fields.limitCount;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
              Manager__loadNoblePhantasmEffect = ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                   treasureDeviceId,
                                                   limitCount,
                                                   (System_String_o *)StringLiteral_16451/*"animCamLoc"*/,
                                                   v44,
                                                   0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this = v329;
              if ( !v329->fields.createdObjects )
LABEL_437:
                sub_B52A5C(seqObject, callback);
              v37 = (UnityEngine_Object_o *)seqObject;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v329->fields.createdObjects,
                (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
            v54 = *(&WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v54
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v54 - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_442:
              v132 = (UnityEngine_Component_o *)sub_B52D50(v41);
LABEL_443:
              v93 = (UnityEngine_Component_o *)sub_B52D50(v132);
LABEL_444:
              v281 = (UnityEngine_Object_o *)sub_B52D50(v93);
LABEL_445:
              sub_B52A5C(v281, v282);
            }
            *(_QWORD *)(v41 + 48) = v37;
            v55 = v41 + 48;
            sub_B52920(v55);
            *(_QWORD *)(v55 + 8) = this->fields.actorCamera;
            sub_B52920(v55 + 8);
            *(_BYTE *)(v55 + 36) = 0;
            if ( !v37 )
              goto LABEL_437;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
            if ( !this->fields.actor )
              goto LABEL_437;
            v56 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_437;
            *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Transform__get_position(
                                               (UnityEngine_Transform_o *)seqObject,
                                               0LL);
            if ( !v56 )
              goto LABEL_437;
            UnityEngine_Transform__set_position(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
          }
          else
          {
            v45 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
            seqObject = System_String__op_Equality(v45, (System_String_o *)StringLiteral_14865/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v328 )
                goto LABEL_437;
              v46 = *(&WellFired_USFGOPlayCutInEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) >= (unsigned int)v46 )
              {
                if ( *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v46 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo )
                  v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41;
                else
                  v47 = 0LL;
              }
              else
              {
                v47 = 0LL;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v328,
                v47,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
              goto LABEL_94;
            }
            v48 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
            if ( System_String__op_Equality(v48, (System_String_o *)StringLiteral_14866/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v49 = *(&WellFired_USFGOSetCameraEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v49
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v49 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              *(_QWORD *)(v41 + 48) = this->fields.actorCamera;
              sub_B52920(v41 + 48);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_437;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_437;
              *(_QWORD *)(v41 + 56) = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              v50 = v41 + 56;
              goto LABEL_89;
            }
            v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
            seqObject = System_String__op_Equality(v60, (System_String_o *)StringLiteral_14864/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v61 = *(&WellFired_USFGOChangeBgEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v61
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v61 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v62 = (System_String_o **)(v41 + 56);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v41 + 56),
                     (System_String_o *)StringLiteral_969/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v62, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                *v62 = System_Int32__ToString((int32_t)&result[1], 0LL);
                sub_B52920(v41 + 56);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                *(_QWORD *)(v41 + 64) = System_Int32__ToString((int32_t)&result[1], 0LL);
                v63 = v41 + 64;
                sub_B52920(v63);
                v50 = v63 + 64;
                *(_QWORD *)(v63 + 64) = this->fields.changeFieldAfter;
LABEL_89:
                sub_B52920(v50);
              }
            }
          }
        }
LABEL_94:
        LODWORD(v38) = *(_DWORD *)(v39 + 24);
        if ( (__int64)++v40 >= (int)v38 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v64 )
    goto LABEL_437;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v64,
    item,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  v67 = BattleSequenceManager__searchTimeline(v65, seq, (System_String_o *)StringLiteral_3515/*"Cameras/BattleCamera"*/, v66);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v64,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v330,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v64,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v335 = v330[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v335,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v335.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v69 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v69 )
    {
      if ( !current )
        sub_B52A5C(v69, v70);
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                  (UnityEngine_Component_o *)current,
                                                                  1,
                                                                  (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v73 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        sub_B52A5C(0LL, v72);
      v74 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
      if ( v74 >= 1 )
      {
        for ( i = 0; i < v74; ++i )
        {
          if ( i >= (unsigned int)v74 )
          {
            v316 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
            sub_B52A28(v316, 0LL);
          }
          v76 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v73 + i + 4);
          if ( !v76 )
            sub_B52A5C(0LL, v72);
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = WellFired_USTimelineEvent__get_Events(v76, 0LL);
          v77 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
            sub_B52A5C(0LL, v72);
          v78 = *((_QWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 3);
          if ( (int)v78 >= 1 )
          {
            v79 = 0LL;
            do
            {
              if ( v79 >= (unsigned int)v78 )
              {
                v315 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
                sub_B52A28(v315, 0LL);
              }
              v80 = v77[v79 + 4];
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Object__op_Equality(
                                                                                  (UnityEngine_Object_o *)v80,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
              {
                if ( !v80 )
                  sub_B52A5C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v72);
                v81 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v80, 0LL);
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                    v81,
                                                                                    (System_String_o *)StringLiteral_14863/*"USFGOAttachToParentEvent"*/,
                                                                                    0LL);
                if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
                {
                  v82 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v80 + 300LL) < (unsigned int)v82
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v80 + 200LL) + 8 * v82 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v83 = sub_B52D50(v80);
LABEL_435:
                    sub_B52A5C(v83, v84);
                  }
                  v83 = System_String__op_Equality(
                          *(System_String_o **)(v80 + 72),
                          (System_String_o *)StringLiteral_2804/*"BattleCamera"*/,
                          0LL);
                  if ( (v83 & 1) != 0 )
                  {
                    actorCamera = (UnityEngine_Component_o *)v329->fields.actorCamera;
                    if ( !actorCamera )
                      sub_B52A5C(0LL, v84);
                    *(_QWORD *)(v80 + 56) = UnityEngine_Component__get_transform(actorCamera, 0LL);
                    sub_B52920(v80 + 56);
                  }
                  else
                  {
                    if ( !v14 )
                      goto LABEL_435;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v14,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              LODWORD(v78) = *((_DWORD *)v77 + 6);
              ++v79;
            }
            while ( (__int64)v79 < (int)v78 );
          }
          v74 = *((_DWORD *)v73 + 6);
        }
      }
    }
  }
  *((_DWORD *)&v330[1].fields.list + v331++) = 1008;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v335,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  if ( v331 && *((_DWORD *)&v330[0].fields.current + v331 + 1) == 1008 )
    --v331;
  seqObject = (__int64)seq;
  if ( !seq )
    goto LABEL_437;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v86);
  v326 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v108 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v108;
        p_offset += 4;
        if ( v108 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_157;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_157:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v87);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v89 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v90 = 0LL;
      v91 = (System_Collections_IEnumerator_c **)&v89->_1.interfaceOffsets->offset;
      while ( *(v91 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v90;
        v91 += 2;
        if ( v90 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_139;
      }
      v92 = (__int64)&v89->vtable[*(_DWORD *)v91 + 1].method;
    }
    else
    {
LABEL_139:
      v92 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v111);
    }
    v93 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v92)(
                                       Enumerator,
                                       *(_QWORD *)(v92 + 8));
    if ( !v93 )
      sub_B52A5C(0LL, v94);
    v95 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v93->klass->_2.bitflags2 + 1) < (unsigned int)v95
      || (UnityEngine_Transform_c *)v93->klass->_2.typeHierarchy[v95 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_444;
    }
    gameObject = UnityEngine_Component__get_gameObject(v93, 0LL);
    if ( !gameObject )
      sub_B52A5C(0LL, v97);
    v98 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            gameObject,
            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v100 = v98;
    if ( !v98 )
      sub_B52A5C(0LL, v99);
    v101 = *(System_String_o **)&v98->fields.mtIsUpdate;
    if ( !v101 )
      sub_B52A5C(0LL, v99);
    if ( System_String__StartsWith(v101, (System_String_o *)StringLiteral_901/*"/BattleActors/"*/, 0LL)
      && *(_QWORD *)&v100->fields.mtIsUpdate )
    {
      v103 = *(System_String_o **)&v100->fields.mtIsUpdate;
      if ( !v103 )
        goto LABEL_466;
      if ( System_String__StartsWith(v103, (System_String_o *)StringLiteral_901/*"/BattleActors/"*/, 0LL) )
      {
        v105 = *(System_String_o **)&v100->fields.mtIsUpdate;
        if ( !v105 )
          sub_B52A5C(0LL, v104);
        v106 = System_String__Substring_44632052(v105, v105->fields.m_stringLength - 1, 1, 0LL);
        result[0] = 1;
        v326 += System_Int32__TryParse(v106, result, 0LL);
      }
    }
  }
  *((_DWORD *)&v330[1].fields.list + v331++) = 1183;
  v112 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v112 )
  {
    v114 = *(_QWORD *)v112;
    v115 = v112;
    if ( *(_WORD *)(*(_QWORD *)v112 + 298LL) )
    {
      v116 = 0LL;
      v117 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
      {
        ++v116;
        v117 += 4;
        if ( v116 >= *(unsigned __int16 *)(*(_QWORD *)v112 + 298LL) )
          goto LABEL_165;
      }
      v118 = v114 + 16LL * *v117 + 312;
    }
    else
    {
LABEL_165:
      v118 = sub_AEB880(v112, System_IDisposable_TypeInfo, 0LL, v113);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v118)(v115, *(_QWORD *)(v118 + 8));
  }
  if ( v331 && *((_DWORD *)&v330[0].fields.current + v331 + 1) == 1183 )
    --v331;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  v121 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v121 )
    sub_B52A5C(0LL, v119);
  seqa = 0;
  while ( 1 )
  {
    v122 = v121->klass;
    if ( *(_WORD *)&v121->klass->_2.bitflags1 )
    {
      v123 = 0LL;
      v124 = &v122->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v123;
        v124 += 4;
        if ( v123 >= *(unsigned __int16 *)&v121->klass->_2.bitflags1 )
          goto LABEL_178;
      }
      v125 = v329;
      v126 = (__int64)&v122->vtable[*v124].method;
    }
    else
    {
LABEL_178:
      v125 = v329;
      v126 = sub_AEB880(v121, System_Collections_IEnumerator_TypeInfo, 0LL, v120);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v126)(v121, *(_QWORD *)(v126 + 8)) & 1) == 0 )
      break;
    v128 = v121->klass;
    if ( *(_WORD *)&v121->klass->_2.bitflags1 )
    {
      v129 = 0LL;
      v130 = (System_Collections_IEnumerator_c **)&v128->_1.interfaceOffsets->offset;
      while ( *(v130 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v129;
        v130 += 2;
        if ( v129 >= *(unsigned __int16 *)&v121->klass->_2.bitflags1 )
          goto LABEL_185;
      }
      v131 = (__int64)&v128->vtable[*(_DWORD *)v130 + 1].method;
    }
    else
    {
LABEL_185:
      v131 = sub_AEB880(v121, System_Collections_IEnumerator_TypeInfo, 1LL, v127);
    }
    v132 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v131)(
                                        v121,
                                        *(_QWORD *)(v131 + 8));
    if ( !v132 )
      sub_B52A5C(0LL, v133);
    v134 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v132->klass->_2.bitflags2 + 1) < (unsigned int)v134
      || (UnityEngine_Transform_c *)v132->klass->_2.typeHierarchy[v134 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_443;
    }
    v135 = UnityEngine_Component__get_gameObject(v132, 0LL);
    if ( !v135 )
      goto LABEL_447;
    v137 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v135,
             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v139 = (WellFired_USTimelineContainer_o *)v137;
    if ( !v137 )
      sub_B52A5C(0LL, v138);
    v140 = *(System_String_o **)&v137->fields.mtIsUpdate;
    if ( !v140 )
      sub_B52A5C(0LL, v138);
    if ( System_String__StartsWith(v140, (System_String_o *)StringLiteral_898/*"/AllEffects/"*/, 0LL) )
    {
      affectedObjectPath = v139->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_B52A5C(0LL, v141);
      v143 = System_String__Substring(affectedObjectPath, 12, 0LL);
      v144 = 1;
    }
    else
    {
      v144 = 0;
      v143 = 0LL;
    }
    v145 = v139->fields.affectedObjectPath;
    if ( !v145 )
      sub_B52A5C(0LL, v141);
    if ( System_String__StartsWith(v145, (System_String_o *)StringLiteral_916/*"/CutIns/"*/, 0LL) )
    {
      v147 = v139->fields.affectedObjectPath;
      if ( !v147 )
        sub_B52A5C(0LL, v146);
      v143 = System_String__Substring(v147, 8, 0LL);
      v148 = 1;
    }
    else
    {
      v148 = 0;
    }
    v149 = v139->fields.affectedObjectPath;
    if ( !v149 )
      sub_B52A5C(0LL, v146);
    if ( System_String__StartsWith(v149, (System_String_o *)StringLiteral_913/*"/BattleCamera"*/, 0LL) )
      goto LABEL_206;
    v151 = v139->fields.affectedObjectPath;
    if ( !v151 )
      sub_B52A5C(0LL, v150);
    if ( System_String__StartsWith(v151, (System_String_o *)StringLiteral_915/*"/Cameras/BattleCamera"*/, 0LL) )
    {
LABEL_206:
      v152 = (UnityEngine_Component_o *)v329->fields.actorCamera;
      if ( !v152 )
        sub_B52A5C(0LL, v150);
      transform = UnityEngine_Component__get_transform(v152, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v139, transform, 0LL);
    }
    else
    {
      v154 = v139->fields.affectedObjectPath;
      if ( !v154 )
        sub_B52A5C(0LL, v150);
      if ( System_String__StartsWith(v154, (System_String_o *)StringLiteral_893/*"/Actor/chr"*/, 0LL) )
      {
        actor = v329->fields.actor;
        if ( !actor )
          sub_B52A5C(0LL, v155);
        v158 = UnityEngine_GameObject__get_transform(actor, 0LL);
        v159 = v139->fields.affectedObjectPath;
        if ( !v159 )
          sub_B52A5C(0LL, v157);
        v160 = System_String__Replace_44575552(
                 v159,
                 (System_String_o *)StringLiteral_893/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_17546/*"chr(Clone)"*/,
                 0LL);
        if ( !v158 )
          sub_B52A5C(v160, v160);
        v161 = UnityEngine_Transform__Find(v158, v160, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(v139, v161, 0LL);
        AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v139, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
        {
          v164 = v139->fields.affectedObjectPath;
          if ( !v164 )
            sub_B52A5C(0LL, v163);
          v165 = System_String__StartsWith(v164, (System_String_o *)StringLiteral_895/*"/Actor/chr/body_level_"*/, 0LL);
          v167 = &StringLiteral_16997/*"body_level_"*/;
          if ( v165 )
            goto LABEL_221;
          v168 = v139->fields.affectedObjectPath;
          if ( !v168 )
            sub_B52A5C(0LL, v166);
          v169 = System_String__StartsWith(v168, (System_String_o *)StringLiteral_896/*"/Actor/chr/weapon_level_"*/, 0LL);
          v167 = &StringLiteral_23453/*"weapon_level_"*/;
          if ( v169 )
          {
LABEL_221:
            v170 = (System_String_o *)*v167;
            if ( *v167 )
            {
              v171 = v329->fields.actor;
              if ( !v171 )
                sub_B52A5C(0LL, v166);
              v172 = (System_String_o *)StringLiteral_1/*""*/;
              v173 = UnityEngine_GameObject__get_transform(v171, 0LL);
              if ( !v173 )
                sub_B52A5C(0LL, v174);
              v175 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                               v173,
                                               (System_String_o *)StringLiteral_17546/*"chr(Clone)"*/,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v176 = UnityEngine_Object__op_Inequality(v175, 0LL, 0LL);
              if ( v176 )
              {
                if ( !v175 )
                  sub_B52A5C(v176, v177);
                v180 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v175, 0LL);
                if ( !v180 )
                  sub_B52A5C(0LL, v178);
                while ( 1 )
                {
                  v181 = v180->klass;
                  if ( *(_WORD *)&v180->klass->_2.bitflags1 )
                  {
                    v182 = 0LL;
                    v183 = &v181->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v183 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v182;
                      v183 += 4;
                      if ( v182 >= *(unsigned __int16 *)&v180->klass->_2.bitflags1 )
                        goto LABEL_234;
                    }
                    v184 = (__int64)&v181->vtable[*v183].method;
                  }
                  else
                  {
LABEL_234:
                    v184 = sub_AEB880(v180, System_Collections_IEnumerator_TypeInfo, 0LL, v179);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v184)(
                          v180,
                          *(_QWORD *)(v184 + 8)) & 1) == 0 )
                    break;
                  v186 = v180->klass;
                  if ( *(_WORD *)&v180->klass->_2.bitflags1 )
                  {
                    v187 = 0LL;
                    v188 = (System_Collections_IEnumerator_c **)&v186->_1.interfaceOffsets->offset;
                    while ( *(v188 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v187;
                      v188 += 2;
                      if ( v187 >= *(unsigned __int16 *)&v180->klass->_2.bitflags1 )
                        goto LABEL_241;
                    }
                    v189 = (__int64)&v186->vtable[*(_DWORD *)v188 + 1].method;
                  }
                  else
                  {
LABEL_241:
                    v189 = sub_AEB880(v180, System_Collections_IEnumerator_TypeInfo, 1LL, v185);
                  }
                  v190 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v189)(
                                                      v180,
                                                      *(_QWORD *)(v189 + 8));
                  v192 = (UnityEngine_Object_o *)v190;
                  if ( !v190 )
                    sub_B52A5C(0LL, v191);
                  v193 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v190->klass->_2.bitflags2 + 1) < (unsigned int)v193
                    || (UnityEngine_Transform_c *)v190->klass->_2.typeHierarchy[v193 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    v103 = (System_String_o *)sub_B52D50(v190);
LABEL_466:
                    sub_B52A5C(v103, v102);
                  }
                  v194 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v190, 0LL);
                  if ( !v194 )
                    sub_B52A5C(0LL, v195);
                  v196 = UnityEngine_Object__get_name(v194, 0LL);
                  if ( !v196 )
                    sub_B52A5C(0LL, v197);
                  if ( System_String__StartsWith(v196, v170, 0LL) )
                  {
                    v198 = UnityEngine_Object__get_name(v192, 0LL);
                    *((_DWORD *)&v330[1].fields.list + v331) = 1651;
                    v199 = v331;
                    v172 = v198;
                    goto LABEL_259;
                  }
                }
                *((_DWORD *)&v330[1].fields.list + v331) = 1651;
                v199 = v331;
LABEL_259:
                v331 = v199 + 1;
                v206 = sub_B52A44(v180, System_IDisposable_TypeInfo);
                v208 = v206;
                if ( v206 )
                {
                  v209 = *(_QWORD *)v206;
                  if ( *(_WORD *)(*(_QWORD *)v206 + 298LL) )
                  {
                    v210 = 0LL;
                    v211 = (int *)(*(_QWORD *)(v209 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v211 - 1) != System_IDisposable_TypeInfo )
                    {
                      ++v210;
                      v211 += 4;
                      if ( v210 >= *(unsigned __int16 *)(*(_QWORD *)v206 + 298LL) )
                        goto LABEL_264;
                    }
                    v212 = v209 + 16LL * *v211 + 312;
                  }
                  else
                  {
LABEL_264:
                    v212 = sub_AEB880(v206, System_IDisposable_TypeInfo, 0LL, v207);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v212)(v208, *(_QWORD *)(v212 + 8));
                }
                if ( v331 && *((_DWORD *)&v330[0].fields.current + v331 + 1) == 1651 )
                  --v331;
              }
              v213 = v139->fields.affectedObjectPath;
              v214 = System_String__Concat_44568316((System_String_o *)StringLiteral_894/*"/Actor/chr/"*/, v170, 0LL);
              if ( !v214 )
                sub_B52A5C(0LL, v215);
              if ( !v213 )
                sub_B52A5C(v214, v215);
              v216 = System_String__Substring(v213, v214->fields.m_stringLength, 0LL);
              v217 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
              if ( !v217 )
                sub_B52A5C(0LL, 0LL);
              if ( !v217->max_length )
              {
                v318 = sub_B52A88(v217);
                sub_B52A28(v318, 0LL);
              }
              v217->m_Items[2] = 47;
              if ( !v216 )
                sub_B52A5C(v217, v217);
              v218 = System_String__Split(v216, v217, 0LL);
              if ( !v218 )
                sub_B52A5C(0LL, v219);
              if ( !v218->max_length )
              {
                v319 = sub_B52A88(v218);
                sub_B52A28(v319, 0LL);
              }
              v221 = System_String__Concat_44568316(v170, v218->m_Items[0], 0LL);
              v222 = v329->fields.actor;
              if ( !v222 )
                sub_B52A5C(0LL, v220);
              v224 = UnityEngine_GameObject__get_transform(v222, 0LL);
              v225 = v139->fields.affectedObjectPath;
              if ( !v225 )
                sub_B52A5C(0LL, v223);
              v226 = System_String__Replace_44575552(
                       v225,
                       (System_String_o *)StringLiteral_893/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_17546/*"chr(Clone)"*/,
                       0LL);
              if ( !v226 )
                sub_B52A5C(0LL, v227);
              v228 = System_String__Replace_44575552(v226, v221, v172, 0LL);
              if ( !v224 )
                sub_B52A5C(v228, v228);
              v229 = UnityEngine_Transform__Find(v224, v228, 0LL);
              WellFired_USTimelineContainer__set_AffectedObject(v139, v229, 0LL);
            }
          }
        }
      }
      else
      {
        v200 = v139->fields.affectedObjectPath;
        if ( !v200 )
          sub_B52A5C(0LL, v155);
        v201 = System_String__StartsWith(v200, (System_String_o *)StringLiteral_901/*"/BattleActors/"*/, 0LL);
        if ( v201 )
          v143 = v139->fields.affectedObjectPath;
        if ( v143 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v201, v143, v202) )
            goto LABEL_336;
          if ( v144 )
          {
            v205 = System_String__IndexOf(v143, 0x2Fu, 0LL);
            if ( (v205 & 0x80000000) == 0 )
            {
              itema = System_String__Substring(v143, v205 + 1, 0LL);
              v143 = System_String__Substring_44632052(v143, 0, v205, 0LL);
              goto LABEL_285;
            }
            if ( (seqa & 1) != 0 )
            {
              itema = 0LL;
LABEL_285:
              v231 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v329->fields.createdObjects;
              if ( !v231 )
                sub_B52A5C(0LL, v204);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                v330,
                v231,
                (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v334 = v330[0];
              while ( 1 )
              {
                v232 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v334,
                         (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v232 )
                  break;
                v230 = (EventMissionProgressRequest_Argument_ProgressData_o *)v334.fields.current;
                if ( !v334.fields.current )
                  sub_B52A5C(v232, v233);
                v234 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v334.fields.current, 0LL);
                if ( !v234 )
                  sub_B52A5C(0LL, v235);
                v236 = System_String__Replace_44575552(
                         v234,
                         (System_String_o *)StringLiteral_617/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v143, v236, 0LL) )
                  goto LABEL_293;
              }
              v230 = 0LL;
LABEL_293:
              *((_DWORD *)&v330[1].fields.list + v331++) = 1961;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v334,
                (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if ( v331 )
              {
                if ( *((_DWORD *)&v330[0].fields.current + v331 + 1) == 1961 )
                  --v331;
                seqa = 1;
              }
              else
              {
                seqa = 1;
              }
              goto LABEL_299;
            }
            itema = 0LL;
            v230 = 0LL;
            seqa = 0;
          }
          else
          {
            itema = 0LL;
            v230 = 0LL;
          }
LABEL_299:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v230, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v237 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( v237 )
            {
              if ( !x )
                sub_B52A5C(v237, v238);
              v241 = x[18].monitor;
              if ( !v241 )
                sub_B52A5C(v237, v238);
              v242 = v241[180];
            }
            else
            {
              v242 = 0;
            }
            v230 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSequenceManager__searchPrefab(
                                                                            v329,
                                                                            v329->fields.treasureDeviceId,
                                                                            v143,
                                                                            v239,
                                                                            v242,
                                                                            v240);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v230, 0LL, 0LL) )
            {
              v244 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v329->fields.createdObjects;
              if ( !v244 )
                sub_B52A5C(0LL, v243);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v244,
                v230,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
              if ( !v230 )
                sub_B52A5C(v245, v246);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v230, 0, 0LL);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v230, 0LL, 0LL) )
            goto LABEL_336;
          IsNullOrEmpty = System_String__IsNullOrEmpty(itema, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v230 )
              sub_B52A5C(IsNullOrEmpty, v248);
            v264 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v230, 0LL);
            if ( !v264 )
              sub_B52A5C(0LL, v265);
            v266 = UnityEngine_Transform__Find(v264, itema, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v139, v266, 0LL);
            goto LABEL_336;
          }
          if ( !v230 )
            sub_B52A5C(IsNullOrEmpty, v248);
          v249 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v230, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v139, v249, 0LL);
          if ( (v148 & 1) != 0 )
          {
            v250 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v230, 0LL);
            if ( !v250 )
              sub_B52A5C(0LL, v251);
            localPosition = UnityEngine_Transform__get_localPosition(v250, 0LL);
            v252 = localPosition.fields.x;
            v253 = localPosition.fields.y;
            v254 = localPosition.fields.z;
            v256 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v230, 0LL);
            CutInRoot = v329->fields.CutInRoot;
            if ( !CutInRoot )
              sub_B52A5C(0LL, v255);
            v258 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v256 )
              sub_B52A5C(v258, v258);
            UnityEngine_Transform__set_parent(v256, v258, 0LL);
            v259 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v230, 0LL);
            if ( !v259 )
              sub_B52A5C(0LL, v260);
            v339.fields.x = v252;
            v339.fields.y = v253;
            v339.fields.z = v254;
            UnityEngine_Transform__set_localPosition(v259, v339, 0LL);
            BattleSequenceManager__updateCutInEvents(
              v261,
              (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v328,
              v143,
              (UnityEngine_GameObject_o *)v230,
              v262);
            v263 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2806/*"BattleCutIn"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v230, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2802/*"BattleBG"*/, 0LL) )
              goto LABEL_336;
            v263 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2800/*"Battle2D"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v230, v263, 0LL);
LABEL_336:
          v267 = v139->fields.affectedObjectPath;
          if ( !v267 )
            sub_B52A5C(0LL, v203);
          if ( System_String__StartsWith(v267, (System_String_o *)StringLiteral_901/*"/BattleActors/"*/, 0LL) )
          {
            v269 = v139->fields.affectedObjectPath;
            if ( !v269 )
              sub_B52A5C(0LL, v268);
            v270 = System_String__Substring_44632052(v269, v269->fields.m_stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v270, &targetPosIndex, 0LL);
            v272 = --targetPosIndex;
            if ( v326 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v329, v139, v272, v271);
              BattleSequenceManager__SyncAttachedTargetPair(v329, v139, targetPosIndex, v273);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v329, v139, v272, v271);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                         (UnityEngine_Component_o *)v139,
                         1,
                         (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v276 = EventCount;
          if ( !EventCount )
            sub_B52A5C(0LL, v275);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
              {
                v320 = sub_B52A88(EventCount);
                sub_B52A28(v320, 0LL);
              }
              v279 = (WellFired_USTimelineEvent_o *)v276->m_Items[j];
              if ( !v279 )
                sub_B52A5C(EventCount, v275);
              for ( k = 0; ; ++k )
              {
                EventCount = (WarBoardControlPlayTalkUiComponent_array *)WellFired_USTimelineEvent__get_EventCount(
                                                                           v279,
                                                                           0LL);
                if ( k >= (int)EventCount )
                  break;
                v281 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v279, k, 0LL);
                v283 = (EventMissionProgressRequest_Argument_ProgressData_o *)v281;
                if ( !v281 )
                  goto LABEL_445;
                v284 = UnityEngine_Object__get_name(v281, 0LL);
                if ( System_String__op_Equality(v284, (System_String_o *)StringLiteral_14863/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v285 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v283->klass->_2.bitflags2 + 1) < (unsigned int)v285
                    || (WellFired_USFGOAttachToParentEvent_c *)v283->klass->_2.typeHierarchy[v285 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v135 = (UnityEngine_GameObject_o *)sub_B52D50(v283);
LABEL_447:
                    sub_B52A5C(v135, v136);
                  }
                  v286 = System_String__op_Equality(
                           *(System_String_o **)&v283[1].fields.addCount,
                           (System_String_o *)StringLiteral_2804/*"BattleCamera"*/,
                           0LL);
                  if ( v286 )
                  {
                    v288 = (UnityEngine_Component_o *)v329->fields.actorCamera;
                    if ( !v288 )
                      sub_B52A5C(0LL, v287);
                    *(_QWORD *)&v283[1].fields.missionTargetId = UnityEngine_Component__get_transform(v288, 0LL);
                    sub_B52920(&v283[1].fields);
                  }
                  else
                  {
                    if ( !v14 )
                      sub_B52A5C(v286, v287);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v14,
                      v283,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              max_length = v276->max_length;
            }
          }
        }
      }
    }
  }
  *((_DWORD *)&v330[1].fields.list + v331++) = 2515;
  seqObject = sub_B52A44(v121, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v291 = *(_QWORD *)seqObject;
    v292 = seqObject;
    if ( *(_WORD *)(*(_QWORD *)seqObject + 298LL) )
    {
      v293 = 0LL;
      v294 = (int *)(*(_QWORD *)(v291 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v294 - 1) != System_IDisposable_TypeInfo )
      {
        ++v293;
        v294 += 4;
        if ( v293 >= *(unsigned __int16 *)(*(_QWORD *)seqObject + 298LL) )
          goto LABEL_378;
      }
      v295 = v291 + 16LL * *v294 + 312;
    }
    else
    {
LABEL_378:
      v295 = sub_AEB880(seqObject, System_IDisposable_TypeInfo, 0LL, v290);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v295)(v292, *(_QWORD *)(v295 + 8));
  }
  if ( v331 && *((_DWORD *)&v330[0].fields.current + v331 + 1) == 2515 )
    --v331;
  if ( !v14 )
    goto LABEL_437;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v330,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v330[0];
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &m,
          (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields.current,
          v125->fields.performance,
          v125->fields.actor,
          v125->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields.current )
      sub_B52A5C(0LL, v296);
  }
  *((_DWORD *)&v330[1].fields.list + v331++) = 2581;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &m,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( v331 && *((_DWORD *)&v330[0].fields.current + v331 + 1) == 2581 )
    --v331;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  seqObject = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !x )
      goto LABEL_437;
    if ( LOBYTE(x[19].monitor) )
      goto LABEL_428;
    v297 = x[18].monitor;
    if ( !v297 )
      goto LABEL_437;
    if ( !v297[77] && !BattleActorControl__isNoVoice((BattleActorControl_o *)x, 0LL) )
    {
      v298 = (UnityEngine_Object_o *)v125->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      seqObject = UnityEngine_Object__op_Inequality(v298, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v299 = v125->fields.performance;
        if ( !v299 )
          goto LABEL_437;
        data = (UnityEngine_Object_o *)v299->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)seqObject,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoiceMaster___);
            v125->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v125->fields.chrId;
            v303 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(v125, v303, chrId, FileName, v305) )
              v125->fields.isAlreadyRegistDefaultVoice = 1;
            v306 = v125->fields.chrId;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v307 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v125, v303, v306, v307, v308);
            v309 = x[18].monitor;
            if ( v309 )
            {
              v310 = v309[168];
              v311 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v311 = BalanceConfig_TypeInfo;
              }
              if ( v310 == v311->static_fields->TreasureDeviceIdMashu3 )
              {
                v312 = v125->fields.chrId;
                if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v313 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v125, v303, v312, v313, v314);
              }
              goto LABEL_428;
            }
          }
          goto LABEL_437;
        }
      }
    }
  }
LABEL_428:
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44029184(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x24
  int size; // w23
  unsigned int v9; // w22
  BattleSequenceManager_BattleTarget_o *v10; // x8
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v11; // x20

  v6 = this;
  if ( (byte_42AD62B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    this = (BattleSequenceManager_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_42AD62B = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = v6->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      if ( size < 1 )
      {
LABEL_14:
        if ( tlcont )
        {
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)tlcont,
                                              0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            return;
          }
        }
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          if ( battleTargetList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v10 = battleTargetList->fields._items->m_Items[v9];
          if ( !v10 )
            goto LABEL_25;
          if ( v10->fields._positionIndex_k__BackingField == targetIndex )
            break;
          if ( (int)++v9 >= size )
            goto LABEL_14;
          battleTargetList = v6->fields.battleTargetList;
          if ( !battleTargetList )
            goto LABEL_25;
        }
        v11 = v6->fields.battleTargetList;
        if ( v11 )
        {
          if ( v11->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          this = (BattleSequenceManager_o *)v11->fields._items->m_Items[v9];
          if ( this )
          {
            this = (BattleSequenceManager_o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                (BattleSequenceManager_BattleTarget_o *)this,
                                                0LL);
            if ( this )
            {
              this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B52A5C(this, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x21
  int32_t size; // w8
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  v6 = this;
  if ( (byte_42AD62F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    this = (BattleSequenceManager_o *)sub_B52984(&StringLiteral_14577/*"Tmp_Target"*/);
    byte_42AD62F = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = v6->fields.battleTargetList;
    if ( !battleTargetList )
      goto LABEL_17;
    size = battleTargetList->fields._size;
    if ( size > targetIndex )
    {
      if ( size <= (unsigned int)targetIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (BattleSequenceManager_o *)battleTargetList->fields._items->m_Items[targetIndex];
      if ( this )
      {
        this = (BattleSequenceManager_o *)BattleSequenceManager_BattleTarget__saveTransform(
                                            (BattleSequenceManager_BattleTarget_o *)this,
                                            0LL);
        if ( this )
        {
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_B52A5C(this, tlcont);
    }
    v9 = (UnityEngine_GameObject_o *)sub_B52A54(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v9, (System_String_o *)StringLiteral_14577/*"Tmp_Target"*/, 0LL);
    if ( !v9 )
      goto LABEL_17;
    this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !tlcont )
      goto LABEL_17;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0LL);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)tlcont, 0LL);
    if ( !AffectedObject )
      goto LABEL_17;
    UnityEngine_Transform__SetParent(AffectedObject, (UnityEngine_Transform_o *)this, 0LL);
  }
}


bool __fastcall BattleSequenceManager__updateCutInEvents(
        BattleSequenceManager_o *this,
        System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs,
        System_String_o *cutInName,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  char v11; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD615 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_B52984(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_42AD615 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !evs )
    sub_B52A5C(this, evs);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)evs,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B52A5C(v8, v9);
    if ( System_String__op_Equality((System_String_o *)v14.fields.current[3].monitor, cutInName, 0LL) )
    {
      current[3].klass = (Il2CppClass *)obj;
      sub_B52920(&current[3]);
      v11 = 1;
      v12 = 5;
      goto LABEL_10;
    }
  }
  v11 = 0;
  v12 = 3;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return (v12 == 5) & v11;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  this->fields.originalScale = UnityEngine_Vector3__get_zero(0LL);
  this->fields.originalRotation = UnityEngine_Quaternion__get_identity(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActorControl_o *__fastcall BattleSequenceManager_BattleTarget__getBattleActor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields.targetActor;
}


int32_t __fastcall BattleSequenceManager_BattleTarget__get_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields._positionIndex_k__BackingField;
}


void __fastcall BattleSequenceManager_BattleTarget__restoreTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o **p_targetActor; // x19
  UnityEngine_Component_o *transform; // x0

  p_targetActor = &this->fields.targetActor;
  if ( this->fields.isSave )
  {
    transform = (UnityEngine_Component_o *)*p_targetActor;
    if ( !*p_targetActor
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL
      || (UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)transform,
            this->fields.originalRotation,
            0LL),
          (transform = (UnityEngine_Component_o *)this->fields.targetActor) == 0LL)
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
    {
      sub_B52A5C(transform, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.originalScale, 0LL);
  }
  *p_targetActor = 0LL;
  sub_B52920(p_targetActor);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager_BattleTarget__saveTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
  this->fields.isSave = 1;
  if ( !targetActor )
    goto LABEL_7;
  targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL);
  if ( !targetActor
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalRotation = localRotation,
        !targetActor)
    || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalScale = localScale,
        !targetActor) )
  {
LABEL_7:
    sub_B52A5C(targetActor, method);
  }
  return UnityEngine_Component__get_gameObject(targetActor, 0LL);
}


void __fastcall BattleSequenceManager_BattleTarget__set_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._positionIndex_k__BackingField = value;
}


void __fastcall BattleSequenceManager_BattleTarget__setup(
        BattleSequenceManager_BattleTarget_o *this,
        BattleActorControl_o *bac,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_B52920(&this->fields.targetActor);
  *((_DWORD *)p_targetActor + 9) = index;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__105___ctor(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__105__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager__WaitEndSequence_d__105_o *v2; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_42AD85F & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_42AD85F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    v2->fields._wait_5__2 = v5;
    sub_B52920(&v2->fields._wait_5__2);
    if ( !_4__this )
LABEL_12:
      sub_B52A5C(this, method);
  }
  if ( _4__this->fields.IsBgBusy )
  {
    v2->fields.__2__current = (Il2CppObject *)v2->fields._wait_5__2;
    sub_B52920(&v2->fields.__2__current);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__105__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__105__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleSequenceManager__WaitEndSequence_d__105_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__105__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__105__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD859 & 1) == 0 )
  {
    sub_B52984(&BattleSequenceManager___c_TypeInfo);
    byte_42AD859 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__74_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float duration; // [xsp+Ch] [xbp-4h] BYREF

  duration = 0.0;
  if ( !x1 || (duration = x1->fields.duration, !x2) )
    sub_B52A5C(this, x1);
  return System_Single__CompareTo_44554508(x2->fields.duration, v4, (const MethodInfo *)&duration);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__74_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float duration; // [xsp+Ch] [xbp-4h] BYREF

  duration = 0.0;
  if ( !x1 || (duration = x1->fields.duration, !x2) )
    sub_B52A5C(this, x1);
  return System_Single__CompareTo_44554508(x2->fields.duration, v4, (const MethodInfo *)&duration);
}


void __fastcall BattleSequenceManager___c__DisplayClass111_0___ctor(
        BattleSequenceManager___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass111_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass111_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_B52A5C(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass114_0___ctor(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass114_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass114_0_o *v4; // x20

  v4 = this;
  if ( (byte_42AD85A & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_42AD85A = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass114_0_o *)v4->fields.targetList) == 0LL )
    sub_B52A5C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass121_0___ctor(
        BattleSequenceManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass121_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass121_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass140_0___ctor(
        BattleSequenceManager___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass140_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass140_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_0___ctor(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass73_0_o *v4; // x19
  struct BattleSequenceManager_o *_4__this; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v8; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24

  v4 = this;
  if ( (byte_42AD85B & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__);
    sub_B52984(&StringLiteral_13121/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B52984(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_42AD85B = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13121/*"StandardCutIn"*/,
                                                                  (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_B52920(&_4__this->fields.CutInPrefab),
        (this = (BattleSequenceManager___c__DisplayClass73_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v8 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_B52A54(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B52920(&v4->fields.__9__1);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__LoadNoblePhantasm(
    v8,
    chrId,
    limitCount,
    treasureDeviceId,
    treasureDeviceLv,
    npChargeStage,
    _9__1,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  ServantAssetLoadManager_o *_4__this; // x0
  __int64 v9; // x1
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleActorControl_o *v12; // x8
  struct BattleServantData_o *v13; // x8
  struct BattleSequenceManager_o *v14; // x8
  SoundManager_o *Instance; // x19
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_Action_o *v18; // x22
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AD85C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B52984(&Method_System_Tuple_int__int__get_Item1__);
    sub_B52984(&Method_System_Tuple_int__int__get_Item2__);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__);
    sub_B52984(&BattleSequenceManager___c__DisplayClass73_1_TypeInfo);
    sub_B52984(&StringLiteral_9656/*"NoblePhantasm_"*/);
    byte_42AD85C = 1;
  }
  overwriteSvtVoiceId = 0;
  v7 = (Il2CppObject *)sub_B52A54(BattleSequenceManager___c__DisplayClass73_1_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  v7[1].monitor = this;
  sub_B52920(&v7[1].monitor);
  v7[1].klass = (Il2CppClass *)obj;
  sub_B52920(&v7[1]);
  _4__this = (ServantAssetLoadManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  _4__this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v7[1].klass;
  sub_B52920(&_4__this->fields.LastActorVoice);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_16;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_16;
  battleSvtData = battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_16;
  battleSvtData->fields.seqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item1 & ~(paramsFromMstTDSeqWeight->fields.m_Item1 >> 31);
  v12 = this->fields.battleActor;
  if ( !v12 )
    goto LABEL_16;
  v13 = v12->fields.battleSvtData;
  if ( !v13 )
    goto LABEL_16;
  v13->fields.groupSeqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item2 & ~(paramsFromMstTDSeqWeight->fields.m_Item2 >> 31);
  _4__this = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (ServantAssetLoadManager_o *)ServantAssetLoadManager__getVoiceId(
                                            _4__this,
                                            this->fields.chrId,
                                            this->fields.limitCount,
                                            0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_16;
    overwriteSvtVoiceId = v14->fields.overwriteSvtVoiceId;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v16 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v17 = System_String__Concat_44568316((System_String_o *)StringLiteral_9656/*"NoblePhantasm_"*/, v16, 0LL);
  v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v18, v7, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, 0LL);
  if ( !Instance )
LABEL_16:
    sub_B52A5C(_4__this, v9);
  SoundManager__LoadAudioAssetStorage(Instance, v17, v18, 1, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___ctor(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x8
  System_String_o *v5; // x20
  int CS___8__locals1; // w8
  BattleSequenceManager___c__DisplayClass73_1_o *v7; // x21
  unsigned int v8; // w23
  int v9; // w24
  UnityEngine_Behaviour_o *v10; // x22
  void *v11; // x8
  BattleSequenceManager_o *v12; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_42AD85D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_B52984(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD85D = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_20;
  v4 = monitor[2];
  if ( !v4 )
    goto LABEL_20;
  this = *(BattleSequenceManager___c__DisplayClass73_1_o **)(v4 + 80);
  if ( !this )
    goto LABEL_20;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  CS___8__locals1 = (int)this->fields.CS___8__locals1;
  v7 = this;
  if ( CS___8__locals1 >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v8 >= CS___8__locals1 )
      {
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
      v10 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v7->fields.__9__4 + (int)v8);
      if ( !v10 )
        break;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v10->klass[1]._2.typeHierarchy)(
                                                                v10,
                                                                v10->klass[1]._2.unity_user_data);
      if ( (v9 & (unsigned int)this & 1) != 0 )
      {
        v5 = (System_String_o *)v10[2].monitor;
        v9 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
      }
      CS___8__locals1 = (int)v7->fields.CS___8__locals1;
      if ( (int)++v8 >= CS___8__locals1 )
        goto LABEL_15;
    }
LABEL_20:
    sub_B52A5C(this, method);
  }
LABEL_15:
  v11 = v2[1].monitor;
  if ( !v11 )
    goto LABEL_20;
  v12 = (BattleSequenceManager_o *)*((_QWORD *)v11 + 2);
  v13 = (System_Action_o *)v2[2].monitor;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v13, v2, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, 0LL);
    v2[2].monitor = v13;
    sub_B52920(&v2[2].monitor);
  }
  if ( !v12 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v12, v5, v13, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass73_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v5; // x8
  struct BattleSequenceManager_o *v6; // x8
  BattleSequenceManager___c__DisplayClass73_1_o *v7; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v8; // x8
  struct BattleSequenceManager_o *v9; // x8
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v12; // x8
  struct BattleSequenceManager_o *v13; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v16; // x8
  struct BattleSequenceManager_o *v17; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v19; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v23; // x8
  struct BattleSequenceManager_o *v24; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v25; // x8
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int klass; // w21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v29; // x8
  struct BattleSequenceManager_o *v30; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v31; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v34; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *v35; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v36; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v37; // x8
  struct BattleSequenceManager_o *v38; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v39; // x8
  struct BattleSequenceManager_o *v40; // x8
  UnityEngine_Object_o *v41; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v42; // x8
  struct BattleSequenceManager_o *v43; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v44; // x8
  struct BattleSequenceManager_o *v45; // x8
  UIStandFigureM_o *v46; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  struct BattleSequenceManager___c__DisplayClass73_0_o *v51; // x8

  v2 = this;
  if ( (byte_42AD85E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B52984(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__);
    byte_42AD85E = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_80;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_80;
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_80;
  v7 = this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v6->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_80;
  v9 = v8->fields.__4__this;
  if ( !v9 )
    goto LABEL_80;
  v10 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v9->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v7,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(
                                                              ComponentInChildren_Dropdown_DropdownItem,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v31 = v2->fields.CS___8__locals1;
      if ( !v31 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)v31->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v31->fields.onComplete;
      obj = v2->fields.obj;
      v34 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_Dropdown_DropdownItem;
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_77;
      v35 = v2->fields.CS___8__locals1;
      if ( !v35 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)v35->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v35->fields.onComplete;
      obj = v2->fields.obj;
      v34 = (WellFired_USFGOPlayCutInBase_o *)v10;
    }
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v34,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    goto LABEL_77;
  }
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_80;
  v13 = v12->fields.__4__this;
  if ( !v13 )
    goto LABEL_80;
  v13->fields.faceType = (int32_t)v7[1].monitor;
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_80;
  v15 = v14->fields.__4__this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  v16 = v2->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_80;
  v17 = v16->fields.__4__this;
  if ( !v17 )
    goto LABEL_80;
  performance = v17->fields.performance;
  if ( !performance )
    goto LABEL_80;
  v19 = (StandFigureManager_o *)this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)performance->fields.root_field;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !v19 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)StandFigureManager__CreateMeshLocal(
                                                            v19,
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !v15 )
    goto LABEL_80;
  v15->fields.standFigure = (struct UIStandFigureM_o *)this;
  sub_B52920(&v15->fields.standFigure);
  v20 = v2->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_80;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_80;
  standFigure = (UnityEngine_Object_o *)v21->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = v2->fields.CS___8__locals1;
    if ( v23 )
    {
      v24 = v23->fields.__4__this;
      if ( v24 )
      {
        v24->fields.loadStandFigureId = (int32_t)v7[1].klass;
        v25 = v2->fields.CS___8__locals1;
        if ( v25 )
        {
          battleActor = v25->fields.battleActor;
          if ( battleActor )
          {
            battleSvtData = battleActor->fields.battleSvtData;
            if ( battleSvtData )
            {
              this = (BattleSequenceManager___c__DisplayClass73_1_o *)battleSvtData->fields.svtdata;
              if ( this )
              {
                klass = (int)v7[1].klass;
                this = (BattleSequenceManager___c__DisplayClass73_1_o *)ServantEntity__GetTrueSvtId(
                                                                          (ServantEntity_o *)this,
                                                                          0LL);
                if ( klass == (_DWORD)this
                  || (this = (BattleSequenceManager___c__DisplayClass73_1_o *)HIDWORD(v7[1].klass), (_DWORD)this == -1) )
                {
                  v36 = v2->fields.CS___8__locals1;
                  if ( !v36 )
                    goto LABEL_80;
                  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v36->fields.battleActor;
                  if ( !this )
                    goto LABEL_80;
                  v30 = v36->fields.__4__this;
                  this = (BattleSequenceManager___c__DisplayClass73_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                            (BattleActorControl_o *)this,
                                                                            0LL);
                  if ( !v30 )
                    goto LABEL_80;
                }
                else
                {
                  v29 = v2->fields.CS___8__locals1;
                  if ( !v29 )
                    goto LABEL_80;
                  v30 = v29->fields.__4__this;
                  if ( !v30 )
                    goto LABEL_80;
                }
                v30->fields.loadStandFigureLimitCount = (int)this;
                v37 = v2->fields.CS___8__locals1;
                if ( v37 )
                {
                  v38 = v37->fields.__4__this;
                  if ( v38 )
                  {
                    this = (BattleSequenceManager___c__DisplayClass73_1_o *)v38->fields.standFigure;
                    if ( this )
                    {
                      this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                      v39 = v2->fields.CS___8__locals1;
                      if ( v39 )
                      {
                        v40 = v39->fields.__4__this;
                        if ( v40 )
                        {
                          v41 = (UnityEngine_Object_o *)this;
                          this = (BattleSequenceManager___c__DisplayClass73_1_o *)StandFigureManager__CreateStandFigureMName(
                                                                                    v40->fields.loadStandFigureId,
                                                                                    v40->fields.loadStandFigureLimitCount,
                                                                                    0LL);
                          if ( v41 )
                          {
                            UnityEngine_Object__set_name(v41, (System_String_o *)this, 0LL);
                            v42 = v2->fields.CS___8__locals1;
                            if ( v42 )
                            {
                              v43 = v42->fields.__4__this;
                              if ( v43 )
                              {
                                this = (BattleSequenceManager___c__DisplayClass73_1_o *)v43->fields.standFigure;
                                if ( this )
                                {
                                  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
                                  v44 = v2->fields.CS___8__locals1;
                                  if ( v44 )
                                  {
                                    v45 = v44->fields.__4__this;
                                    if ( v45 )
                                    {
                                      v46 = v45->fields.standFigure;
                                      loadStandFigureId = v45->fields.loadStandFigureId;
                                      loadStandFigureLimitCount = v45->fields.loadStandFigureLimitCount;
                                      faceType = v45->fields.faceType;
                                      _9__4 = v2->fields.__9__4;
                                      if ( !_9__4 )
                                      {
                                        _9__4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          _9__4,
                                          (Il2CppObject *)v2,
                                          Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                          0LL);
                                        v2->fields.__9__4 = _9__4;
                                        sub_B52920(&v2->fields.__9__4);
                                      }
                                      if ( v46 )
                                      {
                                        this = (BattleSequenceManager___c__DisplayClass73_1_o *)UIStandFigureM__SetCharacter_40849396(
                                                                                                  v46,
                                                                                                  loadStandFigureId,
                                                                                                  loadStandFigureLimitCount,
                                                                                                  faceType,
                                                                                                  _9__4,
                                                                                                  1,
                                                                                                  0LL);
                                        if ( ((unsigned __int8)this & 1) != 0 )
                                          return;
                                        goto LABEL_77;
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
LABEL_80:
    sub_B52A5C(this, method);
  }
LABEL_77:
  v51 = v2->fields.CS___8__locals1;
  if ( !v51 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v51->fields.__4__this;
  if ( !this )
    goto LABEL_80;
  BattleSequenceManager__LoadEndStandFigure(
    (BattleSequenceManager_o *)this,
    v2->fields.obj,
    v51->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_B52A5C(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_0___ctor(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass74_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass77_0___ctor(
        BattleSequenceManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass77_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  BattleSequenceManager__LoadEndStandFigure(_4__this, this->fields.obj, this->fields.onComplete, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BattleSequenceManager_onGameObjectLoadComplete__BeginInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)obj;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  BattleSequenceManager_onGameObjectLoadComplete_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  UnityEngine_GameObject_c *v13; // x8
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
  void (__fastcall **v27)(UnityEngine_GameObject_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, UnityEngine_GameObject_o *, _QWORD); // x0
  BattleSequenceManager_onGameObjectLoadComplete_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(UnityEngine_GameObject_o *, __int64); // x23
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
  UnityEngine_GameObject_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  BattleSequenceManager_onGameObjectLoadComplete_o *v52; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (BattleSequenceManager_onGameObjectLoadComplete_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(UnityEngine_GameObject_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v30->fields.extra_arg, obj, method, v3);
      v34 = sub_B529B4(v31);
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
            v44 = sub_B529AC(v31);
            v45 = sub_B52DB0(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = obj->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AEB880(obj, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))sub_B52A34(v17, v31);
              (*v27)(obj, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = obj->klass;
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AEB880(obj, class_0, v10, v12);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v16)(obj, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  obj,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(obj, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B529AC(v31);
          v37 = sub_B52DB0(v31);
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
                v28 = sub_AEB880(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))sub_B52A34(v25, v31);
            (*v29)(v32, obj, v29);
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
                v24 = sub_AEB880(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))v24)(
                v32,
                obj,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))(*v32
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v31 + 72)
                                                                                    + 312))(
                v32,
                obj,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, __int64))v33)(v32, obj, v31);
    }
  }
}