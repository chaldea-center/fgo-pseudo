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
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BCBDF & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, gesture);
    sub_1B4CF90(&SwipeGesture_TypeInfo, v5);
    sub_1B4CF90(&UICamera_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_9764/*"OnSwipeBlockPanel"*/, v7);
    byte_49BCBDF = 1;
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
          v15.fields.z = 0.0;
          v15.fields.x = x;
          v15.fields.y = y;
          if ( UICamera__Raycast(v15, 0LL) )
          {
            if ( !UICamera_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v14 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v14 )
              sub_1B4D1EC(0LL, v13);
            UnityEngine_Component__SendMessage(v14, (System_String_o *)StringLiteral_9764/*"OnSwipeBlockPanel"*/, (Il2CppObject *)gesture, 0LL);
          }
        }
      }
    }
  }
}


void __fastcall ScriptMessageGestureReciver__OnDestroy(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_49BCBDE & 1) == 0 )
  {
    sub_1B4CF90(&Gesture_EventHandler_TypeInfo, method);
    sub_1B4CF90(&FingerGestures_TypeInfo, v3);
    sub_1B4CF90(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v4);
    byte_49BCBDE = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B4D1DC(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v5, 0LL);
}


void __fastcall ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_49BCBDD & 1) == 0 )
  {
    sub_1B4CF90(&Gesture_EventHandler_TypeInfo, method);
    sub_1B4CF90(&FingerGestures_TypeInfo, v3);
    sub_1B4CF90(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v4);
    byte_49BCBDD = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B4D1DC(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v5, 0LL);
}