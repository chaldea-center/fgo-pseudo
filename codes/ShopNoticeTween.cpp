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
  sub_B52920(
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

  if ( (byte_42B1A8F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject___Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_List_GameObject___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42B1A8F = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v10;
    sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v18;
    sub_B52920(
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
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (BattleServantConfConponent_c *)v27;
    sub_B52920(p_switchingLabels, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)tweenTarget,
          (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)tweenTarget,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)switchingTarget,
          (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)switchingTarget,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_21;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
         (WarBoardManager_TaskList_o *)switchingLabel,
         (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
LABEL_21:
    sub_B52A5C(tweenTargets, tweenTarget);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    tweenTargets,
    (EventMissionProgressRequest_Argument_ProgressData_o *)switchingLabel,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x0

  if ( (byte_42B1A92 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject___Clear__);
    byte_42B1A92 = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenTargets,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingTargets,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingLabels,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
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

  if ( (byte_42B1A94 & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1A94 = 1;
  }
  if ( !tweenAlphas )
LABEL_17:
    sub_B52A5C(this, tweenAlphas);
  v4 = *(_QWORD *)&tweenAlphas->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v4 )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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

  if ( (byte_42B1A90 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    sub_B52984(&Method_System_Predicate_GameObject___ctor__);
    sub_B52984(&Method_System_Predicate_List_GameObject____ctor__);
    sub_B52984(&System_Predicate_List_GameObject___TypeInfo);
    sub_B52984(&System_Predicate_GameObject__TypeInfo);
    sub_B52984(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__);
    sub_B52984(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__);
    sub_B52984(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__);
    sub_B52984(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
    byte_42B1A90 = 1;
  }
  v9 = sub_B52A54(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  ShopNoticeTween___c__DisplayClass10_0___ctor((ShopNoticeTween___c__DisplayClass10_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = tweenTarget;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)tweenTarget,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = switchingTarget;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)switchingTarget,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v9 + 32) = switchingLabel;
  sub_B52920(
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
    v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_GameObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v31,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_GameObject___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenTargets,
      (System_Predicate_T__o *)v31,
      (const MethodInfo_2FF3154 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = this->fields.switchingTargets;
    v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v33,
      (Il2CppObject *)v9,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_List_GameObject____ctor__);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingTargets,
        (System_Predicate_T__o *)v33,
        (const MethodInfo_2FF3154 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = this->fields.switchingLabels;
      v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v35,
        (Il2CppObject *)v9,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_List_GameObject____ctor__);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingLabels,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_2FF3154 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_B52A5C(v10, v11);
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
  if ( (byte_42B1A95 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_List_GameObject___get_Item__);
    this = (ShopNoticeTween_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1A95 = 1;
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
    sub_B52A5C(this, isSwitch);
  v8 = 0;
  while ( 1 )
  {
    size = v7->fields._size;
    if ( (int)v8 >= size )
      break;
    for ( i = 4LL; ; ++i )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v12 = v11->fields._items->m_Items[v8];
      if ( !v12 )
        goto LABEL_55;
      if ( v22 >= (unsigned int)v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v15 = switchingLabels->fields._items->m_Items[v8];
        if ( !v15 )
          goto LABEL_55;
        if ( v22 >= (unsigned int)v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v18 = v17->fields._items->m_Items[v8];
          if ( !v18 )
            goto LABEL_55;
          if ( v22 >= (unsigned int)v18->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v18->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22 == v4->fields.switchingIndex, 0LL);
          v19 = v4->fields.switchingLabels;
          if ( !v19 )
            goto LABEL_55;
          if ( v19->fields._size <= v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v20 = v19->fields._items->m_Items[v8];
          if ( !v20 )
            goto LABEL_55;
          if ( v22 >= (unsigned int)v20->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_35611808(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B52920(
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
    sub_B52A5C(monoBehaviour, v3);
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

  if ( (byte_42B1A91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1A91 = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_19:
      sub_B52A5C(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35612476(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.coroutine, 0LL, v5, v6, v7, v8, v9, v10);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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

  if ( (byte_42B1A93 & 1) == 0 )
  {
    sub_B52984(&ShopNoticeTween__TweenLoop_d__14_TypeInfo);
    byte_42B1A93 = 1;
  }
  v3 = sub_B52A54(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  ShopNoticeTween__TweenLoop_d__14___ctor((ShopNoticeTween__TweenLoop_d__14_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v4; // x21
  void *p_loopWaitOnShow_5__2; // x0
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  unsigned int **p_tweenAlphas_5__3; // x21
  struct System_Collections_Generic_List_GameObject__o *v9; // x22
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x22
  unsigned int *v12; // x26
  unsigned int *v13; // x0
  struct System_Collections_Generic_List_GameObject__o *v14; // x22
  ShopNoticeTween__TweenLoop_d__14_o *v15; // x22
  unsigned int *v16; // x0
  unsigned int *v17; // x8
  __int64 v18; // x8
  bool v19; // zf
  float v20; // s0
  Il2CppObject **v21; // x19
  Il2CppObject **p__2__current; // x19
  __int64 v23; // x0
  __int64 v24; // x0

  v2 = this;
  if ( (byte_42AD3B1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TweenAlpha___TypeInfo);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD3B1 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v4, 3.0, 0LL);
      p_loopWaitOnShow_5__2 = &v2->fields._loopWaitOnShow_5__2;
      v2->fields._loopWaitOnShow_5__2 = v4;
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
LABEL_12:
    sub_B52920(p_loopWaitOnShow_5__2);
    if ( !_4__this )
LABEL_39:
      sub_B52A5C(this, method);
LABEL_13:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v2->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)sub_B5299C(
                                                                TweenAlpha___TypeInfo,
                                                                (unsigned int)tweenTargets->fields._size);
    p_tweenAlphas_5__3 = (unsigned int **)&v2->fields._tweenAlphas_5__3;
    sub_B52920(&v2->fields._tweenAlphas_5__3);
    v9 = _4__this->fields.tweenTargets;
    if ( !v9 )
      goto LABEL_39;
    v10 = 0LL;
    while ( (__int64)v10 < v9->fields._size )
    {
      if ( v10 >= (unsigned int)v9->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v11 = (UnityEngine_Object_o *)v9->fields._items->m_Items[v10];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
      v12 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_39;
        if ( v10 >= v12[6] )
          goto LABEL_53;
        v13 = &v12[2 * v10];
        *((_QWORD *)v13 + 4) = 0LL;
        sub_B52920(v13 + 8);
      }
      else
      {
        v14 = _4__this->fields.tweenTargets;
        if ( !v14 )
          goto LABEL_39;
        if ( v10 >= (unsigned int)v14->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       v14->fields._items->m_Items[v10],
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v12 )
          goto LABEL_39;
        v15 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B52A44(this, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !this )
          {
            v24 = sub_B52A7C();
            sub_B52A28(v24, 0LL);
          }
        }
        if ( v10 >= v12[6] )
          goto LABEL_53;
        v16 = &v12[2 * v10];
        *((_QWORD *)v16 + 4) = v15;
        sub_B52920(v16 + 8);
        v17 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_39;
        if ( v10 >= v17[6] )
        {
LABEL_53:
          v23 = sub_B52A88(this);
          sub_B52A28(v23, 0LL);
        }
        v18 = *(_QWORD *)&v17[2 * v10 + 8];
        if ( !v18 )
          goto LABEL_39;
        *(_DWORD *)(v18 + 24) = 6;
      }
      v9 = _4__this->fields.tweenTargets;
      ++v10;
      if ( !v9 )
        goto LABEL_39;
    }
LABEL_40:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(_4__this, v2->fields._tweenAlphas_5__3, 0LL) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v19 = _4__this->fields.to == 1.0;
    v20 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v20 = 1.0;
    _4__this->fields.to = v20;
    if ( v19 )
    {
      v2->fields.__2__current = (Il2CppObject *)v2->fields._loopWaitOnShow_5__2;
      sub_B52920(&v2->fields.__2__current);
      v2->fields.__1__state = 3;
      return 1;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v2->fields.__2__current = 0LL;
  v21 = &v2->fields.__2__current;
  sub_B52920(v21);
  *((_DWORD *)v21 - 2) = 2;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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

  if ( (byte_42AD3B0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD3B0 = 1;
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