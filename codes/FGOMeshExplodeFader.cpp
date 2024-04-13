void __fastcall FGOMeshExplodeFader___ctor(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  LODWORD(this[1].klass) = 1065353216;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExplodeFader__FadeOut(
        FGOMeshExplodeFader_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8C49 & 1) == 0 )
  {
    sub_B5D5C4(&FGOMeshExplodeFader__FadeOut_d__2_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C49 = 1;
  }
  v5 = sub_B5D694(FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
  FGOMeshExplodeFader__FadeOut_d__2___ctor((FGOMeshExplodeFader__FadeOut_d__2_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FGOMeshExplodeFader__Start(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = FGOMeshExplodeFader__FadeOut(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  FGOMeshExplodeFader__FadeOut_d__2_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  struct FGOMeshExplodeFader_o *_4__this; // x20
  float v10; // s0
  float t_5__2; // s8
  UnityEngine_Object_o *gameObject; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E56BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    this = (FGOMeshExplodeFader__FadeOut_d__2_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E56BE = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      UnityEngine_Component__GetComponent_WebViewObject_(
        (UnityEngine_Component_o *)_4__this,
        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
      v4->fields._t_5__2 = 0.0;
      v10 = 0.0;
      goto LABEL_8;
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
  t_5__2 = v4->fields._t_5__2;
  v4->fields.__1__state = -1;
  v10 = t_5__2 + UnityEngine_Time__get_deltaTime(0LL);
  v4->fields._t_5__2 = v10;
  if ( !_4__this )
    goto LABEL_15;
LABEL_8:
  if ( v10 >= *(float *)&_4__this[1].klass )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    return 0;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_FGOMeshExplodeFader__FadeOut_d__2_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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