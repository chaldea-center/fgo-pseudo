void AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !clip )
    sub_1C2D6EC(v5, v6);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
  this->fields.name = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v8, v9);
  this->fields.data = clip;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.data, (int32_t)clip, v10, v11);
}


void AudioData___ctor_40435596(
        AudioData_o *this,
        System_String_o *name,
        UnityEngine_AudioClip_o *clip,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v7, v8);
  this->fields.data = clip;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.data, (int32_t)clip, v9, v10);
}


void AudioData___ctor_40435664(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_AudioClip_o *v9; // x0
  __int64 v10; // x1
  struct UnityEngine_AudioClip_o *v11; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v7, v8);
  if ( !buf
    || (v11 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0),
        this->fields.data = v11,
        p_data = &this->fields.data,
        sub_1C2D434((CGThumbnailListItem_o *)p_data, (int32_t)v11, v13, v14),
        (v9 = *p_data) == 0) )
  {
    sub_1C2D6EC(v9, v10);
  }
  UnityEngine_AudioClip__SetData_70938948(v9, buf, 0, 0);
}


bool AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_1C2D6EC(0, name);
  return System_String__Equals_63493168(v3, name, 0);
}


UnityEngine_AudioClip_o *AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}