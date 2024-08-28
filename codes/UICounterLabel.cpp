void __fastcall UICounterLabel___ctor(UICounterLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall UICounterLabel__ExecAnimation(
        UICounterLabel_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A1F095 & 1) == 0 )
  {
    sub_1B715CC(&UICounterLabel__ExecAnimation_d__16_TypeInfo, method);
    byte_4A1F095 = 1;
  }
  v3 = sub_1B71818(UICounterLabel__ExecAnimation_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall UICounterLabel__PlayAnimation(UICounterLabel_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields._AddCount_k__BackingField )
  {
    v3 = UICounterLabel__ExecAnimation(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICounterLabel__SetCountLabel(UICounterLabel_o *this, int32_t count, const MethodInfo *method)
{
  UICounterLabel_o *v4; // x19
  UILabel_o *countLabel; // x21
  int32_t mWidth; // w20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_String_o *v10; // x0
  System_String_o *format; // x23
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  v14 = count;
  if ( (byte_4A1F096 & 1) == 0 )
  {
    this = (UICounterLabel_o *)sub_1B715CC(&int_TypeInfo, *(_QWORD *)&count);
    byte_4A1F096 = 1;
  }
  countLabel = v4->fields.countLabel;
  if ( !countLabel )
    goto LABEL_11;
  mWidth = countLabel->fields.mWidth;
  if ( System_String__IsNullOrEmpty(v4->fields.format, 0LL) )
  {
    v10 = System_Int32__ToString((int32_t)&v14, 0LL);
  }
  else
  {
    format = v4->fields.format;
    v13 = count;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v7, v8, v9);
    v10 = System_String__Format(format, v12, 0LL);
  }
  UILabel__set_text(countLabel, v10, 0LL);
  if ( v4->fields.isFixedWidth )
  {
    this = (UICounterLabel_o *)v4->fields.countLabel;
    if ( this )
    {
      UILabel__SetCondensedScale((UILabel_o *)this, mWidth, 0LL);
      return;
    }
LABEL_11:
    sub_1B71828(this, *(_QWORD *)&count);
  }
}


void __fastcall UICounterLabel__Setup(
        UICounterLabel_o *this,
        int32_t count,
        float animTime,
        System_String_o *format,
        bool isFixedWidth,
        const MethodInfo *method)
{
  struct System_String_o **p_format; // x19
  bool v7; // w20

  this->fields.format = format;
  p_format = &this->fields.format;
  this->fields._MainCount_k__BackingField = count;
  v7 = isFixedWidth;
  this->fields.animTime = animTime;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.format, (int32_t)format, (int32_t)format, isFixedWidth);
  *((_BYTE *)p_format + 16) = v7;
}


int32_t __fastcall UICounterLabel__get_AddCount(UICounterLabel_o *this, const MethodInfo *method)
{
  return this->fields._AddCount_k__BackingField;
}


bool __fastcall UICounterLabel__get_IsAnimFinished(UICounterLabel_o *this, const MethodInfo *method)
{
  return this->fields._AddCount_k__BackingField == 0;
}


int32_t __fastcall UICounterLabel__get_MainCount(UICounterLabel_o *this, const MethodInfo *method)
{
  return this->fields._MainCount_k__BackingField;
}


void __fastcall UICounterLabel__set_AddCount(UICounterLabel_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AddCount_k__BackingField = value;
}


void __fastcall UICounterLabel__set_MainCount(UICounterLabel_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MainCount_k__BackingField = value;
}


void __fastcall UICounterLabel__ExecAnimation_d__16___ctor(
        UICounterLabel__ExecAnimation_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall UICounterLabel__ExecAnimation_d__16__MoveNext(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  UICounterLabel__ExecAnimation_d__16_o *v2; // x19
  int32_t _1__state; // w8
  UICounterLabel_o *_4__this; // x20
  int AddCount_k__BackingField; // w23
  int v6; // w22
  int32_t i_5__3; // w8
  const MethodInfo *v8; // x2
  float v9; // s0
  int32_t MainCount_k__BackingField; // w8
  int v11; // w10
  float v12; // s0
  int v13; // w9
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  bool result; // w0
  int32_t v18; // w19

  v2 = this;
  if ( (byte_4A1F097 & 1) == 0 )
  {
    this = (UICounterLabel__ExecAnimation_d__16_o *)sub_1B715CC(&UnityEngine_Application_TypeInfo, method);
    byte_4A1F097 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v2->fields._i_5__3;
    v2->fields.__1__state = -1;
    v6 = i_5__3 + 1;
    v2->fields._i_5__3 = i_5__3 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_22:
      sub_1B71828(this, method);
    AddCount_k__BackingField = _4__this->fields._AddCount_k__BackingField;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    v6 = 0;
    v2->fields._add_5__2 = (float)AddCount_k__BackingField
                         / (float)(_4__this->fields.animTime * (float)UnityEngine_Application__get_targetFrameRate(0LL));
    v2->fields._i_5__3 = 0;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  this = (UICounterLabel__ExecAnimation_d__16_o *)UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
    goto LABEL_22;
  v9 = _4__this->fields.animTime * (float)(int)this;
  MainCount_k__BackingField = _4__this->fields._MainCount_k__BackingField;
  v11 = (int)v9;
  if ( v9 == INFINITY )
    v11 = 0x80000000;
  if ( v6 >= v11 )
  {
    v18 = _4__this->fields._AddCount_k__BackingField + MainCount_k__BackingField;
    UICounterLabel__SetCountLabel(_4__this, v18, v8);
    result = 0;
    _4__this->fields._MainCount_k__BackingField = v18;
    _4__this->fields._AddCount_k__BackingField = 0;
  }
  else
  {
    v12 = v2->fields._add_5__2 * (float)v2->fields._i_5__3;
    if ( v12 == INFINITY )
      v13 = 0x80000000;
    else
      v13 = (int)v12;
    UICounterLabel__SetCountLabel(_4__this, v13 + MainCount_k__BackingField, v8);
    v2->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
    sub_1B71570(p__2__current, 0, v15, v16);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  }
  return result;
}


Il2CppObject *__fastcall UICounterLabel__ExecAnimation_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn UICounterLabel__ExecAnimation_d__16__System_Collections_IEnumerator_Reset(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_UICounterLabel__ExecAnimation_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall UICounterLabel__ExecAnimation_d__16__System_Collections_IEnumerator_get_Current(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall UICounterLabel__ExecAnimation_d__16__System_IDisposable_Dispose(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  ;
}