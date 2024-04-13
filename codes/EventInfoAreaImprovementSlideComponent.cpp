void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_32A4630;
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
  sub_B5D560(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B5D560(p_endCallbackAction, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *infoObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E9FB0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9FB0 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v7 = this->fields.infoObject;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *infoObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E9FB1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9FB1 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v7 = this->fields.infoObject;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v21; // x20
  int v22; // s0
  int v23; // s1
  int v24; // s2
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c *v25; // x10
  float z; // w11
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x21
  EventDelegate_o *v28; // x20

  if ( (byte_42E9FB2 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)endCallbackAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6062/*"EndSlideDown"*/, v16, v17, v18);
    byte_42E9FB2 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_B5D560(
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
  v21 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v21 )
    goto LABEL_7;
  LODWORD(v21[3].fields.callbackQueue) = v22;
  HIDWORD(v21[3].fields.callbackQueue) = v23;
  LODWORD(v21[4].klass) = v24;
  v25 = *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)&this->fields.slideDownEndedPosition.fields.x;
  z = this->fields.slideDownEndedPosition.fields.z;
  v21[1].fields.m_CachedPtr = 1045220557;
  LODWORD(v21->fields.callbackQueue) = 3;
  *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)((char *)&v21[4].klass + 4) = v25;
  *((float *)&v21[4].monitor + 1) = z;
  klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21[2].klass;
  v28 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822752(v28, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6062/*"EndSlideDown"*/, 0LL);
  if ( !klass )
LABEL_7:
    sub_B5D69C(gameObject, v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
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
  UnityEngine_Object_o *infoObject; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x0
  float z; // w9
  UnityEngine_GameObject_o *v28; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  EventDelegate_o *v30; // x20

  if ( (byte_42E9FB3 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)endCallbackAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6063/*"EndSlideIn"*/, v15, v16, v17);
    byte_42E9FB3 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.endCallbackAction,
      (System_Int32_array **)endCallbackAction,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v26 = this->fields.infoObject;
    if ( !v26 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v26, 1, 0LL);
    v26 = this->fields.infoObject;
    if ( !v26 )
      goto LABEL_13;
    v26 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                        v26,
                                        (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !v26 )
      goto LABEL_13;
    z = this->fields.slideInStartedPosition.fields.z;
    v28 = v26;
    v26[5].klass = *(UnityEngine_GameObject_c **)&this->fields.slideInStartedPosition.fields.x;
    *(float *)&v26[5].monitor = z;
    *(UnityEngine_Vector3_o *)((char *)&v26[5].monitor + 4) = UnityEngine_Vector3__get_zero(0LL);
    LODWORD(v28[2].klass) = 1045220557;
    LODWORD(v28[1].klass) = 2;
    v29 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v28[2].fields.m_CachedPtr;
    v30 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822752(v30, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6063/*"EndSlideIn"*/, 0LL);
    if ( !v29 )
LABEL_13:
      sub_B5D69C(v26, v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v29,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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