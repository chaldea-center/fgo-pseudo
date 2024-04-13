void __fastcall ScriptMessageGestureReciver___ctor(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptMessageGestureReciver__FingerGestures_OnGestureEvent(
        ScriptMessageGestureReciver_o *this,
        Gesture_o *gesture,
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
  __int64 v15; // x10
  UnityEngine_Object_o *swipCallback; // x21
  UnityEngine_Object_o *startSelection; // x21
  float x; // s8
  float y; // s9
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE42A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)gesture, (_DWORD)method, v3);
    sub_B5D5C4(&SwipeGesture_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UICamera_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10169/*"OnSwipeBlockPanel"*/, v12, v13, v14);
    byte_42EE42A = 1;
  }
  if ( gesture )
  {
    v15 = *(&SwipeGesture_TypeInfo->_2.bitflags2 + 1);
    if ( *(&gesture->klass->_2.bitflags2 + 1) >= (unsigned int)v15
      && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[v15 - 1] == SwipeGesture_TypeInfo )
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
          v22.fields.z = 0.0;
          v22.fields.x = x;
          v22.fields.y = y;
          if ( UICamera__Raycast(v22, 0LL) )
          {
            if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            }
            v21 = (UnityEngine_Component_o *)this->fields.swipCallback;
            if ( !v21 )
              sub_B5D69C(0LL, v20);
            UnityEngine_Component__SendMessage(
              v21,
              (System_String_o *)StringLiteral_10169/*"OnSwipeBlockPanel"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Gesture_EventHandler_o *v11; // x20

  if ( (byte_42EE429 & 1) == 0 )
  {
    sub_B5D5C4(&Gesture_EventHandler_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FingerGestures_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v8, v9, v10);
    byte_42EE429 = 1;
  }
  v11 = (Gesture_EventHandler_o *)sub_B5D694(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__remove_OnGestureEvent(v11, 0LL);
}


void __fastcall ScriptMessageGestureReciver__Start(ScriptMessageGestureReciver_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Gesture_EventHandler_o *v11; // x20

  if ( (byte_42EE428 & 1) == 0 )
  {
    sub_B5D5C4(&Gesture_EventHandler_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FingerGestures_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__, v8, v9, v10);
    byte_42EE428 = 1;
  }
  v11 = (Gesture_EventHandler_o *)sub_B5D694(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ScriptMessageGestureReciver_FingerGestures_OnGestureEvent__,
    0LL);
  if ( (BYTE3(FingerGestures_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FingerGestures_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  }
  FingerGestures__add_OnGestureEvent(v11, 0LL);
}