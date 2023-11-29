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
    sub_B170D4();
  return ambientlist->max_length;
}


System_String_array *__fastcall BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  System_String_o *name; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array *v8; // x20
  il2cpp_array_size_t v9; // w22
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x0
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  Il2CppClass **v18; // x0

  if ( (byte_40F8D55 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    byte_40F8D55 = 1;
  }
  fieldeffect = this->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_15;
  name = (System_String_o *)sub_B17014(string___TypeInfo, fieldeffect->max_length, v2);
  if ( !name )
    goto LABEL_15;
  v8 = (System_String_array *)name;
  if ( SLODWORD(name[1].klass) >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = this->fields.fieldeffect;
      if ( !v10 )
        break;
      if ( v9 >= v10->max_length )
        goto LABEL_16;
      v11 = (UnityEngine_Object_o *)v10->m_Items[v9];
      if ( !v11 )
        break;
      name = UnityEngine_Object__get_name(v11, 0LL);
      v17 = (System_Int32_array **)name;
      if ( name )
      {
        name = (System_String_o *)sub_B170BC(name, v8->obj.klass->_1.element_class);
        if ( !name )
        {
          sub_B170F4();
          sub_B170A0();
        }
      }
      if ( v9 >= v8->max_length )
      {
LABEL_16:
        sub_B17100(name, v6, v7);
        sub_B170A0();
      }
      v18 = &v8->obj.klass + (int)v9;
      v18[4] = (Il2CppClass *)v17;
      sub_B16F98((BattleServantConfConponent_o *)(v18 + 4), v17, v7, v12, v13, v14, v15, v16);
      if ( (signed int)++v9 >= (signed int)v8->max_length )
        return v8;
    }
LABEL_15:
    sub_B170D4();
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEffectComponent__setAmbientColor(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_B170D4();
  if ( ambientlist->max_length <= index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
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
  __int64 v7; // x1
  __int64 v8; // x2
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

  if ( (byte_40F8D56 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40F8D56 = 1;
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
    v9 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v9, 0LL);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_B170D4();
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
      {
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0LL,
                 0LL);
      this->fields.viewobject = Object;
      sub_B16F98(
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