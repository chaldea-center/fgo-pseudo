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
    sub_B0D97C(this);
  return ambientlist->max_length;
}


System_String_array *__fastcall BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  BattleFieldEffectComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  System_String_array *v4; // x20
  il2cpp_array_size_t v5; // w22
  struct UnityEngine_GameObject_array *v6; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x21
  Il2CppClass **v14; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  v2 = this;
  if ( (byte_4213550 & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_B0D8A4(&string___TypeInfo, method);
    byte_4213550 = 1;
  }
  fieldeffect = v2->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_15;
  this = (BattleFieldEffectComponent_o *)sub_B0D8BC(string___TypeInfo, fieldeffect->max_length);
  if ( !this )
    goto LABEL_15;
  v4 = (System_String_array *)this;
  if ( SLODWORD(this->fields.root2D) >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v2->fields.fieldeffect;
      if ( !v6 )
        break;
      if ( v5 >= v6->max_length )
        goto LABEL_16;
      this = (BattleFieldEffectComponent_o *)v6->m_Items[v5];
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      v13 = (System_Int32_array **)this;
      if ( this )
      {
        this = (BattleFieldEffectComponent_o *)sub_B0D964(this, v4->obj.klass->_1.element_class);
        if ( !this )
        {
          v17 = sub_B0D99C();
          sub_B0D948(v17, 0LL);
        }
      }
      if ( v5 >= v4->max_length )
      {
LABEL_16:
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
      }
      v14 = &v4->obj.klass + (int)v5;
      v14[4] = (Il2CppClass *)v13;
      sub_B0D840((BattleServantConfConponent_o *)(v14 + 4), v13, v7, v8, v9, v10, v11, v12);
      if ( (signed int)++v5 >= (signed int)v4->max_length )
        return v4;
    }
LABEL_15:
    sub_B0D97C(this);
  }
  return v4;
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
    sub_B0D97C(this);
  if ( ambientlist->max_length <= index )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  UnityEngine_RenderSettings__set_ambientLight(*(UnityEngine_Color_o *)&ambientlist->m_Items[index].fields.g, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEffectComponent__setFieldEffect(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewobject; // x22
  _BOOL8 v6; // x0
  UnityEngine_Object_o *v7; // x22
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  int32_t max_length; // w9
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0

  if ( (byte_4213551 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4213551 = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(viewobject, 0LL, 0LL);
  if ( v6 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v7, 0LL);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_B0D97C(v6);
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
      {
        v17 = sub_B0D9A8(v6);
        sub_B0D948(v17, 0LL);
      }
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0LL,
                 0LL);
      this->fields.viewobject = Object;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.viewobject,
        (System_Int32_array **)Object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
  }
}