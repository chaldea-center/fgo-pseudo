void __fastcall AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_String_o *name; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !clip )
    sub_1B64324(v5);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)name, v7, v8);
  this->fields.data = clip;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)clip, v9, v10);
}


void __fastcall AudioData___ctor_37588960(
        AudioData_o *this,
        System_String_o *name,
        UnityEngine_AudioClip_o *clip,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)name, v7, v8);
  this->fields.data = clip;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)clip, v9, v10);
}


void __fastcall AudioData___ctor_37589028(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_AudioClip_o *v9; // x0
  struct UnityEngine_AudioClip_o *v10; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)name, v7, v8);
  if ( !buf
    || (v10 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0LL),
        this->fields.data = v10,
        p_data = &this->fields.data,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_data, (int32_t)v10, v12, v13),
        (v9 = *p_data) == 0LL) )
  {
    sub_1B64324(v9);
  }
  UnityEngine_AudioClip__SetData_68902788(v9, buf, 0, 0LL);
}


bool __fastcall AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_1B64324(0LL);
  return System_String__Equals_61383712(v3, name, 0LL);
}


UnityEngine_AudioClip_o *__fastcall AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *__fastcall AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}