void UIPlaySound___ctor(UIPlaySound_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.volume = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlaySound__OnClick(UIPlaySound_o *this, const MethodInfo *method)
{
  UnityEngine_AudioClip_o *audioClip; // x20
  float pitch; // s8
  float volume; // s9

  if ( (byte_4C5B3DB & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B3DB = 1;
  }
  if ( UIPlaySound__get_canPlay(this, method) && !this->fields.trigger )
  {
    audioClip = this->fields.audioClip;
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__PlaySound_49416484(audioClip, volume, pitch, 0);
  }
}


void UIPlaySound__OnDisable(UIPlaySound_o *this, const MethodInfo *method)
{
  UnityEngine_AudioClip_o *audioClip; // x20
  float pitch; // s8
  float volume; // s9

  if ( (byte_4C5B3D8 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B3D8 = 1;
  }
  if ( this->fields.trigger == 7 )
  {
    audioClip = this->fields.audioClip;
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__PlaySound_49416484(audioClip, volume, pitch, 0);
  }
}


void UIPlaySound__OnEnable(UIPlaySound_o *this, const MethodInfo *method)
{
  UnityEngine_AudioClip_o *audioClip; // x20
  float pitch; // s8
  float volume; // s9

  if ( (byte_4C5B3D7 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B3D7 = 1;
  }
  if ( this->fields.trigger == 6 )
  {
    audioClip = this->fields.audioClip;
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__PlaySound_49416484(audioClip, volume, pitch, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlaySound__OnHover(UIPlaySound_o *this, bool isOver, const MethodInfo *method)
{
  int32_t trigger; // w8
  UnityEngine_AudioClip_o *audioClip; // x20
  float pitch; // s8
  float volume; // s9

  if ( (byte_4C5B3D9 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B3D9 = 1;
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
    audioClip = this->fields.audioClip;
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__PlaySound_49416484(audioClip, volume, pitch, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlaySound__OnPress(UIPlaySound_o *this, bool isPressed, const MethodInfo *method)
{
  int32_t trigger; // w8
  UnityEngine_AudioClip_o *audioClip; // x20
  float pitch; // s8
  float volume; // s9

  if ( (byte_4C5B3DA & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B3DA = 1;
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
    audioClip = this->fields.audioClip;
    volume = this->fields.volume;
    pitch = this->fields.pitch;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__PlaySound_49416484(audioClip, volume, pitch, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlaySound__OnSelect(UIPlaySound_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_4C5B3DC & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B3DC = 1;
  }
  if ( UIPlaySound__get_canPlay(this, (const MethodInfo *)isSelected) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
LABEL_8:
      UIPlaySound__OnHover(this, isSelected, v5);
  }
}


void UIPlaySound__Play(UIPlaySound_o *this, const MethodInfo *method)
{
  UnityEngine_AudioClip_o *audioClip; // x20
  float pitch; // s8
  float volume; // s9

  if ( (byte_4C5B3DD & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B3DD = 1;
  }
  audioClip = this->fields.audioClip;
  volume = this->fields.volume;
  pitch = this->fields.pitch;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__PlaySound_49416484(audioClip, volume, pitch, 0);
}


bool UIPlaySound__get_canPlay(UIPlaySound_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C5B3D6 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B3D6 = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
    return 1;
  if ( !Component_object )
    sub_1C3E7C0(v4, v5);
  return ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[4].methodPtr)(
           Component_object,
           Component_object->klass->vtable[4].method);
}