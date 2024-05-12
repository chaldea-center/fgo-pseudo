void __fastcall AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !clip )
    sub_B7769C(v5, v6);
  this->fields.name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
  sub_B77560(&this->fields);
  this->fields.data = clip;
  sub_B77560(&this->fields.data);
}


void __fastcall AudioData___ctor_20810460(
        AudioData_o *this,
        System_String_o *name,
        UnityEngine_AudioClip_o *clip,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_B77560(&this->fields);
  this->fields.data = clip;
  sub_B77560(&this->fields.data);
}


void __fastcall AudioData___ctor_20810540(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  UnityEngine_AudioClip_o *v7; // x0
  __int64 v8; // x1
  struct UnityEngine_AudioClip_o **p_data; // x20

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_B77560(&this->fields);
  if ( !buf
    || (this->fields.data = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0, 0LL),
        p_data = &this->fields.data,
        sub_B77560(p_data),
        (v7 = *p_data) == 0LL) )
  {
    sub_B7769C(v7, v8);
  }
  UnityEngine_AudioClip__SetData_17006528(v7, buf, 0, 0LL);
}


bool __fastcall AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_B7769C(0LL, name);
  return System_String__Equals_44889276(v3, name, 0LL);
}


UnityEngine_AudioClip_o *__fastcall AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *__fastcall AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}