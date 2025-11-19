void RaceResultEffectComponent___ctor(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CB79E6 & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectComponent_TypeInfo);
    byte_4CB79E6 = 1;
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
  __int64 v8; // x1
  __int64 v9; // x21
  int v10; // w8
  unsigned int v11; // w22
  int max_length; // w8
  System_Object_array *v13; // x20
  __int64 v14; // x24

  if ( (byte_4CB79E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
    byte_4CB79E5 = 1;
  }
  this->fields.param = param;
  p_param = &this->fields.param;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_param, (int32_t)param, (int32_t)method, v3);
  v9 = (__int64)*(p_param - 1);
  if ( !v9 )
LABEL_17:
    sub_1C6BC60(Components_object, v8);
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v10 )
        goto LABEL_16;
      Components_object = *(System_Object_array **)(v9 + 8LL * (int)v11 + 32);
      if ( !Components_object )
        goto LABEL_17;
      Components_object = UnityEngine_GameObject__GetComponents_object_(
                            (UnityEngine_GameObject_o *)Components_object,
                            (const MethodInfo_3193A88 *)Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
      if ( Components_object )
      {
        max_length = Components_object->max_length;
        v13 = Components_object;
        if ( max_length >= 1 )
          break;
      }
LABEL_14:
      v10 = *(_DWORD *)(v9 + 24);
      if ( (int)++v11 >= v10 )
        return;
    }
    v14 = 0;
    while ( (unsigned int)v14 < max_length )
    {
      Components_object = (System_Object_array *)v13->m_Items[v14];
      if ( !Components_object )
        goto LABEL_17;
      Components_object = (System_Object_array *)((__int64 (__fastcall *)(System_Object_array *, Il2CppObject *, const MethodInfo *))Components_object->obj.klass->vtable[4].methodPtr)(
                                                   Components_object,
                                                   *p_param,
                                                   Components_object->obj.klass->vtable[4].method);
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_1C6BC68(Components_object);
  }
}