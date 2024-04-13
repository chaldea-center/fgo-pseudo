void __fastcall UICounterLabel___ctor(UICounterLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall UICounterLabel__ExecAnimation(
        UICounterLabel_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EFDFF & 1) == 0 )
  {
    sub_B5D5C4(&UICounterLabel__ExecAnimation_d__16_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EFDFF = 1;
  }
  v5 = sub_B5D694(UICounterLabel__ExecAnimation_d__16_TypeInfo);
  UICounterLabel__ExecAnimation_d__16___ctor((UICounterLabel__ExecAnimation_d__16_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall UICounterLabel__PlayAnimation(UICounterLabel_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields._AddCount_k__BackingField )
  {
    v3 = UICounterLabel__ExecAnimation(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICounterLabel__SetCountLabel(UICounterLabel_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v3; // x3
  UICounterLabel_o *v5; // x19
  UILabel_o *countLabel; // x21
  int32_t mWidth; // w20
  System_String_o *v8; // x0
  System_String_o *format; // x23
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  v12 = count;
  if ( (byte_42EFE00 & 1) == 0 )
  {
    this = (UICounterLabel_o *)sub_B5D5C4(&int_TypeInfo, count, (_DWORD)method, v3);
    byte_42EFE00 = 1;
  }
  countLabel = v5->fields.countLabel;
  if ( !countLabel )
    goto LABEL_11;
  mWidth = countLabel->fields.mWidth;
  if ( System_String__IsNullOrEmpty(v5->fields.format, 0LL) )
  {
    v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  }
  else
  {
    format = v5->fields.format;
    v11 = count;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v8 = System_String__Format(format, v10, 0LL);
  }
  UILabel__set_text(countLabel, v8, 0LL);
  if ( v5->fields.isFixedWidth )
  {
    this = (UICounterLabel_o *)v5->fields.countLabel;
    if ( this )
    {
      UILabel__SetCondensedScale((UILabel_o *)this, mWidth, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&count);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  UICounterLabel__ExecAnimation_d__16_o *v4; // x19
  int32_t _1__state; // w8
  UICounterLabel_o *_4__this; // x20
  int AddCount_k__BackingField; // s8
  int v8; // w21
  int32_t i_5__3; // w8
  float v10; // s1
  double v11; // d2
  bool v12; // zf
  double v13; // d1
  int32_t MainCount_k__BackingField; // w8
  float v15; // s1
  double v16; // d0
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool result; // w0
  int32_t v25; // w19
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E6FB4 & 1) == 0 )
  {
    this = (UICounterLabel__ExecAnimation_d__16_o *)sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6FB4 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v4->fields._i_5__3;
    v4->fields.__1__state = -1;
    v8 = i_5__3 + 1;
    v4->fields._i_5__3 = i_5__3 + 1;
    this = (UICounterLabel__ExecAnimation_d__16_o *)UnityEngine_Application__get_targetFrameRate(0LL);
    if ( _4__this )
      goto LABEL_8;
LABEL_17:
    sub_B5D69C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  AddCount_k__BackingField = _4__this->fields._AddCount_k__BackingField;
  v4->fields._add_5__2 = (float)AddCount_k__BackingField
                       / (float)(_4__this->fields.animTime * (float)UnityEngine_Application__get_targetFrameRate(0LL));
  v4->fields._i_5__3 = 0;
  LODWORD(this) = UnityEngine_Application__get_targetFrameRate(0LL);
  v8 = 0;
LABEL_8:
  v10 = _4__this->fields.animTime * (float)(int)this;
  v11 = v10;
  v12 = v10 == INFINITY;
  v13 = -v10;
  MainCount_k__BackingField = _4__this->fields._MainCount_k__BackingField;
  if ( !v12 )
    v13 = v11;
  if ( v8 >= (int)v13 )
  {
    v25 = _4__this->fields._AddCount_k__BackingField + MainCount_k__BackingField;
    UICounterLabel__SetCountLabel(_4__this, v25, 0LL);
    result = 0;
    _4__this->fields._MainCount_k__BackingField = v25;
    _4__this->fields._AddCount_k__BackingField = 0;
  }
  else
  {
    v15 = v4->fields._add_5__2 * (float)v4->fields._i_5__3;
    if ( v15 == INFINITY )
      v16 = -INFINITY;
    else
      v16 = v15;
    UICounterLabel__SetCountLabel(_4__this, MainCount_k__BackingField + (int)v16, 0LL);
    v26 = 0;
    v17 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v4->fields.__2__current = (Il2CppObject *)v17;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v17, v18, v19, v20, v21, v22, v23);
    result = 1;
    v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_UICounterLabel__ExecAnimation_d__16_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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