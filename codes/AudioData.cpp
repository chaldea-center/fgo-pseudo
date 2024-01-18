void __fastcall AudioData___ctor(AudioData_o *this, UnityEngine_AudioClip_o *clip, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !clip )
    sub_B2C434(v5, v6);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)clip, 0LL);
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v8, v9, v10, v11, v12, v13);
  this->fields.data = clip;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)clip,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall AudioData___ctor_28497584(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.data = clip;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)clip,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall AudioData___ctor_28497664(
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
  __int64 v14; // x1
  struct UnityEngine_AudioClip_o *v15; // x0
  struct UnityEngine_AudioClip_o **p_data; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  if ( !buf
    || (v15 = UnityEngine_AudioClip__Create(name, buf->max_length, 1, 44100, 0, 0, 0LL),
        this->fields.data = v15,
        p_data = &this->fields.data,
        sub_B2C2F8((BattleServantConfConponent_o *)p_data, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22),
        (v13 = *p_data) == 0LL) )
  {
    sub_B2C434(v13, v14);
  }
  UnityEngine_AudioClip__SetData_16682052(v13, buf, 0, 0LL);
}


bool __fastcall AudioData__IsSame(AudioData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_B2C434(0LL, name);
  return System_String__Equals_44292872(v3, name, 0LL);
}


UnityEngine_AudioClip_o *__fastcall AudioData__get_Data(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *__fastcall AudioData__get_Name(AudioData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}