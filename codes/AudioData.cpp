void AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !clip )
    sub_21FFECC(v5, v6);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
  this->fields.name = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)name, v8, v9, v10, v11, v12, v13);
  this->fields.data = clip;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)clip, v14, v15, v16, v17, v18, v19);
}


void AudioData___ctor_47592564(
        AudioData_o *this,
        System_String_o *name,
        UnityEngine_AudioClip_o *clip,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)name, v7, v8, v9, v10, v11, v12);
  this->fields.data = clip;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)clip, v13, v14, v15, v16, v17, v18);
}


void AudioData___ctor_47592632(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_AudioClip_o *v13; // x0
  __int64 v14; // x1
  struct UnityEngine_AudioClip_o *v15; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)name, v7, v8, v9, v10, v11, v12);
  if ( !buf
    || (v15 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0),
        this->fields.data = v15,
        p_data = &this->fields.data,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_data, (int32_t)v15, v17, v18, v19, v20, v21, v22),
        (v13 = *p_data) == 0) )
  {
    sub_21FFECC(v13, v14);
  }
  UnityEngine_AudioClip__SetData_82918564(v13, buf, 0, 0);
}


bool AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_21FFECC(0, name);
  return System_String__Equals_75473208(v3, name, 0);
}


UnityEngine_AudioClip_o *AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}