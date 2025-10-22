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
  UnityEngine_Object_o *startSelection; // x21
  float x; // s8
  float y; // s9
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C58D64 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SwipeGesture_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9970/*"OnSwipeBlockPanel"*/);
    byte_4C58D64 = 1;
  }
  if ( gesture )
  {
    naturalAligment = SwipeGesture_TypeInfo->_2.naturalAligment;
    if ( gesture->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[naturalAligment - 1] == SwipeGesture_TypeInfo )
    {
      swipCallback = (UnityEngine_Object_o *)this->fields.swipCallback;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(swipCallback, 0, 0) )
      {
        startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(startSelection, 0, 0) )
        {
          x = gesture->fields.startPosition.fields.x;
          y = gesture->fields.startPosition.fields.y;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v12.fields.z = 0.0;
          v12.fields.x = x;
          v12.fields.y = y;
          if ( UICamera__Raycast(v12, 0) )
          {
            if ( !UICamera_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v11 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v11 )
              sub_1C3E7C0(0, v10);
            UnityEngine_Component__SendMessage(v11, (System_String_o *)StringLiteral_9970/*"OnSwipeBlockPanel"*/, (Il2CppObject *)gesture, 0);
          }
        }
      }
    }
  }
}


void ScriptMessageGestureReciver__OnDestroy(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4C58D63 & 1) == 0 )
  {
    sub_1C3E564(&Gesture_EventHandler_TypeInfo);
    sub_1C3E564(&FingerGestures_TypeInfo);
    sub_1C3E564(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_4C58D63 = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C3E7B0(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v3, 0);
}


void ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4C58D62 & 1) == 0 )
  {
    sub_1C3E564(&Gesture_EventHandler_TypeInfo);
    sub_1C3E564(&FingerGestures_TypeInfo);
    sub_1C3E564(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_4C58D62 = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C3E7B0(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v3, 0);
}