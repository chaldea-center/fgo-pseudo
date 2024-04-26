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
  sub_B70630(
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
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x25
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *tweenTargets; // x0

  if ( (byte_43536D5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject___Add__);
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject___Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject____ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_List_GameObject___TypeInfo);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_43536D5 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v10;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v18;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.switchingTargets,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (BattleServantConfConponent_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (BattleServantConfConponent_c *)v27;
    sub_B70630(p_switchingLabels, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)tweenTarget,
          (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)tweenTarget,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)switchingTarget,
          (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)switchingTarget,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_21;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
         (WarBoardManager_TaskList_o *)switchingLabel,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
LABEL_21:
    sub_B7076C(tweenTargets, tweenTarget);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    tweenTargets,
    (EventMissionProgressRequest_Argument_ProgressData_o *)switchingLabel,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x0

  if ( (byte_43536D8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject___Clear__);
    byte_43536D8 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenTargets,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingTargets,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingLabels,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
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

  if ( (byte_43536DA & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43536DA = 1;
  }
  if ( !tweenAlphas )
LABEL_17:
    sub_B7076C(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v4 )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
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
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x21

  if ( (byte_43536D6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_B70694(&Method_System_Predicate_GameObject___ctor__);
    sub_B70694(&Method_System_Predicate_List_GameObject____ctor__);
    sub_B70694(&System_Predicate_List_GameObject___TypeInfo);
    sub_B70694(&System_Predicate_GameObject__TypeInfo);
    sub_B70694(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__);
    sub_B70694(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__);
    sub_B70694(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__);
    sub_B70694(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
    byte_43536D6 = 1;
  }
  v9 = sub_B70764(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  ShopNoticeTween___c__DisplayClass10_0___ctor((ShopNoticeTween___c__DisplayClass10_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = tweenTarget;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)tweenTarget,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = switchingTarget;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)switchingTarget,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v9 + 32) = switchingLabel;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 32),
    (System_Int32_array **)switchingLabel,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_GameObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v31,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_GameObject___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenTargets,
      (System_Predicate_T__o *)v31,
      (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = this->fields.switchingTargets;
    v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v33,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_List_GameObject____ctor__);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingTargets,
        (System_Predicate_T__o *)v33,
        (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = this->fields.switchingLabels;
      v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v35,
        (Il2CppObject *)v9,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_List_GameObject____ctor__);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingLabels,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_B7076C(v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  ShopNoticeTween_o *v4; // x19
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  System_Collections_Generic_List_GameObject__o *v6; // x8
  struct System_Collections_Generic_List_List_GameObject___o *v7; // x20
  unsigned int v8; // w21
  int32_t size; // w8
  __int64 i; // x24
  struct System_Collections_Generic_List_List_GameObject___o *v11; // x20
  System_Collections_Generic_List_GameObject__o *v12; // x20
  UnityEngine_Object_o *v13; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x20
  System_Collections_Generic_List_GameObject__o *v15; // x20
  UnityEngine_Object_o *v16; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v17; // x20
  System_Collections_Generic_List_GameObject__o *v18; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v19; // x20
  System_Collections_Generic_List_GameObject__o *v20; // x20
  System_Collections_Generic_List_GameObject__o *v21; // x8
  unsigned __int64 v22; // x25

  v4 = this;
  if ( (byte_43536DB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject___get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    this = (ShopNoticeTween_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43536DB = 1;
  }
  if ( !isSwitch )
    goto LABEL_8;
  switchingTargets = v4->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_55;
  if ( switchingTargets->fields._size >= 1 && (v6 = switchingTargets->fields._items->m_Items[0]) != 0LL )
    v4->fields.switchingIndex = (v4->fields.switchingIndex + 1) % v6->fields._size;
  else
LABEL_8:
    v4->fields.switchingIndex = 0;
  v7 = v4->fields.switchingTargets;
  if ( !v7 )
LABEL_55:
    sub_B7076C(this, isSwitch);
  v8 = 0;
  while ( 1 )
  {
    size = v7->fields._size;
    if ( (int)v8 >= size )
      break;
    for ( i = 4LL; ; ++i )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v21 = v7->fields._items->m_Items[v8];
      if ( !v21 )
        goto LABEL_55;
      v22 = i - 4;
      if ( i - 4 >= v21->fields._size )
        break;
      v11 = v4->fields.switchingTargets;
      if ( !v11 )
        goto LABEL_55;
      if ( v11->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v12 = v11->fields._items->m_Items[v8];
      if ( !v12 )
        goto LABEL_55;
      if ( v22 >= (unsigned int)v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields._items->obj.klass + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        switchingLabels = v4->fields.switchingLabels;
        if ( !switchingLabels )
          goto LABEL_55;
        if ( switchingLabels->fields._size <= v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v15 = switchingLabels->fields._items->m_Items[v8];
        if ( !v15 )
          goto LABEL_55;
        if ( v22 >= (unsigned int)v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&v15->fields._items->obj.klass + i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v17 = v4->fields.switchingTargets;
          if ( !v17 )
            goto LABEL_55;
          if ( v17->fields._size <= v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v18 = v17->fields._items->m_Items[v8];
          if ( !v18 )
            goto LABEL_55;
          if ( v22 >= (unsigned int)v18->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v18->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22 == v4->fields.switchingIndex, 0LL);
          v19 = v4->fields.switchingLabels;
          if ( !v19 )
            goto LABEL_55;
          if ( v19->fields._size <= v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v20 = v19->fields._items->m_Items[v8];
          if ( !v20 )
            goto LABEL_55;
          if ( v22 >= (unsigned int)v20->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v20->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22 == v4->fields.switchingIndex, 0LL);
        }
      }
      v7 = v4->fields.switchingTargets;
      if ( !v7 )
        goto LABEL_55;
      size = v7->fields._size;
    }
    v7 = v4->fields.switchingTargets;
    ++v8;
    if ( !v7 )
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_36062060(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B70630(
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
    sub_B7076C(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x20
  __int64 v12; // x21
  unsigned __int64 v13; // x23
  UnityEngine_Object_o *v14; // x20
  struct System_Collections_Generic_List_GameObject__o *v15; // x20

  if ( (byte_43536D7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43536D7 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_19:
      sub_B7076C(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_36062728(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.coroutine, 0LL, v5, v6, v7, v8, v9, v10);
    tweenTargets = this->fields.tweenTargets;
    if ( tweenTargets )
    {
      v12 = 4LL;
      while ( 1 )
      {
        v13 = v12 - 4;
        if ( v12 - 4 >= tweenTargets->fields._size )
          break;
        if ( v13 >= (unsigned int)tweenTargets->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v14 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->fields._items->obj.klass + v12);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)monoBehaviour & 1) == 0 )
        {
          v15 = this->fields.tweenTargets;
          if ( !v15 )
            goto LABEL_19;
          if ( v13 >= (unsigned int)v15->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)TweenAlpha__Begin(
                                                           *((UnityEngine_GameObject_o **)&v15->fields._items->obj.klass
                                                           + v12),
                                                           0.0,
                                                           1.0,
                                                           0LL);
        }
        tweenTargets = this->fields.tweenTargets;
        ++v12;
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

  if ( (byte_43536D9 & 1) == 0 )
  {
    sub_B70694(&ShopNoticeTween__TweenLoop_d__14_TypeInfo);
    byte_43536D9 = 1;
  }
  v3 = sub_B70764(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  ShopNoticeTween__TweenLoop_d__14___ctor((ShopNoticeTween__TweenLoop_d__14_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ShopNoticeTween__TweenLoop_d__14_o *v8; // x19
  ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v10; // x21
  BattleServantConfConponent_o *p_loopWaitOnShow_5__2; // x0
  System_Int32_array **v12; // x1
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  System_Int32_array **v15; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_GameObject__o *v23; // x22
  unsigned __int64 v24; // x23
  UnityEngine_Object_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned int *v32; // x26
  unsigned int *v33; // x0
  struct System_Collections_Generic_List_GameObject__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  unsigned int *v42; // x0
  unsigned int *v43; // x8
  __int64 v44; // x8
  bool v45; // zf
  float v46; // s0
  BattleServantConfConponent_o *v47; // x19
  BattleServantConfConponent_o *p__2__current; // x19
  System_Int32_array **loopWaitOnShow_5__2; // x1
  __int64 v50; // x0
  __int64 v51; // x0

  v8 = this;
  if ( (byte_434F882 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TweenAlpha___TypeInfo);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434F882 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 3.0, 0LL);
      p_loopWaitOnShow_5__2 = (BattleServantConfConponent_o *)&v8->fields._loopWaitOnShow_5__2;
      v12 = (System_Int32_array **)v10;
      v8->fields._loopWaitOnShow_5__2 = v10;
      goto LABEL_12;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_13;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_40;
    case 3:
      v8->fields.__1__state = -1;
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
    v8->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = (BattleServantConfConponent_o *)&v8->fields._tweenAlphas_5__3;
    v12 = 0LL;
LABEL_12:
    sub_B70630(p_loopWaitOnShow_5__2, v12, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
LABEL_39:
      sub_B7076C(this, method);
LABEL_13:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    v15 = (System_Int32_array **)sub_B706AC(TweenAlpha___TypeInfo, (unsigned int)tweenTargets->fields._size);
    v8->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v15;
    p_tweenAlphas_5__3 = (unsigned int **)&v8->fields._tweenAlphas_5__3;
    sub_B70630((BattleServantConfConponent_o *)&v8->fields._tweenAlphas_5__3, v15, v17, v18, v19, v20, v21, v22);
    v23 = _4__this->fields.tweenTargets;
    if ( !v23 )
      goto LABEL_39;
    v24 = 0LL;
    while ( (__int64)v24 < v23->fields._size )
    {
      if ( v24 >= (unsigned int)v23->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v25 = (UnityEngine_Object_o *)v23->fields._items->m_Items[v24];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      v32 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_39;
        if ( v24 >= v32[6] )
          goto LABEL_53;
        v33 = &v32[2 * v24];
        *((_QWORD *)v33 + 4) = 0LL;
        sub_B70630((BattleServantConfConponent_o *)(v33 + 8), 0LL, v26, v27, v28, v29, v30, v31);
      }
      else
      {
        v34 = _4__this->fields.tweenTargets;
        if ( !v34 )
          goto LABEL_39;
        if ( v24 >= (unsigned int)v34->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       v34->fields._items->m_Items[v24],
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v32 )
          goto LABEL_39;
        v41 = (System_Int32_array **)this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
          if ( !this )
          {
            v51 = sub_B7078C();
            sub_B70738(v51, 0LL);
          }
        }
        if ( v24 >= v32[6] )
          goto LABEL_53;
        v42 = &v32[2 * v24];
        *((_QWORD *)v42 + 4) = v41;
        sub_B70630((BattleServantConfConponent_o *)(v42 + 8), v41, v35, v36, v37, v38, v39, v40);
        v43 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_39;
        if ( v24 >= v43[6] )
        {
LABEL_53:
          v50 = sub_B70798(this);
          sub_B70738(v50, 0LL);
        }
        v44 = *(_QWORD *)&v43[2 * v24 + 8];
        if ( !v44 )
          goto LABEL_39;
        *(_DWORD *)(v44 + 24) = 6;
      }
      v23 = _4__this->fields.tweenTargets;
      ++v24;
      if ( !v23 )
        goto LABEL_39;
    }
LABEL_40:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(_4__this, v8->fields._tweenAlphas_5__3, 0LL) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v45 = _4__this->fields.to == 1.0;
    v46 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v46 = 1.0;
    _4__this->fields.to = v46;
    if ( v45 )
    {
      loopWaitOnShow_5__2 = (System_Int32_array **)v8->fields._loopWaitOnShow_5__2;
      v8->fields.__2__current = (Il2CppObject *)loopWaitOnShow_5__2;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields.__2__current, loopWaitOnShow_5__2, v2, v3, v4, v5, v6, v7);
      v8->fields.__1__state = 3;
      return 1;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v8->fields.__2__current = 0LL;
  v47 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B70630(v47, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v47[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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

  if ( (byte_434F881 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F881 = 1;
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