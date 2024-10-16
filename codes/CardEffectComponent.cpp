void __fastcall CardEffectComponent___ctor(CardEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AB85CD & 1) == 0 )
  {
    sub_1BAB41C(&EffectComponent_TypeInfo, method);
    byte_4AB85CD = 1;
  }
  if ( !EffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
  EffectComponent___ctor((EffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CardEffectComponent__SetCardEffectDepth(
        CardEffectComponent_o *this,
        int32_t onBaseDepth,
        int32_t underBaseDepth,
        const MethodInfo *method)
{
  struct UIUnityRenderer_array *onCardEffectArray; // x22
  int max_length; // w8
  CardEffectComponent_o *v7; // x20
  unsigned int v8; // w23
  int32_t v9; // w21
  struct UIUnityRenderer_array *underCardEffectArray; // x20
  int v11; // w8
  unsigned int v12; // w21
  int32_t v13; // w19

  onCardEffectArray = this->fields.onCardEffectArray;
  if ( !onCardEffectArray )
    goto LABEL_15;
  max_length = onCardEffectArray->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = onBaseDepth + 1;
    while ( v8 < max_length )
    {
      this = (CardEffectComponent_o *)onCardEffectArray->m_Items[v8];
      if ( !this )
        goto LABEL_15;
      UIWidget__set_depth((UIWidget_o *)this, v9, 0LL);
      max_length = onCardEffectArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_7;
    }
LABEL_14:
    sub_1BAB680(this, *(_QWORD *)&onBaseDepth);
  }
LABEL_7:
  underCardEffectArray = v7->fields.underCardEffectArray;
  if ( !underCardEffectArray )
LABEL_15:
    sub_1BAB678(this, *(_QWORD *)&onBaseDepth);
  v11 = underCardEffectArray->max_length;
  if ( v11 >= 1 )
  {
    v12 = 0;
    v13 = underBaseDepth - 1;
    while ( v12 < v11 )
    {
      this = (CardEffectComponent_o *)underCardEffectArray->m_Items[v12];
      if ( !this )
        goto LABEL_15;
      UIWidget__set_depth((UIWidget_o *)this, v13, 0LL);
      v11 = underCardEffectArray->max_length;
      if ( (int)++v12 >= v11 )
        return;
    }
    goto LABEL_14;
  }
}