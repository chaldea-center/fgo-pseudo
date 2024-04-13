void __fastcall BattleFieldEffectComponent___ctor(BattleFieldEffectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleFieldEffectComponent__getAmbientColors(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_B5D69C(this, method);
  return ambientlist->max_length;
}


System_String_array *__fastcall BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleFieldEffectComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  System_String_array *v6; // x20
  il2cpp_array_size_t v7; // w22
  struct UnityEngine_GameObject_array *v8; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x21
  Il2CppClass **v16; // x0
  __int64 v18; // x0
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E78AB & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E78AB = 1;
  }
  fieldeffect = v4->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_15;
  this = (BattleFieldEffectComponent_o *)sub_B5D5DC(string___TypeInfo, fieldeffect->max_length);
  if ( !this )
    goto LABEL_15;
  v6 = (System_String_array *)this;
  if ( SLODWORD(this->fields.root2D) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v4->fields.fieldeffect;
      if ( !v8 )
        break;
      if ( v7 >= v8->max_length )
        goto LABEL_16;
      this = (BattleFieldEffectComponent_o *)v8->m_Items[v7];
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      v15 = (System_Int32_array **)this;
      if ( this )
      {
        this = (BattleFieldEffectComponent_o *)sub_B5D684(this, v6->obj.klass->_1.element_class);
        if ( !this )
        {
          v19 = sub_B5D6BC();
          sub_B5D668(v19, 0LL);
        }
      }
      if ( v7 >= v6->max_length )
      {
LABEL_16:
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
      }
      v16 = &v6->obj.klass + (int)v7;
      v16[4] = (Il2CppClass *)v15;
      sub_B5D560((BattleServantConfConponent_o *)(v16 + 4), v15, v9, v10, v11, v12, v13, v14);
      if ( (signed int)++v7 >= (signed int)v6->max_length )
        return v6;
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
  return v6;
}


void __fastcall BattleFieldEffectComponent__setAmbientColor(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8
  __int64 v4; // x0

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_B5D69C(this, index);
  if ( ambientlist->max_length <= index )
  {
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  UnityEngine_RenderSettings__set_ambientLight(*(UnityEngine_Color_o *)&ambientlist->m_Items[index].fields.g, 0LL);
}


void __fastcall BattleFieldEffectComponent__setFieldEffect(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *viewobject; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  int32_t max_length; // w9
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x0

  if ( (byte_42E78AC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    byte_42E78AC = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(viewobject, 0LL, 0LL);
  if ( v7 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v9, 0LL);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_B5D69C(v7, v8);
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
      {
        v19 = sub_B5D6C8(v7);
        sub_B5D668(v19, 0LL);
      }
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0LL,
                 0LL);
      this->fields.viewobject = Object;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.viewobject,
        (System_Int32_array **)Object,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
  }
}