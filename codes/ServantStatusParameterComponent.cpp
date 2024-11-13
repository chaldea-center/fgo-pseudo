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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2
  struct ServantStatusParameterGauge_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  struct ServantStatusParameterGauge_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  struct ServantStatusParameterGauge_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x2
  struct ServantStatusParameterGauge_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x2
  struct ServantStatusParameterGauge_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  ParameterGauge = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.powerParent, v2);
  this->fields.powerGauge = ParameterGauge;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.powerGauge, (int64_t)ParameterGauge, v5, v6, v7, v8, v9, v10);
  v12 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.defenseParent, v11);
  this->fields.defenseGauge = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defenseGauge, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v20 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.agilityParent, v19);
  this->fields.agilityGauge = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.agilityGauge, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v28 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.magicParent, v27);
  this->fields.magicGauge = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.magicGauge, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v36 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.luckParent, v35);
  this->fields.luckGauge = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.luckGauge, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v44 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.npParent, v43);
  this->fields.npGauge = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npGauge, (int64_t)v44, v45, v46, v47, v48, v49, v50);
}


ServantStatusParameterGauge_o *__fastcall ServantStatusParameterComponent__CreateParameterGauge(
        ServantStatusParameterComponent_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *baseGaugeObject; // x20
  Il2CppObject *v10; // x20
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B13CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B13CF5 = 1;
  }
  baseGaugeObject = (Il2CppObject *)this->fields.baseGaugeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  v10 = UnityEngine_Object__Instantiate_object_(
          baseGaugeObject,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 0LL;
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v10, parent, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v12, v13);
  return (ServantStatusParameterGauge_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v10,
                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___);
}


void __fastcall ServantStatusParameterComponent__OnDestroy(
        ServantStatusParameterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *powerGauge; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *defenseGauge; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *agilityGauge; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *magicGauge; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *luckGauge; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *npGauge; // x20
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x19

  if ( (byte_4B13CF4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13CF4 = 1;
  }
  powerGauge = (UnityEngine_Object_o *)this->fields.powerGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(powerGauge, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.powerGauge;
    if ( !v6 )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  defenseGauge = (UnityEngine_Object_o *)this->fields.defenseGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(defenseGauge, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.defenseGauge;
    if ( !v6 )
      goto LABEL_46;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_70154244(v11, 0LL);
  }
  agilityGauge = (UnityEngine_Object_o *)this->fields.agilityGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(agilityGauge, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.agilityGauge;
    if ( !v6 )
      goto LABEL_46;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244(v14, 0LL);
  }
  magicGauge = (UnityEngine_Object_o *)this->fields.magicGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(magicGauge, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.magicGauge;
    if ( !v6 )
      goto LABEL_46;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(v17, 0LL);
  }
  luckGauge = (UnityEngine_Object_o *)this->fields.luckGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(luckGauge, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.luckGauge;
    if ( !v6 )
      goto LABEL_46;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    UnityEngine_Object__Destroy_70154244(v20, 0LL);
  }
  npGauge = (UnityEngine_Object_o *)this->fields.npGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(npGauge, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.npGauge;
    if ( v6 )
    {
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      UnityEngine_Object__Destroy_70154244(v23, 0LL);
      return;
    }
LABEL_46:
    sub_1BCAA3C(v6, v5);
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
    sub_1BCAA3C(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, v19);
}