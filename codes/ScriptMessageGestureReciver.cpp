void __fastcall ScriptMessageGestureReciver___ctor(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageGestureReciver__FingerGestures_OnGestureEvent(
        ScriptMessageGestureReciver_o *this,
        Gesture_o *gesture,
        const MethodInfo *method)
{
  __int64 v5; // x10
  UnityEngine_Object_o *swipCallback; // x21
  UnityEngine_Object_o *startSelection; // x21
  float x; // s8
  float y; // s9
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4390E58 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SwipeGesture_TypeInfo);
    sub_B775C4(&UICamera_TypeInfo);
    sub_B775C4(&StringLiteral_10245/*"OnSwipeBlockPanel"*/);
    byte_4390E58 = 1;
  }
  if ( gesture )
  {
    v5 = *(&SwipeGesture_TypeInfo->_2.bitflags2 + 1);
    if ( *(&gesture->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[v5 - 1] == SwipeGesture_TypeInfo )
    {
      swipCallback = (UnityEngine_Object_o *)this->fields.swipCallback;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(swipCallback, 0LL, 0LL) )
      {
        startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(startSelection, 0LL, 0LL) )
        {
          x = gesture->fields.startPosition.fields.x;
          y = gesture->fields.startPosition.fields.y;
          if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v12.fields.z = 0.0;
          v12.fields.x = x;
          v12.fields.y = y;
          if ( UICamera__Raycast(v12, 0LL) )
          {
            if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            }
            v11 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v11 )
              sub_B7769C(0LL, v10);
            UnityEngine_Component__SendMessage(
              v11,
              (System_String_o *)StringLiteral_10245/*"OnSwipeBlockPanel"*/,
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

  if ( (byte_4390E57 & 1) == 0 )
  {
    sub_B775C4(&Gesture_EventHandler_TypeInfo);
    sub_B775C4(&FingerGestures_TypeInfo);
    sub_B775C4(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_4390E57 = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_B77694(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v3, 0LL);
}


void __fastcall ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4390E56 & 1) == 0 )
  {
    sub_B775C4(&Gesture_EventHandler_TypeInfo);
    sub_B775C4(&FingerGestures_TypeInfo);
    sub_B775C4(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__);
    byte_4390E56 = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_B77694(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v3, 0LL);
}