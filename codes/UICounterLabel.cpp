void __fastcall UICounterLabel___ctor(UICounterLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall UICounterLabel__ExecAnimation(
        UICounterLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4100E23 & 1) == 0 )
  {
    sub_B16FFC(&UICounterLabel__ExecAnimation_d__16_TypeInfo, method);
    byte_4100E23 = 1;
  }
  v6 = sub_B170CC(UICounterLabel__ExecAnimation_d__16_TypeInfo, method, v2, v3, v4);
  UICounterLabel__ExecAnimation_d__16___ctor((UICounterLabel__ExecAnimation_d__16_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall UICounterLabel__PlayAnimation(UICounterLabel_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields._AddCount_k__BackingField )
  {
    v3 = UICounterLabel__ExecAnimation(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICounterLabel__SetCountLabel(UICounterLabel_o *this, int32_t count, const MethodInfo *method)
{
  struct UILabel_o *countLabel; // x21
  int32_t mWidth; // w20
  System_String_o *v7; // x0
  System_String_o *format; // x23
  Il2CppObject *v9; // x0
  UILabel_o *v10; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = count;
  if ( (byte_4100E24 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&count);
    byte_4100E24 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    goto LABEL_11;
  mWidth = countLabel->fields.mWidth;
  if ( System_String__IsNullOrEmpty(this->fields.format, 0LL) )
  {
    v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  }
  else
  {
    format = this->fields.format;
    v11 = count;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v7 = System_String__Format(format, v9, 0LL);
  }
  UILabel__set_text(countLabel, v7, 0LL);
  if ( this->fields.isFixedWidth )
  {
    v10 = this->fields.countLabel;
    if ( v10 )
    {
      UILabel__SetCondensedScale(v10, mWidth, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICounterLabel__Setup(
        UICounterLabel_o *this,
        int32_t count,
        float animTime,
        System_String_o *format,
        bool isFixedWidth,
        const MethodInfo *method)
{
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_String_o **p_format; // x20

  this->fields.format = format;
  p_format = &this->fields.format;
  this->fields._MainCount_k__BackingField = count;
  this->fields.animTime = animTime;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.format,
    (System_Int32_array **)format,
    (System_String_array **)format,
    (System_String_array **)isFixedWidth,
    (System_Boolean_array **)method,
    v6,
    v7,
    v8);
  *((_BYTE *)p_format + 16) = isFixedWidth;
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
  int32_t _1__state; // w8
  struct UICounterLabel_o *_4__this; // x20
  int AddCount_k__BackingField; // s8
  int32_t targetFrameRate; // w0
  int v7; // w21
  int32_t i_5__3; // w8
  float v9; // s1
  double v10; // d2
  bool v11; // zf
  double v12; // d1
  int32_t MainCount_k__BackingField; // w8
  float v14; // s1
  double v15; // d0
  Il2CppObject *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool result; // w0
  int32_t v24; // w19
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F793D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    byte_40F793D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = this->fields._i_5__3;
    this->fields.__1__state = -1;
    v7 = i_5__3 + 1;
    this->fields._i_5__3 = i_5__3 + 1;
    targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
    if ( _4__this )
      goto LABEL_8;
LABEL_17:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  AddCount_k__BackingField = _4__this->fields._AddCount_k__BackingField;
  this->fields._add_5__2 = (float)AddCount_k__BackingField
                         / (float)(_4__this->fields.animTime * (float)UnityEngine_Application__get_targetFrameRate(0LL));
  this->fields._i_5__3 = 0;
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  v7 = 0;
LABEL_8:
  v9 = _4__this->fields.animTime * (float)targetFrameRate;
  v10 = v9;
  v11 = v9 == INFINITY;
  v12 = -v9;
  MainCount_k__BackingField = _4__this->fields._MainCount_k__BackingField;
  if ( !v11 )
    v12 = v10;
  if ( v7 >= (int)v12 )
  {
    v24 = _4__this->fields._AddCount_k__BackingField + MainCount_k__BackingField;
    UICounterLabel__SetCountLabel(_4__this, v24, 0LL);
    result = 0;
    _4__this->fields._MainCount_k__BackingField = v24;
    _4__this->fields._AddCount_k__BackingField = 0;
  }
  else
  {
    v14 = this->fields._add_5__2 * (float)this->fields._i_5__3;
    if ( v14 == INFINITY )
      v15 = -INFINITY;
    else
      v15 = v14;
    UICounterLabel__SetCountLabel(_4__this, MainCount_k__BackingField + (int)v15, 0LL);
    v25 = 0;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    this->fields.__2__current = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    result = 1;
    this->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_UICounterLabel__ExecAnimation_d__16_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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