void __fastcall ShopNoticeTween___ctor(
        ShopNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.monoBehaviour = monoBehaviour;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.monoBehaviour,
    (System_Int32_array **)monoBehaviour,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ShopNoticeTween__AddTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleServantConfConponent_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *tweenTargets; // x0

  if ( (byte_41891A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, tweenTarget);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject___Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject___Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject____ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_List_GameObject___TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    byte_41891A2 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v17;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v25;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.switchingTargets,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (BattleServantConfConponent_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (BattleServantConfConponent_c *)v34;
    sub_B2C2F8(p_switchingLabels, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)tweenTarget,
          (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)tweenTarget,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)switchingTarget,
          (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)switchingTarget,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_21;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
         (WarBoardManager_TaskList_o *)switchingLabel,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
LABEL_21:
    sub_B2C434(tweenTargets, tweenTarget);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    tweenTargets,
    (EventMissionProgressRequest_Argument_ProgressData_o *)switchingLabel,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x0

  if ( (byte_41891A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject___Clear__, v3);
    byte_41891A5 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenTargets,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingTargets,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingLabels,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
}


bool __fastcall ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x20
  __int64 v8; // x0

  if ( (byte_41891A7 & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, tweenAlphas);
    byte_41891A7 = 1;
  }
  if ( !tweenAlphas )
LABEL_17:
    sub_B2C434(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v4 )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    v6 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v5];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_17;
      this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    LODWORD(v4) = tweenAlphas->max_length;
    if ( (__int64)++v5 >= (int)v4 )
      return 0;
  }
}


void __fastcall ShopNoticeTween__RemoveTargets(
        ShopNoticeTween_o *this,
        UnityEngine_GameObject_o *tweenTarget,
        System_Collections_Generic_List_GameObject__o *switchingTarget,
        System_Collections_Generic_List_GameObject__o *switchingLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v44; // x21

  if ( (byte_41891A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__, tweenTarget);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__RemoveAll__, v9);
    sub_B2C35C(&Method_System_Predicate_GameObject___ctor__, v10);
    sub_B2C35C(&Method_System_Predicate_List_GameObject____ctor__, v11);
    sub_B2C35C(&System_Predicate_List_GameObject___TypeInfo, v12);
    sub_B2C35C(&System_Predicate_GameObject__TypeInfo, v13);
    sub_B2C35C(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__, v14);
    sub_B2C35C(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__, v15);
    sub_B2C35C(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__, v16);
    sub_B2C35C(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo, v17);
    byte_41891A3 = 1;
  }
  v18 = sub_B2C42C(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  ShopNoticeTween___c__DisplayClass10_0___ctor((ShopNoticeTween___c__DisplayClass10_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = tweenTarget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)tweenTarget,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v18 + 24) = switchingTarget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)switchingTarget,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v18 + 32) = switchingLabel;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 32),
    (System_Int32_array **)switchingLabel,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_GameObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v40,
      (Il2CppObject *)v18,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_GameObject___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenTargets,
      (System_Predicate_T__o *)v40,
      (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = this->fields.switchingTargets;
    v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v42,
      (Il2CppObject *)v18,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_List_GameObject____ctor__);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingTargets,
        (System_Predicate_T__o *)v42,
        (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = this->fields.switchingLabels;
      v44 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v44,
        (Il2CppObject *)v18,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_List_GameObject____ctor__);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingLabels,
          (System_Predicate_T__o *)v44,
          (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_B2C434(v19, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  ShopNoticeTween_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  System_Collections_Generic_List_GameObject__o *v10; // x8
  struct System_Collections_Generic_List_List_GameObject___o *v11; // x20
  unsigned int v12; // w21
  int32_t size; // w8
  __int64 i; // x24
  struct System_Collections_Generic_List_List_GameObject___o *v15; // x20
  System_Collections_Generic_List_GameObject__o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x20
  System_Collections_Generic_List_GameObject__o *v19; // x20
  UnityEngine_Object_o *v20; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v21; // x20
  System_Collections_Generic_List_GameObject__o *v22; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v23; // x20
  System_Collections_Generic_List_GameObject__o *v24; // x20
  System_Collections_Generic_List_GameObject__o *v25; // x8
  unsigned __int64 v26; // x25

  v4 = this;
  if ( (byte_41891A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject___get_Count__, isSwitch);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_GameObject___get_Item__, v7);
    this = (ShopNoticeTween_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41891A8 = 1;
  }
  if ( !isSwitch )
    goto LABEL_8;
  switchingTargets = v4->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_55;
  if ( switchingTargets->fields._size >= 1 && (v10 = switchingTargets->fields._items->m_Items[0]) != 0LL )
    v4->fields.switchingIndex = (v4->fields.switchingIndex + 1) % v10->fields._size;
  else
LABEL_8:
    v4->fields.switchingIndex = 0;
  v11 = v4->fields.switchingTargets;
  if ( !v11 )
LABEL_55:
    sub_B2C434(this, isSwitch);
  v12 = 0;
  while ( 1 )
  {
    size = v11->fields._size;
    if ( (int)v12 >= size )
      break;
    for ( i = 4LL; ; ++i )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v25 = v11->fields._items->m_Items[v12];
      if ( !v25 )
        goto LABEL_55;
      v26 = i - 4;
      if ( i - 4 >= v25->fields._size )
        break;
      v15 = v4->fields.switchingTargets;
      if ( !v15 )
        goto LABEL_55;
      if ( v15->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v16 = v15->fields._items->m_Items[v12];
      if ( !v16 )
        goto LABEL_55;
      if ( v26 >= (unsigned int)v16->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v17 = (UnityEngine_Object_o *)*((_QWORD *)&v16->fields._items->obj.klass + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        switchingLabels = v4->fields.switchingLabels;
        if ( !switchingLabels )
          goto LABEL_55;
        if ( switchingLabels->fields._size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v19 = switchingLabels->fields._items->m_Items[v12];
        if ( !v19 )
          goto LABEL_55;
        if ( v26 >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v20 = (UnityEngine_Object_o *)*((_QWORD *)&v19->fields._items->obj.klass + i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = v4->fields.switchingTargets;
          if ( !v21 )
            goto LABEL_55;
          if ( v21->fields._size <= v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v22 = v21->fields._items->m_Items[v12];
          if ( !v22 )
            goto LABEL_55;
          if ( v26 >= (unsigned int)v22->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v22->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v26 == v4->fields.switchingIndex, 0LL);
          v23 = v4->fields.switchingLabels;
          if ( !v23 )
            goto LABEL_55;
          if ( v23->fields._size <= v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = v23->fields._items->m_Items[v12];
          if ( !v24 )
            goto LABEL_55;
          if ( v26 >= (unsigned int)v24->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v24->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v26 == v4->fields.switchingIndex, 0LL);
        }
      }
      v11 = v4->fields.switchingTargets;
      if ( !v11 )
        goto LABEL_55;
      size = v11->fields._size;
    }
    v11 = v4->fields.switchingTargets;
    ++v12;
    if ( !v11 )
      goto LABEL_55;
  }
}


void __fastcall ShopNoticeTween__Start(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  ShopNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0LL) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = ShopNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_35309748(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.coroutine,
        (System_Int32_array **)started,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return;
    }
LABEL_6:
    sub_B2C434(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x20
  __int64 v14; // x21
  unsigned __int64 v15; // x23
  UnityEngine_Object_o *v16; // x20
  struct System_Collections_Generic_List_GameObject__o *v17; // x20

  if ( (byte_41891A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41891A4 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_19:
      sub_B2C434(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35310416(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.coroutine, 0LL, v7, v8, v9, v10, v11, v12);
    tweenTargets = this->fields.tweenTargets;
    if ( tweenTargets )
    {
      v14 = 4LL;
      while ( 1 )
      {
        v15 = v14 - 4;
        if ( v14 - 4 >= tweenTargets->fields._size )
          break;
        if ( v15 >= (unsigned int)tweenTargets->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->fields._items->obj.klass + v14);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)monoBehaviour & 1) == 0 )
        {
          v17 = this->fields.tweenTargets;
          if ( !v17 )
            goto LABEL_19;
          if ( v15 >= (unsigned int)v17->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)TweenAlpha__Begin(
                                                           *((UnityEngine_GameObject_o **)&v17->fields._items->obj.klass
                                                           + v14),
                                                           0.0,
                                                           1.0,
                                                           0LL);
        }
        tweenTargets = this->fields.tweenTargets;
        ++v14;
        if ( !tweenTargets )
          goto LABEL_19;
      }
    }
    ShopNoticeTween__DestroyTargetList(this, (const MethodInfo *)coroutine);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopNoticeTween__TweenLoop(
        ShopNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41891A6 & 1) == 0 )
  {
    sub_B2C35C(&ShopNoticeTween__TweenLoop_d__14_TypeInfo, method);
    byte_41891A6 = 1;
  }
  v3 = sub_B2C42C(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  ShopNoticeTween__TweenLoop_d__14___ctor((ShopNoticeTween__TweenLoop_d__14_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14___ctor(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopNoticeTween__TweenLoop_d__14__MoveNext(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  ShopNoticeTween__TweenLoop_d__14_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v8; // x21
  void *p_loopWaitOnShow_5__2; // x0
  UnityEngine_WaitForSeconds_o *v10; // x1
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  __int64 v13; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  struct System_Collections_Generic_List_GameObject__o *v15; // x22
  unsigned __int64 v16; // x23
  UnityEngine_Object_o *v17; // x22
  unsigned int *v18; // x26
  unsigned int *v19; // x0
  struct System_Collections_Generic_List_GameObject__o *v20; // x22
  ShopNoticeTween__TweenLoop_d__14_o *v21; // x22
  unsigned int *v22; // x0
  unsigned int *v23; // x8
  __int64 v24; // x8
  bool v25; // zf
  float v26; // s0
  Il2CppObject **v27; // x19
  Il2CppObject **p__2__current; // x19
  Il2CppObject *loopWaitOnShow_5__2; // x1
  __int64 v30; // x0
  __int64 v31; // x0

  v2 = this;
  if ( (byte_418544D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&TweenAlpha___TypeInfo, v5);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_418544D = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v8 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v8, 3.0, 0LL);
      p_loopWaitOnShow_5__2 = &v2->fields._loopWaitOnShow_5__2;
      v10 = v8;
      v2->fields._loopWaitOnShow_5__2 = v8;
      goto LABEL_12;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_13;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_40;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( _4__this->fields.to == 1.0 )
      ShopNoticeTween__SetActiveSwitchingTargets(_4__this, 1, 0LL);
    v2->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = &v2->fields._tweenAlphas_5__3;
    v10 = 0LL;
LABEL_12:
    sub_B2C2F8(p_loopWaitOnShow_5__2, v10);
    if ( !_4__this )
LABEL_39:
      sub_B2C434(this, method);
LABEL_13:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v13 = sub_B2C374(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v2->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v13;
    p_tweenAlphas_5__3 = (unsigned int **)&v2->fields._tweenAlphas_5__3;
    sub_B2C2F8(&v2->fields._tweenAlphas_5__3, v13);
    v15 = _4__this->fields.tweenTargets;
    if ( !v15 )
      goto LABEL_39;
    v16 = 0LL;
    while ( (__int64)v16 < v15->fields._size )
    {
      if ( v16 >= (unsigned int)v15->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v17 = (UnityEngine_Object_o *)v15->fields._items->m_Items[v16];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
      v18 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_39;
        if ( v16 >= v18[6] )
          goto LABEL_53;
        v19 = &v18[2 * v16];
        *((_QWORD *)v19 + 4) = 0LL;
        sub_B2C2F8(v19 + 8, 0LL);
      }
      else
      {
        v20 = _4__this->fields.tweenTargets;
        if ( !v20 )
          goto LABEL_39;
        if ( v16 >= (unsigned int)v20->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       v20->fields._items->m_Items[v16],
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v18 )
          goto LABEL_39;
        v21 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
          if ( !this )
          {
            v31 = sub_B2C454();
            sub_B2C400(v31, 0LL);
          }
        }
        if ( v16 >= v18[6] )
          goto LABEL_53;
        v22 = &v18[2 * v16];
        *((_QWORD *)v22 + 4) = v21;
        sub_B2C2F8(v22 + 8, v21);
        v23 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_39;
        if ( v16 >= v23[6] )
        {
LABEL_53:
          v30 = sub_B2C460(this);
          sub_B2C400(v30, 0LL);
        }
        v24 = *(_QWORD *)&v23[2 * v16 + 8];
        if ( !v24 )
          goto LABEL_39;
        *(_DWORD *)(v24 + 24) = 6;
      }
      v15 = _4__this->fields.tweenTargets;
      ++v16;
      if ( !v15 )
        goto LABEL_39;
    }
LABEL_40:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(_4__this, v2->fields._tweenAlphas_5__3, 0LL) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v25 = _4__this->fields.to == 1.0;
    v26 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v26 = 1.0;
    _4__this->fields.to = v26;
    if ( v25 )
    {
      loopWaitOnShow_5__2 = (Il2CppObject *)v2->fields._loopWaitOnShow_5__2;
      v2->fields.__2__current = loopWaitOnShow_5__2;
      sub_B2C2F8(&v2->fields.__2__current, loopWaitOnShow_5__2);
      v2->fields.__1__state = 3;
      return 1;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v2->fields.__2__current = 0LL;
  v27 = &v2->fields.__2__current;
  sub_B2C2F8(v27, 0LL);
  *((_DWORD *)v27 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_Reset(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall ShopNoticeTween__TweenLoop_d__14__System_Collections_IEnumerator_get_Current(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopNoticeTween__TweenLoop_d__14__System_IDisposable_Dispose(
        ShopNoticeTween__TweenLoop_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopNoticeTween___c__DisplayClass10_0___ctor(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__0(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        UnityEngine_GameObject_o *t,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  UnityEngine_Object_o *v6; // x20

  if ( (byte_418544C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, t);
    byte_418544C = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL) )
    return 0;
  v6 = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    TweenAlpha__Begin(this->fields.tweenTarget, 0.0, 1.0, 0LL);
  return 1;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__1(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return this->fields.switchingTarget == t;
}


bool __fastcall ShopNoticeTween___c__DisplayClass10_0___RemoveTargets_b__2(
        ShopNoticeTween___c__DisplayClass10_0_o *this,
        System_Collections_Generic_List_GameObject__o *t,
        const MethodInfo *method)
{
  return this->fields.switchingLabel == t;
}