void ShopNoticeRemainTimeLabel___ctor(
        ShopNoticeRemainTimeLabel_o *this,
        UILabel_o *label,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  __asm { FMOV            V0.4S, #1.0 }
  this->fields.onTimeOverLabelColor = _Q0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.label = label;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.label, (int32_t)label, v12, v13);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)monoBehaviour, v14, v15);
}


void ShopNoticeRemainTimeLabel__SetTimeLimit(
        ShopNoticeRemainTimeLabel_o *this,
        int64_t timeLimit,
        bool isChangeTimeOverLabelColorToRed,
        const MethodInfo *method)
{
  this->fields.timeLimit = timeLimit;
  if ( isChangeTimeOverLabelColorToRed )
    this->fields.onTimeOverLabelColor = (struct UnityEngine_Color_o)xmmword_CED870;
}


void ShopNoticeRemainTimeLabel__Start(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *updated; // x0
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_1C6BC60(updated, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71644868(monoBehaviour, updated, 0);
  this->fields.coroutine = started;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9);
}


void ShopNoticeRemainTimeLabel__Stop(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  CGThumbnailListItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_coroutine = (CGThumbnailListItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1C6BC60(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_71645488(monoBehaviour, coroutine, 0);
    p_coroutine->klass = 0;
    sub_1C6B9AC(p_coroutine, 0, v5, v6);
  }
}


System_Collections_IEnumerator_o *ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB2546 & 1) == 0 )
  {
    sub_1C6BA08(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_TypeInfo);
    byte_4CB2546 = 1;
  }
  v3 = sub_1C6BC54(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *v2; // x19
  int32_t _1__state; // w8
  struct ShopNoticeRemainTimeLabel_o *_4__this; // x22
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  int64_t v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  Il2CppObject *loopWait_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4CB2547 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB2547 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 1.0, 0);
    v2->fields._loopWait_5__2 = v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields._loopWait_5__2, (int32_t)v5, v6, v7);
  }
  if ( !_4__this )
    goto LABEL_18;
  label = _4__this->fields.label;
  timeLimit = _4__this->fields.timeLimit;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)LocalizationManager__GetRestTime5(timeLimit, -1, 0);
  if ( !label )
LABEL_18:
    sub_1C6BC60(this, method);
  UILabel__set_text(label, (System_String_o *)this, 0);
  v10 = _4__this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v10 < NetworkManager__getTime(0) )
  {
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)_4__this->fields.label;
    if ( this )
    {
      UIWidget__set_color((UIWidget_o *)this, _4__this->fields.onTimeOverLabelColor, 0);
      return 0;
    }
    goto LABEL_18;
  }
  loopWait_5__2 = (Il2CppObject *)v2->fields._loopWait_5__2;
  v2->fields.__2__current = loopWait_5__2;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C6B9AC(p__2__current, (int32_t)loopWait_5__2, v11, v12);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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