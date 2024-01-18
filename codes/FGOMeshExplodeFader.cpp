void __fastcall FGOMeshExplodeFader___ctor(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  LODWORD(this[1].klass) = 1065353216;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExplodeFader__FadeOut(
        FGOMeshExplodeFader_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418857B & 1) == 0 )
  {
    sub_B2C35C(&FGOMeshExplodeFader__FadeOut_d__2_TypeInfo, method);
    byte_418857B = 1;
  }
  v3 = sub_B2C42C(FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
  FGOMeshExplodeFader__FadeOut_d__2___ctor((FGOMeshExplodeFader__FadeOut_d__2_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall FGOMeshExplodeFader__Start(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = FGOMeshExplodeFader__FadeOut(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall FGOMeshExplodeFader__FadeOut_d__2___ctor(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall FGOMeshExplodeFader__FadeOut_d__2__MoveNext(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  FGOMeshExplodeFader__FadeOut_d__2_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct FGOMeshExplodeFader_o *_4__this; // x20
  float v6; // s0
  float t_5__2; // s8
  UnityEngine_Object_o *gameObject; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_41841BF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    this = (FGOMeshExplodeFader__FadeOut_d__2_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41841BF = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      UnityEngine_Component__GetComponent_WebViewObject_(
        (UnityEngine_Component_o *)_4__this,
        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      v2->fields._t_5__2 = 0.0;
      v6 = 0.0;
      goto LABEL_8;
    }
LABEL_15:
    sub_B2C434(this, method);
  }
  t_5__2 = v2->fields._t_5__2;
  v2->fields.__1__state = -1;
  v6 = t_5__2 + UnityEngine_Time__get_deltaTime(0LL);
  v2->fields._t_5__2 = v6;
  if ( !_4__this )
    goto LABEL_15;
LABEL_8:
  if ( v6 >= *(float *)&_4__this[1].klass )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    return 0;
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall FGOMeshExplodeFader__FadeOut_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FGOMeshExplodeFader__FadeOut_d__2__System_Collections_IEnumerator_Reset(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_FGOMeshExplodeFader__FadeOut_d__2_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall FGOMeshExplodeFader__FadeOut_d__2__System_Collections_IEnumerator_get_Current(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FGOMeshExplodeFader__FadeOut_d__2__System_IDisposable_Dispose(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  ;
}