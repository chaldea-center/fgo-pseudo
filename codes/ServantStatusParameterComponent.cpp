void __fastcall ServantStatusParameterComponent___ctor(
        ServantStatusParameterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusParameterComponent__Awake(
        ServantStatusParameterComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantStatusParameterGauge_o *ParameterGauge; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2
  struct ServantStatusParameterGauge_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  struct ServantStatusParameterGauge_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  struct ServantStatusParameterGauge_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  struct ServantStatusParameterGauge_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  struct ServantStatusParameterGauge_o *v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  ParameterGauge = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.powerParent, v2);
  this->fields.powerGauge = ParameterGauge;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.powerGauge,
    (System_Int32_array **)ParameterGauge,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.defenseParent, v11);
  this->fields.defenseGauge = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defenseGauge,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.agilityParent, v19);
  this->fields.agilityGauge = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.agilityGauge,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v28 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.magicParent, v27);
  this->fields.magicGauge = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.magicGauge,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v36 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.luckParent, v35);
  this->fields.luckGauge = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.luckGauge,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v44 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.npParent, v43);
  this->fields.npGauge = v44;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.npGauge,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
}


ServantStatusParameterGauge_o *__fastcall ServantStatusParameterComponent__CreateParameterGauge(
        ServantStatusParameterComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *baseGaugeObject; // x20
  UnityEngine_GameObject_o *v8; // x20
  bool v9; // w8
  ServantStatusParameterGauge_o *result; // x0
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418A80D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___, parent);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A80D = 1;
  }
  baseGaugeObject = this->fields.baseGaugeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)baseGaugeObject,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  result = 0LL;
  if ( !v9 )
  {
    GameObjectExtensions__SafeSetParent_31331952(v8, parent, 0LL);
    if ( !v8 )
      sub_B2C434(v11, v12);
    return (ServantStatusParameterGauge_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v8,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___);
  }
  return result;
}


void __fastcall ServantStatusParameterComponent__OnDestroy(
        ServantStatusParameterComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_418A80C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A80C = 1;
  }
  powerGauge = (UnityEngine_Object_o *)this->fields.powerGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerGauge, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.powerGauge;
    if ( !v5 )
      goto LABEL_58;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  defenseGauge = (UnityEngine_Object_o *)this->fields.defenseGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(defenseGauge, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.defenseGauge;
    if ( !v5 )
      goto LABEL_58;
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v8, 0LL);
  }
  agilityGauge = (UnityEngine_Object_o *)this->fields.agilityGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(agilityGauge, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.agilityGauge;
    if ( !v5 )
      goto LABEL_58;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v10, 0LL);
  }
  magicGauge = (UnityEngine_Object_o *)this->fields.magicGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(magicGauge, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.magicGauge;
    if ( !v5 )
      goto LABEL_58;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v12, 0LL);
  }
  luckGauge = (UnityEngine_Object_o *)this->fields.luckGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(luckGauge, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.luckGauge;
    if ( !v5 )
      goto LABEL_58;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v14, 0LL);
  }
  npGauge = (UnityEngine_Object_o *)this->fields.npGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(npGauge, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.npGauge;
    if ( v5 )
    {
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v16, 0LL);
      return;
    }
LABEL_58:
    sub_B2C434(v5, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterComponent__Setup(
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
    || (ServantStatusParameterGauge__Set(powerGauge, 2, agility, v16), (powerGauge = this->fields.magicGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(powerGauge, 3, magic, v17), (powerGauge = this->fields.luckGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(powerGauge, 4, luck, v18), (powerGauge = this->fields.npGauge) == 0LL) )
  {
LABEL_8:
    sub_B2C434(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, v19);
}