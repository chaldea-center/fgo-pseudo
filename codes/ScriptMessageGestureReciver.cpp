void __fastcall ScriptMessageGestureReciver___ctor(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageGestureReciver__FingerGestures_OnGestureEvent(
        ScriptMessageGestureReciver_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *swipCallback; // x21
  UnityEngine_Object_o *startSelection; // x21
  float x; // s8
  float y; // s9
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FDFF5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, gesture);
    sub_1B640C8(&SwipeGesture_TypeInfo, v5);
    sub_1B640C8(&UICamera_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_9918/*"OnSwipeBlockPanel"*/, v7);
    byte_49FDFF5 = 1;
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
          v14.fields.z = 0.0;
          v14.fields.x = x;
          v14.fields.y = y;
          if ( UICamera__Raycast(v14, 0LL) )
          {
            if ( !UICamera_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v13 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v13 )
              sub_1B64324(0LL);
            UnityEngine_Component__SendMessage(v13, (System_String_o *)StringLiteral_9918/*"OnSwipeBlockPanel"*/, (Il2CppObject *)gesture, 0LL);
          }
        }
      }
    }
  }
}


void __fastcall ScriptMessageGestureReciver__OnDestroy(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Gesture_EventHandler_o *v6; // x20

  if ( (byte_49FDFF4 & 1) == 0 )
  {
    sub_1B640C8(&Gesture_EventHandler_TypeInfo, method);
    sub_1B640C8(&FingerGestures_TypeInfo, v4);
    sub_1B640C8(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v5);
    byte_49FDFF4 = 1;
  }
  v6 = (Gesture_EventHandler_o *)sub_1B64314(Gesture_EventHandler_TypeInfo, method, v2);
  Gesture_EventHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v6, 0LL);
}


void __fastcall ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Gesture_EventHandler_o *v6; // x20

  if ( (byte_49FDFF3 & 1) == 0 )
  {
    sub_1B640C8(&Gesture_EventHandler_TypeInfo, method);
    sub_1B640C8(&FingerGestures_TypeInfo, v4);
    sub_1B640C8(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v5);
    byte_49FDFF3 = 1;
  }
  v6 = (Gesture_EventHandler_o *)sub_1B64314(Gesture_EventHandler_TypeInfo, method, v2);
  Gesture_EventHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v6, 0LL);
}