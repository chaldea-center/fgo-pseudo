void __fastcall ScriptMessageGestureReciver___ctor(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageGestureReciver__FingerGestures_OnGestureEvent(
        ScriptMessageGestureReciver_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *swipCallback; // x21
  UnityEngine_Object_o *startSelection; // x21
  float x; // s8
  float y; // s9
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDE23F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SwipeGesture_TypeInfo);
    sub_1C21E38(&UICamera_TypeInfo);
    sub_1C21E38(&StringLiteral_10160/*"OnSwipeBlockPanel"*/);
    byte_4BDE23F = 1;
  }
  if ( gesture )
  {
    methodPtr_low = LOBYTE(SwipeGesture_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(gesture->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[methodPtr_low - 1] == SwipeGesture_TypeInfo )
    {
      swipCallback = (UnityEngine_Object_o *)this->fields.swipCallback;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(swipCallback, 0LL, 0LL) )
      {
        startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(startSelection, 0LL, 0LL) )
        {
          x = gesture->fields.startPosition.fields.x;
          y = gesture->fields.startPosition.fields.y;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v12.fields.z = 0.0;
          v12.fields.x = x;
          v12.fields.y = y;
          if ( UICamera__Raycast(v12, 0LL) )
          {
            if ( !UICamera_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v11 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v11 )
              sub_1C22094(0LL, v10);
            UnityEngine_Component__SendMessage(
              v11,
              (System_String_o *)StringLiteral_10160/*"OnSwipeBlockPanel"*/,
              (Il2CppObject *)gesture,
              0LL);
          }
        }
      }
    }
  }
}


void __fastcall ScriptMessageGestureReciver__OnDestroy(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4BDE23E & 1) == 0 )
  {
    sub_1C21E38(&Gesture_EventHandler_TypeInfo);
    sub_1C21E38(&FingerGestures_TypeInfo);
    sub_1C21E38(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_4BDE23E = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C22084(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v3, 0LL);
}


void __fastcall ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4BDE23D & 1) == 0 )
  {
    sub_1C21E38(&Gesture_EventHandler_TypeInfo);
    sub_1C21E38(&FingerGestures_TypeInfo);
    sub_1C21E38(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_4BDE23D = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C22084(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v3, 0LL);
}