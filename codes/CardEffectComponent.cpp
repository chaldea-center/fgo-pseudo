void CardEffectComponent___ctor(CardEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_59737D3 & 1) == 0 )
  {
    sub_2213A60(&EffectComponent_TypeInfo);
    byte_59737D3 = 1;
  }
  if ( !*(&EffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo, method);
  EffectComponent___ctor((EffectComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CardEffectComponent__SetCardEffectDepth(
        CardEffectComponent_o *this,
        int32_t onBaseDepth,
        int32_t underBaseDepth,
        const MethodInfo *method)
{
  struct UIUnityRenderer_array *onCardEffectArray; // x22
  int max_length; // w8
  CardEffectComponent_o *v7; // x20
  __int64 v9; // x23
  struct UIUnityRenderer_array *underCardEffectArray; // x20
  int v11; // w8
  __int64 v12; // x21
  int32_t v13; // w19

  onCardEffectArray = this->fields.onCardEffectArray;
  if ( !onCardEffectArray )
    goto LABEL_14;
  max_length = onCardEffectArray->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( (unsigned int)v9 < max_length )
    {
      this = (CardEffectComponent_o *)onCardEffectArray->m_Items[v9];
      if ( !this )
        goto LABEL_14;
      UIWidget__set_depth((UIWidget_o *)this, onBaseDepth + 1, 0);
      max_length = onCardEffectArray->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_7;
    }
LABEL_15:
    sub_2213CE4(this);
  }
LABEL_7:
  underCardEffectArray = v7->fields.underCardEffectArray;
  if ( !underCardEffectArray )
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&onBaseDepth);
  v11 = underCardEffectArray->max_length;
  if ( v11 >= 1 )
  {
    v12 = 0;
    v13 = underBaseDepth - 1;
    while ( (unsigned int)v12 < v11 )
    {
      this = (CardEffectComponent_o *)underCardEffectArray->m_Items[v12];
      if ( !this )
        goto LABEL_14;
      UIWidget__set_depth((UIWidget_o *)this, v13, 0);
      v11 = underCardEffectArray->max_length;
      if ( (int)++v12 >= v11 )
        return;
    }
    goto LABEL_15;
  }
}