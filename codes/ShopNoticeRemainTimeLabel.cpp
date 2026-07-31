void ShopNoticeRemainTimeLabel___ctor(
        ShopNoticeRemainTimeLabel_o *this,
        UILabel_o *label,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  __asm { FMOV            V0.4S, #1.0 }
  this->fields.onTimeOverLabelColor = _Q0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.label = label;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.label, (int32_t)label, v12, v13, v14, v15, v16, v17);
  this->fields.monoBehaviour = monoBehaviour;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)monoBehaviour, v18, v19, v20, v21, v22, v23);
}


void ShopNoticeRemainTimeLabel__SetTimeLimit(
        ShopNoticeRemainTimeLabel_o *this,
        int64_t timeLimit,
        bool isChangeTimeOverLabelColorToRed,
        const MethodInfo *method)
{
  this->fields.timeLimit = timeLimit;
  if ( isChangeTimeOverLabelColorToRed )
    this->fields.onTimeOverLabelColor = (struct UnityEngine_Color_o)xmmword_E94AB0;
}


void ShopNoticeRemainTimeLabel__Start(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *updated; // x0
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_21FFECC(updated, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_83231452(monoBehaviour, updated, 0);
  this->fields.coroutine = started;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9, v10, v11, v12, v13);
}


void ShopNoticeRemainTimeLabel__Stop(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  MissionNaviTransitionBoardItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_coroutine = (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_21FFECC(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_83232056(monoBehaviour, coroutine, 0);
    p_coroutine->klass = 0;
    sub_21FFBF4(p_coroutine, 0, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934756 & 1) == 0 )
  {
    sub_21FFC50(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_TypeInfo);
    byte_5934756 = 1;
  }
  v3 = sub_21FFEBC(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9___ctor(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9__MoveNext(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *v3; // x19
  int32_t _1__state; // w8
  struct ShopNoticeRemainTimeLabel_o *_4__this; // x22
  UnityEngine_WaitForSeconds_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  bool result; // w0
  Il2CppObject *loopWait_5__2; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  v3 = this;
  if ( (byte_5934757 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5934757 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, 1.0, 0);
    v3->fields._loopWait_5__2 = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._loopWait_5__2, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    goto LABEL_18;
  label = _4__this->fields.label;
  timeLimit = _4__this->fields.timeLimit;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)LocalizationManager__GetRestTime5(timeLimit, -1, 0);
  if ( !label )
LABEL_18:
    sub_21FFECC(this, method);
  UILabel__set_text(label, (System_String_o *)this, 0);
  v17 = _4__this->fields.timeLimit;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
  if ( v17 < NetworkManager__getTime(0) )
  {
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)_4__this->fields.label;
    if ( this )
    {
      UIWidget__set_color((UIWidget_o *)this, _4__this->fields.onTimeOverLabelColor, 0);
      return 0;
    }
    goto LABEL_18;
  }
  loopWait_5__2 = (Il2CppObject *)v3->fields._loopWait_5__2;
  v3->fields.__2__current = loopWait_5__2;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_21FFBF4(p__2__current, (int32_t)loopWait_5__2, v18, v19, v20, v21, v22, v23);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9__System_Collections_IEnumerator_Reset(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9__System_Collections_IEnumerator_get_Current(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9__System_IDisposable_Dispose(
        ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *this,
        const MethodInfo *method)
{
  ;
}