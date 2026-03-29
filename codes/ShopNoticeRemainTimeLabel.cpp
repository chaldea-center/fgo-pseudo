void ShopNoticeRemainTimeLabel___ctor(
        ShopNoticeRemainTimeLabel_o *this,
        UILabel_o *label,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  __asm { FMOV            V0.4S, #1.0 }
  this->fields.onTimeOverLabelColor = _Q0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.label = label;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.label, (int32_t)label, v12, v13, v14, v15, v16, v17);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)monoBehaviour, v18, v19, v20, v21, v22, v23);
}


void ShopNoticeRemainTimeLabel__SetTimeLimit(
        ShopNoticeRemainTimeLabel_o *this,
        int64_t timeLimit,
        bool isChangeTimeOverLabelColorToRed,
        const MethodInfo *method)
{
  this->fields.timeLimit = timeLimit;
  if ( isChangeTimeOverLabelColorToRed )
    this->fields.onTimeOverLabelColor = (struct UnityEngine_Color_o)xmmword_D02030;
}


void ShopNoticeRemainTimeLabel__Start(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x20
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *updated; // x0
  __int64 v6; // x1
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  ShopNoticeRemainTimeLabel__Stop(this, method);
  monoBehaviour = this->fields.monoBehaviour;
  updated = ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(this, v4);
  if ( !monoBehaviour )
    sub_1C93D2C(updated, v6);
  started = UnityEngine_MonoBehaviour__StartCoroutine_72105100(monoBehaviour, updated, 0);
  this->fields.coroutine = started;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.coroutine, (int32_t)started, v8, v9, v10, v11, v12, v13);
}


void ShopNoticeRemainTimeLabel__Stop(ShopNoticeRemainTimeLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  GrandQuestFolderBoardItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_coroutine = (GrandQuestFolderBoardItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1C93D2C(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_72105720(monoBehaviour, coroutine, 0);
    p_coroutine->klass = 0;
    sub_1C93A78(p_coroutine, 0, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel(
        ShopNoticeRemainTimeLabel_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2CB76 & 1) == 0 )
  {
    sub_1C93AD4(&ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_TypeInfo);
    byte_4D2CB76 = 1;
  }
  v3 = sub_1C93D20(ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UILabel_o *label; // x20
  int64_t timeLimit; // x21
  int64_t v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *loopWait_5__2; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4D2CB77 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    this = (ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_o *)sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D2CB77 = 1;
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
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 1.0, 0);
    v2->fields._loopWait_5__2 = v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields._loopWait_5__2, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1C93D2C(this, method);
  UILabel__set_text(label, (System_String_o *)this, 0);
  v14 = _4__this->fields.timeLimit;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v14 < NetworkManager__getTime(0) )
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
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C93A78(p__2__current, (int32_t)loopWait_5__2, v15, v16, v17, v18, v19, v20);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_ShopNoticeRemainTimeLabel__UpdateRemainTimeLabel_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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