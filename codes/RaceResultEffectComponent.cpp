void __fastcall RaceResultEffectComponent___ctor(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_41860DA & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_41860DA = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


Il2CppObject *__fastcall RaceResultEffectComponent__GetParam(
        RaceResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.param;
}


void __fastcall RaceResultEffectComponent__SetParam(
        RaceResultEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Il2CppObject **p_param; // x19
  iTween_array *Components_iTween; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  int v14; // w8
  unsigned int v15; // w22
  int max_length; // w8
  iTween_array *v17; // x20
  __int64 v18; // x24
  __int64 v19; // x0

  if ( (byte_41860D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___, param);
    byte_41860D9 = 1;
  }
  this->fields.param = param;
  p_param = &this->fields.param;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_param,
    (System_Int32_array **)param,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (__int64)*(p_param - 1);
  if ( !v13 )
LABEL_17:
    sub_B2C434(Components_iTween, v12);
  v14 = *(_DWORD *)(v13 + 24);
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v14 )
        goto LABEL_16;
      Components_iTween = *(iTween_array **)(v13 + 8LL * (int)v15 + 32);
      if ( !Components_iTween )
        goto LABEL_17;
      Components_iTween = UnityEngine_GameObject__GetComponents_iTween_(
                            (UnityEngine_GameObject_o *)Components_iTween,
                            (const MethodInfo_1AA7B88 *)Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
      if ( Components_iTween )
      {
        max_length = Components_iTween->max_length;
        v17 = Components_iTween;
        if ( max_length >= 1 )
          break;
      }
LABEL_14:
      v14 = *(_DWORD *)(v13 + 24);
      if ( (int)++v15 >= v14 )
        return;
    }
    v18 = 0LL;
    while ( (unsigned int)v18 < max_length )
    {
      Components_iTween = (iTween_array *)v17->m_Items[v18];
      if ( !Components_iTween )
        goto LABEL_17;
      Components_iTween = (iTween_array *)((__int64 (__fastcall *)(iTween_array *, Il2CppObject *, Il2CppMethodPointer))Components_iTween->obj.klass->vtable[4].method)(
                                            Components_iTween,
                                            *p_param,
                                            Components_iTween->obj.klass->vtable[5].methodPtr);
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    v19 = sub_B2C460(Components_iTween);
    sub_B2C400(v19, 0LL);
  }
}