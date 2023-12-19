void __fastcall CardEffectComponent___ctor(CardEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FCF1D & 1) == 0 )
  {
    sub_B16FFC(&EffectComponent_TypeInfo, method);
    byte_40FCF1D = 1;
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
  unsigned int v8; // w23
  int32_t v9; // w21
  UIWidget_o *v10; // x0
  CardEffectComponent_c *klass; // x20
  int namespaze; // w8
  unsigned int v13; // w21
  int32_t v14; // w19
  UIWidget_o *v15; // x0

  underCardEffectArray = this->fields.underCardEffectArray;
  if ( !underCardEffectArray )
    goto LABEL_15;
  max_length = underCardEffectArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = onBaseDepth + 1;
    while ( v8 < max_length )
    {
      v10 = (UIWidget_o *)underCardEffectArray->m_Items[v8];
      if ( !v10 )
        goto LABEL_15;
      UIWidget__set_depth(v10, v9, 0LL);
      max_length = underCardEffectArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_14:
    sub_B17100(this, *(_QWORD *)&onBaseDepth, *(_QWORD *)&underBaseDepth);
    sub_B170A0();
  }
LABEL_7:
  klass = this[1].klass;
  if ( !klass )
LABEL_15:
    sub_B170D4();
  namespaze = (int)klass->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v13 = 0;
    v14 = underBaseDepth - 1;
    while ( v13 < namespaze )
    {
      v15 = (UIWidget_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v13);
      if ( !v15 )
        goto LABEL_15;
      UIWidget__set_depth(v15, v14, 0LL);
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v13 >= namespaze )
        return;
    }
    goto LABEL_14;
  }
}