void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_31A36E0;
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
  sub_B2C2F8(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B2C2F8(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4189117 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189117 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4189118 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189118 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
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
  __int64 v14; // x1
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v15; // x20
  int v16; // s0
  int v17; // s1
  int v18; // s2
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c *v19; // x10
  float z; // w11
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x21
  EventDelegate_o *v22; // x20

  if ( (byte_4189119 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, endCallbackAction);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_B2C35C(&StringLiteral_5983/*"EndSlideDown"*/, v12);
    byte_4189119 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_B2C2F8(
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
  v15 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v15 )
    goto LABEL_7;
  LODWORD(v15[3].fields.callbackQueue) = v16;
  HIDWORD(v15[3].fields.callbackQueue) = v17;
  LODWORD(v15[4].klass) = v18;
  v19 = *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)&this->fields.slideDownEndedPosition.fields.x;
  z = this->fields.slideDownEndedPosition.fields.z;
  v15[1].fields.m_CachedPtr = 1045220557;
  LODWORD(v15->fields.callbackQueue) = 3;
  *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)((char *)&v15[4].klass + 4) = v19;
  *((float *)&v15[4].monitor + 1) = z;
  klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15[2].klass;
  v22 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
  EventDelegate___ctor_29723868(v22, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5983/*"EndSlideDown"*/, 0LL);
  if ( !klass )
LABEL_7:
    sub_B2C434(gameObject, v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  float z; // w9
  UnityEngine_GameObject_o *v19; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  EventDelegate_o *v21; // x20

  if ( (byte_418911A & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, endCallbackAction);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5984/*"EndSlideIn"*/, v8);
    byte_418911A = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.endCallbackAction,
      (System_Int32_array **)endCallbackAction,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v17 = this->fields.infoObject;
    if ( !v17 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v17, 1, 0LL);
    v17 = this->fields.infoObject;
    if ( !v17 )
      goto LABEL_13;
    v17 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                        v17,
                                        (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !v17 )
      goto LABEL_13;
    z = this->fields.slideInStartedPosition.fields.z;
    v19 = v17;
    v17[5].klass = *(UnityEngine_GameObject_c **)&this->fields.slideInStartedPosition.fields.x;
    *(float *)&v17[5].monitor = z;
    *(UnityEngine_Vector3_o *)((char *)&v17[5].monitor + 4) = UnityEngine_Vector3__get_zero(0LL);
    LODWORD(v19[2].klass) = 1045220557;
    LODWORD(v19[1].klass) = 2;
    v20 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v19[2].fields.m_CachedPtr;
    v21 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
    EventDelegate___ctor_29723868(v21, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5984/*"EndSlideIn"*/, 0LL);
    if ( !v20 )
LABEL_13:
      sub_B2C434(v17, v16);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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