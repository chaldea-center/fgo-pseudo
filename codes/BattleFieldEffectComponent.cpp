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
    sub_1BDBAD4(this, method);
  return ambientlist->max_length;
}


System_String_array *__fastcall BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  BattleFieldEffectComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  __int64 v4; // x2
  System_String_array *v5; // x20
  il2cpp_array_size_t v6; // w21
  struct UnityEngine_GameObject_array *v7; // x8
  const MethodInfo *v8; // x3
  BattleFieldEffectComponent_o *v9; // x1
  Il2CppClass **v10; // x0

  v2 = this;
  if ( (byte_4B47328 & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_1BDB878(&string___TypeInfo, method);
    byte_4B47328 = 1;
  }
  fieldeffect = v2->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_13;
  this = (BattleFieldEffectComponent_o *)sub_1BDB920(string___TypeInfo, fieldeffect->max_length);
  if ( !this )
    goto LABEL_13;
  v5 = (System_String_array *)this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = v2->fields.fieldeffect;
      if ( !v7 )
        break;
      if ( v6 >= v7->max_length )
        goto LABEL_14;
      this = (BattleFieldEffectComponent_o *)v7->m_Items[v6];
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      if ( v6 >= v5->max_length )
LABEL_14:
        sub_1BDBADC(this, method, v4);
      v9 = this;
      v10 = &v5->obj.klass + (int)v6;
      v10[4] = (Il2CppClass *)v9;
      sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 4), (int32_t)v9, v4, v8);
      if ( (signed int)++v6 >= (signed int)v5->max_length )
        return v5;
    }
LABEL_13:
    sub_1BDBAD4(this, method);
  }
  return v5;
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
    sub_1BDBAD4(this, index);
  if ( ambientlist->max_length <= index )
    sub_1BDBADC(this, *(_QWORD *)&index, method);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B47329 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4B47329 = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(viewobject, 0LL, 0LL);
  if ( v6 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v9, 0LL);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_1BDBAD4(v6, v7);
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1BDBADC(v6, v7, v8);
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0LL,
                 0LL);
      this->fields.viewobject = Object;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.viewobject, (int32_t)Object, v13, v14);
    }
  }
}