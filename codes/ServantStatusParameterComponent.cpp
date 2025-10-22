void ServantStatusParameterComponent___ctor(ServantStatusParameterComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusParameterComponent__Awake(ServantStatusParameterComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantStatusParameterGauge_o *ParameterGauge; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  struct ServantStatusParameterGauge_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct ServantStatusParameterGauge_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct ServantStatusParameterGauge_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  struct ServantStatusParameterGauge_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  struct ServantStatusParameterGauge_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  ParameterGauge = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.powerParent, v2);
  this->fields.powerGauge = ParameterGauge;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.powerGauge, (int32_t)ParameterGauge, v5, v6);
  v8 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.defenseParent, v7);
  this->fields.defenseGauge = v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.defenseGauge, (int32_t)v8, v9, v10);
  v12 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.agilityParent, v11);
  this->fields.agilityGauge = v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.agilityGauge, (int32_t)v12, v13, v14);
  v16 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.magicParent, v15);
  this->fields.magicGauge = v16;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.magicGauge, (int32_t)v16, v17, v18);
  v20 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.luckParent, v19);
  this->fields.luckGauge = v20;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.luckGauge, (int32_t)v20, v21, v22);
  v24 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.npParent, v23);
  this->fields.npGauge = v24;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.npGauge, (int32_t)v24, v25, v26);
}


ServantStatusParameterGauge_o *ServantStatusParameterComponent__CreateParameterGauge(
        ServantStatusParameterComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *baseGaugeObject; // x20
  Il2CppObject *v6; // x20
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C54407 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54407 = 1;
  }
  baseGaugeObject = (Il2CppObject *)this->fields.baseGaugeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseGaugeObject,
         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return 0;
  GameObjectExtensions__SafeSetParent_36182084((UnityEngine_GameObject_o *)v6, parent, 0);
  if ( !v6 )
    sub_1C3E7C0(v8, v9);
  return (ServantStatusParameterGauge_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v6,
                                            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___);
}


void ServantStatusParameterComponent__OnDestroy(ServantStatusParameterComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *powerGauge; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *defenseGauge; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *agilityGauge; // x20
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *magicGauge; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *luckGauge; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *npGauge; // x20
  UnityEngine_Object_o *v16; // x19

  if ( (byte_4C54406 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54406 = 1;
  }
  powerGauge = (UnityEngine_Object_o *)this->fields.powerGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerGauge, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.powerGauge;
    if ( !v5 )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
  }
  defenseGauge = (UnityEngine_Object_o *)this->fields.defenseGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(defenseGauge, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.defenseGauge;
    if ( !v5 )
      goto LABEL_46;
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v8, 0);
  }
  agilityGauge = (UnityEngine_Object_o *)this->fields.agilityGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(agilityGauge, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.agilityGauge;
    if ( !v5 )
      goto LABEL_46;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v10, 0);
  }
  magicGauge = (UnityEngine_Object_o *)this->fields.magicGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(magicGauge, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.magicGauge;
    if ( !v5 )
      goto LABEL_46;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v12, 0);
  }
  luckGauge = (UnityEngine_Object_o *)this->fields.luckGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(luckGauge, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.luckGauge;
    if ( !v5 )
      goto LABEL_46;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v14, 0);
  }
  npGauge = (UnityEngine_Object_o *)this->fields.npGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npGauge, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.npGauge;
    if ( v5 )
    {
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v16, 0);
      return;
    }
LABEL_46:
    sub_1C3E7C0(v5, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusParameterComponent__Setup(
        ServantStatusParameterComponent_o *this,
        int32_t power,
        int32_t defense,
        int32_t agility,
        int32_t magic,
        int32_t luck,
        int32_t np,
        const MethodInfo *method)
{
  ServantStatusParameterGauge_o *powerGauge; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  powerGauge = this->fields.powerGauge;
  if ( !powerGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(powerGauge, 0, power, *(const MethodInfo **)&agility);
  powerGauge = this->fields.defenseGauge;
  if ( !powerGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(powerGauge, 1, defense, v15);
  powerGauge = this->fields.agilityGauge;
  if ( !powerGauge
    || (ServantStatusParameterGauge__Set(powerGauge, 2, agility, v16), (powerGauge = this->fields.magicGauge) == 0)
    || (ServantStatusParameterGauge__Set(powerGauge, 3, magic, v17), (powerGauge = this->fields.luckGauge) == 0)
    || (ServantStatusParameterGauge__Set(powerGauge, 4, luck, v18), (powerGauge = this->fields.npGauge) == 0) )
  {
LABEL_8:
    sub_1C3E7C0(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, v19);
}