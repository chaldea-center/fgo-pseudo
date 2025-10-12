void AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_String_o *name; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !clip )
    sub_1C32E7C(v5);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
  this->fields.name = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v7, v8);
  this->fields.data = clip;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.data, (int32_t)clip, v9, v10);
}


void AudioData___ctor_40557824(
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v7, v8);
  this->fields.data = clip;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.data, (int32_t)clip, v9, v10);
}


void AudioData___ctor_40557892(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_AudioClip_o *v9; // x0
  struct UnityEngine_AudioClip_o *v10; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v7, v8);
  if ( !buf
    || (v10 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0),
        this->fields.data = v10,
        p_data = &this->fields.data,
        sub_1C32BC4((CGThumbnailListItem_o *)p_data, (int32_t)v10, v12, v13),
        (v9 = *p_data) == 0) )
  {
    sub_1C32E7C(v9);
  }
  UnityEngine_AudioClip__SetData_70998884(v9, buf, 0, 0);
}


bool AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_1C32E7C(0);
  return System_String__Equals_63553848(v3, name, 0);
}


UnityEngine_AudioClip_o *AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}