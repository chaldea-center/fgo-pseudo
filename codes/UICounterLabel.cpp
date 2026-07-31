void UICounterLabel___ctor(UICounterLabel_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *UICounterLabel__ExecAnimation(UICounterLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937C08 & 1) == 0 )
  {
    sub_21FFC50(&UICounterLabel__ExecAnimation_d__16_TypeInfo);
    byte_5937C08 = 1;
  }
  v3 = sub_21FFEBC(UICounterLabel__ExecAnimation_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void UICounterLabel__PlayAnimation(UICounterLabel_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  if ( this->fields._AddCount_k__BackingField )
  {
    v3 = UICounterLabel__ExecAnimation(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICounterLabel__SetCountLabel(UICounterLabel_o *this, int32_t count, const MethodInfo *method)
{
  struct UILabel_o *countLabel; // x21
  UICounterLabel_o *v4; // x20
  int32_t mWidth; // w19
  System_String_o *v7; // x0
  System_String_o *format; // x23
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  countLabel = this->fields.countLabel;
  v11 = count;
  if ( !countLabel )
    goto LABEL_9;
  v4 = this;
  mWidth = countLabel->fields.mWidth;
  if ( System_String__IsNullOrEmpty(this->fields.format, 0) )
  {
    v7 = System_Int32__ToString((int32_t)&v11, 0);
  }
  else
  {
    format = v4->fields.format;
    v10 = count;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
    v7 = System_String__Format(format, v9, 0);
  }
  UILabel__set_text(countLabel, v7, 0);
  if ( v4->fields.isFixedWidth )
  {
    this = (UICounterLabel_o *)v4->fields.countLabel;
    if ( this )
    {
      UILabel__SetCondensedScale((UILabel_o *)this, mWidth, 0, 0);
      return;
    }
LABEL_9:
    sub_21FFECC(this, *(_QWORD *)&count);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICounterLabel__Setup(
        UICounterLabel_o *this,
        int32_t count,
        float animTime,
        System_String_o *format,
        bool isFixedWidth,
        const MethodInfo *method)
{
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_String_o **p_format; // x20

  this->fields.format = format;
  p_format = &this->fields.format;
  this->fields._MainCount_k__BackingField = count;
  this->fields.animTime = animTime;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.format,
    (int32_t)format,
    format,
    (System_String_o *)isFixedWidth,
    (int32_t)method,
    v6,
    v7,
    v8);
  *((_BYTE *)p_format + 16) = isFixedWidth;
}


int32_t UICounterLabel__get_AddCount(UICounterLabel_o *this, const MethodInfo *method)
{
  return this->fields._AddCount_k__BackingField;
}


bool UICounterLabel__get_IsAnimFinished(UICounterLabel_o *this, const MethodInfo *method)
{
  return this->fields._AddCount_k__BackingField == 0;
}


int32_t UICounterLabel__get_MainCount(UICounterLabel_o *this, const MethodInfo *method)
{
  return this->fields._MainCount_k__BackingField;
}


void UICounterLabel__set_AddCount(UICounterLabel_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AddCount_k__BackingField = value;
}


void UICounterLabel__set_MainCount(UICounterLabel_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MainCount_k__BackingField = value;
}


void UICounterLabel__ExecAnimation_d__16___ctor(
        UICounterLabel__ExecAnimation_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UICounterLabel__ExecAnimation_d__16__MoveNext(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  UICounterLabel__ExecAnimation_d__16_o *v2; // x19
  int32_t _1__state; // w8
  UICounterLabel_o *_4__this; // x20
  int AddCount_k__BackingField; // w23
  int32_t targetFrameRate; // w0
  float animTime; // s1
  int v8; // w22
  int32_t i_5__3; // w8
  const MethodInfo *v10; // x2
  float v11; // s0
  int32_t MainCount_k__BackingField; // w8
  float v13; // s0
  int v14; // w9
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  bool result; // w0
  int32_t v23; // w19

  v2 = this;
  if ( (byte_5937C09 & 1) == 0 )
  {
    this = (UICounterLabel__ExecAnimation_d__16_o *)sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_5937C09 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = v2->fields._i_5__3;
    v2->fields.__1__state = -1;
    v8 = i_5__3 + 1;
    v2->fields._i_5__3 = i_5__3 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_21:
      sub_21FFECC(this, method);
    AddCount_k__BackingField = _4__this->fields._AddCount_k__BackingField;
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
    targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
    animTime = _4__this->fields.animTime;
    v8 = 0;
    v2->fields._i_5__3 = 0;
    v2->fields._add_5__2 = (float)AddCount_k__BackingField / (float)(animTime * (float)targetFrameRate);
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  this = (UICounterLabel__ExecAnimation_d__16_o *)UnityEngine_Application__get_targetFrameRate(0);
  if ( !_4__this )
    goto LABEL_21;
  v11 = _4__this->fields.animTime * (float)(int)this;
  MainCount_k__BackingField = _4__this->fields._MainCount_k__BackingField;
  if ( v11 == INFINITY || v8 >= (int)v11 )
  {
    v23 = _4__this->fields._AddCount_k__BackingField + MainCount_k__BackingField;
    UICounterLabel__SetCountLabel(_4__this, v23, v10);
    result = 0;
    _4__this->fields._MainCount_k__BackingField = v23;
    _4__this->fields._AddCount_k__BackingField = 0;
  }
  else
  {
    v13 = v2->fields._add_5__2 * (float)v2->fields._i_5__3;
    if ( v13 == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)v13;
    UICounterLabel__SetCountLabel(_4__this, v14 + MainCount_k__BackingField, v10);
    v2->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_21FFBF4(p__2__current, 0, v16, v17, v18, v19, v20, v21);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return result;
}


Il2CppObject *UICounterLabel__ExecAnimation_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UICounterLabel__ExecAnimation_d__16__System_Collections_IEnumerator_Reset(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_UICounterLabel__ExecAnimation_d__16_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *UICounterLabel__ExecAnimation_d__16__System_Collections_IEnumerator_get_Current(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UICounterLabel__ExecAnimation_d__16__System_IDisposable_Dispose(
        UICounterLabel__ExecAnimation_d__16_o *this,
        const MethodInfo *method)
{
  ;
}