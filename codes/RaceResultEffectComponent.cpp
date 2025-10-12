void RaceResultEffectComponent___ctor(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C390B1 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C390B1 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


Il2CppObject *RaceResultEffectComponent__GetParam(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.param;
}


void RaceResultEffectComponent__SetParam(
        RaceResultEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject **p_param; // x19
  System_Object_array *Components_object; // x0
  __int64 v8; // x21
  int v9; // w8
  unsigned int v10; // w22
  int max_length; // w8
  System_Object_array *v12; // x20
  __int64 v13; // x24

  if ( (byte_4C390B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
    byte_4C390B0 = 1;
  }
  this->fields.param = param;
  p_param = &this->fields.param;
  sub_1C32BC4((CGThumbnailListItem_o *)p_param, (int32_t)param, (int32_t)method, v3);
  v8 = (__int64)*(p_param - 1);
  if ( !v8 )
LABEL_17:
    sub_1C32E7C(Components_object);
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v9 )
        goto LABEL_16;
      Components_object = *(System_Object_array **)(v8 + 8LL * (int)v10 + 32);
      if ( !Components_object )
        goto LABEL_17;
      Components_object = UnityEngine_GameObject__GetComponents_object_(
                            (UnityEngine_GameObject_o *)Components_object,
                            (const MethodInfo_31352CC *)Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
      if ( Components_object )
      {
        max_length = Components_object->max_length;
        v12 = Components_object;
        if ( max_length >= 1 )
          break;
      }
LABEL_14:
      v9 = *(_DWORD *)(v8 + 24);
      if ( (int)++v10 >= v9 )
        return;
    }
    v13 = 0;
    while ( (unsigned int)v13 < max_length )
    {
      Components_object = (System_Object_array *)v12->m_Items[v13];
      if ( !Components_object )
        goto LABEL_17;
      Components_object = (System_Object_array *)((__int64 (__fastcall *)(System_Object_array *, Il2CppObject *, const MethodInfo *))Components_object->obj.klass->vtable[4].methodPtr)(
                                                   Components_object,
                                                   *p_param,
                                                   Components_object->obj.klass->vtable[4].method);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_1C32E84(Components_object);
  }
}