void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct WarBoardBreakPointComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  struct WarBoardBreakPointComponent_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  struct WarBoardBreakPointComponent_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  struct WarBoardBreakPointComponent_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  struct WarBoardBreakPointComponent_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  struct WarBoardBreakPointComponent_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  struct WarBoardBreakPointComponent_StaticFields *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct WarBoardBreakPointComponent_StaticFields *v46; // x0
  int32_t v47; // w1
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_4AFF862 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardBreakPointComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_8871/*"MasterPoint_recharge_effect_1"*/, v4);
    sub_1BC3008(&StringLiteral_17268/*"break_on_boss"*/, v5);
    sub_1BC3008(&StringLiteral_21256/*"master_gauge_off_{0}"*/, v6);
    sub_1BC3008(&StringLiteral_17266/*"break_off_boss"*/, v7);
    sub_1BC3008(&StringLiteral_17267/*"break_on"*/, v8);
    sub_1BC3008(&StringLiteral_17265/*"break_off"*/, v9);
    sub_1BC3008(&StringLiteral_24488/*"wall_gauge_{0}"*/, v10);
    sub_1BC3008(&StringLiteral_21257/*"master_gauge_{0}"*/, v11);
    sub_1BC3008(&StringLiteral_3194/*"BreakPoint_effect_{0}"*/, v12);
    sub_1BC3008(&StringLiteral_8870/*"MasterPoint_effect_{0}"*/, v13);
    byte_4AFF862 = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17267/*"break_on"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarBoardBreakPointComponent_TypeInfo->static_fields, StringLiteral_17267/*"break_on"*/, v2, v3);
  v14 = StringLiteral_17265/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17265/*"break_off"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->BreakPointOffImageName, v14, v16, v17);
  v18 = StringLiteral_17268/*"break_on_boss"*/;
  v19 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v19->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17268/*"break_on_boss"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->EnemyBreakPointOnImageName, v18, v20, v21);
  v22 = StringLiteral_17266/*"break_off_boss"*/;
  v23 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v23->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17266/*"break_off_boss"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->EnemyBreakPointOffImageName, v22, v24, v25);
  v26 = StringLiteral_3194/*"BreakPoint_effect_{0}"*/;
  v27 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v27->BreakPointEffectName = (struct System_String_o *)StringLiteral_3194/*"BreakPoint_effect_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v27->BreakPointEffectName, v26, v28, v29);
  v30 = StringLiteral_21257/*"master_gauge_{0}"*/;
  v31 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v31->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21257/*"master_gauge_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->MasterPointOnImageName, v30, v32, v33);
  v34 = StringLiteral_21256/*"master_gauge_off_{0}"*/;
  v35 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v35->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21256/*"master_gauge_off_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v35->MasterPointOffImageName, v34, v36, v37);
  v38 = StringLiteral_8870/*"MasterPoint_effect_{0}"*/;
  v39 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v39->MasterPointEffectName = (struct System_String_o *)StringLiteral_8870/*"MasterPoint_effect_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v39->MasterPointEffectName, v38, v40, v41);
  v42 = StringLiteral_8871/*"MasterPoint_recharge_effect_1"*/;
  v43 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v43->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8871/*"MasterPoint_recharge_effect_1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v43->MasterPointRechargeEffectName, v42, v44, v45);
  v46 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v47 = StringLiteral_24488/*"wall_gauge_{0}"*/;
  v46->wallPointImageName = (struct System_String_o *)StringLiteral_24488/*"wall_gauge_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v46->wallPointImageName, v47, v48, v49);
}


void __fastcall WarBoardBreakPointComponent___ctor(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetBreakEffectName(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  WarBoardBreakPointComponent_c *v7; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  System_Int32_c *v9; // x0
  int *v10; // x1
  System_String_o *MasterPointEffectName; // x19
  Il2CppObject *v12; // x0
  WarBoardBreakPointComponent_c *v14; // x0
  struct WarBoardBreakPointComponent_StaticFields *v15; // x8
  _BOOL4 isEnemyServant; // w9
  int v17; // w8
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFF85B & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&WarBoardBreakPointComponent_TypeInfo, v6);
    byte_4AFF85B = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v7 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v7 = WarBoardBreakPointComponent_TypeInfo;
    }
    static_fields = v7->static_fields;
    v9 = int_TypeInfo;
    v10 = &v18;
    MasterPointEffectName = static_fields->MasterPointEffectName;
    v18 = 1;
  }
  else
  {
    v14 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v14 = WarBoardBreakPointComponent_TypeInfo;
    }
    v15 = v14->static_fields;
    isEnemyServant = this->fields.isEnemyServant;
    v9 = int_TypeInfo;
    v10 = &v19;
    MasterPointEffectName = v15->BreakPointEffectName;
    if ( isEnemyServant )
      v17 = 2;
    else
      v17 = 1;
    v19 = v17;
  }
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(v9, v10, v2, v3, v4);
  return System_String__Format(MasterPointEffectName, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  WarBoardBreakPointComponent_c *v8; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v11; // x0
  Il2CppObject *v12; // x0
  WarBoardBreakPointComponent_c *v14; // x0
  _BOOL4 v15; // w19
  WarBoardBreakPointComponent_c *v16; // x0
  System_String_o **p_BreakPointOnImageName; // x8
  _BOOL4 isEnemyServant; // w19
  WarBoardBreakPointComponent_c *v19; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFF85A & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, isActiveSprite);
    sub_1BC3008(&WarBoardBreakPointComponent_TypeInfo, v7);
    byte_4AFF85A = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v14 = WarBoardBreakPointComponent_TypeInfo;
        if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v14 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v14->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      isEnemyServant = this->fields.isEnemyServant;
      v19 = WarBoardBreakPointComponent_TypeInfo;
      if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
        v19 = WarBoardBreakPointComponent_TypeInfo;
      }
      static_fields = v19->static_fields;
      if ( isEnemyServant )
        return static_fields->EnemyBreakPointOffImageName;
      else
        return static_fields->BreakPointOffImageName;
    }
LABEL_10:
    v11 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v11 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v11->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v8 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v8 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v8->static_fields->MasterPointOnImageName;
LABEL_13:
    v21 = objectColorNumber;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, method, v3, v4);
    return System_String__Format(MasterPointOffImageName, v12, 0LL);
  }
  v15 = this->fields.isEnemyServant;
  v16 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
    v16 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v16->static_fields->BreakPointOnImageName;
  if ( v15 )
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
  __int64 v15; // x1
  UIWidget_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *deactiveObject; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v21; // x3

  v11 = isMaster;
  v12 = isEnemyServant;
  v13 = isThirdForce;
  if ( (byte_4AFF85C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_4AFF85C = 1;
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
    v16 = (UIWidget_o *)this->fields.activeObject;
    if ( !v16 )
      goto LABEL_20;
    UIWidget__set_depth(v16, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v17);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v16 )
      goto LABEL_20;
    UIWidget__set_depth(v16, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v19);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseObject, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.baseObject;
    if ( v16 )
    {
      UIWidget__set_depth(v16, depth, 0LL);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v21);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BC3264(v16, v15);
  }
LABEL_19:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v21);
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
  __int64 v19; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  WarBoardCommonEffectPerformance_o *v25; // x0
  WarBoardCommonEffectPerformance_o *v26; // x22
  System_Delegate_o **p_StartCallback; // x23
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  WarBoardTaskBase_TaskCallback_c *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v34; // x24
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  WarBoardTaskBase_TaskCallback_c *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  Il2CppObject *v45; // x19
  char *v46; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  const MethodInfo *v50; // x3
  __int64 v51; // x0
  System_Nullable_Vector3__o v52; // 0:x3.16
  System_Nullable_Vector3__o v53; // 0:x5.16

  if ( (byte_4AFF85D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1BC3008(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1BC3008(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v12);
    sub_1BC3008(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_1BC3008(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    sub_1BC3008(&WarBoardTaskBase___TypeInfo, v15);
    byte_4AFF85D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v17);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_30E5604 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__50900816(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
    if ( !BreakEffectName )
      goto LABEL_37;
    v22 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(BreakEffectName + 32), (int32_t)this, v23, v24);
    v25 = (WarBoardCommonEffectPerformance_o *)sub_1BC3254(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v52.fields.hasValue = 0LL;
    *(_QWORD *)&v52.fields.value.fields.y = 0LL;
    *(_QWORD *)&v53.fields.hasValue = 0LL;
    *(_QWORD *)&v53.fields.value.fields.y = 0LL;
    v26 = v25;
    WarBoardCommonEffectPerformance___ctor(v25, 0LL, v22, v52, v53, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( startCallback )
    {
      if ( !v26 )
        goto LABEL_37;
      p_StartCallback = (System_Delegate_o **)&v26->fields.StartCallback;
      v28 = System_Delegate__Combine(
              (System_Delegate_o *)v26->fields.StartCallback,
              (System_Delegate_o *)startCallback,
              0LL);
      v31 = (WarBoardTaskBase_TaskCallback_c *)v28;
      if ( v28 )
      {
        v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *p_StartCallback = v28;
        if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != v32 )
          goto LABEL_25;
      }
      else
      {
        *p_StartCallback = 0LL;
      }
      sub_1BC2FAC((CGThumbnailListItem_o *)&v26->fields.StartCallback, (int32_t)v28, v29, v30);
    }
    else if ( !v26 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)&v26->fields.EndCallback;
    EndCallback = (System_Delegate_o *)v26->fields.EndCallback;
    v34 = (WarBoardTaskBase_TaskCallback_o *)sub_1BC3254(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v34,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v35 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v34, 0LL);
    v31 = (WarBoardTaskBase_TaskCallback_c *)v35;
    if ( !v35 )
    {
LABEL_26:
      startCallback->klass = v31;
      goto LABEL_27;
    }
    v38 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v35;
      if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == v38 )
      {
LABEL_27:
        sub_1BC2FAC((CGThumbnailListItem_o *)startCallback, (int32_t)v31, v36, v37);
        if ( taskList )
        {
          items = taskList->fields._items;
          v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v26,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v44[4] = (Il2CppClass *)v26;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v26, v39, v40);
            }
            return;
          }
        }
        else
        {
          v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1BC30B0(WarBoardTaskBase___TypeInfo, 1LL);
          if ( BreakEffectName )
          {
            v46 = BreakEffectName;
            v47 = sub_1BC3144(v26, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v47 )
            {
              v51 = sub_1BC3288();
              sub_1BC3130(v51, 0LL);
            }
            if ( !*((_DWORD *)v46 + 6) )
              sub_1BC326C(v47, v48, v49);
            *((_QWORD *)v46 + 4) = v26;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v26, v49, v50);
            if ( v45 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v45, 0, (WarBoardTaskBase_array *)v46, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_1BC3264(BreakEffectName, v19);
      }
    }
LABEL_25:
    sub_1BC3524(v31);
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
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  if ( (byte_4AFF85F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, active);
    byte_4AFF85F = 1;
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
    sub_1BC3264(gameObject, v7);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4AFF861 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFF861 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v7 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v7 )
    {
      v10 = UnityEngine_Component__get_gameObject(v7, 0LL);
      TweenAlpha__Begin(v10, duration, 1.0, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(v7, v6);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4AFF860 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFF860 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v7 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v7 )
    {
      v10 = UnityEngine_Component__get_gameObject(v7, 0LL);
      TweenAlpha__Begin(v10, duration, 0.0, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(v7, v6);
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
    sub_1BC3264(this, breakPoint);
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
  __int64 v16; // x1
  WarBoardManager_o *v17; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  WarBoardCommonEffectPerformance_o *v23; // x0
  WarBoardCommonEffectPerformance_o *v24; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v27; // x24
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  WarBoardTaskBase_TaskCallback_c *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  Il2CppObject *v38; // x19
  Il2CppObject *v39; // x20
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  const MethodInfo *v43; // x3
  __int64 v44; // x0
  System_Nullable_Vector3__o v45; // 0:x3.16
  System_Nullable_Vector3__o v46; // 0:x5.16

  if ( (byte_4AFF85E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1BC3008(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1BC3008(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v10);
    sub_1BC3008(&WarBoardBreakPointComponent_TypeInfo, v11);
    sub_1BC3008(&WarBoardCommonEffectPerformance_TypeInfo, v12);
    sub_1BC3008(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    sub_1BC3008(&WarBoardTaskBase___TypeInfo, v14);
    byte_4AFF85E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  if ( !v17 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v17,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_30E5604 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object__50900816(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
    if ( Instance )
    {
      v20 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1BC2FAC((CGThumbnailListItem_o *)&Instance[2], (int32_t)this, v21, v22);
        v23 = (WarBoardCommonEffectPerformance_o *)sub_1BC3254(WarBoardCommonEffectPerformance_TypeInfo);
        *(_QWORD *)&v45.fields.hasValue = 0LL;
        *(_QWORD *)&v45.fields.value.fields.y = 0LL;
        *(_QWORD *)&v46.fields.hasValue = 0LL;
        *(_QWORD *)&v46.fields.value.fields.y = 0LL;
        v24 = v23;
        WarBoardCommonEffectPerformance___ctor(v23, 0LL, v20, v45, v46, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
        if ( v24 )
        {
          p_StartCallback = (System_Delegate_o **)&v24->fields.StartCallback;
          StartCallback = (System_Delegate_o *)v24->fields.StartCallback;
          v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1BC3254(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v27,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0LL);
          v28 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v27, 0LL);
          if ( v28 )
          {
            v31 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*p_StartCallback = v28, (WarBoardTaskBase_TaskCallback_c *)v28->klass != v31) )
            {
              sub_1BC3524(v28);
              return;
            }
          }
          else
          {
            *p_StartCallback = 0LL;
          }
          sub_1BC2FAC((CGThumbnailListItem_o *)&v24->fields.StartCallback, (int32_t)v28, v29, v30);
          if ( taskList )
          {
            items = taskList->fields._items;
            v35 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v37[4] = (Il2CppClass *)v24;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v24, v32, v33);
              }
              return;
            }
          }
          else
          {
            v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1BC30B0(WarBoardTaskBase___TypeInfo, 1LL);
            if ( Instance )
            {
              v39 = Instance;
              v40 = sub_1BC3144(v24, Instance->klass->_1.element_class);
              if ( !v40 )
              {
                v44 = sub_1BC3288();
                sub_1BC3130(v44, 0LL);
              }
              if ( !LODWORD(v39[1].monitor) )
                sub_1BC326C(v40, v41, v42);
              v39[2].klass = (Il2CppClass *)v24;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v39[2], (int32_t)v24, v42, v43);
              if ( v38 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v38, 0, (WarBoardTaskBase_array *)v39, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BC3264(Instance, v16);
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