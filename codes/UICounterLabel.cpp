void __fastcall UICounterLabel___ctor(UICounterLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall UICounterLabel__ExecAnimation(
        UICounterLabel_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418ED38 & 1) == 0 )
  {
    sub_B2C35C(&UICounterLabel__ExecAnimation_d__16_TypeInfo, method);
    byte_418ED38 = 1;
  }
  v3 = sub_B2C42C(UICounterLabel__ExecAnimation_d__16_TypeInfo);
  UICounterLabel__ExecAnimation_d__16___ctor((UICounterLabel__ExecAnimation_d__16_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall UICounterLabel__PlayAnimation(UICounterLabel_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields._AddCount_k__BackingField )
  {
    v3 = UICounterLabel__ExecAnimation(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICounterLabel__SetCountLabel(UICounterLabel_o *this, int32_t count, const MethodInfo *method)
{
  UICounterLabel_o *v4; // x19
  UILabel_o *countLabel; // x21
  int32_t mWidth; // w20
  System_String_o *v7; // x0
  System_String_o *format; // x23
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v11 = count;
  if ( (byte_418ED39 & 1) == 0 )
  {
    this = (UICounterLabel_o *)sub_B2C35C(&int_TypeInfo, *(_QWORD *)&count);
    byte_418ED39 = 1;
  }
  countLabel = v4->fields.countLabel;
  if ( !countLabel )
    goto LABEL_11;
  mWidth = countLabel->fields.mWidth;
  if ( System_String__IsNullOrEmpty(v4->fields.format, 0LL) )
  {
    v7 = System_Int32__ToString((int32_t)&v11, 0LL);
  }
  else
  {
    format = v4->fields.format;
    v10 = count;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    v7 = System_String__Format(format, v9, 0LL);
  }
  UILabel__set_text(countLabel, v7, 0LL);
  if ( v4->fields.isFixedWidth )
  {
    this = (UICounterLabel_o *)v4->fields.countLabel;
    if ( this )
    {
      UILabel__SetCondensedScale((UILabel_o *)this, mWidth, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&count);
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
  sub_B2C2F8(
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
  UICounterLabel__ExecAnimation_d__16_o *v2; // x19
  int32_t _1__state; // w8
  UICounterLabel_o *_4__this; // x20
  int AddCount_k__BackingField; // s8
  int v6; // w21
  int32_t i_5__3; // w8
  float v8; // s1
  double v9; // d2
  bool v10; // zf
  double v11; // d1
  int32_t MainCount_k__BackingField; // w8
  float v13; // s1
  double v14; // d0
  __int64 v15; // x0
  bool result; // w0
  int32_t v17; // w19
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4185372 & 1) == 0 )
  {
    this = (UICounterLabel__ExecAnimation_d__16_o *)sub_B2C35C(&int_TypeInfo, method);
    byte_4185372 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v2->fields._i_5__3;
    v2->fields.__1__state = -1;
    v6 = i_5__3 + 1;
    v2->fields._i_5__3 = i_5__3 + 1;
    this = (UICounterLabel__ExecAnimation_d__16_o *)UnityEngine_Application__get_targetFrameRate(0LL);
    if ( _4__this )
      goto LABEL_8;
LABEL_17:
    sub_B2C434(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  AddCount_k__BackingField = _4__this->fields._AddCount_k__BackingField;
  v2->fields._add_5__2 = (float)AddCount_k__BackingField
                       / (float)(_4__this->fields.animTime * (float)UnityEngine_Application__get_targetFrameRate(0LL));
  v2->fields._i_5__3 = 0;
  LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
  v6 = 0;
LABEL_8:
  v8 = _4__this->fields.animTime * (float)(int)this;
  v9 = v8;
  v10 = v8 == INFINITY;
  v11 = -v8;
  MainCount_k__BackingField = _4__this->fields._MainCount_k__BackingField;
  if ( !v10 )
    v11 = v9;
  if ( v6 >= (int)v11 )
  {
    v17 = _4__this->fields._AddCount_k__BackingField + MainCount_k__BackingField;
    UICounterLabel__SetCountLabel(_4__this, v17, 0LL);
    result = 0;
    _4__this->fields._MainCount_k__BackingField = v17;
    _4__this->fields._AddCount_k__BackingField = 0;
  }
  else
  {
    v13 = v2->fields._add_5__2 * (float)v2->fields._i_5__3;
    if ( v13 == INFINITY )
      v14 = -INFINITY;
    else
      v14 = v13;
    UICounterLabel__SetCountLabel(_4__this, MainCount_k__BackingField + (int)v14, 0LL);
    v18 = 0;
    v15 = j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v2->fields.__2__current = (Il2CppObject *)v15;
    sub_B2C2F8(&v2->fields.__2__current, v15);
    result = 1;
    v2->fields.__1__state = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_UICounterLabel__ExecAnimation_d__16_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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