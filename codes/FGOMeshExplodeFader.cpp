void FGOMeshExplodeFader___ctor(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  this->fields.fadeTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *FGOMeshExplodeFader__FadeOut(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C26075 & 1) == 0 )
  {
    sub_1C2D490(&FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
    byte_4C26075 = 1;
  }
  v3 = sub_1C2D6DC(FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void FGOMeshExplodeFader__Start(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = FGOMeshExplodeFader__FadeOut(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void FGOMeshExplodeFader__FadeOut_d__2___ctor(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool FGOMeshExplodeFader__FadeOut_d__2__MoveNext(FGOMeshExplodeFader__FadeOut_d__2_o *this, const MethodInfo *method)
{
  FGOMeshExplodeFader__FadeOut_d__2_o *v2; // x19
  int32_t _1__state; // w8
  struct FGOMeshExplodeFader_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  float v7; // s0
  float t_5__2; // s8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4C26076 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    this = (FGOMeshExplodeFader__FadeOut_d__2_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26076 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    t_5__2 = v2->fields._t_5__2;
    v2->fields.__1__state = -1;
    v7 = t_5__2 + UnityEngine_Time__get_deltaTime(0);
    v2->fields._t_5__2 = v7;
    if ( _4__this )
      goto LABEL_8;
LABEL_14:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  UnityEngine_Component__GetComponent_object_(
    (UnityEngine_Component_o *)_4__this,
    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v2->fields._t_5__2 = 0.0;
  v7 = 0.0;
LABEL_8:
  if ( v7 < _4__this->fields.fadeTime )
  {
    v2->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1C2D434(p__2__current, 0, v5, v6);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
  return 0;
}


Il2CppObject *FGOMeshExplodeFader__FadeOut_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn FGOMeshExplodeFader__FadeOut_d__2__System_Collections_IEnumerator_Reset(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_FGOMeshExplodeFader__FadeOut_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *FGOMeshExplodeFader__FadeOut_d__2__System_Collections_IEnumerator_get_Current(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void FGOMeshExplodeFader__FadeOut_d__2__System_IDisposable_Dispose(
        FGOMeshExplodeFader__FadeOut_d__2_o *this,
        const MethodInfo *method)
{
  ;
}