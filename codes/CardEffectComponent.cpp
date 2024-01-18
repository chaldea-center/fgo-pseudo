void __fastcall CardEffectComponent___ctor(CardEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418A0A5 & 1) == 0 )
  {
    sub_B2C35C(&EffectComponent_TypeInfo, method);
    byte_418A0A5 = 1;
  }
  if ( (BYTE3(EffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
  }
  EffectComponent___ctor((EffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CardEffectComponent__SetCardEffectDepth(
        CardEffectComponent_o *this,
        int32_t onBaseDepth,
        int32_t underBaseDepth,
        const MethodInfo *method)
{
  struct UIUnityRenderer_array *underCardEffectArray; // x22
  int max_length; // w8
  CardEffectComponent_o *v7; // x20
  unsigned int v8; // w23
  int32_t v9; // w21
  CardEffectComponent_c *klass; // x20
  int namespaze; // w8
  unsigned int v12; // w21
  int32_t v13; // w19
  __int64 v14; // x0

  underCardEffectArray = this->fields.underCardEffectArray;
  if ( !underCardEffectArray )
    goto LABEL_15;
  max_length = underCardEffectArray->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = onBaseDepth + 1;
    while ( v8 < max_length )
    {
      this = (CardEffectComponent_o *)underCardEffectArray->m_Items[v8];
      if ( !this )
        goto LABEL_15;
      UIWidget__set_depth((UIWidget_o *)this, v9, 0LL);
      max_length = underCardEffectArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_14:
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
  }
LABEL_7:
  klass = v7[1].klass;
  if ( !klass )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&onBaseDepth);
  namespaze = (int)klass->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v12 = 0;
    v13 = underBaseDepth - 1;
    while ( v12 < namespaze )
    {
      this = (CardEffectComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v12);
      if ( !this )
        goto LABEL_15;
      UIWidget__set_depth((UIWidget_o *)this, v13, 0LL);
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v12 >= namespaze )
        return;
    }
    goto LABEL_14;
  }
}