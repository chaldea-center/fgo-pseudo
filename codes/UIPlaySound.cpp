void UIPlaySound___ctor(UIPlaySound_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.volume = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlaySound__OnClick(UIPlaySound_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float volume; // s8
  float pitch; // s9
  UnityEngine_AudioClip_o *audioClip; // x20

  if ( (byte_593CD49 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD49 = 1;
  }
  if ( UIPlaySound__get_canPlay(this, method) && !this->fields.trigger )
  {
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    audioClip = this->fields.audioClip;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    NGUITools__PlaySound_56204512(audioClip, volume, pitch, 0);
  }
}


void UIPlaySound__OnDisable(UIPlaySound_o *this, const MethodInfo *method)
{
  float volume; // s8
  float pitch; // s9
  UnityEngine_AudioClip_o *audioClip; // x20

  if ( (byte_593CD46 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD46 = 1;
  }
  if ( this->fields.trigger == 7 )
  {
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    audioClip = this->fields.audioClip;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
    NGUITools__PlaySound_56204512(audioClip, volume, pitch, 0);
  }
}


void UIPlaySound__OnEnable(UIPlaySound_o *this, const MethodInfo *method)
{
  float volume; // s8
  float pitch; // s9
  UnityEngine_AudioClip_o *audioClip; // x20

  if ( (byte_593CD45 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD45 = 1;
  }
  if ( this->fields.trigger == 6 )
  {
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    audioClip = this->fields.audioClip;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
    NGUITools__PlaySound_56204512(audioClip, volume, pitch, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlaySound__OnHover(UIPlaySound_o *this, bool isOver, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t trigger; // w8
  float volume; // s8
  float pitch; // s9
  UnityEngine_AudioClip_o *audioClip; // x20

  if ( (byte_593CD47 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD47 = 1;
  }
  if ( this->fields.trigger == 1 )
  {
    if ( this->fields.mIsOver == isOver )
      return;
    this->fields.mIsOver = isOver;
  }
  if ( UIPlaySound__get_canPlay(this, (const MethodInfo *)isOver) )
  {
    trigger = this->fields.trigger;
    if ( isOver )
    {
      if ( trigger != 1 )
        return;
    }
    else if ( trigger != 2 )
    {
      return;
    }
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    audioClip = this->fields.audioClip;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    NGUITools__PlaySound_56204512(audioClip, volume, pitch, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlaySound__OnPress(UIPlaySound_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t trigger; // w8
  float volume; // s8
  float pitch; // s9
  UnityEngine_AudioClip_o *audioClip; // x20

  if ( (byte_593CD48 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD48 = 1;
  }
  if ( this->fields.trigger == 3 )
  {
    if ( this->fields.mIsOver == isPressed )
      return;
    this->fields.mIsOver = isPressed;
  }
  if ( UIPlaySound__get_canPlay(this, (const MethodInfo *)isPressed) )
  {
    trigger = this->fields.trigger;
    if ( isPressed )
    {
      if ( trigger != 3 )
        return;
    }
    else if ( trigger != 4 )
    {
      return;
    }
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    audioClip = this->fields.audioClip;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    NGUITools__PlaySound_56204512(audioClip, volume, pitch, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlaySound__OnSelect(UIPlaySound_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_593CD4A & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CD4A = 1;
  }
  if ( UIPlaySound__get_canPlay(this, (const MethodInfo *)isSelected) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentScheme == 2 )
LABEL_8:
      UIPlaySound__OnHover(this, isSelected, v6);
  }
}


void UIPlaySound__Play(UIPlaySound_o *this, const MethodInfo *method)
{
  float volume; // s8
  float pitch; // s9
  UnityEngine_AudioClip_o *audioClip; // x20

  if ( (byte_593CD4B & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD4B = 1;
  }
  volume = this->fields.volume;
  pitch = this->fields.pitch;
  audioClip = this->fields.audioClip;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  NGUITools__PlaySound_56204512(audioClip, volume, pitch, 0);
}


bool UIPlaySound__get_canPlay(UIPlaySound_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593CD44 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD44 = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
    return 1;
  if ( !Component_object )
    sub_21FFECC(v5, v6);
  return ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[4].methodPtr)(
           Component_object,
           Component_object->klass->vtable[4].method);
}