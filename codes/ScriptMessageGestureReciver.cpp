void ScriptMessageGestureReciver___ctor(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptMessageGestureReciver__FingerGestures_OnGestureEvent(
        ScriptMessageGestureReciver_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *swipCallback; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *startSelection; // x21
  __int64 v9; // x1
  float x; // s8
  float y; // s9
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59728B8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SwipeGesture_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10373/*"OnSwipeBlockPanel"*/);
    byte_59728B8 = 1;
  }
  if ( gesture )
  {
    naturalAligment = SwipeGesture_TypeInfo->_2.naturalAligment;
    if ( gesture->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[naturalAligment - 1] == SwipeGesture_TypeInfo )
    {
      swipCallback = (UnityEngine_Object_o *)this->fields.swipCallback;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gesture);
      if ( UnityEngine_Object__op_Inequality(swipCallback, 0, 0) )
      {
        startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        if ( UnityEngine_Object__op_Inequality(startSelection, 0, 0) )
        {
          x = gesture->fields.startPosition.fields.x;
          y = gesture->fields.startPosition.fields.y;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9);
          v14.fields.z = 0.0;
          v14.fields.x = x;
          v14.fields.y = y;
          if ( UICamera__Raycast(v14, 0) )
          {
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
            v13 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v13 )
              sub_2213CDC(0, v12);
            UnityEngine_Component__SendMessage(v13, (System_String_o *)StringLiteral_10373/*"OnSwipeBlockPanel"*/, (Il2CppObject *)gesture, 0);
          }
        }
      }
    }
  }
}


void ScriptMessageGestureReciver__OnDestroy(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20
  __int64 v4; // x1

  if ( (byte_59728B7 & 1) == 0 )
  {
    sub_2213A60(&Gesture_EventHandler_TypeInfo);
    sub_2213A60(&FingerGestures_TypeInfo);
    sub_2213A60(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_59728B7 = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_2213CCC(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0);
  if ( !*(&FingerGestures_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo, v4);
  FingerGestures__remove_OnGestureEvent(v3, 0);
}


void ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20
  __int64 v4; // x1

  if ( (byte_59728B6 & 1) == 0 )
  {
    sub_2213A60(&Gesture_EventHandler_TypeInfo);
    sub_2213A60(&FingerGestures_TypeInfo);
    sub_2213A60(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_59728B6 = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_2213CCC(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0);
  if ( !*(&FingerGestures_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo, v4);
  FingerGestures__add_OnGestureEvent(v3, 0);
}