void ServantStatusParameterComponent___ctor(ServantStatusParameterComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusParameterComponent__Awake(ServantStatusParameterComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantStatusParameterGauge_o *ParameterGauge; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x2
  struct ServantStatusParameterGauge_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  struct ServantStatusParameterGauge_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x2
  struct ServantStatusParameterGauge_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x2
  struct ServantStatusParameterGauge_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  const MethodInfo *v43; // x2
  struct ServantStatusParameterGauge_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  ParameterGauge = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.powerParent, v2);
  this->fields.powerGauge = ParameterGauge;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.powerGauge,
    (int32_t)ParameterGauge,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.defenseParent, v11);
  this->fields.defenseGauge = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defenseGauge,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.agilityParent, v19);
  this->fields.agilityGauge = v20;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.agilityGauge,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v28 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.magicParent, v27);
  this->fields.magicGauge = v28;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.magicGauge, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v36 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.luckParent, v35);
  this->fields.luckGauge = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.luckGauge, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v44 = ServantStatusParameterComponent__CreateParameterGauge(this, this->fields.npParent, v43);
  this->fields.npGauge = v44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.npGauge, (int32_t)v44, v45, v46, v47, v48, v49, v50);
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

  if ( (byte_5935D33 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935D33 = 1;
  }
  baseGaugeObject = (Il2CppObject *)this->fields.baseGaugeObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseGaugeObject,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return 0;
  GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v6, parent, 0);
  if ( !v6 )
    sub_21FFECC(v8, v9);
  return (ServantStatusParameterGauge_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v6,
                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterGauge___);
}


void ServantStatusParameterComponent__OnDestroy(ServantStatusParameterComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *powerGauge; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *defenseGauge; // x20
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *agilityGauge; // x20
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *magicGauge; // x20
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x20
  UnityEngine_Object_o *luckGauge; // x20
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *npGauge; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *v34; // x19

  if ( (byte_5935D32 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935D32 = 1;
  }
  powerGauge = (UnityEngine_Object_o *)this->fields.powerGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(powerGauge, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.powerGauge;
    if ( !v7 )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  defenseGauge = (UnityEngine_Object_o *)this->fields.defenseGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(defenseGauge, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.defenseGauge;
    if ( !v7 )
      goto LABEL_46;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__Destroy_83246496(v15, 0);
  }
  agilityGauge = (UnityEngine_Object_o *)this->fields.agilityGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v12);
  if ( UnityEngine_Object__op_Inequality(agilityGauge, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.agilityGauge;
    if ( !v7 )
      goto LABEL_46;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    UnityEngine_Object__Destroy_83246496(v20, 0);
  }
  magicGauge = (UnityEngine_Object_o *)this->fields.magicGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v17);
  if ( UnityEngine_Object__op_Inequality(magicGauge, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.magicGauge;
    if ( !v7 )
      goto LABEL_46;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
    UnityEngine_Object__Destroy_83246496(v25, 0);
  }
  luckGauge = (UnityEngine_Object_o *)this->fields.luckGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v22);
  if ( UnityEngine_Object__op_Inequality(luckGauge, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.luckGauge;
    if ( !v7 )
      goto LABEL_46;
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
    UnityEngine_Object__Destroy_83246496(v30, 0);
  }
  npGauge = (UnityEngine_Object_o *)this->fields.npGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v27);
  if ( UnityEngine_Object__op_Inequality(npGauge, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.npGauge;
    if ( v7 )
    {
      v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
      UnityEngine_Object__Destroy_83246496(v34, 0);
      return;
    }
LABEL_46:
    sub_21FFECC(v7, v5);
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
    sub_21FFECC(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, v19);
}