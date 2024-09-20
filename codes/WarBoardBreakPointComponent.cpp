void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct WarBoardBreakPointComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct WarBoardBreakPointComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct WarBoardBreakPointComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct WarBoardBreakPointComponent_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct WarBoardBreakPointComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct WarBoardBreakPointComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct WarBoardBreakPointComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct WarBoardBreakPointComponent_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A58C28 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardBreakPointComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_8910/*"MasterPoint_recharge_effect_1"*/);
    sub_1B885B0(&StringLiteral_17449/*"break_on_boss"*/);
    sub_1B885B0(&StringLiteral_21317/*"master_gauge_off_{0}"*/);
    sub_1B885B0(&StringLiteral_17447/*"break_off_boss"*/);
    sub_1B885B0(&StringLiteral_17448/*"break_on"*/);
    sub_1B885B0(&StringLiteral_17446/*"break_off"*/);
    sub_1B885B0(&StringLiteral_24608/*"wall_gauge_{0}"*/);
    sub_1B885B0(&StringLiteral_21318/*"master_gauge_{0}"*/);
    sub_1B885B0(&StringLiteral_3336/*"BreakPoint_effect_{0}"*/);
    sub_1B885B0(&StringLiteral_8909/*"MasterPoint_effect_{0}"*/);
    byte_4A58C28 = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17448/*"break_on"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardBreakPointComponent_TypeInfo->static_fields,
    StringLiteral_17448/*"break_on"*/,
    v1,
    v2);
  v3 = StringLiteral_17446/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17446/*"break_off"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->BreakPointOffImageName, v3, v5, v6);
  v7 = StringLiteral_17449/*"break_on_boss"*/;
  v8 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v8->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17449/*"break_on_boss"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->EnemyBreakPointOnImageName, v7, v9, v10);
  v11 = StringLiteral_17447/*"break_off_boss"*/;
  v12 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v12->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17447/*"break_off_boss"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->EnemyBreakPointOffImageName, v11, v13, v14);
  v15 = StringLiteral_3336/*"BreakPoint_effect_{0}"*/;
  v16 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v16->BreakPointEffectName = (struct System_String_o *)StringLiteral_3336/*"BreakPoint_effect_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->BreakPointEffectName, v15, v17, v18);
  v19 = StringLiteral_21318/*"master_gauge_{0}"*/;
  v20 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v20->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21318/*"master_gauge_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->MasterPointOnImageName, v19, v21, v22);
  v23 = StringLiteral_21317/*"master_gauge_off_{0}"*/;
  v24 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v24->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21317/*"master_gauge_off_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->MasterPointOffImageName, v23, v25, v26);
  v27 = StringLiteral_8909/*"MasterPoint_effect_{0}"*/;
  v28 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v28->MasterPointEffectName = (struct System_String_o *)StringLiteral_8909/*"MasterPoint_effect_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->MasterPointEffectName, v27, v29, v30);
  v31 = StringLiteral_8910/*"MasterPoint_recharge_effect_1"*/;
  v32 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v32->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8910/*"MasterPoint_recharge_effect_1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->MasterPointRechargeEffectName, v31, v33, v34);
  v35 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v36 = StringLiteral_24608/*"wall_gauge_{0}"*/;
  v35->wallPointImageName = (struct System_String_o *)StringLiteral_24608/*"wall_gauge_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->wallPointImageName, v36, v37, v38);
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
  WarBoardBreakPointComponent_c *v6; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  System_Int32_c *v8; // x0
  int *v9; // x1
  System_String_o *MasterPointEffectName; // x19
  Il2CppObject *v11; // x0
  WarBoardBreakPointComponent_c *v13; // x0
  struct WarBoardBreakPointComponent_StaticFields *v14; // x8
  _BOOL4 isEnemyServant; // w9
  int v16; // w8
  int v17; // [xsp+8h] [xbp-28h] BYREF
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A58C21 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&WarBoardBreakPointComponent_TypeInfo);
    byte_4A58C21 = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v6 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v6 = WarBoardBreakPointComponent_TypeInfo;
    }
    static_fields = v6->static_fields;
    v8 = int_TypeInfo;
    v9 = &v17;
    MasterPointEffectName = static_fields->MasterPointEffectName;
    v17 = 1;
  }
  else
  {
    v13 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v13 = WarBoardBreakPointComponent_TypeInfo;
    }
    v14 = v13->static_fields;
    isEnemyServant = this->fields.isEnemyServant;
    v8 = int_TypeInfo;
    v9 = &v18;
    MasterPointEffectName = v14->BreakPointEffectName;
    if ( isEnemyServant )
      v16 = 2;
    else
      v16 = 1;
    v18 = v16;
  }
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(v8, v9, v2, v3, v4);
  return System_String__Format(MasterPointEffectName, v11, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  WarBoardBreakPointComponent_c *v7; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v10; // x0
  Il2CppObject *v11; // x0
  WarBoardBreakPointComponent_c *v13; // x0
  _BOOL4 v14; // w19
  WarBoardBreakPointComponent_c *v15; // x0
  System_String_o **p_BreakPointOnImageName; // x8
  _BOOL4 isEnemyServant; // w19
  WarBoardBreakPointComponent_c *v18; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A58C20 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&WarBoardBreakPointComponent_TypeInfo);
    byte_4A58C20 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v13 = WarBoardBreakPointComponent_TypeInfo;
        if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v13 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v13->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      isEnemyServant = this->fields.isEnemyServant;
      v18 = WarBoardBreakPointComponent_TypeInfo;
      if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
        v18 = WarBoardBreakPointComponent_TypeInfo;
      }
      static_fields = v18->static_fields;
      if ( isEnemyServant )
        return static_fields->EnemyBreakPointOffImageName;
      else
        return static_fields->BreakPointOffImageName;
    }
LABEL_10:
    v10 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v10 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v10->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v7 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v7 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v7->static_fields->MasterPointOnImageName;
LABEL_13:
    v20 = objectColorNumber;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, method, v3, v4);
    return System_String__Format(MasterPointOffImageName, v11, 0LL);
  }
  v14 = this->fields.isEnemyServant;
  v15 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
    v15 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v15->static_fields->BreakPointOnImageName;
  if ( v14 )
    return p_BreakPointOnImageName[2];
  else
    return *p_BreakPointOnImageName;
}


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
  if ( (byte_4A58C22 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C22 = 1;
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
    sub_1B8880C(v16, v15);
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
  Il2CppObject *Instance; // x22
  const MethodInfo *v8; // x1
  char *BreakEffectName; // x0
  __int64 v10; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  WarBoardCommonEffectPerformance_o *v16; // x0
  WarBoardCommonEffectPerformance_o *v17; // x22
  System_Delegate_o **p_StartCallback; // x23
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  WarBoardTaskBase_TaskCallback_c *v22; // x8
  WarBoardTaskBase_TaskCallback_c *v23; // x1
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v25; // x24
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  WarBoardTaskBase_TaskCallback_c *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *v36; // x19
  char *v37; // x20
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x0
  System_Nullable_Vector3__o v43; // 0:x3.16
  System_Nullable_Vector3__o v44; // 0:x5.16

  if ( (byte_4A58C23 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__);
    sub_1B885B0(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1B885B0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    byte_4A58C23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v8);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_2F5C554 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__49297800(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    if ( !BreakEffectName )
      goto LABEL_37;
    v13 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(BreakEffectName + 32), (int32_t)this, v14, v15);
    v16 = (WarBoardCommonEffectPerformance_o *)sub_1B887FC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v43.fields.hasValue = 0LL;
    *(_QWORD *)&v43.fields.value.fields.y = 0LL;
    *(_QWORD *)&v44.fields.hasValue = 0LL;
    *(_QWORD *)&v44.fields.value.fields.y = 0LL;
    v17 = v16;
    WarBoardCommonEffectPerformance___ctor(v16, 0LL, v13, v43, v44, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( startCallback )
    {
      if ( !v17 )
        goto LABEL_37;
      p_StartCallback = (System_Delegate_o **)&v17->fields.StartCallback;
      v19 = System_Delegate__Combine(
              (System_Delegate_o *)v17->fields.StartCallback,
              (System_Delegate_o *)startCallback,
              0LL);
      v22 = (WarBoardTaskBase_TaskCallback_c *)v19;
      if ( v19 )
      {
        v23 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *p_StartCallback = v19;
        if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != v23 )
          goto LABEL_25;
      }
      else
      {
        *p_StartCallback = 0LL;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->fields.StartCallback, (int32_t)v19, v20, v21);
    }
    else if ( !v17 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)&v17->fields.EndCallback;
    EndCallback = (System_Delegate_o *)v17->fields.EndCallback;
    v25 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v25,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v26 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v25, 0LL);
    v22 = (WarBoardTaskBase_TaskCallback_c *)v26;
    if ( !v26 )
    {
LABEL_26:
      startCallback->klass = v22;
      goto LABEL_27;
    }
    v29 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v26;
      if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == v29 )
      {
LABEL_27:
        sub_1B88554((ServantStatusBattleListViewItem_o *)startCallback, (int32_t)v22, v27, v28);
        if ( taskList )
        {
          items = taskList->fields._items;
          v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v17,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v17, v30, v31);
            }
            return;
          }
        }
        else
        {
          v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
          if ( BreakEffectName )
          {
            v37 = BreakEffectName;
            v38 = sub_1B886EC(v17, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v38 )
            {
              v42 = sub_1B88830(0LL);
              sub_1B886D8(v42, 0LL);
            }
            if ( !*((_DWORD *)v37 + 6) )
              sub_1B88814(v38, v39);
            *((_QWORD *)v37 + 4) = v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v17, v40, v41);
            if ( v36 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v36, 0, (WarBoardTaskBase_array *)v37, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_1B8880C(BreakEffectName, v10);
      }
    }
LABEL_25:
    sub_1B88ACC(v22);
    goto LABEL_26;
  }
}


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

  if ( (byte_4A58C25 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C25 = 1;
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
    sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A58C27 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C27 = 1;
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
    sub_1B8880C(v7, v6);
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

  if ( (byte_4A58C26 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C26 = 1;
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
    sub_1B8880C(v7, v6);
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
    sub_1B8880C(this, breakPoint);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  WarBoardCommonEffectPerformance_o *v13; // x0
  WarBoardCommonEffectPerformance_o *v14; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v17; // x24
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  WarBoardTaskBase_TaskCallback_c *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  Il2CppObject *v28; // x19
  Il2CppObject *v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0
  System_Nullable_Vector3__o v35; // 0:x3.16
  System_Nullable_Vector3__o v36; // 0:x5.16

  if ( (byte_4A58C24 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__);
    sub_1B885B0(&WarBoardBreakPointComponent_TypeInfo);
    sub_1B885B0(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1B885B0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    byte_4A58C24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  if ( !v7 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v7,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2F5C554 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object__49297800(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    if ( Instance )
    {
      v10 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&Instance[2], (int32_t)this, v11, v12);
        v13 = (WarBoardCommonEffectPerformance_o *)sub_1B887FC(WarBoardCommonEffectPerformance_TypeInfo);
        *(_QWORD *)&v35.fields.hasValue = 0LL;
        *(_QWORD *)&v35.fields.value.fields.y = 0LL;
        *(_QWORD *)&v36.fields.hasValue = 0LL;
        *(_QWORD *)&v36.fields.value.fields.y = 0LL;
        v14 = v13;
        WarBoardCommonEffectPerformance___ctor(v13, 0LL, v10, v35, v36, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
        if ( v14 )
        {
          p_StartCallback = (System_Delegate_o **)&v14->fields.StartCallback;
          StartCallback = (System_Delegate_o *)v14->fields.StartCallback;
          v17 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v17,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0LL);
          v18 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v17, 0LL);
          if ( v18 )
          {
            v21 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*p_StartCallback = v18, (WarBoardTaskBase_TaskCallback_c *)v18->klass != v21) )
            {
              sub_1B88ACC(v18);
              return;
            }
          }
          else
          {
            *p_StartCallback = 0LL;
          }
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.StartCallback, (int32_t)v18, v19, v20);
          if ( taskList )
          {
            items = taskList->fields._items;
            v25 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v14,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v14;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v14, v22, v23);
              }
              return;
            }
          }
          else
          {
            v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
            if ( Instance )
            {
              v29 = Instance;
              v30 = sub_1B886EC(v14, Instance->klass->_1.element_class);
              if ( !v30 )
              {
                v34 = sub_1B88830(0LL);
                sub_1B886D8(v34, 0LL);
              }
              if ( !LODWORD(v29[1].monitor) )
                sub_1B88814(v30, v31);
              v29[2].klass = (Il2CppClass *)v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v29[2], (int32_t)v14, v32, v33);
              if ( v28 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v28, 0, (WarBoardTaskBase_array *)v29, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B8880C(Instance, v6);
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