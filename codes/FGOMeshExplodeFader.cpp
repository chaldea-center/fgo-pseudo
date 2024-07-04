void __fastcall FGOMeshExplodeFader___ctor(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  this->fields.fadeTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExplodeFader__FadeOut(
        FGOMeshExplodeFader_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E1734 & 1) == 0 )
  {
    sub_1B00CCC(&FGOMeshExplodeFader__FadeOut_d__2_TypeInfo, method);
    byte_48E1734 = 1;
  }
  v3 = sub_1B00F18(FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall FGOMeshExplodeFader__Start(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = FGOMeshExplodeFader__FadeOut(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3
  float v8; // s0
  float t_5__2; // s8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_48E1735 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    this = (FGOMeshExplodeFader__FadeOut_d__2_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48E1735 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    t_5__2 = v2->fields._t_5__2;
    v2->fields.__1__state = -1;
    v8 = t_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v2->fields._t_5__2 = v8;
    if ( _4__this )
      goto LABEL_8;
LABEL_14:
    sub_1B00F28(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  UnityEngine_Component__GetComponent_object_(
    (UnityEngine_Component_o *)_4__this,
    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v2->fields._t_5__2 = 0.0;
  v8 = 0.0;
LABEL_8:
  if ( v8 < _4__this->fields.fadeTime )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
    sub_1B00C70(p__2__current, 0, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
  return 0;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_FGOMeshExplodeFader__FadeOut_d__2_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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