void AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !clip )
    sub_1C942F0(v5, v6);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0);
  this->fields.name = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)name, v8, v9, v10, v11, v12, v13);
  this->fields.data = clip;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)clip, v14, v15, v16, v17, v18, v19);
}


void AudioData___ctor_41408152(
        AudioData_o *this,
        System_String_o *name,
        UnityEngine_AudioClip_o *clip,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)name, v7, v8, v9, v10, v11, v12);
  this->fields.data = clip;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)clip, v13, v14, v15, v16, v17, v18);
}


void AudioData___ctor_41408220(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_AudioClip_o *v13; // x0
  __int64 v14; // x1
  struct UnityEngine_AudioClip_o *v15; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)name, v7, v8, v9, v10, v11, v12);
  if ( !buf
    || (v15 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0),
        this->fields.data = v15,
        p_data = &this->fields.data,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p_data, (int32_t)v15, v17, v18, v19, v20, v21, v22),
        (v13 = *p_data) == 0) )
  {
    sub_1C942F0(v13, v14);
  }
  UnityEngine_AudioClip__SetData_71884424(v13, buf, 0, 0);
}


bool AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_1C942F0(0, name);
  return System_String__Equals_64453064(v3, name, 0);
}


UnityEngine_AudioClip_o *AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}