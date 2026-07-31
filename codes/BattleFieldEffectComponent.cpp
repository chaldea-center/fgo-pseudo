void BattleFieldEffectComponent___ctor(BattleFieldEffectComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t BattleFieldEffectComponent__getAmbientColors(BattleFieldEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_21FFECC(this, method);
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
  __int64 i; // x22
  struct UnityEngine_GameObject_array *v7; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_593B2D4 & 1) == 0 )
  {
    this = (BattleFieldEffectComponent_o *)sub_21FFC50(&string___TypeInfo);
    byte_593B2D4 = 1;
  }
  fieldeffect = v2->fields.fieldeffect;
  if ( !fieldeffect )
    goto LABEL_13;
  this = (BattleFieldEffectComponent_o *)sub_21FFD10(string___TypeInfo, LODWORD(fieldeffect->max_length));
  if ( !this )
    goto LABEL_13;
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v5 = 0;
    for ( i = 32; ; i += 8 )
    {
      v7 = v2->fields.fieldeffect;
      if ( !v7 )
        break;
      if ( v5 >= LODWORD(v7->max_length) )
        goto LABEL_14;
      this = *(BattleFieldEffectComponent_o **)((char *)&v7->obj.klass + i);
      if ( !this )
        break;
      this = (BattleFieldEffectComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      if ( v5 >= LODWORD(v4->fields.m_CancellationTokenSource) )
LABEL_14:
        sub_21FFED4(this);
      *(BattleFieldEffectComponent_c **)((char *)&v4->klass + i) = (BattleFieldEffectComponent_c *)this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v4 + i), (int32_t)this, v8, v9, v10, v11, v12, v13);
      if ( (signed int)++v5 >= SLODWORD(v4->fields.m_CancellationTokenSource) )
        return (System_String_array *)v4;
    }
LABEL_13:
    sub_21FFECC(this, method);
  }
  return (System_String_array *)v4;
}


// local variable allocation has failed, the output may be wrong!
void BattleFieldEffectComponent__setAmbientColor(
        BattleFieldEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *ambientlist; // x8

  ambientlist = this->fields.ambientlist;
  if ( !ambientlist )
    sub_21FFECC(this, *(_QWORD *)&index);
  if ( LODWORD(ambientlist->max_length) <= index )
    sub_21FFED4(this);
  UnityEngine_RenderSettings__set_ambientLight(ambientlist->m_Items[index], 0);
}


// local variable allocation has failed, the output may be wrong!
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
  struct UnityEngine_GameObject_o *Object; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593B2D5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B2D5 = 1;
  }
  viewobject = (UnityEngine_Object_o *)this->fields.viewobject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  v6 = UnityEngine_Object__op_Inequality(viewobject, 0, 0);
  if ( v6 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.viewobject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_83246496(v8, 0);
  }
  if ( (index & 0x80000000) == 0 )
  {
    fieldeffect = this->fields.fieldeffect;
    if ( !fieldeffect )
      sub_21FFECC(v6, v7);
    if ( SLODWORD(fieldeffect->max_length) > index )
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 fieldeffect->m_Items[index],
                 this->fields.root2D,
                 0,
                 0);
      this->fields.viewobject = Object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.viewobject,
        (int32_t)Object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
  }
}