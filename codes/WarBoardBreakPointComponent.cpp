void WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct WarBoardBreakPointComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct WarBoardBreakPointComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct WarBoardBreakPointComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct WarBoardBreakPointComponent_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct WarBoardBreakPointComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct WarBoardBreakPointComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct WarBoardBreakPointComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct WarBoardBreakPointComponent_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4C35232 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardBreakPointComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_8952/*"MasterPoint_recharge_effect_1"*/);
    sub_1C32C20(&StringLiteral_17417/*"break_on_boss"*/);
    sub_1C32C20(&StringLiteral_21464/*"master_gauge_off_{0}"*/);
    sub_1C32C20(&StringLiteral_17415/*"break_off_boss"*/);
    sub_1C32C20(&StringLiteral_17416/*"break_on"*/);
    sub_1C32C20(&StringLiteral_17414/*"break_off"*/);
    sub_1C32C20(&StringLiteral_24722/*"wall_gauge_{0}"*/);
    sub_1C32C20(&StringLiteral_21465/*"master_gauge_{0}"*/);
    sub_1C32C20(&StringLiteral_3221/*"BreakPoint_effect_{0}"*/);
    sub_1C32C20(&StringLiteral_8951/*"MasterPoint_effect_{0}"*/);
    byte_4C35232 = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17416/*"break_on"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardBreakPointComponent_TypeInfo->static_fields, StringLiteral_17416/*"break_on"*/, v1, v2);
  v3 = StringLiteral_17414/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17414/*"break_off"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->BreakPointOffImageName, v3, v5, v6);
  v7 = StringLiteral_17417/*"break_on_boss"*/;
  v8 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v8->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17417/*"break_on_boss"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->EnemyBreakPointOnImageName, v7, v9, v10);
  v11 = StringLiteral_17415/*"break_off_boss"*/;
  v12 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v12->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17415/*"break_off_boss"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->EnemyBreakPointOffImageName, v11, v13, v14);
  v15 = StringLiteral_3221/*"BreakPoint_effect_{0}"*/;
  v16 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v16->BreakPointEffectName = (struct System_String_o *)StringLiteral_3221/*"BreakPoint_effect_{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->BreakPointEffectName, v15, v17, v18);
  v19 = StringLiteral_21465/*"master_gauge_{0}"*/;
  v20 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v20->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21465/*"master_gauge_{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->MasterPointOnImageName, v19, v21, v22);
  v23 = StringLiteral_21464/*"master_gauge_off_{0}"*/;
  v24 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v24->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21464/*"master_gauge_off_{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v24->MasterPointOffImageName, v23, v25, v26);
  v27 = StringLiteral_8951/*"MasterPoint_effect_{0}"*/;
  v28 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v28->MasterPointEffectName = (struct System_String_o *)StringLiteral_8951/*"MasterPoint_effect_{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v28->MasterPointEffectName, v27, v29, v30);
  v31 = StringLiteral_8952/*"MasterPoint_recharge_effect_1"*/;
  v32 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v32->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8952/*"MasterPoint_recharge_effect_1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->MasterPointRechargeEffectName, v31, v33, v34);
  v35 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v36 = StringLiteral_24722/*"wall_gauge_{0}"*/;
  v35->wallPointImageName = (struct System_String_o *)StringLiteral_24722/*"wall_gauge_{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v35->wallPointImageName, v36, v37, v38);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  WarBoardBreakPointComponent_c *v9; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  System_Int32_c *v11; // x0
  int *v12; // x1
  System_String_o *MasterPointEffectName; // x19
  Il2CppObject *v14; // x0
  WarBoardBreakPointComponent_c *v16; // x0
  struct WarBoardBreakPointComponent_StaticFields *v17; // x8
  _BOOL4 isEnemyServant; // w9
  int v19; // w8
  int v20; // [xsp+8h] [xbp-28h] BYREF
  int v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3522B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&WarBoardBreakPointComponent_TypeInfo);
    byte_4C3522B = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v9 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v9 = WarBoardBreakPointComponent_TypeInfo;
    }
    static_fields = v9->static_fields;
    v11 = int_TypeInfo;
    v12 = &v20;
    MasterPointEffectName = static_fields->MasterPointEffectName;
    v20 = 1;
  }
  else
  {
    v16 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v16 = WarBoardBreakPointComponent_TypeInfo;
    }
    v17 = v16->static_fields;
    isEnemyServant = this->fields.isEnemyServant;
    v11 = int_TypeInfo;
    v12 = &v21;
    MasterPointEffectName = v17->BreakPointEffectName;
    if ( isEnemyServant )
      v19 = 2;
    else
      v19 = 1;
    v21 = v19;
  }
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(v11, v12, v2, v3, v4, v5, v6, v7);
  return System_String__Format(MasterPointEffectName, v14, 0);
}


System_String_o *WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  WarBoardBreakPointComponent_c *v10; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v13; // x0
  Il2CppObject *v14; // x0
  WarBoardBreakPointComponent_c *v16; // x0
  _BOOL4 v17; // w19
  WarBoardBreakPointComponent_c *v18; // x0
  System_String_o **p_BreakPointOnImageName; // x8
  _BOOL4 isEnemyServant; // w19
  WarBoardBreakPointComponent_c *v21; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3522A & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&WarBoardBreakPointComponent_TypeInfo);
    byte_4C3522A = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v16 = WarBoardBreakPointComponent_TypeInfo;
        if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v16 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v16->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      isEnemyServant = this->fields.isEnemyServant;
      v21 = WarBoardBreakPointComponent_TypeInfo;
      if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
        v21 = WarBoardBreakPointComponent_TypeInfo;
      }
      static_fields = v21->static_fields;
      if ( isEnemyServant )
        return static_fields->EnemyBreakPointOffImageName;
      else
        return static_fields->BreakPointOffImageName;
    }
LABEL_10:
    v13 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v13 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v13->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v10 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v10 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v10->static_fields->MasterPointOnImageName;
LABEL_13:
    v23 = objectColorNumber;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, method, v3, v4, v5, v6, v7);
    return System_String__Format(MasterPointOffImageName, v14, 0);
  }
  v17 = this->fields.isEnemyServant;
  v18 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
    v18 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v18->static_fields->BreakPointOnImageName;
  if ( v17 )
    return p_BreakPointOnImageName[2];
  else
    return *p_BreakPointOnImageName;
}


void WarBoardBreakPointComponent__Initialize(
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
  if ( (byte_4C3522C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3522C = 1;
  }
  this->fields.isMaster = v11;
  this->fields.isEnemyServant = v12;
  this->fields.isThirdForce = v13;
  this->fields.objectColorNumber = number;
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
  {
    v15 = (UIWidget_o *)this->fields.activeObject;
    if ( !v15 )
      goto LABEL_20;
    UIWidget__set_depth(v15, depth + 1, 0);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v16);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
  {
    v15 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v15 )
      goto LABEL_20;
    UIWidget__set_depth(v15, depth + 1, 0);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v18);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseObject, 0, 0) )
  {
    v15 = (UIWidget_o *)this->fields.baseObject;
    if ( v15 )
    {
      UIWidget__set_depth(v15, depth, 0);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v20);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C32E7C(v15);
  }
LABEL_19:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v20);
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
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  WarBoardCommonEffectPerformance_o *v15; // x0
  WarBoardCommonEffectPerformance_o *v16; // x22
  System_Delegate_o **p_StartCallback; // x23
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  WarBoardTaskBase_TaskCallback_c *v21; // x8
  WarBoardTaskBase_TaskCallback_c *v22; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v24; // x24
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  WarBoardTaskBase_TaskCallback_c *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *v35; // x19
  char *v36; // x20
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x0
  System_Nullable_Vector3__o v41; // 0:x3.16
  System_Nullable_Vector3__o v42; // 0:x5.16

  if ( (byte_4C3522D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__);
    sub_1C32C20(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C32C20(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C3522D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v8);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_31C24D4 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__51812484(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    if ( !BreakEffectName )
      goto LABEL_37;
    v12 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1C32BC4((CGThumbnailListItem_o *)(BreakEffectName + 32), (int32_t)this, v13, v14);
    v15 = (WarBoardCommonEffectPerformance_o *)sub_1C32E6C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v41.fields.hasValue = 0;
    *(_QWORD *)&v41.fields.value.fields.y = 0;
    *(_QWORD *)&v42.fields.hasValue = 0;
    *(_QWORD *)&v42.fields.value.fields.y = 0;
    v16 = v15;
    WarBoardCommonEffectPerformance___ctor(v15, 0, v12, v41, v42, (System_Nullable_Vector3__o)0, 0, 0, 1, 0);
    if ( startCallback )
    {
      if ( !v16 )
        goto LABEL_37;
      p_StartCallback = (System_Delegate_o **)&v16->fields.StartCallback;
      v18 = System_Delegate__Combine(
              (System_Delegate_o *)v16->fields.StartCallback,
              (System_Delegate_o *)startCallback,
              0);
      v21 = (WarBoardTaskBase_TaskCallback_c *)v18;
      if ( v18 )
      {
        v22 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *p_StartCallback = v18;
        if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != v22 )
          goto LABEL_25;
      }
      else
      {
        *p_StartCallback = 0;
      }
      sub_1C32BC4((CGThumbnailListItem_o *)&v16->fields.StartCallback, (int32_t)v18, v19, v20);
    }
    else if ( !v16 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)&v16->fields.EndCallback;
    EndCallback = (System_Delegate_o *)v16->fields.EndCallback;
    v24 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v24,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0);
    v25 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v24, 0);
    v21 = (WarBoardTaskBase_TaskCallback_c *)v25;
    if ( !v25 )
    {
LABEL_26:
      startCallback->klass = v21;
      goto LABEL_27;
    }
    v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v25;
      if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass == v28 )
      {
LABEL_27:
        sub_1C32BC4((CGThumbnailListItem_o *)startCallback, (int32_t)v21, v26, v27);
        if ( taskList )
        {
          items = taskList->fields._items;
          v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v16,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v16;
              sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v16, v29, v30);
            }
            return;
          }
        }
        else
        {
          v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
          if ( BreakEffectName )
          {
            v36 = BreakEffectName;
            v37 = sub_1C32D5C(v16, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v37 )
            {
              v40 = sub_1C32EA0();
              sub_1C32D48(v40, 0);
            }
            if ( !*((_DWORD *)v36 + 6) )
              sub_1C32E84(v37);
            *((_QWORD *)v36 + 4) = v16;
            sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v16, v38, v39);
            if ( v35 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v35, 0, (WarBoardTaskBase_array *)v36, 0);
              return;
            }
          }
        }
LABEL_37:
        sub_1C32E7C(BreakEffectName);
      }
    }
LABEL_25:
    sub_1C3313C(v21);
    goto LABEL_26;
  }
}


void WarBoardBreakPointComponent__SetActive(
        WarBoardBreakPointComponent_o *this,
        bool active,
        bool force,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x21
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  if ( (byte_4C3522F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3522F = 1;
  }
  if ( this->fields._isActive_k__BackingField != active )
  {
    activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(gameObject);
  }
}


void WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4C35231 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35231 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v6 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v6 )
    {
      v9 = UnityEngine_Component__get_gameObject(v6, 0);
      TweenAlpha__Begin(v9, duration, 1.0, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v6);
  }
}


void WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4C35230 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35230 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v6 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v6 )
    {
      v9 = UnityEngine_Component__get_gameObject(v6, 0);
      TweenAlpha__Begin(v9, duration, 0.0, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v6);
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
    sub_1C32E7C(this);
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
  WarBoardManager_o *v6; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  WarBoardCommonEffectPerformance_o *v12; // x0
  WarBoardCommonEffectPerformance_o *v13; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v16; // x24
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  WarBoardTaskBase_TaskCallback_c *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  Il2CppObject *v27; // x19
  Il2CppObject *v28; // x20
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  System_Nullable_Vector3__o v33; // 0:x3.16
  System_Nullable_Vector3__o v34; // 0:x5.16

  if ( (byte_4C3522E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__);
    sub_1C32C20(&WarBoardBreakPointComponent_TypeInfo);
    sub_1C32C20(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C32C20(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C3522E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v6 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  if ( !v6 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v6,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_31C24D4 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object__51812484(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    if ( Instance )
    {
      v9 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1C32BC4((CGThumbnailListItem_o *)&Instance[2], (int32_t)this, v10, v11);
        v12 = (WarBoardCommonEffectPerformance_o *)sub_1C32E6C(WarBoardCommonEffectPerformance_TypeInfo);
        *(_QWORD *)&v33.fields.hasValue = 0;
        *(_QWORD *)&v33.fields.value.fields.y = 0;
        *(_QWORD *)&v34.fields.hasValue = 0;
        *(_QWORD *)&v34.fields.value.fields.y = 0;
        v13 = v12;
        WarBoardCommonEffectPerformance___ctor(v12, 0, v9, v33, v34, (System_Nullable_Vector3__o)0, 0, 0, 1, 0);
        if ( v13 )
        {
          p_StartCallback = (System_Delegate_o **)&v13->fields.StartCallback;
          StartCallback = (System_Delegate_o *)v13->fields.StartCallback;
          v16 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v16,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0);
          v17 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v16, 0);
          if ( v17 )
          {
            v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*p_StartCallback = v17, (WarBoardTaskBase_TaskCallback_c *)v17->klass != v20) )
            {
              sub_1C3313C(v17);
              return;
            }
          }
          else
          {
            *p_StartCallback = 0;
          }
          sub_1C32BC4((CGThumbnailListItem_o *)&v13->fields.StartCallback, (int32_t)v17, v18, v19);
          if ( taskList )
          {
            items = taskList->fields._items;
            v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v13,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v13;
                sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v13, v21, v22);
              }
              return;
            }
          }
          else
          {
            v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
            if ( Instance )
            {
              v28 = Instance;
              v29 = sub_1C32D5C(v13, Instance->klass->_1.element_class);
              if ( !v29 )
              {
                v32 = sub_1C32EA0();
                sub_1C32D48(v32, 0);
              }
              if ( !LODWORD(v28[1].monitor) )
                sub_1C32E84(v29);
              v28[2].klass = (Il2CppClass *)v13;
              sub_1C32BC4((CGThumbnailListItem_o *)&v28[2], (int32_t)v13, v30, v31);
              if ( v27 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v27, 0, (WarBoardTaskBase_array *)v28, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C32E7C(Instance);
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