void __fastcall FGOMeshExplodeFader___ctor(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  this->fields.fadeTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FGOMeshExplodeFader__FadeOut(
        FGOMeshExplodeFader_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15082 & 1) == 0 )
  {
    sub_1BCA7E0(&FGOMeshExplodeFader__FadeOut_d__2_TypeInfo, method, v2);
    byte_4B15082 = 1;
  }
  v5 = sub_1BCAA2C(FGOMeshExplodeFader__FadeOut_d__2_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FGOMeshExplodeFader__Start(FGOMeshExplodeFader_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = FGOMeshExplodeFader__FadeOut(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  __int64 v2; // x2
  FGOMeshExplodeFader__FadeOut_d__2_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  struct FGOMeshExplodeFader_o *_4__this; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  float v14; // s0
  float t_5__2; // s8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x19

  v3 = this;
  if ( (byte_4B15083 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v2);
    this = (FGOMeshExplodeFader__FadeOut_d__2_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B15083 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    t_5__2 = v3->fields._t_5__2;
    v3->fields.__1__state = -1;
    v14 = t_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v3->fields._t_5__2 = v14;
    if ( _4__this )
      goto LABEL_8;
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  UnityEngine_Component__GetComponent_object_(
    (UnityEngine_Component_o *)_4__this,
    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  v3->fields._t_5__2 = 0.0;
  v14 = 0.0;
LABEL_8:
  if ( v14 < _4__this->fields.fadeTime )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
    sub_1BCA784(p__2__current, 0LL, v8, v9, v10, v11, v12, v13);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_FGOMeshExplodeFader__FadeOut_d__2_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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