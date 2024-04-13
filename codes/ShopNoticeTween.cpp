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
  sub_B5D560(
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  ShopNoticeTween_Fields *p_fields; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Collections_Generic_List_List_GameObject___o **p_switchingTargets; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattleServantConfConponent_o *p_switchingLabels; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *tweenTargets; // x0

  if ( (byte_42EA688 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_GameObject__Add__,
      (_DWORD)tweenTarget,
      (_DWORD)switchingTarget,
      switchingLabel);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_GameObject___Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_GameObject___Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Contains__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_GameObject____ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_List_GameObject___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v27, v28, v29);
    byte_42EA688 = 1;
  }
  p_fields = &this->fields;
  if ( !this->fields.tweenTargets )
  {
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_fields->tweenTargets = (struct System_Collections_Generic_List_GameObject__o *)v31;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  }
  p_switchingTargets = &this->fields.switchingTargets;
  if ( !this->fields.switchingTargets )
  {
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    *p_switchingTargets = (struct System_Collections_Generic_List_List_GameObject___o *)v39;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.switchingTargets,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  switchingLabels = this->fields.switchingLabels;
  p_switchingLabels = (BattleServantConfConponent_o *)&this->fields.switchingLabels;
  if ( !switchingLabels )
  {
    v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_GameObject___TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v48,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_GameObject____ctor__);
    p_switchingLabels->klass = (BattleServantConfConponent_c *)v48;
    sub_B5D560(p_switchingLabels, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
  if ( !p_fields->tweenTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)tweenTarget,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->tweenTargets;
    if ( !p_fields->tweenTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)tweenTarget,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
  if ( !*p_switchingTargets )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
          (WarBoardManager_TaskList_o *)switchingTarget,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_switchingTargets;
    if ( !*p_switchingTargets )
      goto LABEL_21;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      tweenTargets,
      (EventMissionProgressRequest_Argument_ProgressData_o *)switchingTarget,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
    goto LABEL_21;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)tweenTargets,
         (WarBoardManager_TaskList_o *)switchingLabel,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_List_GameObject___Contains__) )
  {
    return;
  }
  tweenTargets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_switchingLabels->klass;
  if ( !p_switchingLabels->klass )
LABEL_21:
    sub_B5D69C(tweenTargets, tweenTarget);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    tweenTargets,
    (EventMissionProgressRequest_Argument_ProgressData_o *)switchingLabel,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_GameObject___Add__);
}


void __fastcall ShopNoticeTween__DestroyTargetList(ShopNoticeTween_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x0
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x0

  if ( (byte_42EA68B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_GameObject___Clear__, v5, v6, v7);
    byte_42EA68B = 1;
  }
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)tweenTargets,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  switchingTargets = this->fields.switchingTargets;
  if ( switchingTargets )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingTargets,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
  switchingLabels = this->fields.switchingLabels;
  if ( switchingLabels )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchingLabels,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_List_GameObject___Clear__);
}


bool __fastcall ShopNoticeTween__GetIsTweenAlphasEnabled(
        ShopNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x20
  __int64 v9; // x0

  if ( (byte_42EA68D & 1) == 0 )
  {
    this = (ShopNoticeTween_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)tweenAlphas, (_DWORD)method, v3);
    byte_42EA68D = 1;
  }
  if ( !tweenAlphas )
LABEL_17:
    sub_B5D69C(this, tweenAlphas);
  v5 = *(_QWORD *)&tweenAlphas->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v5 )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
    }
    v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ShopNoticeTween_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_17;
      this = (ShopNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    LODWORD(v5) = tweenAlphas->max_length;
    if ( (__int64)++v6 >= (int)v5 )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v58; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v60; // x22
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v62; // x21

  if ( (byte_42EA689 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_List_GameObject___RemoveAll__,
      (_DWORD)tweenTarget,
      (_DWORD)switchingTarget,
      switchingLabel);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__RemoveAll__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_GameObject___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_List_GameObject____ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_List_GameObject___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Predicate_GameObject__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__, v27, v28, v29);
    sub_B5D5C4(&Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__, v30, v31, v32);
    sub_B5D5C4(&ShopNoticeTween___c__DisplayClass10_0_TypeInfo, v33, v34, v35);
    byte_42EA689 = 1;
  }
  v36 = sub_B5D694(ShopNoticeTween___c__DisplayClass10_0_TypeInfo);
  ShopNoticeTween___c__DisplayClass10_0___ctor((ShopNoticeTween___c__DisplayClass10_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_11;
  *(_QWORD *)(v36 + 16) = tweenTarget;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 16),
    (System_Int32_array **)tweenTarget,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)(v36 + 24) = switchingTarget;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 24),
    (System_Int32_array **)switchingTarget,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  *(_QWORD *)(v36 + 32) = switchingLabel;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 32),
    (System_Int32_array **)switchingLabel,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  tweenTargets = this->fields.tweenTargets;
  if ( tweenTargets && this->fields.switchingTargets && this->fields.switchingLabels )
  {
    v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_GameObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v58,
      (Il2CppObject *)v36,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_GameObject___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)tweenTargets,
      (System_Predicate_T__o *)v58,
      (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_GameObject__RemoveAll__);
    switchingTargets = this->fields.switchingTargets;
    v60 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_List_GameObject___TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v60,
      (Il2CppObject *)v36,
      Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_List_GameObject____ctor__);
    if ( switchingTargets )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingTargets,
        (System_Predicate_T__o *)v60,
        (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
      switchingLabels = this->fields.switchingLabels;
      v62 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_List_GameObject___TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v62,
        (Il2CppObject *)v36,
        Method_ShopNoticeTween___c__DisplayClass10_0__RemoveTargets_b__2__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_List_GameObject____ctor__);
      if ( switchingLabels )
      {
        System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
          (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)switchingLabels,
          (System_Predicate_T__o *)v62,
          (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_List_GameObject___RemoveAll__);
        return;
      }
    }
LABEL_11:
    sub_B5D69C(v37, v38);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNoticeTween__SetActiveSwitchingTargets(
        ShopNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopNoticeTween_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_List_List_GameObject___o *switchingTargets; // x8
  System_Collections_Generic_List_GameObject__o *v19; // x8
  struct System_Collections_Generic_List_List_GameObject___o *v20; // x20
  unsigned int v21; // w21
  int32_t size; // w8
  __int64 i; // x24
  struct System_Collections_Generic_List_List_GameObject___o *v24; // x20
  System_Collections_Generic_List_GameObject__o *v25; // x20
  UnityEngine_Object_o *v26; // x20
  struct System_Collections_Generic_List_List_GameObject___o *switchingLabels; // x20
  System_Collections_Generic_List_GameObject__o *v28; // x20
  UnityEngine_Object_o *v29; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v30; // x20
  System_Collections_Generic_List_GameObject__o *v31; // x20
  struct System_Collections_Generic_List_List_GameObject___o *v32; // x20
  System_Collections_Generic_List_GameObject__o *v33; // x20
  System_Collections_Generic_List_GameObject__o *v34; // x8
  unsigned __int64 v35; // x25

  v5 = this;
  if ( (byte_42EA68E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_GameObject___get_Count__, isSwitch, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_GameObject___get_Item__, v12, v13, v14);
    this = (ShopNoticeTween_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42EA68E = 1;
  }
  if ( !isSwitch )
    goto LABEL_8;
  switchingTargets = v5->fields.switchingTargets;
  if ( !switchingTargets )
    goto LABEL_55;
  if ( switchingTargets->fields._size >= 1 && (v19 = switchingTargets->fields._items->m_Items[0]) != 0LL )
    v5->fields.switchingIndex = (v5->fields.switchingIndex + 1) % v19->fields._size;
  else
LABEL_8:
    v5->fields.switchingIndex = 0;
  v20 = v5->fields.switchingTargets;
  if ( !v20 )
LABEL_55:
    sub_B5D69C(this, isSwitch);
  v21 = 0;
  while ( 1 )
  {
    size = v20->fields._size;
    if ( (int)v21 >= size )
      break;
    for ( i = 4LL; ; ++i )
    {
      if ( size <= v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v34 = v20->fields._items->m_Items[v21];
      if ( !v34 )
        goto LABEL_55;
      v35 = i - 4;
      if ( i - 4 >= v34->fields._size )
        break;
      v24 = v5->fields.switchingTargets;
      if ( !v24 )
        goto LABEL_55;
      if ( v24->fields._size <= v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v25 = v24->fields._items->m_Items[v21];
      if ( !v25 )
        goto LABEL_55;
      if ( v35 >= (unsigned int)v25->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v26 = (UnityEngine_Object_o *)*((_QWORD *)&v25->fields._items->obj.klass + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        switchingLabels = v5->fields.switchingLabels;
        if ( !switchingLabels )
          goto LABEL_55;
        if ( switchingLabels->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v28 = switchingLabels->fields._items->m_Items[v21];
        if ( !v28 )
          goto LABEL_55;
        if ( v35 >= (unsigned int)v28->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v29 = (UnityEngine_Object_o *)*((_QWORD *)&v28->fields._items->obj.klass + i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ShopNoticeTween_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v30 = v5->fields.switchingTargets;
          if ( !v30 )
            goto LABEL_55;
          if ( v30->fields._size <= v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v31 = v30->fields._items->m_Items[v21];
          if ( !v31 )
            goto LABEL_55;
          if ( v35 >= (unsigned int)v31->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v31->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35 == v5->fields.switchingIndex, 0LL);
          v32 = v5->fields.switchingLabels;
          if ( !v32 )
            goto LABEL_55;
          if ( v32->fields._size <= v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v33 = v32->fields._items->m_Items[v21];
          if ( !v33 )
            goto LABEL_55;
          if ( v35 >= (unsigned int)v33->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this = (ShopNoticeTween_o *)*((_QWORD *)&v33->fields._items->obj.klass + i);
          if ( !this )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35 == v5->fields.switchingIndex, 0LL);
        }
      }
      v20 = v5->fields.switchingTargets;
      if ( !v20 )
        goto LABEL_55;
      size = v20->fields._size;
    }
    v20 = v5->fields.switchingTargets;
    ++v21;
    if ( !v20 )
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_35615088(v6, monoBehaviour, 0LL);
      this->fields.coroutine = started;
      sub_B5D560(
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
    sub_B5D69C(monoBehaviour, v3);
  }
}


void __fastcall ShopNoticeTween__Stop(ShopNoticeTween_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Coroutine_o *coroutine; // x1
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x20
  __int64 v20; // x21
  unsigned __int64 v21; // x23
  UnityEngine_Object_o *v22; // x20
  struct System_Collections_Generic_List_GameObject__o *v23; // x20

  if ( (byte_42EA68A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EA68A = 1;
  }
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
LABEL_19:
      sub_B5D69C(monoBehaviour, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_35615756(monoBehaviour, coroutine, 0LL);
    this->fields.coroutine = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.coroutine, 0LL, v13, v14, v15, v16, v17, v18);
    tweenTargets = this->fields.tweenTargets;
    if ( tweenTargets )
    {
      v20 = 4LL;
      while ( 1 )
      {
        v21 = v20 - 4;
        if ( v20 - 4 >= tweenTargets->fields._size )
          break;
        if ( v21 >= (unsigned int)tweenTargets->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v22 = (UnityEngine_Object_o *)*((_QWORD *)&tweenTargets->fields._items->obj.klass + v20);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        monoBehaviour = (UnityEngine_MonoBehaviour_o *)UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)monoBehaviour & 1) == 0 )
        {
          v23 = this->fields.tweenTargets;
          if ( !v23 )
            goto LABEL_19;
          if ( v21 >= (unsigned int)v23->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          monoBehaviour = (UnityEngine_MonoBehaviour_o *)TweenAlpha__Begin(
                                                           *((UnityEngine_GameObject_o **)&v23->fields._items->obj.klass
                                                           + v20),
                                                           0.0,
                                                           1.0,
                                                           0LL);
        }
        tweenTargets = this->fields.tweenTargets;
        ++v20;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA68C & 1) == 0 )
  {
    sub_B5D5C4(&ShopNoticeTween__TweenLoop_d__14_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA68C = 1;
  }
  v5 = sub_B5D694(ShopNoticeTween__TweenLoop_d__14_TypeInfo);
  ShopNoticeTween__TweenLoop_d__14___ctor((ShopNoticeTween__TweenLoop_d__14_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  int v2; // w2
  __int64 v3; // x3
  ShopNoticeTween__TweenLoop_d__14_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ShopNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v18; // x21
  void *p_loopWaitOnShow_5__2; // x0
  bool result; // w0
  struct System_Collections_Generic_List_GameObject__o *tweenTargets; // x8
  unsigned int **p_tweenAlphas_5__3; // x21
  struct System_Collections_Generic_List_GameObject__o *v23; // x22
  unsigned __int64 v24; // x23
  UnityEngine_Object_o *v25; // x22
  unsigned int *v26; // x26
  unsigned int *v27; // x0
  struct System_Collections_Generic_List_GameObject__o *v28; // x22
  ShopNoticeTween__TweenLoop_d__14_o *v29; // x22
  unsigned int *v30; // x0
  unsigned int *v31; // x8
  __int64 v32; // x8
  bool v33; // zf
  float v34; // s0
  Il2CppObject **v35; // x19
  Il2CppObject **p__2__current; // x19
  __int64 v37; // x0
  __int64 v38; // x0

  v4 = this;
  if ( (byte_42E5DC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TweenAlpha___TypeInfo, v11, v12, v13);
    this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v14, v15, v16);
    byte_42E5DC9 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v18 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v18, 3.0, 0LL);
      p_loopWaitOnShow_5__2 = &v4->fields._loopWaitOnShow_5__2;
      v4->fields._loopWaitOnShow_5__2 = v18;
      goto LABEL_12;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_13;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      goto LABEL_40;
    case 3:
      v4->fields.__1__state = -1;
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
    v4->fields._tweenAlphas_5__3 = 0LL;
    p_loopWaitOnShow_5__2 = &v4->fields._tweenAlphas_5__3;
LABEL_12:
    sub_B5D560(p_loopWaitOnShow_5__2);
    if ( !_4__this )
LABEL_39:
      sub_B5D69C(this, method);
LABEL_13:
    if ( !_4__this->fields.isTween )
      return 0;
    tweenTargets = _4__this->fields.tweenTargets;
    if ( !tweenTargets )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v4->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)sub_B5D5DC(
                                                                TweenAlpha___TypeInfo,
                                                                (unsigned int)tweenTargets->fields._size);
    p_tweenAlphas_5__3 = (unsigned int **)&v4->fields._tweenAlphas_5__3;
    sub_B5D560(&v4->fields._tweenAlphas_5__3);
    v23 = _4__this->fields.tweenTargets;
    if ( !v23 )
      goto LABEL_39;
    v24 = 0LL;
    while ( (__int64)v24 < v23->fields._size )
    {
      if ( v24 >= (unsigned int)v23->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v25 = (UnityEngine_Object_o *)v23->fields._items->m_Items[v24];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ShopNoticeTween__TweenLoop_d__14_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      v26 = *p_tweenAlphas_5__3;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_39;
        if ( v24 >= v26[6] )
          goto LABEL_53;
        v27 = &v26[2 * v24];
        *((_QWORD *)v27 + 4) = 0LL;
        sub_B5D560(v27 + 8);
      }
      else
      {
        v28 = _4__this->fields.tweenTargets;
        if ( !v28 )
          goto LABEL_39;
        if ( v24 >= (unsigned int)v28->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (ShopNoticeTween__TweenLoop_d__14_o *)TweenAlpha__Begin(
                                                       v28->fields._items->m_Items[v24],
                                                       0.5,
                                                       _4__this->fields.to,
                                                       0LL);
        if ( !v26 )
          goto LABEL_39;
        v29 = this;
        if ( this )
        {
          this = (ShopNoticeTween__TweenLoop_d__14_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
          if ( !this )
          {
            v38 = sub_B5D6BC();
            sub_B5D668(v38, 0LL);
          }
        }
        if ( v24 >= v26[6] )
          goto LABEL_53;
        v30 = &v26[2 * v24];
        *((_QWORD *)v30 + 4) = v29;
        sub_B5D560(v30 + 8);
        v31 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_39;
        if ( v24 >= v31[6] )
        {
LABEL_53:
          v37 = sub_B5D6C8(this);
          sub_B5D668(v37, 0LL);
        }
        v32 = *(_QWORD *)&v31[2 * v24 + 8];
        if ( !v32 )
          goto LABEL_39;
        *(_DWORD *)(v32 + 24) = 6;
      }
      v23 = _4__this->fields.tweenTargets;
      ++v24;
      if ( !v23 )
        goto LABEL_39;
    }
LABEL_40:
    if ( ShopNoticeTween__GetIsTweenAlphasEnabled(_4__this, v4->fields._tweenAlphas_5__3, 0LL) )
      break;
    if ( !_4__this->fields.isTween )
      return 0;
    v33 = _4__this->fields.to == 1.0;
    v34 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v34 = 1.0;
    _4__this->fields.to = v34;
    if ( v33 )
    {
      v4->fields.__2__current = (Il2CppObject *)v4->fields._loopWaitOnShow_5__2;
      sub_B5D560(&v4->fields.__2__current);
      v4->fields.__1__state = 3;
      return 1;
    }
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v4->fields.__2__current = 0LL;
  v35 = &v4->fields.__2__current;
  sub_B5D560(v35);
  *((_DWORD *)v35 - 2) = 2;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ShopNoticeTween__TweenLoop_d__14_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  __int64 v3; // x3
  UnityEngine_Object_o *tweenTarget; // x21
  UnityEngine_Object_o *v7; // x20

  if ( (byte_42E5DC8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)t, (_DWORD)method, v3);
    byte_42E5DC8 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)t, tweenTarget, 0LL) )
    return 0;
  v7 = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
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