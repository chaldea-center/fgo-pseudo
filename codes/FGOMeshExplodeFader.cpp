void FGOMeshExplodeFader___ctor(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  this->fields.fadeTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *FGOMeshExplodeFader__FadeOut(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CED41A & 1) == 0 )
  {
    sub_1C7BAE8(&FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
    byte_4CED41A = 1;
  }
  v3 = sub_1C7BD34(FGOMeshExplodeFader__FadeOut_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void FGOMeshExplodeFader__Start(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = FGOMeshExplodeFader__FadeOut(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v3, 0);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  float v11; // s0
  float t_5__2; // s8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4CED41B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Renderer___);
    this = (FGOMeshExplodeFader__FadeOut_d__2_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED41B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    t_5__2 = v2->fields._t_5__2;
    v2->fields.__1__state = -1;
    v11 = t_5__2 + UnityEngine_Time__get_deltaTime(0);
    v2->fields._t_5__2 = v11;
    if ( _4__this )
      goto LABEL_8;
LABEL_14:
    sub_1C7BD40(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  UnityEngine_Component__GetComponent_object_(
    (UnityEngine_Component_o *)_4__this,
    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v2->fields._t_5__2 = 0.0;
  v11 = 0.0;
LABEL_8:
  if ( v11 < _4__this->fields.fadeTime )
  {
    v2->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
    sub_1C7BA8C(p__2__current, 0, v5, v6, v7, v8, v9, v10);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_FGOMeshExplodeFader__FadeOut_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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