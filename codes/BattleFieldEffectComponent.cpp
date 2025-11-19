void BattleFieldEffectComponent___ctor(BattleFieldEffectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t BattleFieldEffectComponent__getAmbientColors(BattleFieldEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_1C6BC60(this, method);
  return ambientlist->max_length;
}


System_String_array *BattleFieldEffectComponent__getFieldEffects(
        BattleFieldEffectComponent_o *this,
        const MethodInfo *method)
{
  BattleFieldEffectComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  BattleFieldEffectComponent_o *v4; // x20
  unsigned int v5; // w21
  struct UnityEngine_GameObject_array *v6; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleFieldEffectComponent_o *v9; // x1
  BattleFieldEffectComponent_c **v10; // x0

  v2 = this;
  if ( (byte_4CB8DFA & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_1C6BA08(&string___TypeInfo);
    byte_4CB8DFA = 1;
  }
  fieldeffect = v2->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_13;
  this = (BattleFieldEffectComponent_o *)sub_1C6BAB0(string___TypeInfo, LODWORD(fieldeffect->max_length));
  if ( !this )
    goto LABEL_13;
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v2->fields.fieldeffect;
      if ( !v6 )
        break;
      if ( v5 >= LODWORD(v6->max_length) )
        goto LABEL_14;
      this = (BattleFieldEffectComponent_o *)v6->m_Items[v5];
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      if ( v5 >= LODWORD(v4->fields.m_CancellationTokenSource) )
LABEL_14:
        sub_1C6BC68(this);
      v9 = this;
      v10 = &v4->klass + (int)v5;
      v10[4] = (BattleFieldEffectComponent_c *)v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)v9, v7, v8);
      if ( (signed int)++v5 >= SLODWORD(v4->fields.m_CancellationTokenSource) )
        return (System_String_array *)v4;
    }
LABEL_13:
    sub_1C6BC60(this, method);
  }
  return (System_String_array *)v4;
}


void BattleFieldEffectComponent__setAmbientColor(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_1C6BC60(this, index);
  if ( LODWORD(ambientlist->max_length) <= index )
    sub_1C6BC68(this);
  UnityEngine_RenderSettings__set_ambientLight(ambientlist->m_Items[index], 0);
}


void BattleFieldEffectComponent__setFieldEffect(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewobject; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_array *fieldeffect; // x8
  int32_t max_length; // w9
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB8DFB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8DFB = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(viewobject, 0, 0);
  if ( v6 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v8, 0);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_1C6BC60(v6, v7);
    max_length = fieldeffect->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C6BC68(v6);
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0,
                 0);
      this->fields.viewobject = Object;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.viewobject, (int32_t)Object, v12, v13);
    }
  }
}