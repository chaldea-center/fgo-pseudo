void __fastcall AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_String_o *name; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !clip )
    sub_B0D97C(v5);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
  this->fields.name = name;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.data = clip;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)clip,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall AudioData___ctor_27968264(
        AudioData_o *this,
        System_String_o *name,
        UnityEngine_AudioClip_o *clip,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.data = clip;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)clip,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall AudioData___ctor_27968344(
        AudioData_o *this,
        System_String_o *name,
        System_Single_array *buf,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_AudioClip_o *v13; // x0
  struct UnityEngine_AudioClip_o *v14; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  if ( !buf
    || (v14 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0, 0LL),
        this->fields.data = v14,
        p_data = &this->fields.data,
        sub_B0D840((BattleServantConfConponent_o *)p_data, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21),
        (v13 = *p_data) == 0LL) )
  {
    sub_B0D97C(v13);
  }
  UnityEngine_AudioClip__SetData_16057704(v13, buf, 0, 0LL);
}


bool __fastcall AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_B0D97C(0LL);
  return System_String__Equals_43837244(v3, name, 0LL);
}


UnityEngine_AudioClip_o *__fastcall AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *__fastcall AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}