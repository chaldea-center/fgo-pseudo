void WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct WarBoardBreakPointComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct WarBoardBreakPointComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct WarBoardBreakPointComponent_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct WarBoardBreakPointComponent_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct WarBoardBreakPointComponent_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct WarBoardBreakPointComponent_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct WarBoardBreakPointComponent_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct WarBoardBreakPointComponent_StaticFields *v72; // x0
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7

  if ( (byte_5935E2D & 1) == 0 )
  {
    sub_21FFC50(&WarBoardBreakPointComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_9308/*"MasterPoint_recharge_effect_1"*/);
    sub_21FFC50(&StringLiteral_18140/*"break_on_boss"*/);
    sub_21FFC50(&StringLiteral_22518/*"master_gauge_off_{0}"*/);
    sub_21FFC50(&StringLiteral_18138/*"break_off_boss"*/);
    sub_21FFC50(&StringLiteral_18139/*"break_on"*/);
    sub_21FFC50(&StringLiteral_18137/*"break_off"*/);
    sub_21FFC50(&StringLiteral_26049/*"wall_gauge_{0}"*/);
    sub_21FFC50(&StringLiteral_22519/*"master_gauge_{0}"*/);
    sub_21FFC50(&StringLiteral_3345/*"BreakPoint_effect_{0}"*/);
    sub_21FFC50(&StringLiteral_9307/*"MasterPoint_effect_{0}"*/);
    byte_5935E2D = 1;
  }
  v7 = StringLiteral_18139/*"break_on"*/;
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_18139/*"break_on"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardBreakPointComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18137/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_18137/*"break_off"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BreakPointOffImageName,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_18140/*"break_on_boss"*/;
  v17 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v17->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_18140/*"break_on_boss"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->EnemyBreakPointOnImageName, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_18138/*"break_off_boss"*/;
  v25 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v25->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_18138/*"break_off_boss"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->EnemyBreakPointOffImageName, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_3345/*"BreakPoint_effect_{0}"*/;
  v33 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v33->BreakPointEffectName = (struct System_String_o *)StringLiteral_3345/*"BreakPoint_effect_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->BreakPointEffectName, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_22519/*"master_gauge_{0}"*/;
  v41 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v41->MasterPointOnImageName = (struct System_String_o *)StringLiteral_22519/*"master_gauge_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->MasterPointOnImageName, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_22518/*"master_gauge_off_{0}"*/;
  v49 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v49->MasterPointOffImageName = (struct System_String_o *)StringLiteral_22518/*"master_gauge_off_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->MasterPointOffImageName, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_9307/*"MasterPoint_effect_{0}"*/;
  v57 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v57->MasterPointEffectName = (struct System_String_o *)StringLiteral_9307/*"MasterPoint_effect_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v57->MasterPointEffectName, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_9308/*"MasterPoint_recharge_effect_1"*/;
  v65 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v65->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_9308/*"MasterPoint_recharge_effect_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v65->MasterPointRechargeEffectName,
    v64,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v73 = StringLiteral_26049/*"wall_gauge_{0}"*/;
  v72->wallPointImageName = (struct System_String_o *)StringLiteral_26049/*"wall_gauge_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->wallPointImageName, v73, v74, v75, v76, v77, v78, v79);
}


void WarBoardBreakPointComponent___ctor(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *WarBoardBreakPointComponent__GetBreakEffectName(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardBreakPointComponent_c *v4; // x0
  int *v5; // x1
  System_String_o *MasterPointEffectName; // x19
  __int64 v7; // x0
  Il2CppObject *v8; // x0
  WarBoardBreakPointComponent_c *v10; // x0
  bool v11; // zf
  int v12; // w8
  int v13; // [xsp+8h] [xbp-18h] BYREF
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5935E26 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardBreakPointComponent_TypeInfo);
    byte_5935E26 = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v4 = WarBoardBreakPointComponent_TypeInfo;
    if ( !*(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, method, v2);
      v4 = WarBoardBreakPointComponent_TypeInfo;
    }
    v5 = &v13;
    MasterPointEffectName = v4->static_fields->MasterPointEffectName;
    v7 = qword_594C070;
    v13 = 1;
  }
  else
  {
    v10 = WarBoardBreakPointComponent_TypeInfo;
    if ( !*(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, method, v2);
      v10 = WarBoardBreakPointComponent_TypeInfo;
    }
    v5 = &v14;
    v11 = !this->fields.isEnemyServant;
    MasterPointEffectName = v10->static_fields->BreakPointEffectName;
    if ( v11 )
      v12 = 1;
    else
      v12 = 2;
    v7 = qword_594C070;
    v14 = v12;
  }
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(v7, v5);
  return System_String__Format(MasterPointEffectName, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  WarBoardBreakPointComponent_c *v5; // x0
  int32_t objectColorNumber; // w10
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v8; // x0
  Il2CppObject *v9; // x0
  WarBoardBreakPointComponent_c *v11; // x0
  WarBoardBreakPointComponent_c *v12; // x0
  int v13; // w8
  WarBoardBreakPointComponent_c *v14; // x0
  int v15; // w8
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5935E25 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardBreakPointComponent_TypeInfo);
    byte_5935E25 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v11 = WarBoardBreakPointComponent_TypeInfo;
        if ( !*(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
          v11 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v11->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      v14 = WarBoardBreakPointComponent_TypeInfo;
      v15 = *(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1);
      if ( this->fields.isEnemyServant )
      {
        if ( !v15 )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
          v14 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v14->static_fields->EnemyBreakPointOffImageName;
      }
      else
      {
        if ( !v15 )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
          v14 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v14->static_fields->BreakPointOffImageName;
      }
    }
LABEL_10:
    v8 = WarBoardBreakPointComponent_TypeInfo;
    if ( !*(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
      v8 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v8->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v5 = WarBoardBreakPointComponent_TypeInfo;
    if ( !*(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
      v5 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v5->static_fields->MasterPointOnImageName;
LABEL_13:
    v16 = objectColorNumber;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
    return System_String__Format(MasterPointOffImageName, v9, 0);
  }
  v12 = WarBoardBreakPointComponent_TypeInfo;
  v13 = *(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isEnemyServant )
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
      v12 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v12->static_fields->EnemyBreakPointOnImageName;
  }
  else
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite, method);
      v12 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v12->static_fields->BreakPointOnImageName;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBreakPointComponent__Initialize(
        WarBoardBreakPointComponent_o *this,
        int32_t depth,
        int32_t number,
        bool isMaster,
        bool isEnemyServant,
        bool isThirdForce,
        const MethodInfo *method)
{
  bool v11; // w25
  bool v12; // w26
  bool v13; // w23
  UnityEngine_Object_c *v14; // x0
  UnityEngine_Object_o *activeObject; // x23
  int v16; // w8
  __int64 v17; // x1
  __int64 v18; // x2
  UIWidget_o *v19; // x0
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *deactiveObject; // x22
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v25; // x3

  v11 = isMaster;
  v12 = isEnemyServant;
  v13 = isThirdForce;
  if ( (byte_5935E27 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E27 = 1;
  }
  v14 = UnityEngine_Object_TypeInfo;
  this->fields.isThirdForce = v13;
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  this->fields.isMaster = v11;
  v16 = *(&v14->_2.cctor_finished + 1);
  this->fields.isEnemyServant = v12;
  this->fields.objectColorNumber = number;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(v14, *(_QWORD *)&depth, *(_QWORD *)&number);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
  {
    v19 = (UIWidget_o *)this->fields.activeObject;
    if ( !v19 )
      goto LABEL_20;
    UIWidget__set_depth(v19, depth + 1, 0);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v20);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
  {
    v19 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v19 )
      goto LABEL_20;
    UIWidget__set_depth(v19, depth + 1, 0);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v23);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v22);
  if ( UnityEngine_Object__op_Inequality(baseObject, 0, 0) )
  {
    v19 = (UIWidget_o *)this->fields.baseObject;
    if ( v19 )
    {
      UIWidget__set_depth(v19, depth, 0);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v25);
      goto LABEL_19;
    }
LABEL_20:
    sub_21FFECC(v19, v17);
  }
LABEL_19:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v25);
}


void WarBoardBreakPointComponent__OnBreak(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  const MethodInfo *v8; // x1
  char *BreakEffectName; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *CommonEffectAsset_object; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardCommonEffectPerformance_o *v24; // x0
  WarBoardCommonEffectPerformance_o *v25; // x22
  System_Delegate_o **p_StartCallback; // x23
  System_Delegate_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Delegate_o *v34; // x8
  WarBoardTaskBase_TaskCallback_c *v35; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  Il2CppObject *v53; // x19
  char *v54; // x20
  __int64 v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x0
  System_Nullable_Vector3__o v64; // 0:x3.16
  System_Nullable_Vector3__o v65; // 0:x5.16

  if ( (byte_5935E28 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__);
    sub_21FFC50(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_21FFC50(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5935E28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v8);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_39E28E0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__59506996(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    if ( !BreakEffectName )
      goto LABEL_37;
    v17 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(BreakEffectName + 32), (int32_t)this, v18, v19, v20, v21, v22, v23);
    v24 = (WarBoardCommonEffectPerformance_o *)sub_21FFEBC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v64.fields.hasValue = 0;
    *(_QWORD *)&v64.fields.value.fields.y = 0;
    *(_QWORD *)&v65.fields.hasValue = 0;
    *(_QWORD *)&v65.fields.value.fields.y = 0;
    v25 = v24;
    WarBoardCommonEffectPerformance___ctor(v24, 0, v17, v64, v65, (System_Nullable_Vector3__o)0, 0, 0, 1, 0);
    if ( startCallback )
    {
      if ( !v25 )
        goto LABEL_37;
      p_StartCallback = (System_Delegate_o **)&v25->fields.StartCallback;
      v27 = System_Delegate__Combine(
              (System_Delegate_o *)v25->fields.StartCallback,
              (System_Delegate_o *)startCallback,
              0);
      v34 = v27;
      if ( v27 )
      {
        v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *p_StartCallback = v27;
        if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass != v35 )
          goto LABEL_25;
      }
      else
      {
        *p_StartCallback = 0;
      }
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v25->fields.StartCallback,
        (int32_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    else if ( !v25 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)&v25->fields.EndCallback;
    EndCallback = (System_Delegate_o *)v25->fields.EndCallback;
    v37 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v37,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0);
    v38 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v37, 0);
    v34 = v38;
    if ( !v38 )
    {
LABEL_26:
      startCallback->klass = 0;
      goto LABEL_27;
    }
    v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v38;
      if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass == v35 )
      {
LABEL_27:
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)startCallback, (int32_t)v34, v28, v29, v39, v40, v41, v42);
        if ( taskList )
        {
          items = taskList->fields._items;
          v50 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v25,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v52[4] = (Il2CppClass *)v25;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v25, v43, v44, v45, v46, v47, v48);
            }
            return;
          }
        }
        else
        {
          v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
          if ( BreakEffectName )
          {
            v54 = BreakEffectName;
            v55 = sub_21FFDA4(v25, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v55 )
            {
              v63 = sub_21FFEF0(0, v56);
              sub_21FFD90(v63, 0);
            }
            if ( !*((_DWORD *)v54 + 6) )
              sub_21FFED4(v55);
            *((_QWORD *)v54 + 4) = v25;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 32), (int32_t)v25, v57, v58, v59, v60, v61, v62);
            if ( v53 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v53, 0, (WarBoardTaskBase_array *)v54, 0);
              return;
            }
          }
        }
LABEL_37:
        sub_21FFECC(BreakEffectName, v10);
      }
    }
LABEL_25:
    sub_220024C(v34, v35, v28, v29);
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBreakPointComponent__SetActive(
        WarBoardBreakPointComponent_o *this,
        bool active,
        bool force,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  if ( (byte_5935E2A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E2A = 1;
  }
  if ( this->fields._isActive_k__BackingField != active )
  {
    activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active, force);
    if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.activeObject;
      if ( !gameObject )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
    }
    deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, !active, 0);
LABEL_16:
        this->fields._isActive_k__BackingField = active;
        return;
      }
    }
LABEL_18:
    sub_21FFECC(gameObject, v7);
  }
}


void WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *activeObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_5935E2C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E2C = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v9 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v9 )
    {
      v12 = UnityEngine_Component__get_gameObject(v9, 0);
      TweenAlpha__Begin(v12, duration, 1.0, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v9, v7);
  }
}


void WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *activeObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_5935E2B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E2B = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v9 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v9 )
    {
      v12 = UnityEngine_Component__get_gameObject(v9, 0);
      TweenAlpha__Begin(v12, duration, 0.0, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v9, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBreakPointComponent__SetChangeBreakPoint(
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
    sub_21FFECC(this, breakPoint);
  }
  Sprite = UIAtlas__GetSprite(mAtlas, (System_String_o *)this, 0);
  if ( Sprite )
    UISprite__set_spriteName(breakPoint, Sprite->fields.name, 0);
}


void WarBoardBreakPointComponent__ShowMasterRechargeEffect(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardManager_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *CommonEffectAsset_object; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  WarBoardCommonEffectPerformance_o *v22; // x0
  WarBoardCommonEffectPerformance_o *v23; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v26; // x24
  System_Delegate_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  WarBoardTaskBase_TaskCallback_c *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  Il2CppObject *v45; // x19
  Il2CppObject *v46; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x0
  System_Nullable_Vector3__o v56; // 0:x3.16
  System_Nullable_Vector3__o v57; // 0:x5.16

  if ( (byte_5935E29 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__);
    sub_21FFC50(&WarBoardBreakPointComponent_TypeInfo);
    sub_21FFC50(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_21FFC50(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5935E29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v8 = (WarBoardManager_o *)Instance;
  if ( !*(&WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, v6, v7);
  if ( !v8 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v8,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_39E28E0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    Instance = UnityEngine_Object__Instantiate_object__59506996(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    if ( Instance )
    {
      v15 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Instance[2], (int32_t)this, v16, v17, v18, v19, v20, v21);
        v22 = (WarBoardCommonEffectPerformance_o *)sub_21FFEBC(WarBoardCommonEffectPerformance_TypeInfo);
        *(_QWORD *)&v56.fields.hasValue = 0;
        *(_QWORD *)&v56.fields.value.fields.y = 0;
        *(_QWORD *)&v57.fields.hasValue = 0;
        *(_QWORD *)&v57.fields.value.fields.y = 0;
        v23 = v22;
        WarBoardCommonEffectPerformance___ctor(v22, 0, v15, v56, v57, (System_Nullable_Vector3__o)0, 0, 0, 1, 0);
        if ( v23 )
        {
          p_StartCallback = (System_Delegate_o **)&v23->fields.StartCallback;
          StartCallback = (System_Delegate_o *)v23->fields.StartCallback;
          v26 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v26,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0);
          v27 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v26, 0);
          if ( v27 )
          {
            v34 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*p_StartCallback = v27, (WarBoardTaskBase_TaskCallback_c *)v27->klass != v34) )
            {
              sub_220024C(v27, v34, v28, v29);
              return;
            }
          }
          else
          {
            *p_StartCallback = 0;
          }
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v23->fields.StartCallback,
            (int32_t)v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          if ( taskList )
          {
            items = taskList->fields._items;
            v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v23;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v23, v35, v36, v37, v38, v39, v40);
              }
              return;
            }
          }
          else
          {
            v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
            if ( Instance )
            {
              v46 = Instance;
              v47 = sub_21FFDA4(v23, Instance->klass->_1.element_class);
              if ( !v47 )
              {
                v55 = sub_21FFEF0(0, v48);
                sub_21FFD90(v55, 0);
              }
              if ( !LODWORD(v46[1].monitor) )
                sub_21FFED4(v47);
              v46[2].klass = (Il2CppClass *)v23;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46[2], (int32_t)v23, v49, v50, v51, v52, v53, v54);
              if ( v45 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v45, 0, (WarBoardTaskBase_array *)v46, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_21FFECC(Instance, v6);
  }
}


void WarBoardBreakPointComponent___OnBreak_b__26_0(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  WarBoardBreakPointComponent__SetActive(this, 0, 0, v2);
}


void WarBoardBreakPointComponent___ShowMasterRechargeEffect_b__27_0(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  WarBoardBreakPointComponent__SetActive(this, 1, 0, v2);
}


bool WarBoardBreakPointComponent__get_isActive(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  return this->fields._isActive_k__BackingField;
}


void WarBoardBreakPointComponent__set_isActive(
        WarBoardBreakPointComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isActive_k__BackingField = value;
}