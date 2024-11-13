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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *swipCallback; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *startSelection; // x21
  __int64 v15; // x1
  float x; // s8
  float y; // s9
  __int64 v18; // x1
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E4B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, gesture, method);
    sub_1BCA7E0(&SwipeGesture_TypeInfo, v5, v6);
    sub_1BCA7E0(&UICamera_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10096/*"OnSwipeBlockPanel"*/, v9, v10);
    byte_4B17E4B = 1;
  }
  if ( gesture )
  {
    methodPtr_low = LOBYTE(SwipeGesture_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(gesture->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[methodPtr_low - 1] == SwipeGesture_TypeInfo )
    {
      swipCallback = (UnityEngine_Object_o *)this->fields.swipCallback;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gesture);
      if ( UnityEngine_Object__op_Inequality(swipCallback, 0LL, 0LL) )
      {
        startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        if ( UnityEngine_Object__op_Inequality(startSelection, 0LL, 0LL) )
        {
          x = gesture->fields.startPosition.fields.x;
          y = gesture->fields.startPosition.fields.y;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v15);
          v20.fields.z = 0.0;
          v20.fields.x = x;
          v20.fields.y = y;
          if ( UICamera__Raycast(v20, 0LL) )
          {
            if ( !UICamera_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v18);
            v19 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v19 )
              sub_1BCAA3C(0LL, v18);
            UnityEngine_Component__SendMessage(
              v19,
              (System_String_o *)StringLiteral_10096/*"OnSwipeBlockPanel"*/,
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Gesture_EventHandler_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B17E4A & 1) == 0 )
  {
    sub_1BCA7E0(&Gesture_EventHandler_TypeInfo, method, v2);
    sub_1BCA7E0(&FingerGestures_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v7, v8);
    byte_4B17E4A = 1;
  }
  v9 = (Gesture_EventHandler_o *)sub_1BCAA2C(Gesture_EventHandler_TypeInfo, method, v2, v3);
  Gesture_EventHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo, v10);
  FingerGestures__remove_OnGestureEvent(v9, 0LL);
}


void __fastcall ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Gesture_EventHandler_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B17E49 & 1) == 0 )
  {
    sub_1BCA7E0(&Gesture_EventHandler_TypeInfo, method, v2);
    sub_1BCA7E0(&FingerGestures_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v7, v8);
    byte_4B17E49 = 1;
  }
  v9 = (Gesture_EventHandler_o *)sub_1BCAA2C(Gesture_EventHandler_TypeInfo, method, v2, v3);
  Gesture_EventHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo, v10);
  FingerGestures__add_OnGestureEvent(v9, 0LL);
}