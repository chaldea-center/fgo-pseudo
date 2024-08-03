void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct WarBoardBreakPointComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct WarBoardBreakPointComponent_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct WarBoardBreakPointComponent_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  struct WarBoardBreakPointComponent_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  struct WarBoardBreakPointComponent_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct WarBoardBreakPointComponent_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  struct WarBoardBreakPointComponent_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct WarBoardBreakPointComponent_StaticFields *v46; // x0
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_49F9F10 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardBreakPointComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_8868/*"MasterPoint_recharge_effect_1"*/, v4);
    sub_1B640C8(&StringLiteral_17379/*"break_on_boss"*/, v5);
    sub_1B640C8(&StringLiteral_21235/*"master_gauge_off_{0}"*/, v6);
    sub_1B640C8(&StringLiteral_17377/*"break_off_boss"*/, v7);
    sub_1B640C8(&StringLiteral_17378/*"break_on"*/, v8);
    sub_1B640C8(&StringLiteral_17376/*"break_off"*/, v9);
    sub_1B640C8(&StringLiteral_24509/*"wall_gauge_{0}"*/, v10);
    sub_1B640C8(&StringLiteral_21236/*"master_gauge_{0}"*/, v11);
    sub_1B640C8(&StringLiteral_3315/*"BreakPoint_effect_{0}"*/, v12);
    sub_1B640C8(&StringLiteral_8867/*"MasterPoint_effect_{0}"*/, v13);
    byte_49F9F10 = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17378/*"break_on"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardBreakPointComponent_TypeInfo->static_fields,
    StringLiteral_17378/*"break_on"*/,
    v2,
    v3);
  v14 = StringLiteral_17376/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17376/*"break_off"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->BreakPointOffImageName, v14, v16, v17);
  v18 = StringLiteral_17379/*"break_on_boss"*/;
  v19 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v19->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17379/*"break_on_boss"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->EnemyBreakPointOnImageName, v18, v20, v21);
  v22 = StringLiteral_17377/*"break_off_boss"*/;
  v23 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v23->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17377/*"break_off_boss"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->EnemyBreakPointOffImageName, v22, v24, v25);
  v26 = StringLiteral_3315/*"BreakPoint_effect_{0}"*/;
  v27 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v27->BreakPointEffectName = (struct System_String_o *)StringLiteral_3315/*"BreakPoint_effect_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->BreakPointEffectName, v26, v28, v29);
  v30 = StringLiteral_21236/*"master_gauge_{0}"*/;
  v31 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v31->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21236/*"master_gauge_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->MasterPointOnImageName, v30, v32, v33);
  v34 = StringLiteral_21235/*"master_gauge_off_{0}"*/;
  v35 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v35->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21235/*"master_gauge_off_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->MasterPointOffImageName, v34, v36, v37);
  v38 = StringLiteral_8867/*"MasterPoint_effect_{0}"*/;
  v39 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v39->MasterPointEffectName = (struct System_String_o *)StringLiteral_8867/*"MasterPoint_effect_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->MasterPointEffectName, v38, v40, v41);
  v42 = StringLiteral_8868/*"MasterPoint_recharge_effect_1"*/;
  v43 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v43->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8868/*"MasterPoint_recharge_effect_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->MasterPointRechargeEffectName, v42, v44, v45);
  v46 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v47 = StringLiteral_24509/*"wall_gauge_{0}"*/;
  v46->wallPointImageName = (struct System_String_o *)StringLiteral_24509/*"wall_gauge_{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->wallPointImageName, v47, v48, v49);
}


void __fastcall WarBoardBreakPointComponent___ctor(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetBreakEffectName(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardBreakPointComponent_c *v4; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  System_Int32_c *v6; // x0
  int *v7; // x1
  System_String_o *MasterPointEffectName; // x19
  Il2CppObject *v9; // x0
  WarBoardBreakPointComponent_c *v11; // x0
  struct WarBoardBreakPointComponent_StaticFields *v12; // x8
  _BOOL4 isEnemyServant; // w9
  int v14; // w8
  int v15; // [xsp+8h] [xbp-28h] BYREF
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9F09 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&WarBoardBreakPointComponent_TypeInfo, v3);
    byte_49F9F09 = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v4 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v4 = WarBoardBreakPointComponent_TypeInfo;
    }
    static_fields = v4->static_fields;
    v6 = int_TypeInfo;
    v7 = &v15;
    MasterPointEffectName = static_fields->MasterPointEffectName;
    v15 = 1;
  }
  else
  {
    v11 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v11 = WarBoardBreakPointComponent_TypeInfo;
    }
    v12 = v11->static_fields;
    isEnemyServant = this->fields.isEnemyServant;
    v6 = int_TypeInfo;
    v7 = &v16;
    MasterPointEffectName = v12->BreakPointEffectName;
    if ( isEnemyServant )
      v14 = 2;
    else
      v14 = 1;
    v16 = v14;
  }
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(v6, v7);
  return System_String__Format(MasterPointEffectName, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardBreakPointComponent_c *v6; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v9; // x0
  Il2CppObject *v10; // x0
  WarBoardBreakPointComponent_c *v12; // x0
  _BOOL4 v13; // w19
  WarBoardBreakPointComponent_c *v14; // x0
  System_String_o **p_BreakPointOnImageName; // x8
  _BOOL4 isEnemyServant; // w19
  WarBoardBreakPointComponent_c *v17; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9F08 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, isActiveSprite);
    sub_1B640C8(&WarBoardBreakPointComponent_TypeInfo, v5);
    byte_49F9F08 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v12 = WarBoardBreakPointComponent_TypeInfo;
        if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v12 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v12->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      isEnemyServant = this->fields.isEnemyServant;
      v17 = WarBoardBreakPointComponent_TypeInfo;
      if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
        v17 = WarBoardBreakPointComponent_TypeInfo;
      }
      static_fields = v17->static_fields;
      if ( isEnemyServant )
        return static_fields->EnemyBreakPointOffImageName;
      else
        return static_fields->BreakPointOffImageName;
    }
LABEL_10:
    v9 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v9 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v9->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v6 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v6 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v6->static_fields->MasterPointOnImageName;
LABEL_13:
    v19 = objectColorNumber;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    return System_String__Format(MasterPointOffImageName, v10, 0LL);
  }
  v13 = this->fields.isEnemyServant;
  v14 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
    v14 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v14->static_fields->BreakPointOnImageName;
  if ( v13 )
    return p_BreakPointOnImageName[2];
  else
    return *p_BreakPointOnImageName;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointComponent__Initialize(
        WarBoardBreakPointComponent_o *this,
        int32_t depth,
        int32_t number,
        bool isMaster,
        bool isEnemyServant,
        bool isThirdForce,
        const MethodInfo *method)
{
  bool v11; // w26
  bool v12; // w25
  bool v13; // w24
  UnityEngine_Object_o *activeObject; // x22
  UIWidget_o *v15; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *deactiveObject; // x22
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v20; // x3

  v11 = isMaster;
  v12 = isEnemyServant;
  v13 = isThirdForce;
  if ( (byte_49F9F0A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_49F9F0A = 1;
  }
  this->fields.isMaster = v11;
  this->fields.isEnemyServant = v12;
  this->fields.isThirdForce = v13;
  this->fields.objectColorNumber = number;
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.activeObject;
    if ( !v15 )
      goto LABEL_20;
    UIWidget__set_depth(v15, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v16);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v15 )
      goto LABEL_20;
    UIWidget__set_depth(v15, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v18);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseObject, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.baseObject;
    if ( v15 )
    {
      UIWidget__set_depth(v15, depth, 0LL);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v20);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B64324(v15);
  }
LABEL_19:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v20);
}


void __fastcall WarBoardBreakPointComponent__OnBreak(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v17; // x1
  char *BreakEffectName; // x0
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardCommonEffectPerformance_o *v26; // x0
  WarBoardCommonEffectPerformance_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Delegate_o **p_StartCallback; // x23
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  WarBoardTaskBase_TaskCallback_c *v34; // x8
  WarBoardTaskBase_TaskCallback_c *v35; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  WarBoardTaskBase_TaskCallback_c *v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  Il2CppObject *v48; // x19
  char *v49; // x20
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x0
  System_Nullable_Vector3__o v55; // 0:x3.16
  System_Nullable_Vector3__o v56; // 0:x5.16

  if ( (byte_49F9F0B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v12);
    sub_1B640C8(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v15);
    byte_49F9F0B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v17);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__49003980(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    if ( !BreakEffectName )
      goto LABEL_37;
    v21 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(BreakEffectName + 32), (int32_t)this, v22, v23);
    v26 = (WarBoardCommonEffectPerformance_o *)sub_1B64314(WarBoardCommonEffectPerformance_TypeInfo, v24, v25);
    *(_QWORD *)&v55.fields.hasValue = 0LL;
    *(_QWORD *)&v55.fields.value.fields.y = 0LL;
    *(_QWORD *)&v56.fields.hasValue = 0LL;
    *(_QWORD *)&v56.fields.value.fields.y = 0LL;
    v27 = v26;
    WarBoardCommonEffectPerformance___ctor(v26, 0LL, v21, v55, v56, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( startCallback )
    {
      if ( !v27 )
        goto LABEL_37;
      p_StartCallback = (System_Delegate_o **)&v27->fields.StartCallback;
      v31 = System_Delegate__Combine(
              (System_Delegate_o *)v27->fields.StartCallback,
              (System_Delegate_o *)startCallback,
              0LL);
      v34 = (WarBoardTaskBase_TaskCallback_c *)v31;
      if ( v31 )
      {
        v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *p_StartCallback = v31;
        if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != v35 )
          goto LABEL_25;
      }
      else
      {
        *p_StartCallback = 0LL;
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->fields.StartCallback, (int32_t)v31, v32, v33);
    }
    else if ( !v27 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)&v27->fields.EndCallback;
    EndCallback = (System_Delegate_o *)v27->fields.EndCallback;
    v37 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v28, v29);
    WarBoardTaskBase_TaskCallback___ctor(
      v37,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v38 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v37, 0LL);
    v34 = (WarBoardTaskBase_TaskCallback_c *)v38;
    if ( !v38 )
    {
LABEL_26:
      startCallback->klass = v34;
      goto LABEL_27;
    }
    v41 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v38;
      if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == v41 )
      {
LABEL_27:
        sub_1B6406C((ServantStatusBattleListViewItem_o *)startCallback, (int32_t)v34, v39, v40);
        if ( taskList )
        {
          items = taskList->fields._items;
          v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v27,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v27;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v27, v42, v43);
            }
            return;
          }
        }
        else
        {
          v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
          if ( BreakEffectName )
          {
            v49 = BreakEffectName;
            v50 = sub_1B64204(v27, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v50 )
            {
              v54 = sub_1B64348(0LL);
              sub_1B641F0(v54, 0LL);
            }
            if ( !*((_DWORD *)v49 + 6) )
              sub_1B6432C(v50, v51);
            *((_QWORD *)v49 + 4) = v27;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)v27, v52, v53);
            if ( v48 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v48, 0, (WarBoardTaskBase_array *)v49, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_1B64324(BreakEffectName);
      }
    }
LABEL_25:
    sub_1B645E4(v34);
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointComponent__SetActive(
        WarBoardBreakPointComponent_o *this,
        bool active,
        bool force,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x21
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  if ( (byte_49F9F0D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, active);
    byte_49F9F0D = 1;
  }
  if ( this->fields._isActive_k__BackingField != active )
  {
    activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.activeObject;
      if ( !gameObject )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
    }
    deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, !active, 0LL);
LABEL_16:
        this->fields._isActive_k__BackingField = active;
        return;
      }
    }
LABEL_18:
    sub_1B64324(gameObject);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_49F9F0F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F0F = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v6 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v6 )
    {
      v9 = UnityEngine_Component__get_gameObject(v6, 0LL);
      TweenAlpha__Begin(v9, duration, 1.0, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(v6);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_49F9F0E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9F0E = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v6 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v6 )
    {
      v9 = UnityEngine_Component__get_gameObject(v6, 0LL);
      TweenAlpha__Begin(v9, duration, 0.0, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointComponent__SetChangeBreakPoint(
        WarBoardBreakPointComponent_o *this,
        UISprite_o *breakPoint,
        bool isActive,
        const MethodInfo *method)
{
  UIAtlas_o *mAtlas; // x20
  UISpriteData_o *Sprite; // x0

  if ( !breakPoint
    || (mAtlas = breakPoint->fields.mAtlas,
        this = (WarBoardBreakPointComponent_o *)WarBoardBreakPointComponent__GetImageName(
                                                  this,
                                                  isActive,
                                                  (const MethodInfo *)isActive),
        !mAtlas) )
  {
    sub_1B64324(this);
  }
  Sprite = UIAtlas__GetSprite(mAtlas, (System_String_o *)this, 0LL);
  if ( Sprite )
    UISprite__set_spriteName(breakPoint, Sprite->fields.name, 0LL);
}


void __fastcall WarBoardBreakPointComponent__ShowMasterRechargeEffect(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  WarBoardManager_o *v16; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  WarBoardCommonEffectPerformance_o *v24; // x0
  WarBoardCommonEffectPerformance_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v30; // x24
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  WarBoardTaskBase_TaskCallback_c *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  Il2CppObject *v41; // x19
  Il2CppObject *v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x0
  System_Nullable_Vector3__o v48; // 0:x3.16
  System_Nullable_Vector3__o v49; // 0:x5.16

  if ( (byte_49F9F0C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v10);
    sub_1B640C8(&WarBoardBreakPointComponent_TypeInfo, v11);
    sub_1B640C8(&WarBoardCommonEffectPerformance_TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v14);
    byte_49F9F0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v16 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  if ( !v16 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v16,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object__49003980(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    if ( Instance )
    {
      v19 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&Instance[2], (int32_t)this, v20, v21);
        v24 = (WarBoardCommonEffectPerformance_o *)sub_1B64314(WarBoardCommonEffectPerformance_TypeInfo, v22, v23);
        *(_QWORD *)&v48.fields.hasValue = 0LL;
        *(_QWORD *)&v48.fields.value.fields.y = 0LL;
        *(_QWORD *)&v49.fields.hasValue = 0LL;
        *(_QWORD *)&v49.fields.value.fields.y = 0LL;
        v25 = v24;
        WarBoardCommonEffectPerformance___ctor(v24, 0LL, v19, v48, v49, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
        if ( v25 )
        {
          p_StartCallback = (System_Delegate_o **)&v25->fields.StartCallback;
          StartCallback = (System_Delegate_o *)v25->fields.StartCallback;
          v30 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v27);
          WarBoardTaskBase_TaskCallback___ctor(
            v30,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0LL);
          v31 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v30, 0LL);
          if ( v31 )
          {
            v34 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*p_StartCallback = v31, (WarBoardTaskBase_TaskCallback_c *)v31->klass != v34) )
            {
              sub_1B645E4(v31);
              return;
            }
          }
          else
          {
            *p_StartCallback = 0LL;
          }
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.StartCallback, (int32_t)v31, v32, v33);
          if ( taskList )
          {
            items = taskList->fields._items;
            v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v25,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v40[4] = (Il2CppClass *)v25;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v25, v35, v36);
              }
              return;
            }
          }
          else
          {
            v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
            if ( Instance )
            {
              v42 = Instance;
              v43 = sub_1B64204(v25, Instance->klass->_1.element_class);
              if ( !v43 )
              {
                v47 = sub_1B64348(0LL);
                sub_1B641F0(v47, 0LL);
              }
              if ( !LODWORD(v42[1].monitor) )
                sub_1B6432C(v43, v44);
              v42[2].klass = (Il2CppClass *)v25;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42[2], (int32_t)v25, v45, v46);
              if ( v41 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v41, 0, (WarBoardTaskBase_array *)v42, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(Instance);
  }
}


void __fastcall WarBoardBreakPointComponent___OnBreak_b__26_0(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  WarBoardBreakPointComponent__SetActive(this, 0, 0, v2);
}


void __fastcall WarBoardBreakPointComponent___ShowMasterRechargeEffect_b__27_0(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  WarBoardBreakPointComponent__SetActive(this, 1, 0, v2);
}


bool __fastcall WarBoardBreakPointComponent__get_isActive(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._isActive_k__BackingField;
}


void __fastcall WarBoardBreakPointComponent__set_isActive(
        WarBoardBreakPointComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isActive_k__BackingField = value;
}