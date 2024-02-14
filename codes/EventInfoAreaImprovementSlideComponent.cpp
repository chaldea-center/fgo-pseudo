void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_32055C0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__EndSlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (BattleServantConfConponent_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0LL;
  sub_B0D840(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__EndSlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (BattleServantConfConponent_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0LL;
  sub_B0D840(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupBeforeSlidePosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupDisp(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4216207 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216207 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v4 = this->fields.infoObject;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4216208 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216208 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v4 = this->fields.infoObject;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    GameObjectExtensions__SetLocalPosition(this->fields.infoObject, this->fields.slideInStartedPosition, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.slideDownEndedPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementSlideComponent__SlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
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
  UnityEngine_GameObject_o *gameObject; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // s0
  int v18; // s1
  int v19; // s2
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c *v20; // x10
  float z; // w11
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x21
  EventDelegate_o *v23; // x20

  if ( (byte_4216209 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_TypeInfo, endCallbackAction);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_B0D8A4(&StringLiteral_6000/*"EndSlideDown"*/, v12);
    byte_4216209 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endCallbackAction,
    (System_Int32_array **)endCallbackAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  v14 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v14 )
    goto LABEL_7;
  LODWORD(v14[3].fields.callbackQueue) = v17;
  HIDWORD(v14[3].fields.callbackQueue) = v18;
  LODWORD(v14[4].klass) = v19;
  v20 = *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)&this->fields.slideDownEndedPosition.fields.x;
  z = this->fields.slideDownEndedPosition.fields.z;
  v14[1].fields.m_CachedPtr = 1045220557;
  LODWORD(v14->fields.callbackQueue) = 3;
  *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)((char *)&v14[4].klass + 4) = v20;
  *((float *)&v14[4].monitor + 1) = z;
  klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14[2].klass;
  v23 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v15, v16);
  EventDelegate___ctor_28889692(v23, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6000/*"EndSlideDown"*/, 0LL);
  if ( !klass )
LABEL_7:
    sub_B0D97C(gameObject);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *infoObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *v16; // x0
  float z; // w9
  UnityEngine_GameObject_o *v18; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  EventDelegate_o *v22; // x20

  if ( (byte_421620A & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_TypeInfo, endCallbackAction);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_6001/*"EndSlideIn"*/, v8);
    byte_421620A = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    ActionExtensions__Call(endCallbackAction, 0LL);
  }
  else
  {
    this->fields.endCallbackAction = endCallbackAction;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.endCallbackAction,
      (System_Int32_array **)endCallbackAction,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = this->fields.infoObject;
    if ( !v16 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v16, 1, 0LL);
    v16 = this->fields.infoObject;
    if ( !v16 )
      goto LABEL_13;
    v16 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                        v16,
                                        (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !v16 )
      goto LABEL_13;
    z = this->fields.slideInStartedPosition.fields.z;
    v18 = v16;
    v16[5].klass = *(UnityEngine_GameObject_c **)&this->fields.slideInStartedPosition.fields.x;
    *(float *)&v16[5].monitor = z;
    *(UnityEngine_Vector3_o *)((char *)&v16[5].monitor + 4) = UnityEngine_Vector3__get_zero(0LL);
    LODWORD(v18[2].klass) = 1045220557;
    LODWORD(v18[1].klass) = 2;
    v19 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v18[2].fields.m_CachedPtr;
    v22 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v20, v21);
    EventDelegate___ctor_28889692(v22, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6001/*"EndSlideIn"*/, 0LL);
    if ( !v19 )
LABEL_13:
      sub_B0D97C(v16);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v19,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
}


int32_t __fastcall EventInfoAreaImprovementSlideComponent__get_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void __fastcall EventInfoAreaImprovementSlideComponent__set_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}