void __fastcall RaceResultEffectComponent___ctor(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BFEC0A & 1) == 0 )
  {
    sub_1C2E12C(&CommonEffectComponent_TypeInfo, method);
    byte_4BFEC0A = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject **p_param; // x19
  System_Object_array *Components_object; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  int v14; // w8
  unsigned int v15; // w22
  int max_length; // w8
  System_Object_array *v17; // x20
  __int64 v18; // x24

  if ( (byte_4BFEC09 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___, param);
    byte_4BFEC09 = 1;
  }
  this->fields.param = param;
  p_param = &this->fields.param;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_param, (int64_t)param, (int64_t)method, v3, v4, v5, v6, v7);
  v13 = (__int64)*(p_param - 1);
  if ( !v13 )
LABEL_17:
    sub_1C2E388(Components_object, v12);
  v14 = *(_DWORD *)(v13 + 24);
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v14 )
        goto LABEL_16;
      Components_object = *(System_Object_array **)(v13 + 8LL * (int)v15 + 32);
      if ( !Components_object )
        goto LABEL_17;
      Components_object = UnityEngine_GameObject__GetComponents_object_(
                            (UnityEngine_GameObject_o *)Components_object,
                            (const MethodInfo_3023468 *)Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
      if ( Components_object )
      {
        max_length = Components_object->max_length;
        v17 = Components_object;
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
      Components_object = (System_Object_array *)v17->m_Items[v18];
      if ( !Components_object )
        goto LABEL_17;
      Components_object = (System_Object_array *)((__int64 (__fastcall *)(System_Object_array *, Il2CppObject *, Il2CppMethodPointer))Components_object->obj.klass->vtable[4].method)(
                                                   Components_object,
                                                   *p_param,
                                                   Components_object->obj.klass->vtable[5].methodPtr);
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_1C2E390(Components_object, v12);
  }
}