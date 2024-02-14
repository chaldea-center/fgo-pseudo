void __fastcall RaceResultEffectComponent___ctor(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4212EE5 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_4212EE5 = 1;
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
  __int64 v12; // x21
  int v13; // w8
  unsigned int v14; // w22
  int max_length; // w8
  iTween_array *v16; // x20
  __int64 v17; // x24
  __int64 v18; // x0

  if ( (byte_4212EE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___, param);
    byte_4212EE4 = 1;
  }
  this->fields.param = param;
  p_param = &this->fields.param;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_param,
    (System_Int32_array **)param,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (__int64)*(p_param - 1);
  if ( !v12 )
LABEL_17:
    sub_B0D97C(Components_iTween);
  v13 = *(_DWORD *)(v12 + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v13 )
        goto LABEL_16;
      Components_iTween = *(iTween_array **)(v12 + 8LL * (int)v14 + 32);
      if ( !Components_iTween )
        goto LABEL_17;
      Components_iTween = UnityEngine_GameObject__GetComponents_iTween_(
                            (UnityEngine_GameObject_o *)Components_iTween,
                            (const MethodInfo_1B62E54 *)Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
      if ( Components_iTween )
      {
        max_length = Components_iTween->max_length;
        v16 = Components_iTween;
        if ( max_length >= 1 )
          break;
      }
LABEL_14:
      v13 = *(_DWORD *)(v12 + 24);
      if ( (int)++v14 >= v13 )
        return;
    }
    v17 = 0LL;
    while ( (unsigned int)v17 < max_length )
    {
      Components_iTween = (iTween_array *)v16->m_Items[v17];
      if ( !Components_iTween )
        goto LABEL_17;
      Components_iTween = (iTween_array *)((__int64 (__fastcall *)(iTween_array *, Il2CppObject *, Il2CppMethodPointer))Components_iTween->obj.klass->vtable[4].method)(
                                            Components_iTween,
                                            *p_param,
                                            Components_iTween->obj.klass->vtable[5].methodPtr);
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    v18 = sub_B0D9A8(Components_iTween);
    sub_B0D948(v18, 0LL);
  }
}